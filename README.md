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
  // |  na sbernici, adresaci zarizeni a volitelnou sirkou sbernice.       | //
  // |  Maximalni pocet adresovatelnych zarizeni na sbernici zavisi        | //
  // |  na jeji sirce, zarizeni jsou adresovana datovymi draty.            | //
  // |  Na sbernici muze byt zarizeni i vice nez je mozne adresovat,       | //
  // |  ovsem tyto zarizeni nemohou data prijimat ale pouze vysilat.       | //
  // |  Sbernice je poloduplexni, vsechny draty jsou sdilene vsemi         | //
  // |  zarizenimi. Vsechna zarizeni sleduji komunikaci a udrzuji          | //
  // |  si vlastni virtualni status sbernice.                              | //
  // |                                                                     | //
  // | Popis komunikace:                                                   | //
  // | 2 bity jsou ridici a 2 datove. Kazdy smer komunikace ma svuj        | //
  // | handshake. Na datovych pinech se stridave prenasi informace         | //
  // | o aktualne prenasenem halfniblu (0-4) a samotna data.               | //
  // +---------------------------------------------------------------------+ //
  /////////////////////////////////////////////////////////////////////////////
  //-------------------------------------------------------------------------//
</pre>
