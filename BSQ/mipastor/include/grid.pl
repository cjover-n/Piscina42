# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    tablero.pl                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cjover-n <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/23 18:18:42 by cjover-n          #+#    #+#              #
#    Updated: 2019/09/23 18:21:42 by cjover-n         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/usr/bin/perl
use warnings;
use strict;
die "program x y density" unless (scalar(@ARGV) == 3);
my ($x, $y, $density) = @ARGV;
print "$y.ox\n";
for (my $i = 0; $i < $y; $i++) {
	for (my $j = 0; $j < $x; $j++) {
		if (int(rand($y) * 2) < $density) {
			print "o";
		}
		else {
			print ".";
		}
	}
	print "\n";
}
