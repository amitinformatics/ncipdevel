<ItemId>
    <ItemIdentifierValue>[% item.barcode | xml %]</ItemIdentifierValue>
</ItemId>
<UserOptionalFields>
[% FOREACH element IN elements %]
  [% IF element.textContent == 'User Address Information' %]
     <UserAddressInformation>
      <UserAddressRoleType>Primary Address</UserAddressRoleType>
     <PhysicalAddress>
       <StructuredAddress>
       <Line1>[% user.userdata.streetnumber | xml %] [% user.userdata.address | xml %]</Line1>
       [% IF user.userdata.address2 %]
       <Line2>[% user.userdata.address2 | xml %]</Line2>
       [% END %]
       [% IF user.userdata.city %]
       <Locality>[% user.userdata.city | xml %]</Locality>
       [% END %]
       [% IF user.userdata.state %]
       <Region>[% user.userdata.state | xml %]</Region>
       [% END %]
       [% IF user.userdata.zipcode %]
       <PostalCode>[% user.userdata.zipcode | xml %]</PostalCode>
       [% END %]
       [% IF user.userdata.country %]
       <Country>[% user.userdata.country | xml %]</Country>
       [% END %]
       </StructuredAddress>
     </PhysicalAddress>
     </UserAddressInformation>
  [% END %]
  [% IF element.textContent == 'Name Information' %]
    <NameInformation>
      <PersonalNameInformation>
        <StructuredPersonalUserName>
          <GivenName>[% user.userdata.firstname | xml %]</GivenName>
          <Surname>[% user.userdata.surname | xml %]</Surname>
        </StructuredPersonalUserName>
      </PersonalNameInformation>
    </NameInformation>
  [% END %]
  [% IF element.textContent == 'Name Information' %]
    <UserPrivilege>
      <AgencyUserPrivilegeType>LIBRARY</AgencyUserPrivilegeType>
      <UserPrivilegeStatusType>[% user.userdata.branchcode %]</UserPrivilegeStatusType>
    </UserPrivilege>
    <UserPrivilege>
      <AgencyUserPrivilegeType>PROFILE</AgencyUserPrivilegeType>
      <UserPrivilegeStatusType>[% user.userdata.categorycode %]</UserPrivilegeStatusType>
    </UserPrivilege>
    <UserPrivilege>
      <AgencyUserPrivilegeType>STATUS</AgencyUserPrivilegeType>
      <UserPrivilegeStatusType>[% IF user.userdata.restricted < 0 %]Delinquent[% ELSIF user.userdata.restricted > 0 %]Restricted[% ELSE %]Ok[% END %]</UserPrivilegeStatusType>
    </UserPrivilege>
  [% END %]
[% END %]
</UserOptionalFields>