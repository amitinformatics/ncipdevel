<ResponseHeader>
    <FromSystemId Scheme="" />
    <FromAgencyId>
        <AgencyId Scheme="">[% branch %]</AgencyId>
    </FromAgencyId>
    <ToSystemId Scheme="" />
    <ToAgencyId>
        <AgencyId Scheme="">[% branch %]</AgencyId>
    </ToAgencyId>
</ResponseHeader>
<ItemId>
    <AgencyId>[% from_agency | trim%]</AgencyId>
    <ItemIdentifierType>Barcode</ItemIdentifierType>
    <ItemIdentifierValue>[% barcode | xml %]</ItemIdentifierValue>
</ItemId>
<UserId>
    <AgencyId>[% to_agency | trim %]</AgencyId>
    <UserIdentifierType>Barcode</UserIdentifierType>
    <UserIdentifierValue>[% userid | xml %]</UserIdentifierValue>
</UserId>
<DateDue>[% data.datedue %]+05:30</DateDue>
