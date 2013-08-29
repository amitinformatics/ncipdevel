#
# Copyright (C) 2013 MnSCU/PALS
# 
# Author: Alan Rykhus
# 
# This program is free software; you can redistribute it and/or
# modify it under the terms of version 2 of the GNU General Public
# License as published by the Free Software Foundation.
# 
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
# 
# You should have received a copy of the GNU General Public
# License along with this program; if not, write to the Free
# Software Foundation, Inc., 59 Temple Place, Suite 330, Boston,
# MA 02111-1307 USA
#

package NCIPServer::NCIP::Configuration::Institution;

use strict;
use warnings;

sub new {
    my ($class, $obj) = @_;
    my $type = ref($class) || $class;

    if (ref($obj) eq "HASH") {
        return bless $obj, $type;   # Just bless the object
    }

    return bless {}, $type;
}

sub id {
    my $self = shift;
    return $self->{id};
}

sub implementation {
    my $self = shift;
    return $self->{implementation};
}

1;
