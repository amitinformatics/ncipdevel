<ResponseHeader>
    <FromSystemId Scheme="" /> 
    <FromAgencyId>
        <AgencyId Scheme="" />[% branch %]</FromAgencyId>
    <ToSystemId Scheme="" />
    <ToAgencyId><AgencyId Scheme="" />[% branch %]</ToAgencyId>
</ResponseHeader>
    <AgencyId>[% branch %]</AgencyId>
    <OrganizationNameInformation>
        <OrganizationNameType>BranchName</OrganizationNameType>
        <OrganizationName>[% branchname | xml %]</OrganizationName>
</OrganizationNameInformation>
    