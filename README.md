# HAPI
<pre>
  //-------------------------------------------------------------------------//
  /////////////////////////////////////////////////////////////////////////////
  // +---------------------------------------------------------------------+ //
  // |                 Hybrid Adressable Peripheral Interface              | //
  // |                  Synchronniho poloduplex rozhrani (2bit)            | //
  // |                  -------------------------------------              | //
  // |                       Verze 2.02a Build 071203                      | //
  // |                         Tomas Hujer (c) 2007                        | //
  // +---------------------------------------------------------------------+ //
  // |  Zakladni princip komunikace vychazi z SPI, oproti puvodnimu        | //
  // |  konceptu je ale rozsiren o moznost pripojeni vice zarizeni         | //
  // |  na sbernici, adresaci zarizeni a volitelnou sirku sbernice.        | //
  // |  Maximalni pocet adresovatelnych zarizeni na sbernici zavisi        | //
  // |  na jeji sirce, zarizeni jsou adresovana datovymi piny.             | //
  // |  Na sbernici muze byt zarizeni i vice nez je mozne adresovat,       | //
  // |  tyto zarizeni ale mohou data pouze vysilat, nikoli prijimat.       | //
  // |  Sbernice je poloduplexni, vsechny piny jsou sdilene vsemi          | //
  // |  zarizenimi. Vsechna zarizeni sleduji komunikaci a udrzuji          | //
  // |  si vlastni virtualni status sbernice.                              | //
  // |                                                                     | //
  // | Popis komunikace:                                                   | //
  // | 2 piny jsou ridici a 2 datove. Kazdy smer komunikace ma svuj        | //
  // | handshake. Na datovych pinech se stridave prenasi informace         | //
  // | o aktualne prenasenem halfniblu (0-4) a samotna data.               | //
  // +---------------------------------------------------------------------+ //
  /////////////////////////////////////////////////////////////////////////////
  //-------------------------------------------------------------------------//
</pre>
