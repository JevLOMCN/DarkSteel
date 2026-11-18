// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 4

// BoxCalcBoundsFromGeometryGroup___un_3C_Cuni_3E_un_3C_Cuni_3E_un_3C_s_5B__c_unFMatrix_5D__3E_un_3C_s_5B__c_unFBox_5D__3E_REFs_5B__c_unFMatrix_5D_REFs_5B_unFBox_5D_Cuni_avx @ 140a5af40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BoxCalcBoundsFromGeometryGroup___un_3C_Cuni_3E_un_3C_Cuni_3E_un_3C_s_5B__c_unFMatrix_5D__3E_un_3C_s_5B__c_unFBox_5D__3E_REFs_5B__c_unFMatrix_5D_REFs_5B_unFBox_5D_Cuni_avx
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,double *param_5,
               undefined1 (*param_6) [24],uint param_7,undefined1 (*param_8) [32])

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  undefined1 auVar9 [16];
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  longlong lVar29;
  ulonglong uVar30;
  byte bVar31;
  char cVar32;
  undefined4 uVar33;
  ulonglong uVar34;
  char cVar35;
  undefined4 uVar36;
  int iVar37;
  uint uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  uint uVar41;
  uint uVar42;
  int iVar43;
  uint uVar44;
  uint uVar45;
  double dVar46;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  undefined1 auVar187 [16];
  undefined1 auVar188 [16];
  undefined1 auVar189 [16];
  undefined1 auVar190 [16];
  undefined1 auVar191 [16];
  undefined1 auVar192 [16];
  undefined1 auVar193 [16];
  undefined1 auVar194 [16];
  undefined1 auVar195 [16];
  undefined1 auVar196 [16];
  undefined1 auVar197 [16];
  undefined1 auVar198 [16];
  undefined1 auVar199 [16];
  undefined1 auVar200 [16];
  undefined1 auVar201 [16];
  undefined1 auVar202 [16];
  undefined1 auVar203 [16];
  undefined1 auVar204 [16];
  undefined1 auVar205 [16];
  undefined1 auVar206 [16];
  undefined1 auVar207 [16];
  undefined1 auVar208 [16];
  undefined1 auVar209 [16];
  undefined1 auVar210 [16];
  undefined1 auVar211 [16];
  undefined1 auVar212 [16];
  undefined1 auVar213 [16];
  undefined1 auVar214 [16];
  undefined1 auVar215 [16];
  undefined1 auVar216 [16];
  undefined1 auVar217 [16];
  undefined1 auVar218 [16];
  undefined1 auVar219 [16];
  undefined1 auVar220 [16];
  undefined1 auVar221 [16];
  undefined1 auVar222 [16];
  undefined1 auVar223 [16];
  undefined1 auVar224 [16];
  undefined1 auVar225 [16];
  undefined1 auVar226 [16];
  undefined1 auVar227 [16];
  undefined1 auVar228 [16];
  undefined1 auVar229 [16];
  undefined1 auVar230 [16];
  undefined1 auVar231 [16];
  undefined1 auVar232 [16];
  undefined1 auVar233 [16];
  undefined1 auVar234 [16];
  undefined1 auVar235 [16];
  undefined1 auVar236 [16];
  undefined1 auVar237 [16];
  undefined1 auVar238 [16];
  undefined1 auVar239 [16];
  undefined1 auVar240 [16];
  undefined1 auVar241 [16];
  undefined1 auVar242 [16];
  undefined1 auVar246 [16];
  undefined1 auVar247 [16];
  undefined1 auVar248 [16];
  undefined1 auVar249 [16];
  undefined1 auVar250 [16];
  undefined1 auVar251 [16];
  undefined1 auVar252 [16];
  undefined1 auVar253 [16];
  undefined1 auVar254 [16];
  undefined1 auVar255 [16];
  undefined1 auVar256 [16];
  undefined1 auVar257 [16];
  undefined1 auVar258 [16];
  undefined1 auVar259 [16];
  undefined1 auVar260 [16];
  undefined1 auVar261 [16];
  undefined1 auVar262 [16];
  undefined1 auVar263 [16];
  undefined1 auVar264 [16];
  undefined1 auVar265 [16];
  undefined1 auVar266 [16];
  undefined1 auVar267 [16];
  undefined1 auVar268 [16];
  undefined1 auVar269 [16];
  undefined1 auVar270 [16];
  undefined1 auVar271 [16];
  undefined1 auVar272 [16];
  undefined1 auVar273 [16];
  undefined1 auVar274 [16];
  undefined1 auVar275 [16];
  undefined1 auVar276 [16];
  undefined1 auVar277 [16];
  undefined1 auVar278 [16];
  undefined1 auVar279 [16];
  undefined1 auVar280 [16];
  undefined1 auVar281 [16];
  undefined1 auVar282 [16];
  undefined1 auVar283 [16];
  undefined1 auVar284 [16];
  undefined1 auVar285 [16];
  undefined1 auVar286 [16];
  undefined1 auVar287 [16];
  undefined1 auVar288 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar323;
  double dVar324;
  double dVar325;
  double dVar326;
  double dVar327;
  undefined1 auVar111 [16];
  double dVar328;
  double dVar329;
  double dVar330;
  double dVar331;
  double dVar332;
  double dVar333;
  double dVar334;
  double dVar335;
  double dVar336;
  double dVar337;
  undefined1 auVar300 [32];
  undefined1 auVar301 [32];
  undefined1 auVar302 [32];
  undefined1 auVar303 [32];
  undefined1 auVar243 [16];
  undefined1 auVar244 [16];
  undefined1 auVar245 [16];
  undefined1 auVar304 [32];
  undefined1 auVar305 [32];
  undefined1 auVar306 [32];
  undefined1 auVar307 [32];
  undefined1 auVar308 [32];
  undefined1 auVar309 [32];
  undefined1 auVar310 [32];
  undefined1 auVar289 [16];
  undefined1 auVar290 [16];
  undefined1 auVar291 [16];
  undefined1 auVar292 [16];
  undefined1 auVar293 [16];
  undefined1 auVar294 [16];
  undefined1 auVar295 [16];
  undefined1 auVar296 [16];
  undefined1 auVar297 [16];
  undefined1 auVar311 [32];
  undefined1 auVar312 [32];
  undefined1 auVar313 [32];
  undefined1 auVar314 [32];
  undefined1 auVar315 [32];
  undefined1 auVar316 [32];
  undefined1 auVar317 [32];
  undefined1 auVar318 [32];
  undefined1 auVar319 [32];
  undefined1 auVar320 [32];
  undefined1 auVar321 [32];
  undefined1 auVar322 [32];
  undefined8 uVar338;
  undefined1 auVar339 [16];
  undefined1 auVar340 [16];
  undefined1 auVar341 [16];
  undefined1 auVar342 [16];
  undefined1 auVar343 [16];
  undefined1 auVar344 [16];
  undefined1 auVar345 [16];
  undefined1 auVar346 [16];
  undefined1 auVar347 [16];
  undefined1 auVar348 [16];
  undefined1 auVar349 [16];
  undefined1 auVar350 [16];
  undefined1 auVar351 [16];
  undefined1 auVar352 [16];
  undefined1 auVar353 [16];
  undefined1 auVar354 [16];
  undefined1 auVar355 [16];
  undefined1 auVar356 [16];
  undefined1 auVar357 [16];
  undefined1 auVar358 [16];
  undefined1 auVar359 [16];
  undefined1 auVar360 [16];
  undefined1 auVar361 [16];
  undefined1 auVar362 [16];
  undefined1 auVar363 [16];
  undefined1 auVar364 [16];
  undefined1 auVar365 [16];
  undefined1 auVar366 [16];
  undefined1 auVar367 [16];
  undefined1 auVar368 [16];
  undefined1 auVar369 [16];
  undefined1 auVar370 [16];
  undefined1 auVar371 [16];
  undefined1 auVar372 [16];
  undefined1 auVar373 [16];
  undefined1 auVar374 [16];
  undefined1 auVar375 [16];
  undefined1 auVar376 [16];
  undefined1 auVar377 [16];
  undefined1 auVar378 [16];
  undefined1 auVar379 [16];
  undefined1 auVar380 [16];
  undefined1 auVar381 [16];
  undefined1 auVar382 [16];
  undefined1 auVar383 [16];
  undefined1 auVar384 [16];
  undefined1 auVar385 [16];
  undefined1 auVar386 [16];
  undefined1 auVar387 [16];
  undefined1 auVar388 [16];
  undefined1 auVar389 [16];
  undefined1 auVar390 [16];
  undefined1 auVar391 [16];
  undefined1 auVar392 [16];
  undefined1 auVar393 [16];
  undefined1 auVar394 [16];
  undefined1 auVar395 [16];
  undefined1 auVar396 [16];
  undefined1 auVar397 [16];
  undefined1 auVar398 [16];
  undefined1 auVar399 [16];
  undefined1 auVar400 [16];
  undefined1 auVar401 [16];
  undefined1 auVar402 [16];
  undefined1 auVar403 [16];
  undefined1 auVar404 [16];
  undefined1 auVar405 [16];
  undefined1 auVar406 [16];
  undefined1 auVar407 [16];
  undefined1 auVar408 [16];
  undefined1 auVar409 [16];
  undefined1 auVar410 [16];
  undefined1 auVar411 [16];
  undefined1 auVar412 [16];
  undefined1 auVar413 [16];
  undefined1 auVar414 [16];
  undefined1 auVar415 [16];
  undefined1 auVar416 [16];
  undefined1 auVar417 [16];
  undefined1 auVar418 [16];
  undefined1 auVar419 [16];
  undefined1 auVar420 [32];
  undefined1 auVar421 [32];
  undefined1 auVar422 [32];
  undefined1 auVar423 [32];
  undefined1 auVar424 [32];
  undefined1 auVar425 [32];
  undefined1 auVar426 [32];
  undefined1 auVar427 [32];
  undefined1 auVar428 [32];
  undefined1 auVar429 [32];
  undefined1 auVar430 [32];
  undefined1 auVar431 [32];
  undefined1 auVar432 [32];
  undefined1 auVar433 [32];
  undefined1 auVar434 [32];
  undefined1 in_ZMM1 [64];
  undefined8 uVar435;
  undefined1 auVar436 [16];
  undefined1 auVar437 [16];
  undefined1 auVar438 [16];
  undefined1 auVar439 [16];
  undefined1 auVar440 [16];
  undefined1 auVar441 [16];
  undefined1 auVar442 [16];
  undefined1 auVar443 [16];
  undefined1 auVar444 [16];
  undefined1 auVar445 [16];
  undefined1 auVar446 [16];
  undefined1 auVar447 [16];
  undefined1 auVar448 [16];
  undefined1 auVar449 [16];
  undefined1 auVar450 [16];
  uint uVar464;
  uint uVar465;
  uint uVar466;
  undefined1 auVar451 [32];
  undefined1 auVar452 [32];
  undefined1 auVar453 [32];
  undefined1 auVar454 [32];
  undefined1 auVar456 [32];
  undefined1 auVar457 [32];
  undefined1 auVar458 [32];
  undefined1 auVar459 [32];
  undefined1 auVar460 [32];
  uint uVar467;
  undefined1 auVar462 [32];
  undefined1 auVar463 [32];
  double dVar468;
  undefined8 uVar469;
  undefined1 auVar470 [16];
  undefined1 auVar471 [16];
  undefined1 auVar472 [16];
  undefined1 auVar473 [16];
  undefined1 auVar474 [16];
  undefined1 auVar475 [16];
  undefined1 auVar476 [16];
  undefined1 auVar477 [16];
  double dVar492;
  undefined1 auVar478 [32];
  undefined1 auVar479 [32];
  double dVar491;
  double dVar493;
  undefined1 auVar480 [32];
  undefined1 auVar481 [32];
  undefined1 auVar482 [32];
  undefined1 auVar483 [32];
  undefined1 auVar484 [32];
  undefined1 auVar485 [32];
  undefined1 auVar486 [32];
  undefined1 auVar487 [32];
  undefined1 auVar488 [32];
  undefined1 auVar489 [32];
  undefined1 auVar490 [32];
  double dVar494;
  undefined8 uVar495;
  undefined1 auVar496 [16];
  undefined1 auVar497 [16];
  undefined1 auVar498 [16];
  undefined1 auVar499 [16];
  undefined1 auVar500 [16];
  undefined1 auVar501 [16];
  undefined1 auVar502 [16];
  undefined1 auVar503 [16];
  undefined1 auVar504 [16];
  undefined1 auVar505 [16];
  undefined1 auVar506 [16];
  undefined1 auVar507 [16];
  undefined1 auVar508 [16];
  undefined1 auVar509 [16];
  double dVar519;
  double dVar520;
  double dVar521;
  undefined1 auVar510 [32];
  undefined1 auVar511 [32];
  undefined1 auVar512 [32];
  undefined1 auVar513 [32];
  undefined1 auVar514 [32];
  undefined1 auVar515 [32];
  undefined1 auVar516 [32];
  undefined1 auVar517 [32];
  undefined1 auVar518 [32];
  undefined8 uVar522;
  undefined1 auVar523 [16];
  undefined1 auVar524 [16];
  undefined1 auVar525 [16];
  undefined1 auVar526 [16];
  undefined1 auVar527 [32];
  uint uVar532;
  undefined1 auVar528 [32];
  uint uVar529;
  uint uVar530;
  uint uVar531;
  undefined1 in_ZMM5 [64];
  undefined1 auVar533 [16];
  undefined1 auVar534 [16];
  undefined1 auVar535 [16];
  undefined1 auVar536 [16];
  undefined1 auVar537 [16];
  undefined1 auVar538 [32];
  undefined1 auVar539 [32];
  undefined1 auVar540 [32];
  undefined1 auVar541 [32];
  undefined1 auVar542 [64];
  undefined1 auVar543 [16];
  undefined1 auVar544 [16];
  undefined1 auVar545 [16];
  undefined1 auVar546 [16];
  undefined1 auVar547 [16];
  undefined1 auVar548 [16];
  undefined1 auVar549 [32];
  undefined1 auVar550 [32];
  undefined1 auVar551 [32];
  undefined1 in_ZMM7 [64];
  double dVar552;
  undefined1 auVar553 [16];
  undefined1 auVar554 [16];
  undefined1 auVar555 [16];
  undefined1 auVar556 [16];
  undefined1 auVar557 [16];
  double dVar564;
  double dVar566;
  undefined1 auVar558 [32];
  undefined1 auVar559 [32];
  undefined1 auVar560 [32];
  undefined1 auVar561 [32];
  undefined1 auVar562 [32];
  undefined1 auVar563 [32];
  double dVar565;
  undefined1 in_ZMM8 [64];
  double dVar567;
  double dVar568;
  undefined1 auVar569 [16];
  undefined1 auVar570 [16];
  undefined1 auVar571 [16];
  undefined1 auVar572 [16];
  undefined1 auVar573 [16];
  double dVar581;
  double dVar582;
  double dVar584;
  double dVar585;
  double dVar586;
  undefined1 auVar574 [32];
  undefined1 auVar575 [32];
  undefined1 auVar576 [32];
  undefined1 auVar577 [32];
  undefined1 auVar578 [32];
  undefined1 auVar579 [32];
  undefined1 auVar580 [32];
  double dVar583;
  undefined1 in_ZMM9 [64];
  undefined1 auVar587 [16];
  undefined1 auVar588 [16];
  undefined1 auVar589 [16];
  undefined1 auVar590 [16];
  undefined1 auVar591 [16];
  undefined1 auVar592 [16];
  undefined1 auVar593 [16];
  undefined1 auVar594 [16];
  undefined1 auVar595 [16];
  undefined1 auVar596 [32];
  undefined1 auVar597 [32];
  undefined1 auVar598 [32];
  undefined1 auVar599 [32];
  undefined1 auVar600 [32];
  undefined1 auVar601 [32];
  undefined1 auVar602 [32];
  undefined1 in_ZMM10 [64];
  undefined1 auVar603 [16];
  undefined1 auVar604 [16];
  undefined1 auVar605 [32];
  undefined1 auVar606 [32];
  undefined1 auVar607 [32];
  undefined1 auVar608 [32];
  undefined1 auVar609 [32];
  undefined1 auVar610 [32];
  undefined1 auVar611 [32];
  undefined1 auVar612 [16];
  undefined1 auVar613 [16];
  undefined1 auVar614 [16];
  undefined1 auVar616 [32];
  undefined1 auVar617 [32];
  undefined1 auVar615 [16];
  undefined1 auVar618 [32];
  undefined1 auVar619 [32];
  undefined1 auVar620 [32];
  undefined1 in_ZMM12 [64];
  double dVar622;
  undefined1 auVar623 [16];
  undefined1 auVar624 [16];
  double dVar621;
  undefined1 auVar625 [32];
  undefined1 auVar626 [32];
  undefined1 auVar627 [32];
  double dVar637;
  double dVar638;
  double dVar640;
  double dVar641;
  double dVar642;
  undefined1 auVar628 [32];
  undefined1 auVar629 [32];
  undefined1 auVar630 [32];
  undefined1 auVar631 [32];
  undefined1 auVar632 [32];
  undefined1 auVar633 [32];
  undefined1 auVar634 [32];
  undefined1 auVar635 [32];
  undefined1 auVar636 [32];
  double dVar639;
  undefined1 in_ZMM13 [64];
  undefined1 auVar643 [16];
  undefined1 auVar644 [16];
  undefined1 auVar645 [32];
  undefined1 auVar646 [32];
  undefined1 auVar647 [32];
  undefined1 auVar648 [32];
  undefined1 auVar649 [32];
  undefined1 auVar650 [32];
  undefined1 auVar651 [32];
  undefined1 auVar652 [32];
  undefined1 auVar653 [32];
  undefined1 auVar654 [32];
  undefined1 in_ZMM14 [64];
  undefined1 auVar655 [16];
  undefined1 auVar656 [16];
  undefined1 auVar657 [32];
  undefined1 auVar658 [32];
  undefined1 auVar659 [32];
  undefined1 auVar660 [32];
  undefined1 in_ZMM15 [64];
  undefined1 local_2440 [16];
  double dStack_2430;
  double dStack_2428;
  undefined1 local_23e0 [16];
  double dStack_23d0;
  double dStack_23c8;
  undefined1 local_23c0 [16];
  double dStack_23b0;
  double dStack_23a8;
  undefined1 local_2380 [16];
  double dStack_2370;
  double dStack_2368;
  undefined1 local_2340 [32];
  ulonglong local_2320;
  double local_22a0;
  double dStack_2298;
  double dStack_2290;
  double dStack_2288;
  double local_2280;
  double dStack_2278;
  double dStack_2270;
  double dStack_2268;
  double local_2220;
  double dStack_2218;
  double dStack_2210;
  double dStack_2208;
  double local_2200;
  double dStack_21f8;
  double dStack_21f0;
  double dStack_21e8;
  double local_21e0;
  double dStack_21d8;
  double dStack_21d0;
  double dStack_21c8;
  double local_2080 [24];
  undefined1 local_1fc0 [8];
  double adStack_1fb8 [3];
  undefined1 local_1fa0 [8];
  double adStack_1f98 [3];
  undefined1 local_1f80 [16];
  double dStack_1f70;
  double dStack_1f68;
  undefined1 local_1f60 [16];
  double dStack_1f50;
  double dStack_1f48;
  undefined1 local_1f40 [16];
  double dStack_1f30;
  double dStack_1f28;
  undefined1 local_1f20 [16];
  double dStack_1f10;
  double dStack_1f08;
  undefined1 local_1f00 [32];
  undefined1 local_1ee0 [32];
  undefined1 local_1ec0 [16];
  double dStack_1eb0;
  double dStack_1ea8;
  undefined1 local_1ea0 [16];
  double dStack_1e90;
  double dStack_1e88;
  undefined1 local_1e80 [16];
  double dStack_1e70;
  double dStack_1e68;
  undefined1 local_1e60 [16];
  double dStack_1e50;
  double dStack_1e48;
  undefined1 local_1e40;
  undefined1 uStack_1e3f;
  undefined1 uStack_1e3e;
  undefined1 uStack_1e3d;
  undefined1 uStack_1e3c;
  undefined1 uStack_1e3b;
  undefined1 uStack_1e3a;
  undefined1 uStack_1e39;
  double dStack_1e38;
  double dStack_1e30;
  double dStack_1e28;
  double local_1e20;
  double dStack_1e18;
  double dStack_1e10;
  double dStack_1e08;
  double local_1dc0;
  double dStack_1db8;
  double dStack_1db0;
  double dStack_1da8;
  double local_1da0;
  double dStack_1d98;
  double dStack_1d90;
  double dStack_1d88;
  double local_1d80;
  double dStack_1d78;
  double dStack_1d70;
  double dStack_1d68;
  double local_1d60;
  double dStack_1d58;
  double dStack_1d50;
  double dStack_1d48;
  double local_1d40;
  double dStack_1d38;
  double dStack_1d30;
  double dStack_1d28;
  double local_1d20;
  double dStack_1d18;
  double dStack_1d10;
  double dStack_1d08;
  double local_1cc0;
  double dStack_1cb8;
  double dStack_1cb0;
  double dStack_1ca8;
  double local_1ca0;
  double dStack_1c98;
  double dStack_1c90;
  double dStack_1c88;
  double local_1c80;
  double dStack_1c78;
  double dStack_1c70;
  double dStack_1c68;
  double local_1c60;
  double dStack_1c58;
  double dStack_1c50;
  double dStack_1c48;
  double local_1c40;
  double dStack_1c38;
  double dStack_1c30;
  double dStack_1c28;
  double local_1c20;
  double dStack_1c18;
  double dStack_1c10;
  double dStack_1c08;
  undefined1 local_1aa0 [32];
  undefined1 local_1a80 [32];
  undefined1 local_1a60 [16];
  double dStack_1a50;
  double dStack_1a48;
  undefined1 local_1a40 [16];
  undefined1 auStack_1a30 [16];
  undefined1 local_1a20 [32];
  undefined1 local_1a00 [32];
  undefined1 local_19e0 [32];
  undefined1 local_19c0 [32];
  undefined1 local_1980 [32];
  undefined1 local_1960 [32];
  undefined1 local_1940 [32];
  undefined1 local_1920 [32];
  undefined1 local_18f0 [16];
  undefined1 local_1840 [32];
  undefined1 local_1820 [32];
  undefined1 local_1800 [32];
  undefined1 local_17e0 [32];
  undefined1 local_17c0 [32];
  undefined1 local_17a0 [32];
  undefined1 local_1780 [32];
  undefined1 local_1760 [32];
  undefined1 local_1740 [32];
  undefined1 local_1720 [32];
  undefined1 local_1700 [32];
  undefined1 local_16e0 [32];
  undefined8 local_16c0;
  undefined1 local_1680 [32];
  undefined1 local_1660 [32];
  undefined1 local_1640 [32];
  undefined1 local_1620 [32];
  undefined1 local_1600 [32];
  undefined1 local_15e0 [32];
  undefined1 local_15c0 [32];
  undefined1 local_15a0 [32];
  undefined1 local_1580 [32];
  undefined1 local_1560 [32];
  undefined1 local_1540 [32];
  undefined1 local_1520 [32];
  undefined8 local_1500;
  undefined8 local_14c0;
  undefined8 local_14b8 [2];
  undefined8 local_14a8 [2];
  undefined8 local_1498;
  char local_1490 [8];
  undefined8 local_1488;
  undefined8 local_1480;
  undefined8 local_1478;
  undefined8 local_1470;
  undefined8 local_1468;
  undefined8 local_1460;
  undefined1 local_1458;
  undefined8 local_1450;
  undefined8 local_1448;
  undefined8 local_1440;
  undefined8 local_1438;
  undefined8 local_1430;
  undefined8 local_1428;
  undefined1 local_1420;
  undefined8 local_1418;
  undefined8 local_1410;
  undefined8 local_1408;
  undefined8 local_1400;
  undefined8 local_13f8;
  undefined8 local_13f0;
  undefined1 local_13e8;
  undefined8 local_13e0;
  undefined8 local_13d8;
  undefined8 local_13d0;
  undefined8 local_13c8;
  undefined8 local_13c0;
  undefined8 local_13b8;
  undefined1 local_13b0;
  undefined8 local_13a8;
  undefined8 local_13a0;
  undefined8 local_1398;
  undefined8 local_1390;
  undefined8 local_1388;
  undefined8 local_1380;
  undefined1 local_1378;
  undefined8 local_1370;
  undefined8 local_1368;
  undefined8 local_1360;
  undefined8 local_1358;
  undefined8 local_1350;
  undefined8 local_1348;
  undefined1 local_1340;
  undefined8 local_1338;
  undefined8 local_1330;
  undefined8 local_1328;
  undefined8 local_1320;
  undefined8 local_1318;
  undefined8 local_1310;
  undefined1 local_1308;
  undefined1 local_1300 [32];
  undefined1 local_12d0 [16];
  undefined1 local_12c0 [16];
  undefined8 local_12b0;
  undefined1 local_12a8 [16];
  undefined8 local_1298;
  char local_1290 [8];
  undefined1 local_1288 [16];
  undefined8 local_1278;
  undefined1 local_1270 [16];
  undefined8 local_1260;
  undefined1 local_1258;
  undefined1 local_1250 [16];
  undefined8 local_1240;
  undefined1 local_1238 [16];
  undefined8 local_1228;
  undefined1 local_1220;
  undefined1 local_1218 [16];
  undefined8 local_1208;
  undefined1 local_1200 [16];
  undefined8 local_11f0;
  undefined1 local_11e8;
  undefined1 local_11e0 [16];
  undefined8 local_11d0;
  undefined1 local_11c8 [16];
  double local_11b8;
  undefined1 local_11b0 [8];
  undefined1 local_11a8 [16];
  double local_1198;
  undefined1 local_1190 [16];
  double local_1180;
  undefined1 local_1178 [8];
  undefined1 local_1170 [16];
  double local_1160;
  undefined1 local_1158 [16];
  double local_1148;
  undefined1 local_1140 [8];
  undefined1 local_1138 [16];
  double local_1128;
  undefined1 local_1120 [16];
  double local_1110;
  undefined1 local_1108 [8];
  undefined1 local_1100 [16];
  undefined1 local_10f0 [16];
  undefined1 local_10e0 [16];
  undefined1 local_10d0 [16];
  undefined1 local_10c0 [16];
  undefined1 local_10b0 [16];
  undefined1 local_10a0 [16];
  undefined1 local_1090 [16];
  undefined1 local_1080 [16];
  undefined1 local_1070 [16];
  undefined1 local_1060 [16];
  undefined1 local_1050 [16];
  undefined1 local_1040 [16];
  undefined1 local_1030 [16];
  undefined1 local_1020 [16];
  undefined1 local_1010 [16];
  undefined1 local_1000 [16];
  undefined1 local_ff0 [16];
  undefined1 local_fe0 [16];
  undefined1 local_fd0 [16];
  undefined1 local_fc0 [16];
  undefined1 local_fb0 [16];
  undefined1 local_fa0 [16];
  undefined1 local_f90 [16];
  undefined1 local_f80 [16];
  undefined1 local_f70 [16];
  undefined1 local_f60 [16];
  undefined1 local_f50 [16];
  undefined1 local_f40 [16];
  undefined1 local_f30 [16];
  undefined1 local_f20 [16];
  undefined1 local_f10 [16];
  undefined1 local_f00 [16];
  undefined1 local_ef0 [16];
  undefined1 local_ee0 [16];
  undefined1 local_ed0 [16];
  undefined1 local_ec0 [16];
  undefined1 local_eb0 [16];
  undefined1 local_ea0 [16];
  undefined1 local_e90 [16];
  undefined1 local_e80 [16];
  undefined1 local_e70 [16];
  undefined1 local_e60 [16];
  undefined1 local_e50 [16];
  undefined1 local_e40 [16];
  undefined1 local_e30 [16];
  undefined1 local_e20 [16];
  undefined1 local_e10 [16];
  undefined1 local_e00 [16];
  undefined1 local_df0 [16];
  undefined1 local_de0 [16];
  undefined1 local_dd0 [16];
  undefined1 local_dc0 [16];
  undefined1 local_db0 [16];
  undefined1 local_da0 [16];
  undefined1 local_d90 [16];
  undefined1 local_d80 [16];
  undefined1 local_d70 [16];
  undefined1 local_d60 [16];
  undefined1 local_d50 [16];
  undefined1 local_d40 [16];
  undefined1 local_d30 [16];
  undefined1 local_d20 [16];
  undefined1 local_d10 [16];
  undefined1 local_d00 [16];
  undefined1 local_cf0 [16];
  undefined1 local_ce0 [16];
  undefined1 local_cd0 [16];
  undefined1 local_cc0 [16];
  undefined1 local_cb0 [16];
  undefined1 local_ca0 [16];
  undefined1 local_c90 [16];
  undefined1 local_c80 [16];
  undefined1 local_c70 [16];
  undefined1 local_c60 [16];
  undefined1 local_c50 [16];
  undefined1 local_c40 [16];
  undefined1 local_c30 [16];
  undefined1 local_c20 [16];
  undefined1 local_c10 [16];
  undefined1 local_c00 [16];
  undefined1 local_bf0 [16];
  undefined1 local_be0 [16];
  undefined1 local_bd0 [16];
  undefined1 local_bc0 [16];
  undefined1 local_bb0 [16];
  undefined1 local_ba0 [16];
  undefined1 local_b90 [16];
  undefined1 local_b80 [16];
  undefined1 local_b70 [16];
  undefined1 local_b60 [16];
  undefined1 local_b50 [16];
  undefined1 local_b40 [16];
  undefined1 local_b30 [16];
  undefined1 local_b20 [16];
  undefined1 local_b10 [16];
  undefined1 local_b00 [16];
  undefined1 local_af0 [16];
  undefined1 local_ae0 [16];
  undefined1 local_ad0 [16];
  undefined1 local_ac0 [16];
  undefined1 local_ab0 [16];
  undefined1 local_aa0 [16];
  undefined1 local_a90 [16];
  undefined1 local_a80 [16];
  undefined1 local_a70 [16];
  undefined1 local_a60 [16];
  undefined1 local_a50 [16];
  undefined1 local_a40 [16];
  undefined1 local_a30 [16];
  undefined1 local_a20 [16];
  undefined1 local_a10 [16];
  undefined1 local_a00 [16];
  undefined1 local_9f0 [16];
  undefined1 local_9e0 [16];
  undefined1 local_9d0 [16];
  undefined1 local_9c0 [16];
  undefined1 local_9b0 [16];
  undefined1 local_9a0 [16];
  undefined1 local_990 [16];
  undefined1 local_980 [16];
  undefined1 local_970 [16];
  undefined1 local_960 [16];
  undefined1 local_950 [16];
  undefined1 local_940 [16];
  undefined1 local_930 [16];
  undefined1 local_920 [16];
  undefined1 local_910 [16];
  undefined1 local_900 [16];
  undefined1 local_8f0 [16];
  undefined1 local_8e0 [16];
  undefined1 local_8d0 [16];
  undefined1 local_8c0 [16];
  undefined1 local_8b0 [16];
  undefined1 local_8a0 [16];
  undefined1 local_890 [16];
  undefined1 local_880 [16];
  undefined1 local_870 [16];
  undefined1 local_860 [16];
  undefined1 local_850 [16];
  undefined1 local_840 [16];
  undefined1 local_830 [16];
  undefined1 local_820 [16];
  undefined1 local_810 [16];
  undefined1 local_800 [16];
  undefined1 local_7f0 [16];
  undefined1 local_7e0 [16];
  undefined1 local_7d0 [16];
  undefined1 local_7c0 [16];
  undefined1 local_7b0 [16];
  undefined1 local_7a0 [16];
  undefined1 local_790 [16];
  undefined1 local_780 [16];
  undefined1 local_770 [16];
  undefined1 local_760 [16];
  undefined1 local_750 [16];
  undefined1 local_740 [16];
  undefined1 local_730 [16];
  undefined1 local_720 [16];
  undefined1 local_710 [16];
  undefined1 local_700 [16];
  undefined1 local_6f0 [16];
  undefined1 local_6e0 [16];
  undefined1 local_6d0 [16];
  undefined1 local_6c0 [16];
  undefined1 local_6b0 [16];
  undefined1 local_6a0 [16];
  undefined1 local_690 [16];
  undefined1 local_680 [16];
  undefined1 local_670 [16];
  undefined1 local_660 [16];
  undefined1 local_650 [16];
  undefined1 local_640 [16];
  undefined1 local_630 [16];
  undefined1 local_620 [16];
  undefined1 local_610 [16];
  undefined1 local_600 [16];
  undefined1 local_5f0 [16];
  undefined1 local_5e0 [16];
  undefined1 local_5d0 [16];
  undefined1 local_5c0 [16];
  undefined1 local_5b0 [16];
  undefined1 local_5a0 [16];
  undefined1 local_590 [16];
  undefined1 local_580 [16];
  undefined1 local_570 [16];
  undefined1 local_560 [16];
  undefined1 local_550 [16];
  undefined1 local_540 [16];
  undefined1 local_530 [16];
  undefined1 local_520 [16];
  undefined1 local_510 [16];
  undefined1 local_500 [16];
  undefined1 local_4f0 [16];
  undefined1 local_4e0 [16];
  undefined1 local_4d0 [16];
  undefined1 local_4c0 [16];
  undefined1 local_4b0 [16];
  undefined1 local_4a0 [16];
  undefined1 local_490 [16];
  undefined1 local_480 [16];
  undefined1 local_470 [16];
  undefined1 local_460 [16];
  undefined1 local_450 [16];
  undefined1 local_440 [16];
  undefined1 local_430 [16];
  undefined1 local_420 [16];
  undefined1 local_410 [16];
  undefined1 local_400 [16];
  undefined1 local_3f0 [16];
  undefined1 local_3e0 [16];
  undefined1 local_3d0 [16];
  undefined1 local_3c0 [16];
  undefined1 local_3b0 [16];
  undefined1 local_3a0 [16];
  undefined1 local_390 [16];
  undefined1 local_380 [16];
  undefined1 local_370 [16];
  undefined1 local_360 [16];
  undefined1 local_350 [16];
  undefined1 local_340 [16];
  undefined1 local_330 [16];
  undefined1 local_320 [16];
  undefined1 local_310 [16];
  undefined1 local_300 [16];
  undefined1 local_2f0 [16];
  undefined1 local_2e0 [16];
  undefined1 local_2d0 [16];
  undefined1 local_2c0 [16];
  undefined1 local_2b0 [16];
  undefined1 local_2a0 [16];
  undefined1 local_290 [16];
  undefined1 local_280 [16];
  undefined1 local_270 [16];
  undefined1 local_260 [16];
  undefined1 local_250 [16];
  undefined1 local_240 [16];
  undefined1 local_230 [16];
  undefined1 local_220 [16];
  undefined1 local_210 [16];
  undefined1 local_200 [16];
  undefined1 local_1f0 [16];
  undefined1 local_1e0 [16];
  undefined1 local_1d0 [16];
  undefined1 local_1c0 [16];
  undefined1 local_1b0 [16];
  undefined1 local_1a0 [16];
  undefined1 local_190 [16];
  undefined1 local_180 [16];
  undefined1 local_170 [16];
  undefined1 local_160 [16];
  undefined1 local_150 [16];
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  undefined1 local_120 [16];
  undefined1 local_110 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 uStack_48;
  undefined1 auVar298 [24];
  undefined1 auVar299 [32];
  undefined1 auVar455 [32];
  undefined1 auVar461 [32];
  
  local_c8 = in_ZMM8._0_16_;
  uStack_48 = 0x140a5af56;
  local_58 = in_ZMM15._0_16_;
  local_68 = in_ZMM14._0_16_;
  local_78 = in_ZMM13._0_16_;
  local_88 = in_ZMM12._0_16_;
  local_a8 = in_ZMM10._0_16_;
  local_b8 = in_ZMM9._0_16_;
  local_d8 = in_ZMM7._0_16_;
  local_19c0._0_8_ = param_1;
  auVar474 = vpcmpeqd_avx(in_ZMM1._0_16_,in_ZMM1._0_16_);
  auVar51 = vpcmpgtd_avx(*(undefined1 (*) [16])(*param_8 + 0x10),auVar474);
  auVar474 = vpcmpgtd_avx(SUB3216(*param_8,0),auVar474);
  auVar474 = vpor_avx(auVar474,auVar51);
  uVar45 = param_7 + 7;
  if (-1 < (int)param_7) {
    uVar45 = param_7;
  }
  uVar45 = uVar45 & 0xfffffff8;
  local_19e0._0_4_ = uVar45;
  uVar33 = (undefined4)((ulonglong)param_4 >> 0x20);
  if ((((SUB161(auVar474 >> 0x1f,0) & 1) == 0 && (SUB161(auVar474 >> 0x3f,0) & 1) == 0) &&
      (SUB161(auVar474 >> 0x5f,0) & 1) == 0) && -1 < auVar474[0xf]) {
    local_16e0 = ZEXT1632(ZEXT816(0));
    local_1700 = ZEXT1632(ZEXT816(0));
    local_1720._0_16_ = ZEXT816(0);
    local_1720 = ZEXT1632(local_1720._0_16_);
    local_1740._0_16_ = ZEXT816(0);
    local_1740 = ZEXT1632(local_1740._0_16_);
    local_1760._0_16_ = ZEXT816(0);
    local_1760 = ZEXT1632(local_1760._0_16_);
    local_1780._0_16_ = ZEXT816(0);
    local_1780 = ZEXT1632(local_1780._0_16_);
    local_17a0 = ZEXT1632(ZEXT816(0));
    local_17c0 = ZEXT1632(ZEXT816(0));
    local_17e0._0_16_ = ZEXT816(0);
    local_17e0 = ZEXT1632(local_17e0._0_16_);
    local_1800._0_16_ = ZEXT816(0);
    local_1800 = ZEXT1632(local_1800._0_16_);
    local_1820._0_16_ = ZEXT816(0);
    local_1820 = ZEXT1632(local_1820._0_16_);
    local_1840._0_16_ = ZEXT816(0);
    local_1840 = ZEXT1632(local_1840._0_16_);
    local_16c0 = 0;
    uVar42 = 0;
    lVar29 = param_1;
    if (0 < (int)uVar45) {
      auVar542 = ZEXT1664((undefined1  [16])0x0);
      do {
        auVar458 = local_1a00;
        auVar474 = *(undefined1 (*) [16])(param_2 + (ulonglong)(uVar42 * 4));
        uVar30 = (ulonglong)(uVar42 * 7);
        auVar51 = vpinsrb_avx(ZEXT116(*(byte *)(param_4 + 0x30 + uVar30 * 8)),
                              (uint)*(byte *)(param_4 + 0x68 + uVar30 * 8),1);
        auVar51 = vpinsrb_avx(auVar51,(uint)*(byte *)(param_4 + 0xa0 + uVar30 * 8),2);
        auVar51 = vpinsrb_avx(auVar51,(uint)*(byte *)(param_4 + 0xd8 + uVar30 * 8),3);
        auVar51 = vpinsrb_avx(auVar51,(uint)*(byte *)(param_4 + 0x110 + uVar30 * 8),4);
        auVar51 = vpinsrb_avx(auVar51,(uint)*(byte *)(param_4 + 0x148 + uVar30 * 8),5);
        auVar51 = vpinsrb_avx(auVar51,(uint)*(byte *)(param_4 + 0x180 + uVar30 * 8),6);
        auVar185 = vpinsrb_avx(auVar51,(uint)*(byte *)(param_4 + 0x1b8 + uVar30 * 8),7);
        auVar51 = *(undefined1 (*) [16])(param_2 + 0x10 + (ulonglong)(uVar42 * 4));
        auVar470 = vpslld_avx(auVar51,2);
        auVar496 = vpslld_avx(auVar474,2);
        auVar546 = vpcmpeqd_avx(in_ZMM5._0_16_,in_ZMM5._0_16_);
        in_ZMM5 = ZEXT1664(auVar546);
        auVar470 = vpcmpeqd_avx(ZEXT416(*(uint *)(local_19c0._0_8_ + (longlong)auVar470._0_4_)),
                                auVar546);
        auVar496 = vpcmpeqd_avx(ZEXT416(*(uint *)(local_19c0._0_8_ + (longlong)auVar496._0_4_)),
                                auVar546);
        auVar470 = vpackssdw_avx(auVar496,auVar470);
        auVar496 = vpcmpeqb_avx(auVar185,auVar542._0_16_);
        auVar496 = vpmovsxbw_avx(auVar496 ^ auVar546);
        auVar470 = vpandn_avx(auVar470,auVar496);
        if ((((((((((((((((SUB161(auVar470 >> 7,0) & 1) != 0 || (SUB161(auVar470 >> 0xf,0) & 1) != 0
                         ) || (SUB161(auVar470 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar470 >> 0x1f,0) & 1) != 0) ||
                      (SUB161(auVar470 >> 0x27,0) & 1) != 0) ||
                     (SUB161(auVar470 >> 0x2f,0) & 1) != 0) || (SUB161(auVar470 >> 0x37,0) & 1) != 0
                    ) || (SUB161(auVar470 >> 0x3f,0) & 1) != 0) ||
                  (SUB161(auVar470 >> 0x47,0) & 1) != 0) || (SUB161(auVar470 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar470 >> 0x57,0) & 1) != 0) || (SUB161(auVar470 >> 0x5f,0) & 1) != 0)
              || (SUB161(auVar470 >> 0x67,0) & 1) != 0) || (SUB161(auVar470 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar470 >> 0x77,0) & 1) != 0) || auVar470[0xf] < '\0') {
          auVar496._8_8_ = 0;
          auVar496._0_8_ = *(ulonglong *)(param_4 + 0x150 + uVar30 * 8);
          auVar496 = vmovhps_avx(auVar496,*(undefined8 *)(param_4 + 0x188 + uVar30 * 8));
          auVar546._8_8_ = 0;
          auVar546._0_8_ = *(ulonglong *)(param_4 + 0xe0 + uVar30 * 8);
          auVar546 = vmovhps_avx(auVar546,*(undefined8 *)(param_4 + 0x118 + uVar30 * 8));
          auVar305._16_16_ = auVar496;
          auVar305._0_16_ = auVar546;
          auVar185._8_8_ = 0;
          auVar185._0_8_ = *(ulonglong *)(param_4 + 0x70 + uVar30 * 8);
          auVar185 = vmovhps_avx(auVar185,*(undefined8 *)(param_4 + 0xa8 + uVar30 * 8));
          auVar186._8_8_ = 0;
          auVar186._0_8_ = *(ulonglong *)(param_4 + uVar30 * 8);
          auVar445._8_8_ = 0;
          auVar445._0_8_ = *(ulonglong *)(param_4 + 8 + uVar30 * 8);
          auVar505._8_8_ = 0;
          auVar505._0_8_ = *(ulonglong *)(param_4 + 0x10 + uVar30 * 8);
          auVar186 = vmovhps_avx(auVar186,*(undefined8 *)(param_4 + 0x38 + uVar30 * 8));
          auVar187._8_8_ = 0;
          auVar187._0_8_ = *(ulonglong *)(param_4 + 0x18 + uVar30 * 8);
          auVar535._8_8_ = 0;
          auVar535._0_8_ = *(ulonglong *)(param_4 + 0x158 + uVar30 * 8);
          auVar535 = vmovhps_avx(auVar535,*(undefined8 *)(param_4 + 400 + uVar30 * 8));
          auVar547._8_8_ = 0;
          auVar547._0_8_ = *(ulonglong *)(param_4 + 0xe8 + uVar30 * 8);
          auVar547 = vmovhps_avx(auVar547,*(undefined8 *)(param_4 + 0x120 + uVar30 * 8));
          auVar554._8_8_ = 0;
          auVar554._0_8_ = *(ulonglong *)(param_4 + 0x78 + uVar30 * 8);
          auVar554 = vmovhps_avx(auVar554,*(undefined8 *)(param_4 + 0xb0 + uVar30 * 8));
          auVar445 = vmovhps_avx(auVar445,*(undefined8 *)(param_4 + 0x40 + uVar30 * 8));
          auVar427._16_16_ = auVar185;
          auVar427._0_16_ = auVar186;
          auVar372._8_8_ = 0;
          auVar372._0_8_ = *(ulonglong *)(param_4 + 0x160 + uVar30 * 8);
          auVar189 = vmovhps_avx(auVar372,*(undefined8 *)(param_4 + 0x198 + uVar30 * 8));
          auVar525._8_8_ = 0;
          auVar525._0_8_ = *(ulonglong *)(param_4 + 0xf0 + uVar30 * 8);
          auVar372 = vmovhps_avx(auVar525,*(undefined8 *)(param_4 + 0x128 + uVar30 * 8));
          auVar570._8_8_ = 0;
          auVar570._0_8_ = *(ulonglong *)(param_4 + 0x80 + uVar30 * 8);
          auVar190 = vmovhps_avx(auVar570,*(undefined8 *)(param_4 + 0xb8 + uVar30 * 8));
          auVar188 = vmovhps_avx(auVar505,*(undefined8 *)(param_4 + 0x48 + uVar30 * 8));
          auVar540._16_16_ = auVar535;
          auVar540._0_16_ = auVar547;
          auVar536._8_8_ = 0;
          auVar536._0_8_ = *(ulonglong *)(param_4 + 0x168 + uVar30 * 8);
          auVar191 = vmovhps_avx(auVar536,*(undefined8 *)(param_4 + 0x1a0 + uVar30 * 8));
          auVar548._8_8_ = 0;
          auVar548._0_8_ = *(ulonglong *)(param_4 + 0xf8 + uVar30 * 8);
          auVar192 = vmovhps_avx(auVar548,*(undefined8 *)(param_4 + 0x130 + uVar30 * 8));
          auVar592._8_8_ = 0;
          auVar592._0_8_ = *(ulonglong *)(param_4 + 0x88 + uVar30 * 8);
          auVar505 = vmovhps_avx(auVar592,*(undefined8 *)(param_4 + 0xc0 + uVar30 * 8));
          auVar187 = vmovhps_avx(auVar187,*(undefined8 *)(param_4 + 0x50 + uVar30 * 8));
          auVar457._16_16_ = auVar554;
          auVar457._0_16_ = auVar445;
          auVar446._8_8_ = 0;
          auVar446._0_8_ = *(ulonglong *)(param_4 + 0x170 + uVar30 * 8);
          auVar193 = vmovhps_avx(auVar446,*(undefined8 *)(param_4 + 0x1a8 + uVar30 * 8));
          local_1920._16_16_ = auVar189;
          local_1920._0_16_ = auVar372;
          auVar373._8_8_ = 0;
          auVar373._0_8_ = *(ulonglong *)(param_4 + 0x100 + uVar30 * 8);
          auVar189 = vmovhps_avx(auVar373,*(undefined8 *)(param_4 + 0x138 + uVar30 * 8));
          local_1940._16_16_ = auVar190;
          local_1940._0_16_ = auVar188;
          auVar506._8_8_ = 0;
          auVar506._0_8_ = *(ulonglong *)(param_4 + 0x90 + uVar30 * 8);
          auVar372 = vmovhps_avx(auVar506,*(undefined8 *)(param_4 + 200 + uVar30 * 8));
          local_1960._16_16_ = auVar191;
          local_1960._0_16_ = auVar192;
          auVar526._8_8_ = 0;
          auVar526._0_8_ = *(ulonglong *)(param_4 + 0x20 + uVar30 * 8);
          auVar190 = vmovhps_avx(auVar526,*(undefined8 *)(param_4 + 0x58 + uVar30 * 8));
          auVar306._16_16_ = auVar505;
          auVar306._0_16_ = auVar187;
          auVar188._8_8_ = 0;
          auVar188._0_8_ = *(ulonglong *)(param_4 + 0x178 + uVar30 * 8);
          auVar188 = vmovhps_avx(auVar188,*(undefined8 *)(param_4 + 0x1b0 + uVar30 * 8));
          local_1980._16_16_ = auVar193;
          local_1980._0_16_ = auVar189;
          auVar374._8_8_ = 0;
          auVar374._0_8_ = *(ulonglong *)(param_4 + 0x108 + uVar30 * 8);
          auVar189 = vmovhps_avx(auVar374,*(undefined8 *)(param_4 + 0x140 + uVar30 * 8));
          register0x00001290 = auVar372;
          local_1a60 = auVar190;
          auVar447._8_8_ = 0;
          auVar447._0_8_ = *(ulonglong *)(param_4 + 0x98 + uVar30 * 8);
          auVar372 = vmovhps_avx(auVar447,*(undefined8 *)(param_4 + 0xd0 + uVar30 * 8));
          local_1a80._16_16_ = auVar188;
          local_1a80._0_16_ = auVar189;
          auVar189._8_8_ = 0;
          auVar189._0_8_ = *(ulonglong *)(param_4 + 0x28 + uVar30 * 8);
          auVar189 = vmovhps_avx(auVar189,*(undefined8 *)(param_4 + 0x60 + uVar30 * 8));
          local_1aa0._16_16_ = auVar372;
          local_1aa0._0_16_ = auVar189;
          auVar189 = vpmovsxwd_avx(auVar470);
          auVar372 = vpunpckhwd_avx(auVar470,auVar470);
          local_1a20._0_16_ = auVar470;
          auVar470 = vpacksswb_avx(auVar470,auVar470);
          local_1a00._2_2_ = 0;
          local_1a00._0_2_ =
               (ushort)(SUB161(auVar470 >> 7,0) & 1) | (ushort)(SUB161(auVar470 >> 0xf,0) & 1) << 1
               | (ushort)(SUB161(auVar470 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar470 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar470 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar470 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar470 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar470 >> 0x3f,0) & 1) << 7;
          local_1a00._4_28_ = auVar458._4_28_;
          auVar474 = vpslld_avx(auVar474,7);
          auVar474 = vpand_avx(auVar189,auVar474);
          auVar458._16_16_ = auVar372;
          auVar458._0_16_ = auVar189;
          auVar51 = vpslld_avx(auVar51,7);
          lVar29 = param_3 + auVar474._0_4_;
          lVar1 = param_3 + auVar474._4_4_;
          auVar51 = vpand_avx(auVar372,auVar51);
          iVar37 = auVar51._4_4_;
          lVar2 = param_3 + auVar51._8_4_;
          auVar470._8_8_ = 0;
          auVar470._0_8_ = *(ulonglong *)(param_3 + auVar474._0_4_);
          local_500 = vmovhps_avx(auVar470,*(undefined8 *)(param_3 + auVar474._4_4_));
          auVar190._8_8_ = 0;
          auVar190._0_8_ = *(ulonglong *)(param_3 + auVar51._8_4_);
          local_4d0 = vmovhps_avx(auVar190,*(undefined8 *)(param_3 + auVar51._12_4_));
          auVar191._8_8_ = 0;
          auVar191._0_8_ = *(ulonglong *)(param_3 + auVar51._0_4_);
          local_4e0 = vmovhps_avx(auVar191,*(undefined8 *)(param_3 + iVar37));
          auVar192._8_8_ = 0;
          auVar192._0_8_ = *(ulonglong *)(param_3 + auVar474._8_4_);
          local_4f0 = vmovhps_avx(auVar192,*(undefined8 *)(param_3 + auVar474._12_4_));
          uVar17 = auVar189._0_4_;
          uVar18 = auVar189._4_4_;
          uVar19 = auVar189._8_4_;
          uVar20 = auVar189._12_4_;
          uVar21 = auVar372._0_4_;
          uVar38 = auVar372._4_4_;
          uVar41 = auVar372._8_4_;
          uVar22 = auVar372._12_4_;
          auVar375._8_8_ = 0;
          auVar375._0_8_ =
               *(ulonglong *)
                ((ulonglong)
                 (uVar17 & ___ymm_0000000800000008000000080000000800000008000000080000000800000008)
                + lVar29);
          local_4c0 = vmovhps_avx(auVar375,*(undefined8 *)
                                            ((ulonglong)(uVar18 & _UNK_150b50d64) + lVar1));
          auVar193._8_8_ = 0;
          auVar193._0_8_ = *(ulonglong *)((ulonglong)(uVar41 & _UNK_150b50d78) + lVar2);
          lVar3 = param_3 + auVar51._12_4_;
          local_490 = vmovhps_avx(auVar193,*(undefined8 *)
                                            ((ulonglong)(uVar22 & _UNK_150b50d7c) + lVar3));
          lVar4 = param_3 + auVar474._8_4_;
          lVar5 = param_3 + auVar474._12_4_;
          lVar6 = param_3 + auVar51._0_4_;
          lVar7 = param_3 + iVar37;
          auVar474._8_8_ = 0;
          auVar474._0_8_ = *(ulonglong *)((ulonglong)(uVar21 & _UNK_150b50d70) + lVar6);
          local_4a0 = vmovhps_avx(auVar474,*(undefined8 *)
                                            ((ulonglong)(uVar38 & _UNK_150b50d74) + lVar7));
          auVar51._8_8_ = 0;
          auVar51._0_8_ = *(ulonglong *)((ulonglong)(uVar19 & _UNK_150b50d68) + lVar4);
          local_4b0 = vmovhps_avx(auVar51,*(undefined8 *)
                                           ((ulonglong)(uVar20 & _UNK_150b50d6c) + lVar5));
          auVar194._0_4_ =
               uVar17 & ___ymm_0000001000000010000000100000001000000010000000100000001000000010;
          auVar194._4_4_ = uVar18 & _UNK_150b51424;
          auVar194._8_4_ = uVar19 & _UNK_150b51428;
          auVar194._12_4_ = uVar20 & _UNK_150b5142c;
          uVar45 = vextractps_avx(auVar194,1);
          uVar44 = vextractps_avx(auVar194,2);
          uVar36 = vextractps_avx(auVar194,3);
          auVar376._8_8_ = 0;
          auVar376._0_8_ = *(ulonglong *)((ulonglong)auVar194._0_4_ + lVar29);
          local_480 = vmovhps_avx(auVar376,*(undefined8 *)((ulonglong)uVar45 + lVar1));
          auVar195._8_8_ = 0;
          auVar195._0_8_ = *(ulonglong *)((ulonglong)(uVar41 & _UNK_150b51438) + lVar2);
          local_450 = vmovhps_avx(auVar195,*(undefined8 *)
                                            ((ulonglong)(uVar22 & _UNK_150b5143c) + lVar3));
          auVar196._8_8_ = 0;
          auVar196._0_8_ = *(ulonglong *)((ulonglong)(uVar21 & _UNK_150b51430) + lVar6);
          local_460 = vmovhps_avx(auVar196,*(undefined8 *)
                                            ((ulonglong)(uVar38 & _UNK_150b51434) + lVar7));
          auVar197._8_8_ = 0;
          auVar197._0_8_ = *(ulonglong *)((ulonglong)uVar44 + lVar4);
          local_470 = vmovhps_avx(auVar197,*(undefined8 *)(CONCAT44(iVar37 >> 0x1f,uVar36) + lVar5))
          ;
          auVar198._0_4_ =
               uVar17 & ___ymm_0000001800000018000000180000001800000018000000180000001800000018;
          auVar198._4_4_ = uVar18 & _UNK_151287344;
          auVar198._8_4_ = uVar19 & _UNK_151287348;
          auVar198._12_4_ = uVar20 & _UNK_15128734c;
          uVar45 = vextractps_avx(auVar198,1);
          uVar44 = vextractps_avx(auVar198,2);
          uVar39 = (undefined4)((ulonglong)lVar6 >> 0x20);
          uVar36 = vextractps_avx(auVar198,3);
          auVar377._8_8_ = 0;
          auVar377._0_8_ = *(ulonglong *)((ulonglong)auVar198._0_4_ + lVar29);
          local_440 = vmovhps_avx(auVar377,*(undefined8 *)((ulonglong)uVar45 + lVar1));
          auVar199._8_8_ = 0;
          auVar199._0_8_ = *(ulonglong *)((ulonglong)(uVar41 & _UNK_151287358) + lVar2);
          local_410 = vmovhps_avx(auVar199,*(undefined8 *)
                                            ((ulonglong)(uVar22 & _UNK_15128735c) + lVar3));
          auVar200._8_8_ = 0;
          auVar200._0_8_ = *(ulonglong *)((ulonglong)(uVar21 & _UNK_151287350) + lVar6);
          local_420 = vmovhps_avx(auVar200,*(undefined8 *)
                                            ((ulonglong)(uVar38 & _UNK_151287354) + lVar7));
          auVar201._8_8_ = 0;
          auVar201._0_8_ = *(ulonglong *)((ulonglong)uVar44 + lVar4);
          local_430 = vmovhps_avx(auVar201,*(undefined8 *)(CONCAT44(uVar39,uVar36) + lVar5));
          auVar202._0_4_ =
               uVar17 & ___ymm_0000002000000020000000200000002000000020000000200000002000000020;
          auVar202._4_4_ = uVar18 & _UNK_151287364;
          auVar202._8_4_ = uVar19 & _UNK_151287368;
          auVar202._12_4_ = uVar20 & _UNK_15128736c;
          uVar45 = vextractps_avx(auVar202,1);
          uVar44 = vextractps_avx(auVar202,2);
          uVar36 = vextractps_avx(auVar202,3);
          auVar378._8_8_ = 0;
          auVar378._0_8_ = *(ulonglong *)((ulonglong)auVar202._0_4_ + lVar29);
          local_400 = vmovhps_avx(auVar378,*(undefined8 *)((ulonglong)uVar45 + lVar1));
          auVar203._8_8_ = 0;
          auVar203._0_8_ = *(ulonglong *)((ulonglong)(uVar41 & _UNK_151287378) + lVar2);
          local_3d0 = vmovhps_avx(auVar203,*(undefined8 *)
                                            ((ulonglong)(uVar22 & _UNK_15128737c) + lVar3));
          auVar204._8_8_ = 0;
          auVar204._0_8_ = *(ulonglong *)((ulonglong)(uVar21 & _UNK_151287370) + lVar6);
          local_3e0 = vmovhps_avx(auVar204,*(undefined8 *)
                                            ((ulonglong)(uVar38 & _UNK_151287374) + lVar7));
          auVar205._8_8_ = 0;
          auVar205._0_8_ = *(ulonglong *)((ulonglong)uVar44 + lVar4);
          local_3f0 = vmovhps_avx(auVar205,*(undefined8 *)(CONCAT44(uVar39,uVar36) + lVar5));
          auVar206._0_4_ =
               uVar17 & ___ymm_0000002800000028000000280000002800000028000000280000002800000028;
          auVar206._4_4_ = uVar18 & _UNK_151287384;
          auVar206._8_4_ = uVar19 & _UNK_151287388;
          auVar206._12_4_ = uVar20 & _UNK_15128738c;
          uVar45 = vextractps_avx(auVar206,1);
          uVar44 = vextractps_avx(auVar206,2);
          uVar36 = vextractps_avx(auVar206,3);
          auVar379._8_8_ = 0;
          auVar379._0_8_ = *(ulonglong *)((ulonglong)auVar206._0_4_ + lVar29);
          local_3c0 = vmovhps_avx(auVar379,*(undefined8 *)((ulonglong)uVar45 + lVar1));
          auVar207._8_8_ = 0;
          auVar207._0_8_ = *(ulonglong *)((ulonglong)(uVar41 & _UNK_151287398) + lVar2);
          local_390 = vmovhps_avx(auVar207,*(undefined8 *)
                                            ((ulonglong)(uVar22 & _UNK_15128739c) + lVar3));
          auVar208._8_8_ = 0;
          auVar208._0_8_ = *(ulonglong *)((ulonglong)(uVar21 & _UNK_151287390) + lVar6);
          local_3a0 = vmovhps_avx(auVar208,*(undefined8 *)
                                            ((ulonglong)(uVar38 & _UNK_151287394) + lVar7));
          auVar209._8_8_ = 0;
          auVar209._0_8_ = *(ulonglong *)((ulonglong)uVar44 + lVar4);
          local_3b0 = vmovhps_avx(auVar209,*(undefined8 *)(CONCAT44(uVar39,uVar36) + lVar5));
          auVar210._0_4_ =
               uVar17 & ___ymm_0000003000000030000000300000003000000030000000300000003000000030;
          auVar210._4_4_ = uVar18 & _UNK_1512873a4;
          auVar210._8_4_ = uVar19 & _UNK_1512873a8;
          auVar210._12_4_ = uVar20 & _UNK_1512873ac;
          uVar45 = vextractps_avx(auVar210,1);
          uVar44 = vextractps_avx(auVar210,2);
          uVar36 = vextractps_avx(auVar210,3);
          auVar380._8_8_ = 0;
          auVar380._0_8_ = *(ulonglong *)((ulonglong)auVar210._0_4_ + lVar29);
          local_380 = vmovhps_avx(auVar380,*(undefined8 *)((ulonglong)uVar45 + lVar1));
          auVar211._8_8_ = 0;
          auVar211._0_8_ = *(ulonglong *)((ulonglong)(uVar41 & _UNK_1512873b8) + lVar2);
          local_350 = vmovhps_avx(auVar211,*(undefined8 *)
                                            ((ulonglong)(uVar22 & _UNK_1512873bc) + lVar3));
          auVar212._8_8_ = 0;
          auVar212._0_8_ = *(ulonglong *)((ulonglong)(uVar21 & _UNK_1512873b0) + lVar6);
          local_360 = vmovhps_avx(auVar212,*(undefined8 *)
                                            ((ulonglong)(uVar38 & _UNK_1512873b4) + lVar7));
          auVar213._8_8_ = 0;
          auVar213._0_8_ = *(ulonglong *)((ulonglong)uVar44 + lVar4);
          local_370 = vmovhps_avx(auVar213,*(undefined8 *)(CONCAT44(uVar39,uVar36) + lVar5));
          auVar214._0_4_ =
               uVar17 & ___ymm_0000003800000038000000380000003800000038000000380000003800000038;
          auVar214._4_4_ = uVar18 & _UNK_1512873c4;
          auVar214._8_4_ = uVar19 & _UNK_1512873c8;
          auVar214._12_4_ = uVar20 & _UNK_1512873cc;
          uVar45 = vextractps_avx(auVar214,1);
          uVar44 = vextractps_avx(auVar214,2);
          uVar36 = vextractps_avx(auVar214,3);
          auVar381._8_8_ = 0;
          auVar381._0_8_ = *(ulonglong *)((ulonglong)auVar214._0_4_ + lVar29);
          local_340 = vmovhps_avx(auVar381,*(undefined8 *)((ulonglong)uVar45 + lVar1));
          auVar215._8_8_ = 0;
          auVar215._0_8_ = *(ulonglong *)((ulonglong)(uVar41 & _UNK_1512873d8) + lVar2);
          local_310 = vmovhps_avx(auVar215,*(undefined8 *)
                                            ((ulonglong)(uVar22 & _UNK_1512873dc) + lVar3));
          auVar216._8_8_ = 0;
          auVar216._0_8_ = *(ulonglong *)((ulonglong)(uVar21 & _UNK_1512873d0) + lVar6);
          local_320 = vmovhps_avx(auVar216,*(undefined8 *)
                                            ((ulonglong)(uVar38 & _UNK_1512873d4) + lVar7));
          auVar217._8_8_ = 0;
          auVar217._0_8_ = *(ulonglong *)((ulonglong)uVar44 + lVar4);
          local_330 = vmovhps_avx(auVar217,*(undefined8 *)(CONCAT44(uVar39,uVar36) + lVar5));
          auVar218._0_4_ =
               uVar17 & ___ymm_0000004000000040000000400000004000000040000000400000004000000040;
          auVar218._4_4_ = uVar18 & _UNK_1512873e4;
          auVar218._8_4_ = uVar19 & _UNK_1512873e8;
          auVar218._12_4_ = uVar20 & _UNK_1512873ec;
          uVar45 = vextractps_avx(auVar218,1);
          uVar44 = vextractps_avx(auVar218,2);
          uVar36 = vextractps_avx(auVar218,3);
          auVar382._8_8_ = 0;
          auVar382._0_8_ = *(ulonglong *)((ulonglong)auVar218._0_4_ + lVar29);
          local_300 = vmovhps_avx(auVar382,*(undefined8 *)((ulonglong)uVar45 + lVar1));
          auVar219._8_8_ = 0;
          auVar219._0_8_ = *(ulonglong *)((ulonglong)(uVar41 & _UNK_1512873f8) + lVar2);
          local_2d0 = vmovhps_avx(auVar219,*(undefined8 *)
                                            ((ulonglong)(uVar22 & _UNK_1512873fc) + lVar3));
          auVar220._8_8_ = 0;
          auVar220._0_8_ = *(ulonglong *)((ulonglong)(uVar21 & _UNK_1512873f0) + lVar6);
          local_2e0 = vmovhps_avx(auVar220,*(undefined8 *)
                                            ((ulonglong)(uVar38 & _UNK_1512873f4) + lVar7));
          auVar221._8_8_ = 0;
          auVar221._0_8_ = *(ulonglong *)((ulonglong)uVar44 + lVar4);
          local_2f0 = vmovhps_avx(auVar221,*(undefined8 *)(CONCAT44(uVar39,uVar36) + lVar5));
          auVar222._0_4_ =
               uVar17 & ___ymm_0000004800000048000000480000004800000048000000480000004800000048;
          auVar222._4_4_ = uVar18 & _UNK_151287404;
          auVar222._8_4_ = uVar19 & _UNK_151287408;
          auVar222._12_4_ = uVar20 & _UNK_15128740c;
          uVar45 = vextractps_avx(auVar222,1);
          uVar44 = vextractps_avx(auVar222,2);
          uVar36 = vextractps_avx(auVar222,3);
          auVar383._8_8_ = 0;
          auVar383._0_8_ = *(ulonglong *)((ulonglong)auVar222._0_4_ + lVar29);
          local_2c0 = vmovhps_avx(auVar383,*(undefined8 *)((ulonglong)uVar45 + lVar1));
          auVar223._8_8_ = 0;
          auVar223._0_8_ = *(ulonglong *)((ulonglong)(uVar41 & _UNK_151287418) + lVar2);
          local_290 = vmovhps_avx(auVar223,*(undefined8 *)
                                            ((ulonglong)(uVar22 & _UNK_15128741c) + lVar3));
          auVar224._8_8_ = 0;
          auVar224._0_8_ = *(ulonglong *)((ulonglong)(uVar21 & _UNK_151287410) + lVar6);
          local_2a0 = vmovhps_avx(auVar224,*(undefined8 *)
                                            ((ulonglong)(uVar38 & _UNK_151287414) + lVar7));
          auVar225._8_8_ = 0;
          auVar225._0_8_ = *(ulonglong *)((ulonglong)uVar44 + lVar4);
          local_2b0 = vmovhps_avx(auVar225,*(undefined8 *)(CONCAT44(uVar39,uVar36) + lVar5));
          auVar226._0_4_ =
               uVar17 & ___ymm_0000005000000050000000500000005000000050000000500000005000000050;
          auVar226._4_4_ = uVar18 & _UNK_151287424;
          auVar226._8_4_ = uVar19 & _UNK_151287428;
          auVar226._12_4_ = uVar20 & _UNK_15128742c;
          uVar45 = vextractps_avx(auVar226,1);
          uVar44 = vextractps_avx(auVar226,2);
          uVar36 = vextractps_avx(auVar226,3);
          auVar384._8_8_ = 0;
          auVar384._0_8_ = *(ulonglong *)((ulonglong)auVar226._0_4_ + lVar29);
          local_280 = vmovhps_avx(auVar384,*(undefined8 *)((ulonglong)uVar45 + lVar1));
          auVar227._8_8_ = 0;
          auVar227._0_8_ = *(ulonglong *)((ulonglong)(uVar41 & _UNK_151287438) + lVar2);
          local_250 = vmovhps_avx(auVar227,*(undefined8 *)
                                            ((ulonglong)(uVar22 & _UNK_15128743c) + lVar3));
          auVar228._8_8_ = 0;
          auVar228._0_8_ = *(ulonglong *)((ulonglong)(uVar21 & _UNK_151287430) + lVar6);
          local_260 = vmovhps_avx(auVar228,*(undefined8 *)
                                            ((ulonglong)(uVar38 & _UNK_151287434) + lVar7));
          auVar229._8_8_ = 0;
          auVar229._0_8_ = *(ulonglong *)((ulonglong)uVar44 + lVar4);
          local_270 = vmovhps_avx(auVar229,*(undefined8 *)(CONCAT44(uVar39,uVar36) + lVar5));
          auVar230._0_4_ =
               uVar17 & ___ymm_0000005800000058000000580000005800000058000000580000005800000058;
          auVar230._4_4_ = uVar18 & _UNK_151287444;
          auVar230._8_4_ = uVar19 & _UNK_151287448;
          auVar230._12_4_ = uVar20 & _UNK_15128744c;
          uVar45 = vextractps_avx(auVar230,1);
          uVar44 = vextractps_avx(auVar230,2);
          uVar36 = vextractps_avx(auVar230,3);
          auVar385._8_8_ = 0;
          auVar385._0_8_ = *(ulonglong *)((ulonglong)auVar230._0_4_ + lVar29);
          local_240 = vmovhps_avx(auVar385,*(undefined8 *)((ulonglong)uVar45 + lVar1));
          auVar231._8_8_ = 0;
          auVar231._0_8_ = *(ulonglong *)((ulonglong)(uVar41 & _UNK_151287458) + lVar2);
          local_210 = vmovhps_avx(auVar231,*(undefined8 *)
                                            ((ulonglong)(uVar22 & _UNK_15128745c) + lVar3));
          auVar232._8_8_ = 0;
          auVar232._0_8_ = *(ulonglong *)((ulonglong)(uVar21 & _UNK_151287450) + lVar6);
          local_220 = vmovhps_avx(auVar232,*(undefined8 *)
                                            ((ulonglong)(uVar38 & _UNK_151287454) + lVar7));
          auVar233._8_8_ = 0;
          auVar233._0_8_ = *(ulonglong *)((ulonglong)uVar44 + lVar4);
          local_230 = vmovhps_avx(auVar233,*(undefined8 *)(CONCAT44(uVar39,uVar36) + lVar5));
          auVar234._0_4_ =
               uVar17 & ___ymm_0000006000000060000000600000006000000060000000600000006000000060;
          auVar234._4_4_ = uVar18 & _UNK_151287464;
          auVar234._8_4_ = uVar19 & _UNK_151287468;
          auVar234._12_4_ = uVar20 & _UNK_15128746c;
          uVar45 = vextractps_avx(auVar234,1);
          uVar44 = vextractps_avx(auVar234,2);
          uVar36 = vextractps_avx(auVar234,3);
          auVar386._8_8_ = 0;
          auVar386._0_8_ = *(ulonglong *)((ulonglong)auVar234._0_4_ + lVar29);
          local_200 = vmovhps_avx(auVar386,*(undefined8 *)((ulonglong)uVar45 + lVar1));
          auVar235._8_8_ = 0;
          auVar235._0_8_ = *(ulonglong *)((ulonglong)(uVar41 & _UNK_151287478) + lVar2);
          local_1d0 = vmovhps_avx(auVar235,*(undefined8 *)
                                            ((ulonglong)(uVar22 & _UNK_15128747c) + lVar3));
          auVar236._8_8_ = 0;
          auVar236._0_8_ = *(ulonglong *)((ulonglong)(uVar21 & _UNK_151287470) + lVar6);
          local_1e0 = vmovhps_avx(auVar236,*(undefined8 *)
                                            ((ulonglong)(uVar38 & _UNK_151287474) + lVar7));
          auVar237._8_8_ = 0;
          auVar237._0_8_ = *(ulonglong *)((ulonglong)uVar44 + lVar4);
          local_1f0 = vmovhps_avx(auVar237,*(undefined8 *)(CONCAT44(uVar39,uVar36) + lVar5));
          auVar238._0_4_ =
               uVar17 & ___ymm_0000006800000068000000680000006800000068000000680000006800000068;
          auVar238._4_4_ = uVar18 & _UNK_151287484;
          auVar238._8_4_ = uVar19 & _UNK_151287488;
          auVar238._12_4_ = uVar20 & _UNK_15128748c;
          uVar45 = vextractps_avx(auVar238,1);
          uVar44 = vextractps_avx(auVar238,2);
          uVar36 = vextractps_avx(auVar238,3);
          auVar387._8_8_ = 0;
          auVar387._0_8_ = *(ulonglong *)((ulonglong)auVar238._0_4_ + lVar29);
          local_1c0 = vmovhps_avx(auVar387,*(undefined8 *)((ulonglong)uVar45 + lVar1));
          auVar239._8_8_ = 0;
          auVar239._0_8_ = *(ulonglong *)((ulonglong)(uVar41 & _UNK_151287498) + lVar2);
          local_190 = vmovhps_avx(auVar239,*(undefined8 *)
                                            ((ulonglong)(uVar22 & _UNK_15128749c) + lVar3));
          auVar240._8_8_ = 0;
          auVar240._0_8_ = *(ulonglong *)((ulonglong)(uVar21 & _UNK_151287490) + lVar6);
          local_1a0 = vmovhps_avx(auVar240,*(undefined8 *)
                                            ((ulonglong)(uVar38 & _UNK_151287494) + lVar7));
          auVar241._8_8_ = 0;
          auVar241._0_8_ = *(ulonglong *)((ulonglong)uVar44 + lVar4);
          local_1b0 = vmovhps_avx(auVar241,*(undefined8 *)(CONCAT44(uVar39,uVar36) + lVar5));
          auVar242._0_4_ =
               uVar17 & ___ymm_0000007000000070000000700000007000000070000000700000007000000070;
          auVar242._4_4_ = uVar18 & _UNK_1512874a4;
          auVar242._8_4_ = uVar19 & _UNK_1512874a8;
          auVar242._12_4_ = uVar20 & _UNK_1512874ac;
          uVar44 = vextractps_avx(auVar242,1);
          uVar45 = vextractps_avx(auVar242,2);
          uVar16 = vextractps_avx(auVar242,3);
          auVar388._8_8_ = 0;
          auVar388._0_8_ = *(ulonglong *)((ulonglong)auVar242._0_4_ + lVar29);
          local_180 = vmovhps_avx(auVar388,*(undefined8 *)((ulonglong)uVar44 + lVar1));
          auVar243._8_8_ = 0;
          auVar243._0_8_ = *(ulonglong *)((ulonglong)(uVar41 & _UNK_1512874b8) + lVar2);
          local_150 = vmovhps_avx(auVar243,*(undefined8 *)
                                            ((ulonglong)(uVar22 & _UNK_1512874bc) + lVar3));
          auVar244._8_8_ = 0;
          auVar244._0_8_ = *(ulonglong *)((ulonglong)(uVar21 & _UNK_1512874b0) + lVar6);
          local_160 = vmovhps_avx(auVar244,*(undefined8 *)
                                            ((ulonglong)(uVar38 & _UNK_1512874b4) + lVar7));
          auVar245._8_8_ = 0;
          auVar245._0_8_ =
               *(ulonglong *)
                ((ulonglong)
                 (uVar17 & ___ymm_0000007800000078000000780000007800000078000000780000007800000078)
                + lVar29);
          local_140 = vmovhps_avx(auVar245,*(undefined8 *)
                                            ((ulonglong)(uVar18 & _UNK_1512874c4) + lVar1));
          auVar448._8_8_ = 0;
          auVar448._0_8_ = *(ulonglong *)((ulonglong)uVar45 + lVar4);
          local_170 = vmovhps_avx(auVar448,*(undefined8 *)((ulonglong)uVar16 + lVar5));
          auVar449._8_8_ = 0;
          auVar449._0_8_ = *(ulonglong *)((ulonglong)(uVar19 & _UNK_1512874c8) + lVar4);
          local_130 = vmovhps_avx(auVar449,*(undefined8 *)
                                            ((ulonglong)(uVar20 & _UNK_1512874cc) + lVar5));
          auVar389._8_8_ = 0;
          auVar389._0_8_ = *(ulonglong *)((ulonglong)(uVar41 & _UNK_1512874d8) + lVar2);
          local_110 = vmovhps_avx(auVar389,*(undefined8 *)
                                            ((ulonglong)(uVar22 & _UNK_1512874dc) + lVar3));
          auVar390._8_8_ = 0;
          auVar390._0_8_ = *(ulonglong *)((ulonglong)(uVar21 & _UNK_1512874d0) + lVar6);
          local_120 = vmovhps_avx(auVar390,*(undefined8 *)
                                            ((ulonglong)(uVar38 & _UNK_1512874d4) + lVar7));
          dVar8 = param_5[8];
          dVar46 = param_5[0xc];
          dVar47 = *param_5;
          lVar29 = 0xc0;
          dVar48 = param_5[1];
          dVar49 = param_5[5];
          dVar50 = param_5[9];
          dVar323 = param_5[0xd];
          dVar324 = param_5[2];
          dVar325 = param_5[6];
          dVar326 = param_5[10];
          dVar327 = param_5[0xe];
          dVar328 = param_5[3];
          dVar329 = param_5[7];
          dVar330 = param_5[0xb];
          dVar331 = param_5[0xf];
          do {
            dVar333 = *(double *)(local_5c0 + lVar29);
            dVar334 = *(double *)(local_5c0 + lVar29 + 8);
            dVar335 = *(double *)(local_5b0 + lVar29);
            dVar336 = *(double *)(local_5b0 + lVar29 + 8);
            dVar337 = *(double *)(local_5a0 + lVar29);
            dVar468 = *(double *)(local_5a0 + lVar29 + 8);
            dVar491 = *(double *)(local_590 + lVar29);
            dVar492 = *(double *)(local_590 + lVar29 + 8);
            dVar493 = *(double *)(local_580 + lVar29);
            dVar494 = *(double *)(local_580 + lVar29 + 8);
            dVar519 = *(double *)(local_570 + lVar29);
            dVar520 = *(double *)(local_570 + lVar29 + 8);
            dVar521 = *(double *)(local_560 + lVar29);
            dVar552 = *(double *)(local_560 + lVar29 + 8);
            dVar564 = *(double *)(local_550 + lVar29);
            dVar565 = *(double *)(local_550 + lVar29 + 8);
            dVar566 = *(double *)(local_520 + lVar29);
            dVar567 = *(double *)(local_520 + lVar29 + 8);
            dVar568 = *(double *)(local_510 + lVar29);
            dVar581 = *(double *)(local_510 + lVar29 + 8);
            dVar582 = *(double *)(local_540 + lVar29);
            dVar583 = *(double *)(local_540 + lVar29 + 8);
            dVar584 = *(double *)(local_530 + lVar29);
            dVar585 = *(double *)(local_530 + lVar29 + 8);
            dVar586 = *(double *)(local_500 + lVar29);
            dVar621 = *(double *)(local_500 + lVar29 + 8);
            dVar622 = *(double *)(local_4f0 + lVar29);
            dVar637 = *(double *)(local_4f0 + lVar29 + 8);
            dVar638 = *(double *)(local_4e0 + lVar29);
            dVar639 = *(double *)(local_4e0 + lVar29 + 8);
            dVar640 = *(double *)(local_4d0 + lVar29);
            dVar641 = *(double *)(local_4d0 + lVar29 + 8);
            dVar332 = param_5[4];
            *(double *)((longlong)local_2080 + lVar29 + 0x20) =
                 dVar337 * dVar47 + 0.0 + dVar521 * dVar332 + dVar566 * dVar8 + dVar638 * dVar46;
            *(double *)((longlong)local_2080 + lVar29 + 0x28) =
                 dVar468 * dVar47 + 0.0 + dVar552 * dVar332 + dVar567 * dVar8 + dVar639 * dVar46;
            *(double *)((longlong)local_2080 + lVar29 + 0x30) =
                 dVar491 * dVar47 + 0.0 + dVar564 * dVar332 + dVar568 * dVar8 + dVar640 * dVar46;
            *(double *)((longlong)local_2080 + lVar29 + 0x38) =
                 dVar492 * dVar47 + 0.0 + dVar565 * dVar332 + dVar581 * dVar8 + dVar641 * dVar46;
            *(double *)((longlong)local_2080 + lVar29) =
                 dVar333 * dVar47 + 0.0 + dVar493 * dVar332 + dVar582 * dVar8 + dVar586 * dVar46;
            *(double *)((longlong)local_2080 + lVar29 + 8) =
                 dVar334 * dVar47 + 0.0 + dVar494 * dVar332 + dVar583 * dVar8 + dVar621 * dVar46;
            *(double *)((longlong)local_2080 + lVar29 + 0x10) =
                 dVar335 * dVar47 + 0.0 + dVar519 * dVar332 + dVar584 * dVar8 + dVar622 * dVar46;
            *(double *)((longlong)local_2080 + lVar29 + 0x18) =
                 dVar336 * dVar47 + 0.0 + dVar520 * dVar332 + dVar585 * dVar8 + dVar637 * dVar46;
            *(double *)((longlong)local_2080 + lVar29 + 0x60) =
                 dVar337 * dVar48 + 0.0 + dVar521 * dVar49 + dVar566 * dVar50 + dVar638 * dVar323;
            *(double *)((longlong)local_2080 + lVar29 + 0x68) =
                 dVar468 * dVar48 + 0.0 + dVar552 * dVar49 + dVar567 * dVar50 + dVar639 * dVar323;
            *(double *)((longlong)local_2080 + lVar29 + 0x70) =
                 dVar491 * dVar48 + 0.0 + dVar564 * dVar49 + dVar568 * dVar50 + dVar640 * dVar323;
            *(double *)((longlong)local_2080 + lVar29 + 0x78) =
                 dVar492 * dVar48 + 0.0 + dVar565 * dVar49 + dVar581 * dVar50 + dVar641 * dVar323;
            *(double *)((longlong)local_2080 + lVar29 + 0x40) =
                 dVar333 * dVar48 + 0.0 + dVar493 * dVar49 + dVar582 * dVar50 + dVar586 * dVar323;
            *(double *)((longlong)local_2080 + lVar29 + 0x48) =
                 dVar334 * dVar48 + 0.0 + dVar494 * dVar49 + dVar583 * dVar50 + dVar621 * dVar323;
            *(double *)((longlong)local_2080 + lVar29 + 0x50) =
                 dVar335 * dVar48 + 0.0 + dVar519 * dVar49 + dVar584 * dVar50 + dVar622 * dVar323;
            *(double *)((longlong)local_2080 + lVar29 + 0x58) =
                 dVar336 * dVar48 + 0.0 + dVar520 * dVar49 + dVar585 * dVar50 + dVar637 * dVar323;
            *(double *)((longlong)local_2080 + lVar29 + 0xa0) =
                 dVar337 * dVar324 + 0.0 + dVar521 * dVar325 + dVar566 * dVar326 + dVar638 * dVar327
            ;
            *(double *)((longlong)local_2080 + lVar29 + 0xa8) =
                 dVar468 * dVar324 + 0.0 + dVar552 * dVar325 + dVar567 * dVar326 + dVar639 * dVar327
            ;
            *(double *)((longlong)local_2080 + lVar29 + 0xb0) =
                 dVar491 * dVar324 + 0.0 + dVar564 * dVar325 + dVar568 * dVar326 + dVar640 * dVar327
            ;
            *(double *)((longlong)local_2080 + lVar29 + 0xb8) =
                 dVar492 * dVar324 + 0.0 + dVar565 * dVar325 + dVar581 * dVar326 + dVar641 * dVar327
            ;
            *(double *)((longlong)local_2080 + lVar29 + 0x80) =
                 dVar333 * dVar324 + 0.0 + dVar493 * dVar325 + dVar582 * dVar326 + dVar586 * dVar327
            ;
            *(double *)((longlong)local_2080 + lVar29 + 0x88) =
                 dVar334 * dVar324 + 0.0 + dVar494 * dVar325 + dVar583 * dVar326 + dVar621 * dVar327
            ;
            *(double *)((longlong)local_2080 + lVar29 + 0x90) =
                 dVar335 * dVar324 + 0.0 + dVar519 * dVar325 + dVar584 * dVar326 + dVar622 * dVar327
            ;
            *(double *)((longlong)local_2080 + lVar29 + 0x98) =
                 dVar336 * dVar324 + 0.0 + dVar520 * dVar325 + dVar585 * dVar326 + dVar637 * dVar327
            ;
            *(double *)(local_1fa0 + lVar29) =
                 dVar337 * dVar328 + 0.0 + dVar521 * dVar329 + dVar566 * dVar330 + dVar331 * dVar638
            ;
            *(double *)(local_1fa0 + lVar29 + 8) =
                 dVar468 * dVar328 + 0.0 + dVar552 * dVar329 + dVar567 * dVar330 + dVar331 * dVar639
            ;
            *(double *)(local_1fa0 + lVar29 + 0x10) =
                 dVar491 * dVar328 + 0.0 + dVar564 * dVar329 + dVar568 * dVar330 + dVar331 * dVar640
            ;
            *(double *)(local_1fa0 + lVar29 + 0x18) =
                 dVar492 * dVar328 + 0.0 + dVar565 * dVar329 + dVar581 * dVar330 + dVar331 * dVar641
            ;
            *(double *)(local_1fc0 + lVar29) =
                 dVar333 * dVar328 + 0.0 + dVar493 * dVar329 + dVar582 * dVar330 + dVar331 * dVar586
            ;
            *(double *)(local_1fc0 + lVar29 + 8) =
                 dVar334 * dVar328 + 0.0 + dVar494 * dVar329 + dVar583 * dVar330 + dVar331 * dVar621
            ;
            *(double *)(local_1fc0 + lVar29 + 0x10) =
                 dVar335 * dVar328 + 0.0 + dVar519 * dVar329 + dVar584 * dVar330 + dVar331 * dVar622
            ;
            *(double *)(local_1fc0 + lVar29 + 0x18) =
                 dVar336 * dVar328 + 0.0 + dVar520 * dVar329 + dVar585 * dVar330 + dVar331 * dVar637
            ;
            lVar29 = lVar29 + 0x100;
          } while (lVar29 != 0x4c0);
          local_22a0 = auVar186._0_8_;
          dStack_2298 = auVar186._8_8_;
          dStack_2290 = auVar185._0_8_;
          dStack_2288 = auVar185._8_8_;
          local_2200 = auVar187._0_8_;
          dStack_21f8 = auVar187._8_8_;
          dStack_21f0 = auVar505._0_8_;
          dStack_21e8 = auVar505._8_8_;
          local_21e0 = auVar445._0_8_;
          dStack_21d8 = auVar445._8_8_;
          dStack_21d0 = auVar554._0_8_;
          dStack_21c8 = auVar554._8_8_;
          dVar46 = (local_22a0 + local_2200) * __real_3fe0000000000000;
          dVar323 = (dStack_2298 + dStack_21f8) * __real_3fe0000000000000;
          dVar328 = (dStack_2290 + dStack_21f0) * __real_3fe0000000000000;
          dVar333 = (dStack_2288 + dStack_21e8) * __real_3fe0000000000000;
          dVar494 = ((double)local_1a60._0_8_ + local_21e0) * __real_3fe0000000000000;
          dVar519 = ((double)local_1a60._8_8_ + dStack_21d8) * __real_3fe0000000000000;
          dVar520 = (dStack_1a50 + dStack_21d0) * __real_3fe0000000000000;
          dVar521 = (dStack_1a48 + dStack_21c8) * __real_3fe0000000000000;
          local_2280 = auVar546._0_8_;
          dStack_2278 = auVar546._8_8_;
          dStack_2270 = auVar496._0_8_;
          dStack_2268 = auVar496._8_8_;
          dVar552 = (local_1960._0_8_ + local_2280) * __real_3fe0000000000000;
          dVar564 = (local_1960._8_8_ + dStack_2278) * __real_3fe0000000000000;
          dVar565 = (local_1960._16_8_ + dStack_2270) * __real_3fe0000000000000;
          dVar566 = (local_1960._24_8_ + dStack_2268) * __real_3fe0000000000000;
          local_2220 = auVar547._0_8_;
          dStack_2218 = auVar547._8_8_;
          dStack_2210 = auVar535._0_8_;
          dStack_2208 = auVar535._8_8_;
          dVar567 = (local_1980._0_8_ + local_2220) * __real_3fe0000000000000;
          dVar581 = (local_1980._8_8_ + dStack_2218) * __real_3fe0000000000000;
          dVar583 = (local_1980._16_8_ + dStack_2210) * __real_3fe0000000000000;
          dVar585 = (local_1980._24_8_ + dStack_2208) * __real_3fe0000000000000;
          dVar8 = (double)CONCAT17(uStack_1e39,
                                   CONCAT16(uStack_1e3a,
                                            CONCAT15(uStack_1e3b,
                                                     CONCAT14(uStack_1e3c,
                                                              CONCAT13(uStack_1e3d,
                                                                       CONCAT12(uStack_1e3e,
                                                                                CONCAT11(uStack_1e3f
                                                                                         ,local_1e40
                                                                                        )))))));
          dVar468 = (local_1920._0_8_ + local_1a80._0_8_) * __real_3fe0000000000000;
          dVar491 = (local_1920._8_8_ + local_1a80._8_8_) * __real_3fe0000000000000;
          dVar492 = (local_1920._16_8_ + local_1a80._16_8_) * __real_3fe0000000000000;
          dVar493 = (local_1920._24_8_ + local_1a80._24_8_) * __real_3fe0000000000000;
          dVar568 = (local_1940._0_8_ + local_1aa0._0_8_) * __real_3fe0000000000000;
          dVar582 = (local_1940._8_8_ + local_1aa0._8_8_) * __real_3fe0000000000000;
          dVar584 = (local_1940._16_8_ + local_1aa0._16_8_) * __real_3fe0000000000000;
          dVar586 = (local_1940._24_8_ + local_1aa0._24_8_) * __real_3fe0000000000000;
          auVar306 = vsubpd_avx(auVar306,auVar427);
          auVar305 = vsubpd_avx(local_1960,auVar305);
          auVar427 = vsubpd_avx(_local_1a60,auVar457);
          auVar457 = vsubpd_avx(local_1980,auVar540);
          auVar540 = vsubpd_avx(local_1a80,local_1920);
          auVar459 = vsubpd_avx(local_1aa0,local_1940);
          dVar47 = auVar306._0_8_ * __real_3fe0000000000000;
          dVar324 = auVar306._8_8_ * __real_3fe0000000000000;
          dVar329 = auVar306._16_8_ * __real_3fe0000000000000;
          dVar334 = auVar306._24_8_ * __real_3fe0000000000000;
          dVar48 = auVar305._0_8_ * __real_3fe0000000000000;
          dVar325 = auVar305._8_8_ * __real_3fe0000000000000;
          dVar330 = auVar305._16_8_ * __real_3fe0000000000000;
          dVar335 = auVar305._24_8_ * __real_3fe0000000000000;
          dVar49 = auVar427._0_8_ * __real_3fe0000000000000;
          dVar326 = auVar427._8_8_ * __real_3fe0000000000000;
          dVar331 = auVar427._16_8_ * __real_3fe0000000000000;
          dVar336 = auVar427._24_8_ * __real_3fe0000000000000;
          dVar50 = auVar457._0_8_ * __real_3fe0000000000000;
          dVar327 = auVar457._8_8_ * __real_3fe0000000000000;
          dVar332 = auVar457._16_8_ * __real_3fe0000000000000;
          dVar337 = auVar457._24_8_ * __real_3fe0000000000000;
          local_22a0 = auVar540._0_8_;
          dStack_2298 = auVar540._8_8_;
          dStack_2290 = auVar540._16_8_;
          dStack_2288 = auVar540._24_8_;
          local_22a0 = __real_3fe0000000000000 * local_22a0;
          dStack_2298 = __real_3fe0000000000000 * dStack_2298;
          dStack_2290 = __real_3fe0000000000000 * dStack_2290;
          dStack_2288 = __real_3fe0000000000000 * dStack_2288;
          local_2280 = auVar459._0_8_;
          dStack_2278 = auVar459._8_8_;
          dStack_2270 = auVar459._16_8_;
          dStack_2268 = auVar459._24_8_;
          local_2280 = __real_3fe0000000000000 * local_2280;
          dStack_2278 = __real_3fe0000000000000 * dStack_2278;
          dStack_2270 = __real_3fe0000000000000 * dStack_2270;
          dStack_2268 = __real_3fe0000000000000 * dStack_2268;
          auVar513._0_8_ =
               (double)((ulonglong)(local_2280 * local_1dc0) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar47 * (double)local_1fc0) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar49 * (double)local_1ec0._0_8_) & __real_7fffffffffffffff);
          auVar513._8_8_ =
               (double)((ulonglong)(dStack_2278 * dStack_1db8) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar324 * adStack_1fb8[0]) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar326 * (double)local_1ec0._8_8_) & __real_7fffffffffffffff);
          auVar513._16_8_ =
               (double)((ulonglong)(dStack_2270 * dStack_1db0) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar329 * adStack_1fb8[1]) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar331 * dStack_1eb0) & __real_7fffffffffffffff);
          auVar513._24_8_ =
               (double)((ulonglong)(dStack_2268 * dStack_1da8) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar334 * adStack_1fb8[2]) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar336 * dStack_1ea8) & __real_7fffffffffffffff);
          auVar459._0_8_ =
               (double)((ulonglong)(local_22a0 * local_1da0) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar48 * (double)local_1fa0) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar50 * (double)local_1ea0._0_8_) & __real_7fffffffffffffff);
          auVar459._8_8_ =
               (double)((ulonglong)(dStack_2298 * dStack_1d98) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar325 * adStack_1f98[0]) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar327 * (double)local_1ea0._8_8_) & __real_7fffffffffffffff);
          auVar459._16_8_ =
               (double)((ulonglong)(dStack_2290 * dStack_1d90) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar330 * adStack_1f98[1]) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar332 * dStack_1e90) & __real_7fffffffffffffff);
          auVar459._24_8_ =
               (double)((ulonglong)(dStack_2288 * dStack_1d88) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar335 * adStack_1f98[2]) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar337 * dStack_1e88) & __real_7fffffffffffffff);
          auVar559._0_8_ =
               dVar552 * (double)local_1fa0 + dVar567 * (double)local_1ea0._0_8_ +
               dVar468 * local_1da0 + local_1ca0;
          auVar559._8_8_ =
               dVar564 * adStack_1f98[0] + dVar581 * (double)local_1ea0._8_8_ +
               dVar491 * dStack_1d98 + dStack_1c98;
          auVar559._16_8_ =
               dVar565 * adStack_1f98[1] + dVar583 * dStack_1e90 + dVar492 * dStack_1d90 +
               dStack_1c90;
          auVar559._24_8_ =
               dVar566 * adStack_1f98[2] + dVar585 * dStack_1e88 + dVar493 * dStack_1d88 +
               dStack_1c88;
          auVar577._0_8_ =
               dVar568 * local_1dc0 +
               dVar46 * (double)local_1fc0 + dVar494 * (double)local_1ec0._0_8_ + local_1cc0;
          auVar577._8_8_ =
               dVar582 * dStack_1db8 +
               dVar323 * adStack_1fb8[0] + dVar519 * (double)local_1ec0._8_8_ + dStack_1cb8;
          auVar577._16_8_ =
               dVar584 * dStack_1db0 + dVar328 * adStack_1fb8[1] + dVar520 * dStack_1eb0 +
               dStack_1cb0;
          auVar577._24_8_ =
               dVar586 * dStack_1da8 + dVar333 * adStack_1fb8[2] + dVar521 * dStack_1ea8 +
               dStack_1ca8;
          auVar607._0_8_ =
               dVar468 * local_1d60 +
               dVar552 * (double)local_1f60._0_8_ + dVar567 * (double)local_1e60._0_8_ + local_1c60;
          auVar607._8_8_ =
               dVar491 * dStack_1d58 +
               dVar564 * (double)local_1f60._8_8_ + dVar581 * (double)local_1e60._8_8_ + dStack_1c58
          ;
          auVar607._16_8_ =
               dVar492 * dStack_1d50 + dVar565 * dStack_1f50 + dVar583 * dStack_1e50 + dStack_1c50;
          auVar607._24_8_ =
               dVar493 * dStack_1d48 + dVar566 * dStack_1f48 + dVar585 * dStack_1e48 + dStack_1c48;
          auVar630._0_8_ =
               dVar568 * local_1d80 +
               dVar46 * (double)local_1f80._0_8_ + dVar494 * (double)local_1e80._0_8_ + local_1c80;
          auVar630._8_8_ =
               dVar582 * dStack_1d78 +
               dVar323 * (double)local_1f80._8_8_ + dVar519 * (double)local_1e80._8_8_ + dStack_1c78
          ;
          auVar630._16_8_ =
               dVar584 * dStack_1d70 + dVar328 * dStack_1f70 + dVar520 * dStack_1e70 + dStack_1c70;
          auVar630._24_8_ =
               dVar586 * dStack_1d68 + dVar333 * dStack_1f68 + dVar521 * dStack_1e68 + dStack_1c68;
          auVar649._0_8_ =
               dVar552 * (double)local_1f20._0_8_ + dVar567 * local_1e20 + dVar468 * local_1d20 +
               local_1c20;
          auVar649._8_8_ =
               dVar564 * (double)local_1f20._8_8_ + dVar581 * dStack_1e18 + dVar491 * dStack_1d18 +
               dStack_1c18;
          auVar649._16_8_ =
               dVar565 * dStack_1f10 + dVar583 * dStack_1e10 + dVar492 * dStack_1d10 + dStack_1c10;
          auVar649._24_8_ =
               dVar566 * dStack_1f08 + dVar585 * dStack_1e08 + dVar493 * dStack_1d08 + dStack_1c08;
          auVar659._0_8_ =
               (double)local_1f40._0_8_ * dVar46 + dVar494 * dVar8 + dVar568 * local_1d40 +
               local_1c40;
          auVar659._8_8_ =
               (double)local_1f40._8_8_ * dVar323 + dVar519 * dStack_1e38 + dVar582 * dStack_1d38 +
               dStack_1c38;
          auVar659._16_8_ =
               dStack_1f30 * dVar328 + dVar520 * dStack_1e30 + dVar584 * dStack_1d30 + dStack_1c30;
          auVar659._24_8_ =
               dStack_1f28 * dVar333 + dVar521 * dStack_1e28 + dVar586 * dStack_1d28 + dStack_1c28;
          auVar428._0_8_ =
               (double)((ulonglong)(local_2280 * local_1d80) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar47 * (double)local_1f80._0_8_) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar49 * (double)local_1e80._0_8_) & __real_7fffffffffffffff);
          auVar428._8_8_ =
               (double)((ulonglong)(dStack_2278 * dStack_1d78) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar324 * (double)local_1f80._8_8_) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar326 * (double)local_1e80._8_8_) & __real_7fffffffffffffff);
          auVar428._16_8_ =
               (double)((ulonglong)(dStack_2270 * dStack_1d70) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar329 * dStack_1f70) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar331 * dStack_1e70) & __real_7fffffffffffffff);
          auVar428._24_8_ =
               (double)((ulonglong)(dStack_2268 * dStack_1d68) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar334 * dStack_1f68) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar336 * dStack_1e68) & __real_7fffffffffffffff);
          auVar617._0_8_ =
               (double)((ulonglong)(local_22a0 * local_1d60) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar48 * (double)local_1f60._0_8_) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar50 * (double)local_1e60._0_8_) & __real_7fffffffffffffff);
          auVar617._8_8_ =
               (double)((ulonglong)(dStack_2298 * dStack_1d58) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar325 * (double)local_1f60._8_8_) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar327 * (double)local_1e60._8_8_) & __real_7fffffffffffffff);
          auVar617._16_8_ =
               (double)((ulonglong)(dStack_2290 * dStack_1d50) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar330 * dStack_1f50) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar332 * dStack_1e50) & __real_7fffffffffffffff);
          auVar617._24_8_ =
               (double)((ulonglong)(dStack_2288 * dStack_1d48) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar335 * dStack_1f48) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar337 * dStack_1e48) & __real_7fffffffffffffff);
          auVar601._0_8_ =
               (double)(__real_7fffffffffffffff & (ulonglong)((double)local_1f40._0_8_ * dVar47)) +
               (double)((ulonglong)(dVar49 * dVar8) & __real_7fffffffffffffff) +
               (double)((ulonglong)(local_2280 * local_1d40) & __real_7fffffffffffffff);
          auVar601._8_8_ =
               (double)(__real_7fffffffffffffff & (ulonglong)((double)local_1f40._8_8_ * dVar324)) +
               (double)((ulonglong)(dVar326 * dStack_1e38) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dStack_2278 * dStack_1d38) & __real_7fffffffffffffff);
          auVar601._16_8_ =
               (double)(__real_7fffffffffffffff & (ulonglong)(dStack_1f30 * dVar329)) +
               (double)((ulonglong)(dVar331 * dStack_1e30) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dStack_2270 * dStack_1d30) & __real_7fffffffffffffff);
          auVar601._24_8_ =
               (double)(__real_7fffffffffffffff & (ulonglong)(dStack_1f28 * dVar334)) +
               (double)((ulonglong)(dVar336 * dStack_1e28) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dStack_2268 * dStack_1d28) & __real_7fffffffffffffff);
          auVar484._0_8_ =
               (double)((ulonglong)((double)local_1f20._0_8_ * dVar48) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar50 * local_1e20) & __real_7fffffffffffffff) +
               (double)((ulonglong)(local_22a0 * local_1d20) & __real_7fffffffffffffff);
          auVar484._8_8_ =
               (double)((ulonglong)((double)local_1f20._8_8_ * dVar325) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar327 * dStack_1e18) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dStack_2298 * dStack_1d18) & __real_7fffffffffffffff);
          auVar484._16_8_ =
               (double)((ulonglong)(dStack_1f10 * dVar330) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar332 * dStack_1e10) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dStack_2290 * dStack_1d10) & __real_7fffffffffffffff);
          auVar484._24_8_ =
               (double)((ulonglong)(dStack_1f08 * dVar335) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar337 * dStack_1e08) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dStack_2288 * dStack_1d08) & __real_7fffffffffffffff);
          auVar305 = vsubpd_avx(auVar577,auVar513);
          auVar306 = vsubpd_avx(auVar559,auVar459);
          auVar427 = vsubpd_avx(auVar630,auVar428);
          auVar457 = vsubpd_avx(auVar607,auVar617);
          local_23c0._8_8_ = auVar577._8_8_ + auVar513._8_8_;
          local_23c0._0_8_ = auVar577._0_8_ + auVar513._0_8_;
          dStack_23b0 = auVar577._16_8_ + auVar513._16_8_;
          dStack_23a8 = auVar577._24_8_ + auVar513._24_8_;
          auVar540 = vsubpd_avx(auVar659,auVar601);
          local_23e0._8_8_ = auVar559._8_8_ + auVar459._8_8_;
          local_23e0._0_8_ = auVar559._0_8_ + auVar459._0_8_;
          dStack_23d0 = auVar559._16_8_ + auVar459._16_8_;
          dStack_23c8 = auVar559._24_8_ + auVar459._24_8_;
          auVar459 = vsubpd_avx(auVar649,auVar484);
          auVar578._0_8_ = auVar630._0_8_ + auVar428._0_8_;
          auVar578._8_8_ = auVar630._8_8_ + auVar428._8_8_;
          auVar578._16_8_ = auVar630._16_8_ + auVar428._16_8_;
          auVar578._24_8_ = auVar630._24_8_ + auVar428._24_8_;
          auVar631._0_8_ = auVar617._0_8_ + auVar607._0_8_;
          auVar631._8_8_ = auVar617._8_8_ + auVar607._8_8_;
          auVar631._16_8_ = auVar617._16_8_ + auVar607._16_8_;
          auVar631._24_8_ = auVar617._24_8_ + auVar607._24_8_;
          auVar560._0_8_ = auVar601._0_8_ + auVar659._0_8_;
          auVar560._8_8_ = auVar601._8_8_ + auVar659._8_8_;
          auVar560._16_8_ = auVar601._16_8_ + auVar659._16_8_;
          auVar560._24_8_ = auVar601._24_8_ + auVar659._24_8_;
          auVar608._0_8_ = auVar649._0_8_ + auVar484._0_8_;
          auVar608._8_8_ = auVar649._8_8_ + auVar484._8_8_;
          auVar608._16_8_ = auVar649._16_8_ + auVar484._16_8_;
          auVar608._24_8_ = auVar649._24_8_ + auVar484._24_8_;
          auVar537._8_8_ = 0;
          auVar537._0_8_ = local_16c0;
          auVar474 = vpcmpeqb_avx(auVar537,ZEXT816(0) << 0x40);
          auVar51 = vpmovsxbd_avx(auVar474 ^ ___xmm_ffffffffffffffffffffffffffffffff);
          auVar470 = vpshufd_avx(auVar474 ^ ___xmm_ffffffffffffffffffffffffffffffff,0x55);
          auVar470 = vpmovsxbd_avx(auVar470);
          auVar307._0_4_ = auVar51._0_4_ & uVar17;
          auVar307._4_4_ = auVar51._4_4_ & uVar18;
          auVar307._8_4_ = auVar51._8_4_ & uVar19;
          auVar307._12_4_ = auVar51._12_4_ & uVar20;
          auVar307._16_4_ = auVar470._0_4_ & uVar21;
          auVar307._20_4_ = auVar470._4_4_ & uVar38;
          auVar307._24_4_ = auVar470._8_4_ & uVar41;
          auVar307._28_4_ = auVar470._12_4_ & uVar22;
          iVar37 = vmovmskps_avx(auVar307);
          if (iVar37 == 0) {
            auVar307 = ZEXT432(0) << 0x20;
LAB_140a60920:
            local_2320 = auVar474._0_8_;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = local_2320;
            auVar51 = vpmovzxbw_avx(auVar9);
            auVar474 = vpand_avx(local_1a20._0_16_,auVar51);
            auVar474 = vpshufb_avx(auVar474,___xmm_00000000000000000e0c0a0806040200);
            if ((((((((SUB161(auVar474 >> 7,0) & 1) != 0 || (SUB161(auVar474 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar474 >> 0x17,0) & 1) != 0) || (SUB161(auVar474 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar474 >> 0x27,0) & 1) != 0) || (SUB161(auVar474 >> 0x2f,0) & 1) != 0
                 ) || (SUB161(auVar474 >> 0x37,0) & 1) != 0) ||
                (SUB161(auVar474 >> 0x3f,0) & 1) != 0) {
              auVar474 = vpmovzxwd_avx(auVar51);
              auVar474 = vpslld_avx(auVar474,0x1f);
              auVar470 = vpsrad_avx(auVar474,0x1f);
              auVar474 = vpunpckhwd_avx(auVar51,auVar51);
              auVar474 = vpslld_avx(auVar474,0x1f);
              auVar474 = vpsrad_avx(auVar474,0x1f);
              auVar541._16_16_ = auVar474;
              auVar541._0_16_ = auVar470;
              auVar458 = auVar458 & auVar541;
              if ((((((((SUB321(auVar458 >> 0x1f,0) & 1) != 0 ||
                       (SUB321(auVar458 >> 0x3f,0) & 1) != 0) ||
                      (SUB321(auVar458 >> 0x5f,0) & 1) != 0) || SUB321(auVar458 >> 0x7f,0) != '\0')
                    || (SUB321(auVar458 >> 0x9f,0) & 1) != 0) || SUB321(auVar458 >> 0xbf,0) != '\0')
                  || (SUB321(auVar458 >> 0xdf,0) & 1) != 0) || auVar458[0x1f] < '\0') {
                auVar496 = vpmovsxdq_avx(auVar470);
                auVar546 = vshufps_avx(auVar470,auVar470,0xfa);
                auVar430._16_16_ = auVar546;
                auVar430._0_16_ = auVar496;
                auVar496 = vpmovsxdq_avx(auVar474);
                auVar546 = vpshufd_avx(auVar474,0xfa);
                auVar460._16_16_ = auVar546;
                auVar460._0_16_ = auVar496;
                _local_1fc0 = vmaskmovpd_avx(auVar430,auVar305);
                _local_1fa0 = vmaskmovpd_avx(auVar460,auVar306);
                _local_1f80 = vmaskmovpd_avx(auVar430,auVar427);
                _local_1f60 = vmaskmovpd_avx(auVar460,auVar457);
                _local_1f40 = vmaskmovpd_avx(auVar430,auVar540);
                _local_1f20 = vmaskmovpd_avx(auVar460,auVar459);
                local_1f00 = vmaskmovpd_avx(auVar430,_local_23c0);
                local_1ee0 = vmaskmovpd_avx(auVar460,_local_23e0);
                _local_1ec0 = vmaskmovpd_avx(auVar430,auVar578);
                _local_1ea0 = vmaskmovpd_avx(auVar460,auVar631);
                _local_1e80 = vmaskmovpd_avx(auVar430,auVar560);
                _local_1e60 = vmaskmovpd_avx(auVar460,auVar608);
                auVar51 = vpsllw_avx(auVar51,0xf);
                auVar51 = vpacksswb_avx(auVar51,auVar51);
                if ((SUB161(auVar51 >> 7,0) & 1) != 0) {
                  local_1e40 = 1;
                }
                if ((SUB161(auVar51 >> 0xf,0) & 1) != 0) {
                  uStack_1e3f = 1;
                }
                if ((SUB161(auVar51 >> 0x17,0) & 1) != 0) {
                  uStack_1e3e = 1;
                }
                if ((SUB161(auVar51 >> 0x1f,0) & 1) != 0) {
                  uStack_1e3d = 1;
                }
                if ((SUB161(auVar51 >> 0x27,0) & 1) != 0) {
                  uStack_1e3c = 1;
                }
                if ((SUB161(auVar51 >> 0x2f,0) & 1) != 0) {
                  uStack_1e3b = 1;
                }
                if ((SUB161(auVar51 >> 0x37,0) & 1) != 0) {
                  uStack_1e3a = 1;
                }
                if ((SUB161(auVar51 >> 0x3f,0) & 1) != 0) {
                  uStack_1e39 = 1;
                }
                auVar308._0_4_ = auVar470._0_4_ & uVar17;
                auVar308._4_4_ = auVar470._4_4_ & uVar18;
                auVar308._8_4_ = auVar470._8_4_ & uVar19;
                auVar308._12_4_ = auVar470._12_4_ & uVar20;
                auVar308._16_4_ = auVar474._0_4_ & uVar21;
                auVar308._20_4_ = auVar474._4_4_ & uVar38;
                auVar308._24_4_ = auVar474._8_4_ & uVar41;
                auVar308._28_4_ = auVar474._12_4_ & uVar22;
                vmovmskps_avx(auVar308 | auVar307);
              }
            }
          }
          else {
            auVar428 = vminpd_avx(local_1840,auVar305);
            auVar496 = vshufps_avx(auVar51,auVar51,0x50);
            auVar51 = vshufps_avx(auVar51,auVar51,0xfa);
            auVar429._16_16_ = auVar51;
            auVar429._0_16_ = auVar496;
            _local_1fc0 = vmaskmovpd_avx(auVar429,auVar428);
            auVar51 = vshufps_avx(auVar470,auVar470,0x50);
            auVar470 = vshufps_avx(auVar470,auVar470,0xfa);
            auVar528._16_16_ = auVar470;
            auVar528._0_16_ = auVar51;
            auVar428 = vminpd_avx(local_1820,auVar306);
            _local_1fa0 = vmaskmovpd_avx(auVar528,auVar428);
            auVar428 = vminpd_avx(local_1800,auVar427);
            _local_1f80 = vmaskmovpd_avx(auVar429,auVar428);
            auVar428 = vminpd_avx(local_17e0,auVar457);
            _local_1f60 = vmaskmovpd_avx(auVar528,auVar428);
            auVar428 = vminpd_avx(local_17c0,auVar540);
            _local_1f40 = vmaskmovpd_avx(auVar429,auVar428);
            auVar428 = vminpd_avx(local_17a0,auVar459);
            _local_1f20 = vmaskmovpd_avx(auVar528,auVar428);
            auVar428 = vmaxpd_avx(local_1780,_local_23c0);
            local_1f00 = vmaskmovpd_avx(auVar429,auVar428);
            auVar428 = vmaxpd_avx(local_1760,_local_23e0);
            local_1ee0 = vmaskmovpd_avx(auVar528,auVar428);
            auVar428 = vmaxpd_avx(local_1740,auVar578);
            _local_1ec0 = vmaskmovpd_avx(auVar429,auVar428);
            auVar428 = vmaxpd_avx(local_1720,auVar631);
            _local_1ea0 = vmaskmovpd_avx(auVar528,auVar428);
            auVar428 = vmaxpd_avx(local_1700,auVar560);
            _local_1e80 = vmaskmovpd_avx(auVar429,auVar428);
            auVar428 = vmaxpd_avx(local_16e0,auVar608);
            _local_1e60 = vmaskmovpd_avx(auVar528,auVar428);
            auVar51 = vpshufd_avx(auVar537,0x44);
            auVar51 = vpcmpeqb_avx(auVar51,___xmm_00000000000000000000000000000000);
            bVar31 = ~(SUB161(auVar51 >> 7,0) & 1 | (SUB161(auVar51 >> 0xf,0) & 1) << 1 |
                       (SUB161(auVar51 >> 0x17,0) & 1) << 2 | (SUB161(auVar51 >> 0x1f,0) & 1) << 3 |
                       (SUB161(auVar51 >> 0x27,0) & 1) << 4 | (SUB161(auVar51 >> 0x2f,0) & 1) << 5 |
                      (SUB161(auVar51 >> 0x37,0) & 1) << 6);
            if ((bVar31 & 1) != 0) {
              local_1e40 = (undefined1)local_16c0;
            }
            if ((bVar31 & 2) != 0) {
              uStack_1e3f = (undefined1)(local_16c0 >> 8);
            }
            if ((bVar31 & 4) != 0) {
              uStack_1e3e = (undefined1)(local_16c0 >> 0x10);
            }
            if ((bVar31 & 8) != 0) {
              uStack_1e3d = (undefined1)(local_16c0 >> 0x18);
            }
            if ((bVar31 & 0x10) != 0) {
              uStack_1e3c = (undefined1)(local_16c0 >> 0x20);
            }
            if ((bVar31 & 0x20) != 0) {
              uStack_1e3b = (undefined1)(local_16c0 >> 0x28);
            }
            if ((bVar31 & 0x40) != 0) {
              uStack_1e3a = (undefined1)(local_16c0 >> 0x30);
            }
            if ((SUB161(auVar51 >> 0x3f,0) & 1) == 0) {
              uStack_1e39 = (undefined1)(local_16c0 >> 0x38);
            }
            if (local_1a00[0] != (char)iVar37) goto LAB_140a60920;
          }
          in_ZMM5 = ZEXT3264(_local_1f20);
          auVar474 = vshufps_avx(auVar189,auVar189,0x50);
          auVar51 = vshufps_avx(auVar189,auVar189,0xfa);
          auVar632._16_16_ = auVar51;
          auVar632._0_16_ = auVar474;
          auVar474 = vshufps_avx(auVar372,auVar372,0x50);
          auVar51 = vshufps_avx(auVar372,auVar372,0xfa);
          auVar650._16_16_ = auVar51;
          auVar650._0_16_ = auVar474;
          local_1840 = vmaskmovpd_avx(auVar632,_local_1fc0);
          local_1820 = vmaskmovpd_avx(auVar650,_local_1fa0);
          local_1800 = vmaskmovpd_avx(auVar632,_local_1f80);
          local_17e0 = vmaskmovpd_avx(auVar650,_local_1f60);
          local_17c0 = vmaskmovpd_avx(auVar632,_local_1f40);
          local_17a0 = vmaskmovpd_avx(auVar650,_local_1f20);
          local_1780 = vmaskmovpd_avx(auVar632,local_1f00);
          local_1760 = vmaskmovpd_avx(auVar650,local_1ee0);
          local_1740 = vmaskmovpd_avx(auVar632,_local_1ec0);
          local_1720 = vmaskmovpd_avx(auVar650,_local_1ea0);
          local_1700 = vmaskmovpd_avx(auVar632,_local_1e80);
          local_16e0 = vmaskmovpd_avx(auVar650,_local_1e60);
          uVar30 = local_16c0;
          if ((local_1a00._0_4_ & 1) != 0) {
            local_16c0 = CONCAT71(local_16c0._1_7_,local_1e40);
            uVar30 = local_16c0;
          }
          auVar542 = ZEXT864(0) << 0x40;
          if ((local_1a00._0_4_ & 2) != 0) {
            local_16c0._2_6_ = (undefined6)(uVar30 >> 0x10);
            local_16c0._0_1_ = (undefined1)uVar30;
            local_16c0._0_2_ = CONCAT11(uStack_1e3f,(undefined1)local_16c0);
            uVar30 = local_16c0;
          }
          if ((local_1a00._0_4_ & 4) != 0) {
            local_16c0._3_5_ = (undefined5)(uVar30 >> 0x18);
            local_16c0._0_2_ = (undefined2)uVar30;
            local_16c0._0_3_ = CONCAT12(uStack_1e3e,(undefined2)local_16c0);
            uVar30 = local_16c0;
          }
          if ((local_1a00._0_4_ & 8) != 0) {
            local_16c0._4_4_ = (undefined4)(uVar30 >> 0x20);
            local_16c0._0_3_ = (undefined3)uVar30;
            local_16c0._0_4_ = CONCAT13(uStack_1e3d,(undefined3)local_16c0);
            uVar30 = local_16c0;
          }
          if ((local_1a00._0_4_ & 0x10) != 0) {
            local_16c0._5_3_ = (undefined3)(uVar30 >> 0x28);
            local_16c0._0_4_ = (undefined4)uVar30;
            local_16c0._0_5_ = CONCAT14(uStack_1e3c,(undefined4)local_16c0);
            uVar30 = local_16c0;
          }
          if ((local_1a00._0_4_ & 0x20) != 0) {
            local_16c0._6_2_ = (undefined2)(uVar30 >> 0x30);
            local_16c0._0_5_ = (undefined5)uVar30;
            local_16c0._0_6_ = CONCAT15(uStack_1e3b,(undefined5)local_16c0);
            uVar30 = local_16c0;
          }
          local_16c0 = uVar30;
          if ((local_1a00._0_4_ & 0x40) != 0) {
            local_16c0._7_1_ = (undefined1)(uVar30 >> 0x38);
            local_16c0._0_6_ = (undefined6)uVar30;
            local_16c0._0_7_ = CONCAT16(uStack_1e3a,(undefined6)local_16c0);
          }
          if (local_1a00[0] < '\0') {
            local_16c0 = CONCAT17(uStack_1e39,(undefined7)local_16c0);
          }
        }
        uVar42 = uVar42 + 8;
        lVar29 = local_19c0._0_8_;
      } while ((int)uVar42 < (int)local_19e0._0_4_);
    }
    local_19c0._0_8_ = lVar29;
    if ((int)param_7 <= (int)uVar42) {
      auVar474 = vpshufd_avx(ZEXT416(param_7),0);
      goto LAB_140a63de0;
    }
    auVar51 = vpshufd_avx(ZEXT416(uVar42),0);
    auVar309._16_16_ = auVar51;
    auVar309._0_16_ = auVar51;
    local_19e0 = auVar309 | ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
    auVar474 = vpshufd_avx(ZEXT416(param_7),0);
    auVar554 = local_19e0._16_16_;
    auVar186 = vpcmpgtd_avx(auVar474,auVar554);
    auVar535 = vpcmpgtd_avx(auVar474,local_19e0._0_16_);
    auVar514._16_16_ = auVar186;
    auVar514._0_16_ = auVar535;
    auVar458 = vmaskmovps_avx(auVar514,*(undefined1 (*) [32])(param_2 + (int)(uVar42 << 2)));
    auVar470 = vpslld_avx(auVar51,3);
    auVar470 = vpsubd_avx(auVar470,auVar51);
    auVar51 = vpand_avx(auVar535,auVar470);
    lVar29 = param_4 + (longlong)auVar51._0_4_ * 8;
    lVar1 = param_4 + (longlong)auVar51._4_4_ * 8;
    lVar2 = param_4 + (longlong)auVar51._8_4_ * 8;
    lVar3 = param_4 + (longlong)auVar51._12_4_ * 8;
    auVar470 = vpand_avx(auVar186,auVar470);
    lVar4 = param_4 + (longlong)auVar470._0_4_ * 8;
    auVar496 = vpslld_avx(auVar458._16_16_,2);
    auVar496 = vpand_avx(auVar186,auVar496);
    auVar546 = vpslld_avx(auVar458._0_16_,2);
    auVar546 = vpand_avx(auVar535,auVar546);
    lVar5 = param_4 + (longlong)auVar470._4_4_ * 8;
    lVar6 = param_4 + (longlong)auVar470._8_4_ * 8;
    uVar42 = auVar535._0_4_;
    uVar44 = auVar535._4_4_;
    uVar16 = auVar535._8_4_;
    uVar17 = auVar535._12_4_;
    uVar18 = auVar186._0_4_;
    uVar19 = auVar186._4_4_;
    uVar20 = auVar186._8_4_;
    uVar21 = auVar186._12_4_;
    lVar7 = param_4 + (longlong)auVar470._12_4_ * 8;
    auVar470 = vpinsrb_avx(ZEXT116(*(byte *)((ulonglong)
                                             (uVar42 & 
                                             ___ymm_000001b8000001800000014800000110000000d8000000a00000006800000030
                                             ) + lVar29)),
                           (uint)*(byte *)((ulonglong)(uVar44 & _UNK_1512875a4) + lVar1),1);
    auVar470 = vpinsrb_avx(auVar470,(uint)*(byte *)((ulonglong)(uVar16 & _UNK_1512875a8) + lVar2),2)
    ;
    auVar470 = vpinsrb_avx(auVar470,(uint)*(byte *)((ulonglong)(uVar17 & _UNK_1512875ac) + lVar3),3)
    ;
    auVar470 = vpinsrb_avx(auVar470,(uint)*(byte *)((ulonglong)(uVar18 & _UNK_1512875b0) + lVar4),4)
    ;
    auVar470 = vpinsrb_avx(auVar470,(uint)*(byte *)((ulonglong)(uVar19 & _UNK_1512875b4) + lVar5),5)
    ;
    auVar470 = vpinsrb_avx(auVar470,(uint)*(byte *)((ulonglong)(uVar20 & _UNK_1512875b8) + lVar6),6)
    ;
    auVar470 = vpinsrb_avx(auVar470,(uint)*(byte *)((ulonglong)(uVar21 & _UNK_1512875bc) + lVar7),7)
    ;
    auVar185 = vpcmpeqd_avx(auVar474,auVar474);
    auVar496 = vpcmpeqd_avx(ZEXT416(*(uint *)(local_19c0._0_8_ + (longlong)auVar496._0_4_)),auVar185
                           );
    auVar546 = vpcmpeqd_avx(ZEXT416(*(uint *)(local_19c0._0_8_ + (longlong)auVar546._0_4_)),auVar185
                           );
    auVar470 = vpcmpeqb_avx(auVar470,(undefined1  [16])0x0);
    auVar470 = auVar470 ^ auVar185;
    auVar185 = vpmovsxbd_avx(auVar470);
    auVar547 = vpshufd_avx(auVar470,0x55);
    auVar547 = vpmovsxbd_avx(auVar547);
    auVar310._0_4_ = ~auVar546._0_4_ & auVar185._0_4_ & uVar42;
    auVar310._4_4_ = ~auVar546._4_4_ & auVar185._4_4_ & uVar44;
    auVar310._8_4_ = ~auVar546._8_4_ & auVar185._8_4_ & uVar16;
    auVar310._12_4_ = ~auVar546._12_4_ & auVar185._12_4_ & uVar17;
    auVar310._16_4_ = ~auVar496._0_4_ & auVar547._0_4_ & uVar18;
    auVar310._20_4_ = ~auVar496._4_4_ & auVar547._4_4_ & uVar19;
    auVar310._24_4_ = ~auVar496._8_4_ & auVar547._8_4_ & uVar20;
    auVar310._28_4_ = ~auVar496._12_4_ & auVar547._12_4_ & uVar21;
    uVar45 = vmovmskps_avx(auVar310);
    if (uVar45 == 0) goto LAB_140a63de0;
    auVar246._0_4_ =
         uVar42 & ___ymm_000001880000015000000118000000e0000000a8000000700000003800000000;
    auVar246._4_4_ = uVar44 & _UNK_1512874e4;
    auVar246._8_4_ = uVar16 & _UNK_1512874e8;
    auVar246._12_4_ = uVar17 & _UNK_1512874ec;
    uVar38 = vextractps_avx(auVar246,1);
    uVar41 = vextractps_avx(auVar246,2);
    auVar391._8_8_ = 0;
    auVar391._0_8_ = *(ulonglong *)(param_4 + (longlong)auVar51._0_4_ * 8);
    uVar36 = vextractps_avx(auVar246,3);
    auVar547 = vmovhps_avx(auVar391,*(undefined8 *)((ulonglong)uVar38 + lVar1));
    auVar247._8_8_ = 0;
    auVar247._0_8_ = *(ulonglong *)((ulonglong)uVar41 + lVar2);
    auVar445 = vmovhps_avx(auVar247,*(undefined8 *)(CONCAT44(uVar33,uVar36) + lVar3));
    auVar248._8_8_ = 0;
    auVar248._0_8_ = *(ulonglong *)((ulonglong)(uVar20 & _UNK_1512874f8) + lVar6);
    auVar189 = vmovhps_avx(auVar248,*(undefined8 *)((ulonglong)(uVar21 & _UNK_1512874fc) + lVar7));
    auVar392._8_8_ = 0;
    auVar392._0_8_ = *(ulonglong *)((ulonglong)(uVar18 & _UNK_1512874f0) + lVar4);
    auVar372 = vmovhps_avx(auVar392,*(undefined8 *)((ulonglong)(uVar19 & _UNK_1512874f4) + lVar5));
    auVar655._0_4_ =
         uVar42 & ___ymm_000001900000015800000120000000e8000000b0000000780000004000000008;
    auVar655._4_4_ = uVar44 & _UNK_151287504;
    auVar655._8_4_ = uVar16 & _UNK_151287508;
    auVar655._12_4_ = uVar17 & _UNK_15128750c;
    uVar38 = vextractps_avx(auVar655,1);
    uVar41 = vextractps_avx(auVar655,2);
    uVar36 = vextractps_avx(auVar655,3);
    auVar623._8_8_ = 0;
    auVar623._0_8_ = *(ulonglong *)((ulonglong)(uVar20 & _UNK_151287518) + lVar6);
    auVar190 = vmovhps_avx(auVar623,*(undefined8 *)((ulonglong)(uVar21 & _UNK_15128751c) + lVar7));
    auVar644._8_8_ = 0;
    auVar644._0_8_ = *(ulonglong *)((ulonglong)(uVar18 & _UNK_151287510) + lVar4);
    auVar188 = vmovhps_avx(auVar644,*(undefined8 *)((ulonglong)(uVar19 & _UNK_151287514) + lVar5));
    auVar187 = vpackssdw_avx(auVar535,auVar186);
    auVar555._8_8_ = 0;
    auVar555._0_8_ = *(ulonglong *)((ulonglong)uVar41 + lVar2);
    auVar535 = vmovhps_avx(auVar555,*(undefined8 *)(CONCAT44(uVar33,uVar36) + lVar3));
    auVar571._8_8_ = 0;
    auVar571._0_8_ = *(ulonglong *)((ulonglong)auVar655._0_4_ + lVar29);
    auVar191 = vmovhps_avx(auVar571,*(undefined8 *)((ulonglong)uVar38 + lVar1));
    auVar656._0_4_ =
         uVar42 & ___ymm_000001980000016000000128000000f0000000b8000000800000004800000010;
    auVar656._4_4_ = uVar44 & _UNK_151287524;
    auVar656._8_4_ = uVar16 & _UNK_151287528;
    auVar656._12_4_ = uVar17 & _UNK_15128752c;
    uVar38 = vextractps_avx(auVar656,1);
    auVar609._16_16_ = auVar445;
    auVar609._0_16_ = auVar547;
    uVar41 = vextractps_avx(auVar656,2);
    auVar311._16_16_ = auVar189;
    auVar311._0_16_ = auVar372;
    auVar249._8_8_ = 0;
    auVar249._0_8_ = *(ulonglong *)((ulonglong)(uVar20 & _UNK_151287538) + lVar6);
    auVar185 = vmovhps_avx(auVar249,*(undefined8 *)((ulonglong)(uVar21 & _UNK_15128753c) + lVar7));
    auVar593._8_8_ = 0;
    auVar593._0_8_ = *(ulonglong *)((ulonglong)(uVar18 & _UNK_151287530) + lVar4);
    uVar22 = vextractps_avx(auVar656,3);
    auVar186 = vmovhps_avx(auVar593,*(undefined8 *)((ulonglong)(uVar19 & _UNK_151287534) + lVar5));
    auVar602._16_16_ = auVar190;
    auVar602._0_16_ = auVar188;
    auVar594._8_8_ = 0;
    auVar594._0_8_ = *(ulonglong *)((ulonglong)uVar41 + lVar2);
    auVar192 = vmovhps_avx(auVar594,*(undefined8 *)((ulonglong)uVar22 + lVar3));
    auVar615._8_8_ = 0;
    auVar615._0_8_ = *(ulonglong *)((ulonglong)auVar656._0_4_ + lVar29);
    auVar51 = vmovhpd_avx(auVar615,*(undefined8 *)((ulonglong)uVar38 + lVar1));
    auVar624._0_4_ =
         uVar42 & ___ymm_000001a00000016800000130000000f8000000c0000000880000005000000018;
    auVar624._4_4_ = uVar44 & _UNK_151287544;
    auVar624._8_4_ = uVar16 & _UNK_151287548;
    auVar624._12_4_ = uVar17 & _UNK_15128754c;
    uVar38 = vextractps_avx(auVar624,1);
    uVar41 = vextractps_avx(auVar624,2);
    uVar22 = vextractps_avx(auVar624,3);
    auVar561._16_16_ = auVar535;
    auVar561._0_16_ = auVar191;
    local_1a00._16_16_ = auVar185;
    local_1a00._0_16_ = auVar186;
    auVar250._8_8_ = 0;
    auVar250._0_8_ = *(ulonglong *)((ulonglong)(uVar20 & _UNK_151287558) + lVar6);
    auVar185 = vmovhps_avx(auVar250,*(undefined8 *)((ulonglong)(uVar21 & _UNK_15128755c) + lVar7));
    auVar556._8_8_ = 0;
    auVar556._0_8_ = *(ulonglong *)((ulonglong)(uVar18 & _UNK_151287550) + lVar4);
    auVar186 = vmovhps_avx(auVar556,*(undefined8 *)((ulonglong)(uVar19 & _UNK_151287554) + lVar5));
    local_1a20._16_16_ = auVar192;
    local_1a20._0_16_ = auVar51;
    auVar572._8_8_ = 0;
    auVar572._0_8_ = *(ulonglong *)((ulonglong)uVar41 + lVar2);
    auVar192 = vmovhps_avx(auVar572,*(undefined8 *)((ulonglong)uVar22 + lVar3));
    auVar595._8_8_ = 0;
    auVar595._0_8_ = *(ulonglong *)((ulonglong)auVar624._0_4_ + lVar29);
    auVar51 = vmovhpd_avx(auVar595,*(undefined8 *)((ulonglong)uVar38 + lVar1));
    auVar604._0_4_ =
         uVar42 & ___ymm_000001a8000001700000013800000100000000c8000000900000005800000020;
    auVar604._4_4_ = uVar44 & _UNK_151287564;
    auVar604._8_4_ = uVar16 & _UNK_151287568;
    auVar604._12_4_ = uVar17 & _UNK_15128756c;
    uVar38 = vextractps_avx(auVar604,1);
    uVar41 = vextractps_avx(auVar604,2);
    uVar22 = vextractps_avx(auVar604,3);
    local_1920._16_16_ = auVar185;
    local_1920._0_16_ = auVar186;
    auVar562._16_16_ = auVar192;
    auVar562._0_16_ = auVar51;
    auVar557._8_8_ = 0;
    auVar557._0_8_ = *(ulonglong *)((ulonglong)(uVar20 & _UNK_151287578) + lVar6);
    auVar185 = vmovhpd_avx(auVar557,*(undefined8 *)((ulonglong)(uVar21 & _UNK_15128757c) + lVar7));
    auVar251._8_8_ = 0;
    auVar251._0_8_ = *(ulonglong *)((ulonglong)(uVar18 & _UNK_151287570) + lVar4);
    auVar505 = vmovhps_avx(auVar251,*(undefined8 *)((ulonglong)(uVar19 & _UNK_151287574) + lVar5));
    auVar573._8_8_ = 0;
    auVar573._0_8_ = *(ulonglong *)((ulonglong)uVar41 + lVar2);
    auVar186 = vmovhpd_avx(auVar573,*(undefined8 *)((ulonglong)uVar22 + lVar3));
    local_1940._16_16_ = auVar185;
    local_1940._0_16_ = auVar505;
    auVar252._8_8_ = 0;
    auVar252._0_8_ = *(ulonglong *)((ulonglong)auVar604._0_4_ + lVar29);
    auVar185 = vmovhps_avx(auVar252,*(undefined8 *)((ulonglong)uVar38 + lVar1));
    auVar507._0_4_ =
         uVar42 & ___ymm_000001b0000001780000014000000108000000d0000000980000006000000028;
    auVar507._4_4_ = uVar44 & _UNK_151287584;
    auVar507._8_4_ = uVar16 & _UNK_151287588;
    auVar507._12_4_ = uVar17 & _UNK_15128758c;
    uVar42 = vextractps_avx(auVar507,1);
    uVar44 = vextractps_avx(auVar507,2);
    uVar16 = vextractps_avx(auVar507,3);
    register0x00001210 = auVar186;
    local_1a60 = auVar185;
    auVar508._8_8_ = 0;
    auVar508._0_8_ = *(ulonglong *)((ulonglong)(uVar20 & _UNK_151287598) + lVar6);
    auVar185 = vmovhps_avx(auVar508,*(undefined8 *)((ulonglong)(uVar21 & _UNK_15128759c) + lVar7));
    auVar253._8_8_ = 0;
    auVar253._0_8_ = *(ulonglong *)((ulonglong)(uVar18 & _UNK_151287590) + lVar4);
    auVar186 = vmovhps_avx(auVar253,*(undefined8 *)((ulonglong)(uVar19 & _UNK_151287594) + lVar5));
    local_1960._16_16_ = auVar185;
    local_1960._0_16_ = auVar186;
    auVar254._8_8_ = 0;
    auVar254._0_8_ = *(ulonglong *)((ulonglong)uVar44 + lVar2);
    auVar185 = vmovhps_avx(auVar254,*(undefined8 *)((ulonglong)uVar16 + lVar3));
    auVar509._8_8_ = 0;
    auVar509._0_8_ = *(ulonglong *)((ulonglong)auVar507._0_4_ + lVar29);
    auVar186 = vmovhps_avx(auVar509,*(undefined8 *)((ulonglong)uVar42 + lVar1));
    local_1980._16_16_ = auVar185;
    local_1980._0_16_ = auVar186;
    auVar496 = vpackssdw_avx(auVar546,auVar496);
    auVar470 = vpmovsxbw_avx(auVar470);
    local_18f0 = vpandn_avx(auVar496,auVar470);
    auVar470 = vpand_avx(local_18f0,auVar187);
    auVar496 = vpslld_avx(auVar458._0_16_,7);
    auVar546 = vpmovsxwd_avx(auVar470);
    auVar496 = vpand_avx(auVar546,auVar496);
    auVar185 = vpunpckhwd_avx(auVar470,auVar470);
    auVar470 = vpslld_avx(auVar458._16_16_,7);
    local_19c0._16_16_ = auVar185;
    local_19c0._0_16_ = auVar546;
    auVar470 = vpand_avx(auVar185,auVar470);
    lVar29 = param_3 + auVar470._8_4_;
    auVar255._8_8_ = 0;
    auVar255._0_8_ = *(ulonglong *)(param_3 + auVar470._8_4_);
    local_8d0 = vmovhpd_avx(auVar255,*(undefined8 *)(param_3 + auVar470._12_4_));
    auVar256._8_8_ = 0;
    auVar256._0_8_ = *(ulonglong *)(param_3 + auVar470._0_4_);
    local_8e0 = vmovhps_avx(auVar256,*(undefined8 *)(param_3 + auVar470._4_4_));
    auVar257._8_8_ = 0;
    auVar257._0_8_ = *(ulonglong *)(param_3 + auVar496._8_4_);
    local_8f0 = vmovhps_avx(auVar257,*(undefined8 *)(param_3 + auVar496._12_4_));
    lVar1 = param_3 + auVar470._12_4_;
    uVar25 = auVar546._0_4_;
    auVar258._0_4_ =
         uVar25 & ___ymm_0000000800000008000000080000000800000008000000080000000800000008;
    uVar26 = auVar546._4_4_;
    auVar258._4_4_ = uVar26 & _UNK_150b50d64;
    uVar27 = auVar546._8_4_;
    auVar258._8_4_ = uVar27 & _UNK_150b50d68;
    uVar28 = auVar546._12_4_;
    auVar258._12_4_ = uVar28 & _UNK_150b50d6c;
    uVar464 = auVar185._0_4_;
    uVar465 = auVar185._4_4_;
    uVar466 = auVar185._8_4_;
    uVar467 = auVar185._12_4_;
    uVar42 = vextractps_avx(auVar258,1);
    uVar44 = vextractps_avx(auVar258,2);
    auVar393._8_8_ = 0;
    auVar393._0_8_ = *(ulonglong *)((ulonglong)(uVar466 & _UNK_150b50d78) + lVar29);
    local_890 = vmovhps_avx(auVar393,*(undefined8 *)((ulonglong)(uVar467 & _UNK_150b50d7c) + lVar1))
    ;
    auVar476._8_8_ = 0;
    auVar476._0_8_ = *(ulonglong *)(param_3 + auVar496._0_4_);
    local_900 = vmovhpd_avx(auVar476,*(undefined8 *)(param_3 + auVar496._4_4_));
    lVar2 = param_3 + auVar470._0_4_;
    auVar259._0_4_ =
         uVar25 & ___ymm_0000002000000020000000200000002000000020000000200000002000000020;
    auVar259._4_4_ = uVar26 & _UNK_151287364;
    auVar259._8_4_ = uVar27 & _UNK_151287368;
    auVar259._12_4_ = uVar28 & _UNK_15128736c;
    uVar22 = vextractps_avx(auVar259,1);
    uVar23 = vextractps_avx(auVar259,2);
    uVar24 = vextractps_avx(auVar259,3);
    auVar260._8_8_ = 0;
    auVar260._0_8_ = *(ulonglong *)((ulonglong)(uVar464 & _UNK_150b50d70) + lVar2);
    lVar3 = param_3 + auVar470._4_4_;
    local_8a0 = vmovhps_avx(auVar260,*(undefined8 *)((ulonglong)(uVar465 & _UNK_150b50d74) + lVar3))
    ;
    auVar261._0_4_ =
         uVar25 & ___ymm_0000003800000038000000380000003800000038000000380000003800000038;
    auVar261._4_4_ = uVar26 & _UNK_1512873c4;
    auVar261._8_4_ = uVar27 & _UNK_1512873c8;
    auVar261._12_4_ = uVar28 & _UNK_1512873cc;
    uVar16 = vextractps_avx(auVar261,1);
    uVar17 = vextractps_avx(auVar261,2);
    uVar18 = vextractps_avx(auVar261,3);
    lVar4 = param_3 + auVar496._0_4_;
    auVar262._0_4_ =
         uVar25 & ___ymm_0000005000000050000000500000005000000050000000500000005000000050;
    auVar262._4_4_ = uVar26 & _UNK_151287424;
    auVar262._8_4_ = uVar27 & _UNK_151287428;
    auVar262._12_4_ = uVar28 & _UNK_15128742c;
    uVar19 = vextractps_avx(auVar262,1);
    uVar20 = vextractps_avx(auVar262,2);
    uVar21 = vextractps_avx(auVar262,3);
    uVar30 = CONCAT44(0,uVar26 & _UNK_151287444);
    local_1300._0_8_ = uVar30;
    auVar263._0_4_ =
         uVar25 & ___ymm_0000006000000060000000600000006000000060000000600000006000000060;
    auVar263._4_4_ = uVar26 & _UNK_151287464;
    auVar263._8_4_ = uVar27 & _UNK_151287468;
    auVar263._12_4_ = uVar28 & _UNK_15128746c;
    uVar38 = vextractps_avx(auVar263,1);
    uVar41 = vextractps_avx(auVar263,2);
    auVar264._8_8_ = 0;
    auVar264._0_8_ = *(ulonglong *)((ulonglong)auVar258._0_4_ + lVar4);
    lVar5 = param_3 + auVar496._4_4_;
    local_8c0 = vmovhps_avx(auVar264,*(undefined8 *)((ulonglong)uVar42 + lVar5));
    lVar6 = param_3 + auVar496._8_4_;
    param_3 = param_3 + auVar496._12_4_;
    auVar394._8_8_ = 0;
    auVar394._0_8_ = *(ulonglong *)((ulonglong)uVar44 + lVar6);
    local_8b0 = vmovhps_avx(auVar394,*(undefined8 *)((ulonglong)auVar258._12_4_ + param_3));
    auVar395._8_8_ = 0;
    auVar395._0_8_ =
         *(ulonglong *)
          ((ulonglong)
           (uVar25 & ___ymm_0000001000000010000000100000001000000010000000100000001000000010) +
          lVar4);
    local_880 = vmovhps_avx(auVar395,*(undefined8 *)((ulonglong)(uVar26 & _UNK_150b51424) + lVar5));
    auVar265._8_8_ = 0;
    auVar265._0_8_ = *(ulonglong *)((ulonglong)(uVar466 & _UNK_150b51438) + lVar29);
    local_850 = vmovhps_avx(auVar265,*(undefined8 *)((ulonglong)(uVar467 & _UNK_150b5143c) + lVar1))
    ;
    auVar266._8_8_ = 0;
    auVar266._0_8_ = *(ulonglong *)((ulonglong)(uVar464 & _UNK_150b51430) + lVar2);
    local_860 = vmovhps_avx(auVar266,*(undefined8 *)((ulonglong)(uVar465 & _UNK_150b51434) + lVar3))
    ;
    auVar267._8_8_ = 0;
    auVar267._0_8_ = *(ulonglong *)((ulonglong)(uVar27 & _UNK_150b51428) + lVar6);
    local_870 = vmovhps_avx(auVar267,*(undefined8 *)((ulonglong)(uVar28 & _UNK_150b5142c) + param_3)
                           );
    auVar268._8_8_ = 0;
    auVar268._0_8_ =
         *(ulonglong *)
          ((ulonglong)
           (uVar25 & ___ymm_0000001800000018000000180000001800000018000000180000001800000018) +
          lVar4);
    local_840 = vmovhps_avx(auVar268,*(undefined8 *)((ulonglong)(uVar26 & _UNK_151287344) + lVar5));
    auVar396._8_8_ = 0;
    auVar396._0_8_ = *(ulonglong *)((ulonglong)(uVar466 & _UNK_151287358) + lVar29);
    local_810 = vmovhps_avx(auVar396,*(undefined8 *)((ulonglong)(uVar467 & _UNK_15128735c) + lVar1))
    ;
    auVar397._8_8_ = 0;
    auVar397._0_8_ = *(ulonglong *)((ulonglong)(uVar464 & _UNK_151287350) + lVar2);
    local_820 = vmovhps_avx(auVar397,*(undefined8 *)((ulonglong)(uVar465 & _UNK_151287354) + lVar3))
    ;
    auVar398._8_8_ = 0;
    auVar398._0_8_ = *(ulonglong *)((ulonglong)(uVar27 & _UNK_151287348) + lVar6);
    local_830 = vmovhps_avx(auVar398,*(undefined8 *)((ulonglong)(uVar28 & _UNK_15128734c) + param_3)
                           );
    auVar399._8_8_ = 0;
    auVar399._0_8_ = *(ulonglong *)((ulonglong)auVar259._0_4_ + lVar4);
    local_800 = vmovhps_avx(auVar399,*(undefined8 *)((ulonglong)uVar22 + lVar5));
    auVar269._8_8_ = 0;
    auVar269._0_8_ = *(ulonglong *)((ulonglong)(uVar466 & _UNK_151287378) + lVar29);
    local_7d0 = vmovhps_avx(auVar269,*(undefined8 *)((ulonglong)(uVar467 & _UNK_15128737c) + lVar1))
    ;
    auVar270._8_8_ = 0;
    auVar270._0_8_ = *(ulonglong *)((ulonglong)(uVar464 & _UNK_151287370) + lVar2);
    local_7e0 = vmovhps_avx(auVar270,*(undefined8 *)((ulonglong)(uVar465 & _UNK_151287374) + lVar3))
    ;
    auVar271._8_8_ = 0;
    auVar271._0_8_ = *(ulonglong *)((ulonglong)uVar23 + lVar6);
    local_7f0 = vmovhps_avx(auVar271,*(undefined8 *)((ulonglong)uVar24 + param_3));
    auVar272._8_8_ = 0;
    auVar272._0_8_ =
         *(ulonglong *)
          ((ulonglong)
           (uVar25 & ___ymm_0000002800000028000000280000002800000028000000280000002800000028) +
          lVar4);
    local_7c0 = vmovhps_avx(auVar272,*(undefined8 *)((ulonglong)(uVar26 & _UNK_151287384) + lVar5));
    auVar400._8_8_ = 0;
    auVar400._0_8_ = *(ulonglong *)((ulonglong)(uVar466 & _UNK_151287398) + lVar29);
    local_790 = vmovhps_avx(auVar400,*(undefined8 *)((ulonglong)(uVar467 & _UNK_15128739c) + lVar1))
    ;
    auVar401._8_8_ = 0;
    auVar401._0_8_ = *(ulonglong *)((ulonglong)(uVar464 & _UNK_151287390) + lVar2);
    local_7a0 = vmovhps_avx(auVar401,*(undefined8 *)((ulonglong)(uVar465 & _UNK_151287394) + lVar3))
    ;
    auVar402._8_8_ = 0;
    auVar402._0_8_ = *(ulonglong *)((ulonglong)(uVar27 & _UNK_151287388) + lVar6);
    local_7b0 = vmovhps_avx(auVar402,*(undefined8 *)((ulonglong)(uVar28 & _UNK_15128738c) + param_3)
                           );
    auVar403._8_8_ = 0;
    auVar403._0_8_ =
         *(ulonglong *)
          ((ulonglong)
           (uVar25 & ___ymm_0000003000000030000000300000003000000030000000300000003000000030) +
          lVar4);
    local_780 = vmovhps_avx(auVar403,*(undefined8 *)((ulonglong)(uVar26 & _UNK_1512873a4) + lVar5));
    auVar273._8_8_ = 0;
    auVar273._0_8_ = *(ulonglong *)((ulonglong)(uVar466 & _UNK_1512873b8) + lVar29);
    local_750 = vmovhps_avx(auVar273,*(undefined8 *)((ulonglong)(uVar467 & _UNK_1512873bc) + lVar1))
    ;
    auVar274._8_8_ = 0;
    auVar274._0_8_ = *(ulonglong *)((ulonglong)(uVar464 & _UNK_1512873b0) + lVar2);
    local_760 = vmovhps_avx(auVar274,*(undefined8 *)((ulonglong)(uVar465 & _UNK_1512873b4) + lVar3))
    ;
    auVar275._8_8_ = 0;
    auVar275._0_8_ = *(ulonglong *)((ulonglong)(uVar27 & _UNK_1512873a8) + lVar6);
    local_770 = vmovhps_avx(auVar275,*(undefined8 *)((ulonglong)(uVar28 & _UNK_1512873ac) + param_3)
                           );
    auVar276._8_8_ = 0;
    auVar276._0_8_ = *(ulonglong *)((ulonglong)auVar261._0_4_ + lVar4);
    local_740 = vmovhps_avx(auVar276,*(undefined8 *)((ulonglong)uVar16 + lVar5));
    auVar404._8_8_ = 0;
    auVar404._0_8_ = *(ulonglong *)((ulonglong)(uVar466 & _UNK_1512873d8) + lVar29);
    local_710 = vmovhps_avx(auVar404,*(undefined8 *)((ulonglong)(uVar467 & _UNK_1512873dc) + lVar1))
    ;
    auVar405._8_8_ = 0;
    auVar405._0_8_ = *(ulonglong *)((ulonglong)(uVar464 & _UNK_1512873d0) + lVar2);
    local_720 = vmovhps_avx(auVar405,*(undefined8 *)((ulonglong)(uVar465 & _UNK_1512873d4) + lVar3))
    ;
    auVar406._8_8_ = 0;
    auVar406._0_8_ = *(ulonglong *)((ulonglong)uVar17 + lVar6);
    local_730 = vmovhps_avx(auVar406,*(undefined8 *)((ulonglong)uVar18 + param_3));
    auVar407._8_8_ = 0;
    auVar407._0_8_ =
         *(ulonglong *)
          ((ulonglong)
           (uVar25 & ___ymm_0000004000000040000000400000004000000040000000400000004000000040) +
          lVar4);
    local_700 = vmovhps_avx(auVar407,*(undefined8 *)((ulonglong)(uVar26 & _UNK_1512873e4) + lVar5));
    auVar277._8_8_ = 0;
    auVar277._0_8_ = *(ulonglong *)((ulonglong)(uVar466 & _UNK_1512873f8) + lVar29);
    local_6d0 = vmovhps_avx(auVar277,*(undefined8 *)((ulonglong)(uVar467 & _UNK_1512873fc) + lVar1))
    ;
    auVar278._8_8_ = 0;
    auVar278._0_8_ = *(ulonglong *)((ulonglong)(uVar464 & _UNK_1512873f0) + lVar2);
    local_6e0 = vmovhps_avx(auVar278,*(undefined8 *)((ulonglong)(uVar465 & _UNK_1512873f4) + lVar3))
    ;
    auVar279._8_8_ = 0;
    auVar279._0_8_ = *(ulonglong *)((ulonglong)(uVar27 & _UNK_1512873e8) + lVar6);
    local_6f0 = vmovhps_avx(auVar279,*(undefined8 *)((ulonglong)(uVar28 & _UNK_1512873ec) + param_3)
                           );
    auVar280._8_8_ = 0;
    auVar280._0_8_ =
         *(ulonglong *)
          ((ulonglong)
           (uVar25 & ___ymm_0000004800000048000000480000004800000048000000480000004800000048) +
          lVar4);
    local_6c0 = vmovhps_avx(auVar280,*(undefined8 *)((ulonglong)(uVar26 & _UNK_151287404) + lVar5));
    auVar408._8_8_ = 0;
    auVar408._0_8_ = *(ulonglong *)((ulonglong)(uVar466 & _UNK_151287418) + lVar29);
    local_690 = vmovhps_avx(auVar408,*(undefined8 *)((ulonglong)(uVar467 & _UNK_15128741c) + lVar1))
    ;
    auVar409._8_8_ = 0;
    auVar409._0_8_ = *(ulonglong *)((ulonglong)(uVar464 & _UNK_151287410) + lVar2);
    local_6a0 = vmovhps_avx(auVar409,*(undefined8 *)((ulonglong)(uVar465 & _UNK_151287414) + lVar3))
    ;
    auVar410._8_8_ = 0;
    auVar410._0_8_ = *(ulonglong *)((ulonglong)(uVar27 & _UNK_151287408) + lVar6);
    local_6b0 = vmovhps_avx(auVar410,*(undefined8 *)((ulonglong)(uVar28 & _UNK_15128740c) + param_3)
                           );
    auVar411._8_8_ = 0;
    auVar411._0_8_ = *(ulonglong *)((ulonglong)auVar262._0_4_ + lVar4);
    local_680 = vmovhps_avx(auVar411,*(undefined8 *)((ulonglong)uVar19 + lVar5));
    auVar281._8_8_ = 0;
    auVar281._0_8_ = *(ulonglong *)((ulonglong)(uVar466 & _UNK_151287438) + lVar29);
    local_650 = vmovhps_avx(auVar281,*(undefined8 *)((ulonglong)(uVar467 & _UNK_15128743c) + lVar1))
    ;
    auVar282._8_8_ = 0;
    auVar282._0_8_ = *(ulonglong *)((ulonglong)(uVar464 & _UNK_151287430) + lVar2);
    local_660 = vmovhps_avx(auVar282,*(undefined8 *)((ulonglong)(uVar465 & _UNK_151287434) + lVar3))
    ;
    auVar283._8_8_ = 0;
    auVar283._0_8_ = *(ulonglong *)((ulonglong)uVar20 + lVar6);
    local_670 = vmovhps_avx(auVar283,*(undefined8 *)((ulonglong)uVar21 + param_3));
    auVar284._8_8_ = 0;
    auVar284._0_8_ =
         *(ulonglong *)
          ((ulonglong)
           (uVar25 & ___ymm_0000005800000058000000580000005800000058000000580000005800000058) +
          lVar4);
    local_640 = vmovhps_avx(auVar284,*(undefined8 *)(uVar30 + lVar5));
    auVar412._8_8_ = 0;
    auVar412._0_8_ = *(ulonglong *)((ulonglong)(uVar466 & _UNK_151287458) + lVar29);
    local_610 = vmovhps_avx(auVar412,*(undefined8 *)((ulonglong)(uVar467 & _UNK_15128745c) + lVar1))
    ;
    auVar413._8_8_ = 0;
    auVar413._0_8_ = *(ulonglong *)((ulonglong)(uVar464 & _UNK_151287450) + lVar2);
    local_620 = vmovhps_avx(auVar413,*(undefined8 *)((ulonglong)(uVar465 & _UNK_151287454) + lVar3))
    ;
    auVar414._8_8_ = 0;
    auVar414._0_8_ = *(ulonglong *)((ulonglong)(uVar27 & _UNK_151287448) + lVar6);
    local_630 = vmovhps_avx(auVar414,*(undefined8 *)((ulonglong)(uVar28 & _UNK_15128744c) + param_3)
                           );
    auVar415._8_8_ = 0;
    auVar415._0_8_ = *(ulonglong *)((ulonglong)auVar263._0_4_ + lVar4);
    local_600 = vmovhps_avx(auVar415,*(undefined8 *)((ulonglong)uVar38 + lVar5));
    auVar285._8_8_ = 0;
    auVar285._0_8_ = *(ulonglong *)((ulonglong)(uVar466 & _UNK_151287478) + lVar29);
    local_5d0 = vmovhps_avx(auVar285,*(undefined8 *)((ulonglong)(uVar467 & _UNK_15128747c) + lVar1))
    ;
    auVar286._8_8_ = 0;
    auVar286._0_8_ = *(ulonglong *)((ulonglong)(uVar464 & _UNK_151287470) + lVar2);
    local_5e0 = vmovhps_avx(auVar286,*(undefined8 *)((ulonglong)(uVar465 & _UNK_151287474) + lVar3))
    ;
    auVar287._8_8_ = 0;
    auVar287._0_8_ = *(ulonglong *)((ulonglong)uVar41 + lVar6);
    local_5f0 = vmovhps_avx(auVar287,*(undefined8 *)((ulonglong)auVar263._12_4_ + param_3));
    auVar288._0_4_ =
         uVar25 & ___ymm_0000006800000068000000680000006800000068000000680000006800000068;
    auVar288._4_4_ = uVar26 & _UNK_151287484;
    auVar288._8_4_ = uVar27 & _UNK_151287488;
    auVar288._12_4_ = uVar28 & _UNK_15128748c;
    uVar36 = (undefined4)((ulonglong)lVar3 >> 0x20);
    uVar33 = vextractps_avx(auVar288,1);
    uVar42 = vextractps_avx(auVar288,2);
    auVar416._8_8_ = 0;
    auVar416._0_8_ = *(ulonglong *)((ulonglong)(uVar466 & _UNK_151287498) + lVar29);
    local_590 = vmovhps_avx(auVar416,*(undefined8 *)((ulonglong)(uVar467 & _UNK_15128749c) + lVar1))
    ;
    auVar289._8_8_ = 0;
    auVar289._0_8_ = *(ulonglong *)((ulonglong)(uVar464 & _UNK_151287490) + lVar2);
    local_5a0 = vmovhps_avx(auVar289,*(undefined8 *)((ulonglong)(uVar465 & _UNK_151287494) + lVar3))
    ;
    auVar290._8_8_ = 0;
    auVar290._0_8_ = *(ulonglong *)((ulonglong)uVar42 + lVar6);
    local_5b0 = vmovhps_avx(auVar290,*(undefined8 *)((ulonglong)auVar288._12_4_ + param_3));
    auVar291._8_8_ = 0;
    auVar291._0_8_ = *(ulonglong *)((ulonglong)auVar288._0_4_ + lVar4);
    local_5c0 = vmovhps_avx(auVar291,*(undefined8 *)(CONCAT44(uVar36,uVar33) + lVar5));
    auVar417._0_4_ =
         uVar25 & ___ymm_0000007000000070000000700000007000000070000000700000007000000070;
    auVar417._4_4_ = uVar26 & _UNK_1512874a4;
    auVar417._8_4_ = uVar27 & _UNK_1512874a8;
    auVar417._12_4_ = uVar28 & _UNK_1512874ac;
    uVar33 = vextractps_avx(auVar417,1);
    uVar42 = vextractps_avx(auVar417,2);
    auVar292._8_8_ = 0;
    auVar292._0_8_ = *(ulonglong *)((ulonglong)(uVar466 & _UNK_1512874b8) + lVar29);
    local_550 = vmovhps_avx(auVar292,*(undefined8 *)((ulonglong)(uVar467 & _UNK_1512874bc) + lVar1))
    ;
    auVar293._8_8_ = 0;
    auVar293._0_8_ = *(ulonglong *)((ulonglong)(uVar464 & _UNK_1512874b0) + lVar2);
    local_560 = vmovhps_avx(auVar293,*(undefined8 *)((ulonglong)(uVar465 & _UNK_1512874b4) + lVar3))
    ;
    auVar294._8_8_ = 0;
    auVar294._0_8_ = *(ulonglong *)((ulonglong)auVar417._0_4_ + lVar4);
    local_580 = vmovhps_avx(auVar294,*(undefined8 *)(CONCAT44(uVar36,uVar33) + lVar5));
    auVar418._8_8_ = 0;
    auVar418._0_8_ = *(ulonglong *)((ulonglong)uVar42 + lVar6);
    local_570 = vmovhps_avx(auVar418,*(undefined8 *)((ulonglong)auVar417._12_4_ + param_3));
    auVar419._8_8_ = 0;
    auVar419._0_8_ =
         *(ulonglong *)
          ((ulonglong)
           (uVar25 & ___ymm_0000007800000078000000780000007800000078000000780000007800000078) +
          lVar4);
    local_540 = vmovhps_avx(auVar419,*(undefined8 *)((ulonglong)(uVar26 & _UNK_1512874c4) + lVar5));
    auVar295._8_8_ = 0;
    auVar295._0_8_ = *(ulonglong *)((ulonglong)(uVar466 & _UNK_1512874d8) + lVar29);
    local_510 = vmovhps_avx(auVar295,*(undefined8 *)((ulonglong)(uVar467 & _UNK_1512874dc) + lVar1))
    ;
    auVar296._8_8_ = 0;
    auVar296._0_8_ = *(ulonglong *)((ulonglong)(uVar464 & _UNK_1512874d0) + lVar2);
    local_520 = vmovhps_avx(auVar296,*(undefined8 *)((ulonglong)(uVar465 & _UNK_1512874d4) + lVar3))
    ;
    auVar297._8_8_ = 0;
    auVar297._0_8_ = *(ulonglong *)((ulonglong)(uVar27 & _UNK_1512874c8) + lVar6);
    local_530 = vmovhps_avx(auVar297,*(undefined8 *)((ulonglong)(uVar28 & _UNK_1512874cc) + param_3)
                           );
    dVar8 = param_5[8];
    dVar46 = *param_5;
    lVar29 = 0xc0;
    dVar47 = param_5[0xc];
    dVar48 = param_5[1];
    dVar49 = param_5[5];
    dVar50 = param_5[9];
    dVar323 = param_5[0xd];
    dVar324 = param_5[2];
    dVar325 = param_5[6];
    dVar326 = param_5[10];
    dVar327 = param_5[0xe];
    dVar328 = param_5[3];
    dVar329 = param_5[7];
    dVar330 = param_5[0xb];
    dVar331 = param_5[0xf];
    do {
      dVar333 = *(double *)(local_9c0 + lVar29);
      dVar334 = *(double *)(local_9c0 + lVar29 + 8);
      dVar335 = *(double *)(local_9b0 + lVar29);
      dVar336 = *(double *)(local_9b0 + lVar29 + 8);
      dVar337 = *(double *)(local_9a0 + lVar29);
      dVar468 = *(double *)(local_9a0 + lVar29 + 8);
      dVar491 = *(double *)(local_990 + lVar29);
      dVar492 = *(double *)(local_990 + lVar29 + 8);
      dVar493 = *(double *)(local_980 + lVar29);
      dVar494 = *(double *)(local_980 + lVar29 + 8);
      dVar519 = *(double *)(local_970 + lVar29);
      dVar520 = *(double *)(local_970 + lVar29 + 8);
      dVar521 = *(double *)(local_960 + lVar29);
      dVar552 = *(double *)(local_960 + lVar29 + 8);
      dVar564 = *(double *)(local_950 + lVar29);
      dVar565 = *(double *)(local_950 + lVar29 + 8);
      dVar566 = *(double *)(local_920 + lVar29);
      dVar567 = *(double *)(local_920 + lVar29 + 8);
      dVar568 = *(double *)(local_910 + lVar29);
      dVar581 = *(double *)(local_910 + lVar29 + 8);
      dVar582 = *(double *)(local_940 + lVar29);
      dVar583 = *(double *)(local_940 + lVar29 + 8);
      dVar584 = *(double *)(local_930 + lVar29);
      dVar585 = *(double *)(local_930 + lVar29 + 8);
      dVar586 = *(double *)(local_900 + lVar29);
      dVar621 = *(double *)(local_900 + lVar29 + 8);
      dVar622 = *(double *)(local_8f0 + lVar29);
      dVar637 = *(double *)(local_8f0 + lVar29 + 8);
      dVar638 = *(double *)(local_8e0 + lVar29);
      dVar639 = *(double *)(local_8e0 + lVar29 + 8);
      dVar640 = *(double *)(local_8d0 + lVar29);
      dVar641 = *(double *)(local_8d0 + lVar29 + 8);
      dVar332 = param_5[4];
      *(double *)((longlong)local_2080 + lVar29 + 0x20) =
           dVar337 * dVar46 + 0.0 + dVar521 * dVar332 + dVar8 * dVar566 + dVar47 * dVar638;
      *(double *)((longlong)local_2080 + lVar29 + 0x28) =
           dVar468 * dVar46 + 0.0 + dVar552 * dVar332 + dVar8 * dVar567 + dVar47 * dVar639;
      *(double *)((longlong)local_2080 + lVar29 + 0x30) =
           dVar491 * dVar46 + 0.0 + dVar564 * dVar332 + dVar8 * dVar568 + dVar47 * dVar640;
      *(double *)((longlong)local_2080 + lVar29 + 0x38) =
           dVar492 * dVar46 + 0.0 + dVar565 * dVar332 + dVar8 * dVar581 + dVar47 * dVar641;
      *(double *)((longlong)local_2080 + lVar29) =
           dVar46 * dVar333 + 0.0 + dVar332 * dVar493 + dVar8 * dVar582 + dVar47 * dVar586;
      *(double *)((longlong)local_2080 + lVar29 + 8) =
           dVar46 * dVar334 + 0.0 + dVar332 * dVar494 + dVar8 * dVar583 + dVar47 * dVar621;
      *(double *)((longlong)local_2080 + lVar29 + 0x10) =
           dVar46 * dVar335 + 0.0 + dVar332 * dVar519 + dVar8 * dVar584 + dVar47 * dVar622;
      *(double *)((longlong)local_2080 + lVar29 + 0x18) =
           dVar46 * dVar336 + 0.0 + dVar332 * dVar520 + dVar8 * dVar585 + dVar47 * dVar637;
      *(double *)((longlong)local_2080 + lVar29 + 0x60) =
           dVar337 * dVar48 + 0.0 + dVar521 * dVar49 + dVar50 * dVar566 + dVar323 * dVar638;
      *(double *)((longlong)local_2080 + lVar29 + 0x68) =
           dVar468 * dVar48 + 0.0 + dVar552 * dVar49 + dVar50 * dVar567 + dVar323 * dVar639;
      *(double *)((longlong)local_2080 + lVar29 + 0x70) =
           dVar491 * dVar48 + 0.0 + dVar564 * dVar49 + dVar50 * dVar568 + dVar323 * dVar640;
      *(double *)((longlong)local_2080 + lVar29 + 0x78) =
           dVar492 * dVar48 + 0.0 + dVar565 * dVar49 + dVar50 * dVar581 + dVar323 * dVar641;
      *(double *)((longlong)local_2080 + lVar29 + 0x40) =
           dVar48 * dVar333 + 0.0 + dVar49 * dVar493 + dVar50 * dVar582 + dVar323 * dVar586;
      *(double *)((longlong)local_2080 + lVar29 + 0x48) =
           dVar48 * dVar334 + 0.0 + dVar49 * dVar494 + dVar50 * dVar583 + dVar323 * dVar621;
      *(double *)((longlong)local_2080 + lVar29 + 0x50) =
           dVar48 * dVar335 + 0.0 + dVar49 * dVar519 + dVar50 * dVar584 + dVar323 * dVar622;
      *(double *)((longlong)local_2080 + lVar29 + 0x58) =
           dVar48 * dVar336 + 0.0 + dVar49 * dVar520 + dVar50 * dVar585 + dVar323 * dVar637;
      *(double *)((longlong)local_2080 + lVar29 + 0xa0) =
           dVar337 * dVar324 + 0.0 + dVar521 * dVar325 + dVar326 * dVar566 + dVar327 * dVar638;
      *(double *)((longlong)local_2080 + lVar29 + 0xa8) =
           dVar468 * dVar324 + 0.0 + dVar552 * dVar325 + dVar326 * dVar567 + dVar327 * dVar639;
      *(double *)((longlong)local_2080 + lVar29 + 0xb0) =
           dVar491 * dVar324 + 0.0 + dVar564 * dVar325 + dVar326 * dVar568 + dVar327 * dVar640;
      *(double *)((longlong)local_2080 + lVar29 + 0xb8) =
           dVar492 * dVar324 + 0.0 + dVar565 * dVar325 + dVar326 * dVar581 + dVar327 * dVar641;
      *(double *)((longlong)local_2080 + lVar29 + 0x80) =
           dVar324 * dVar333 + 0.0 + dVar325 * dVar493 + dVar326 * dVar582 + dVar327 * dVar586;
      *(double *)((longlong)local_2080 + lVar29 + 0x88) =
           dVar324 * dVar334 + 0.0 + dVar325 * dVar494 + dVar326 * dVar583 + dVar327 * dVar621;
      *(double *)((longlong)local_2080 + lVar29 + 0x90) =
           dVar324 * dVar335 + 0.0 + dVar325 * dVar519 + dVar326 * dVar584 + dVar327 * dVar622;
      *(double *)((longlong)local_2080 + lVar29 + 0x98) =
           dVar324 * dVar336 + 0.0 + dVar325 * dVar520 + dVar326 * dVar585 + dVar327 * dVar637;
      *(double *)(local_1fa0 + lVar29) =
           dVar337 * dVar328 + 0.0 + dVar521 * dVar329 + dVar330 * dVar566 + dVar638 * dVar331;
      *(double *)(local_1fa0 + lVar29 + 8) =
           dVar468 * dVar328 + 0.0 + dVar552 * dVar329 + dVar330 * dVar567 + dVar639 * dVar331;
      *(double *)(local_1fa0 + lVar29 + 0x10) =
           dVar491 * dVar328 + 0.0 + dVar564 * dVar329 + dVar330 * dVar568 + dVar640 * dVar331;
      *(double *)(local_1fa0 + lVar29 + 0x18) =
           dVar492 * dVar328 + 0.0 + dVar565 * dVar329 + dVar330 * dVar581 + dVar641 * dVar331;
      *(double *)(local_1fc0 + lVar29) =
           dVar328 * dVar333 + 0.0 + dVar329 * dVar493 + dVar330 * dVar582 + dVar586 * dVar331;
      *(double *)(local_1fc0 + lVar29 + 8) =
           dVar328 * dVar334 + 0.0 + dVar329 * dVar494 + dVar330 * dVar583 + dVar621 * dVar331;
      *(double *)(local_1fc0 + lVar29 + 0x10) =
           dVar328 * dVar335 + 0.0 + dVar329 * dVar519 + dVar330 * dVar584 + dVar622 * dVar331;
      *(double *)(local_1fc0 + lVar29 + 0x18) =
           dVar328 * dVar336 + 0.0 + dVar329 * dVar520 + dVar330 * dVar585 + dVar637 * dVar331;
      lVar29 = lVar29 + 0x100;
    } while (lVar29 != 0x4c0);
    local_2280 = auVar547._0_8_;
    dStack_2278 = auVar547._8_8_;
    dStack_2270 = auVar445._0_8_;
    dStack_2268 = auVar445._8_8_;
    local_2200 = auVar51._0_8_;
    dStack_21f8 = auVar51._8_8_;
    dStack_21f0 = auVar192._0_8_;
    dStack_21e8 = auVar192._8_8_;
    local_21e0 = auVar191._0_8_;
    dStack_21d8 = auVar191._8_8_;
    dStack_21d0 = auVar535._0_8_;
    dStack_21c8 = auVar535._8_8_;
    dVar50 = (local_2280 + local_2200) * __real_3fe0000000000000;
    dVar323 = (dStack_2278 + dStack_21f8) * __real_3fe0000000000000;
    dVar324 = (dStack_2270 + dStack_21f0) * __real_3fe0000000000000;
    dVar325 = (dStack_2268 + dStack_21e8) * __real_3fe0000000000000;
    dVar330 = (local_21e0 + (double)local_1a60._0_8_) * __real_3fe0000000000000;
    dVar331 = (dStack_21d8 + (double)local_1a60._8_8_) * __real_3fe0000000000000;
    dVar332 = (dStack_21d0 + dStack_1a50) * __real_3fe0000000000000;
    dVar333 = (dStack_21c8 + dStack_1a48) * __real_3fe0000000000000;
    local_22a0 = auVar372._0_8_;
    dStack_2298 = auVar372._8_8_;
    dStack_2290 = auVar189._0_8_;
    dStack_2288 = auVar189._8_8_;
    dVar468 = (local_1920._0_8_ + local_22a0) * __real_3fe0000000000000;
    dVar491 = (local_1920._8_8_ + dStack_2298) * __real_3fe0000000000000;
    dVar492 = (local_1920._16_8_ + dStack_2290) * __real_3fe0000000000000;
    dVar493 = (local_1920._24_8_ + dStack_2288) * __real_3fe0000000000000;
    local_2220 = auVar188._0_8_;
    dStack_2218 = auVar188._8_8_;
    dStack_2210 = auVar190._0_8_;
    dStack_2208 = auVar190._8_8_;
    dVar494 = (local_1940._0_8_ + local_2220) * __real_3fe0000000000000;
    dVar521 = (local_1940._8_8_ + dStack_2218) * __real_3fe0000000000000;
    dVar565 = (local_1940._16_8_ + dStack_2210) * __real_3fe0000000000000;
    dVar568 = (local_1940._24_8_ + dStack_2208) * __real_3fe0000000000000;
    dVar8 = (double)CONCAT17(uStack_1e39,
                             CONCAT16(uStack_1e3a,
                                      CONCAT15(uStack_1e3b,
                                               CONCAT14(uStack_1e3c,
                                                        CONCAT13(uStack_1e3d,
                                                                 CONCAT12(uStack_1e3e,
                                                                          CONCAT11(uStack_1e3f,
                                                                                   local_1e40)))))))
    ;
    dVar519 = (local_1a00._0_8_ + local_1960._0_8_) * __real_3fe0000000000000;
    dVar552 = (local_1a00._8_8_ + local_1960._8_8_) * __real_3fe0000000000000;
    dVar566 = (local_1a00._16_8_ + local_1960._16_8_) * __real_3fe0000000000000;
    dVar581 = (local_1a00._24_8_ + local_1960._24_8_) * __real_3fe0000000000000;
    dVar621 = (local_1a20._0_8_ + local_1980._0_8_) * __real_3fe0000000000000;
    dVar637 = (local_1a20._8_8_ + local_1980._8_8_) * __real_3fe0000000000000;
    dVar639 = (local_1a20._16_8_ + local_1980._16_8_) * __real_3fe0000000000000;
    dVar641 = (local_1a20._24_8_ + local_1980._24_8_) * __real_3fe0000000000000;
    auVar458 = vsubpd_avx(auVar562,auVar609);
    auVar305 = vsubpd_avx(local_1920,auVar311);
    auVar306 = vsubpd_avx(_local_1a60,auVar561);
    auVar427 = vsubpd_avx(local_1940,auVar602);
    auVar457 = vsubpd_avx(local_1960,local_1a00);
    auVar540 = vsubpd_avx(local_1980,local_1a20);
    dVar520 = auVar305._0_8_ * __real_3fe0000000000000;
    dVar564 = auVar305._8_8_ * __real_3fe0000000000000;
    dVar567 = auVar305._16_8_ * __real_3fe0000000000000;
    dVar582 = auVar305._24_8_ * __real_3fe0000000000000;
    dVar46 = auVar458._0_8_ * __real_3fe0000000000000;
    dVar47 = auVar458._8_8_ * __real_3fe0000000000000;
    dVar48 = auVar458._16_8_ * __real_3fe0000000000000;
    dVar49 = auVar458._24_8_ * __real_3fe0000000000000;
    dVar622 = auVar427._0_8_ * __real_3fe0000000000000;
    dVar638 = auVar427._8_8_ * __real_3fe0000000000000;
    dVar640 = auVar427._16_8_ * __real_3fe0000000000000;
    dVar642 = auVar427._24_8_ * __real_3fe0000000000000;
    dVar583 = auVar306._0_8_ * __real_3fe0000000000000;
    dVar584 = auVar306._8_8_ * __real_3fe0000000000000;
    dVar585 = auVar306._16_8_ * __real_3fe0000000000000;
    dVar586 = auVar306._24_8_ * __real_3fe0000000000000;
    dVar326 = auVar540._0_8_ * __real_3fe0000000000000;
    dVar327 = auVar540._8_8_ * __real_3fe0000000000000;
    dVar328 = auVar540._16_8_ * __real_3fe0000000000000;
    dVar329 = auVar540._24_8_ * __real_3fe0000000000000;
    dVar334 = auVar457._0_8_ * __real_3fe0000000000000;
    dVar335 = auVar457._8_8_ * __real_3fe0000000000000;
    dVar336 = auVar457._16_8_ * __real_3fe0000000000000;
    dVar337 = auVar457._24_8_ * __real_3fe0000000000000;
    auVar485._0_8_ =
         (double)((ulonglong)(dVar326 * local_1dc0) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar583 * (double)local_1ec0._0_8_) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar46 * (double)local_1fc0) & __real_7fffffffffffffff);
    auVar485._8_8_ =
         (double)((ulonglong)(dVar327 * dStack_1db8) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar584 * (double)local_1ec0._8_8_) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar47 * adStack_1fb8[0]) & __real_7fffffffffffffff);
    auVar485._16_8_ =
         (double)((ulonglong)(dVar328 * dStack_1db0) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar585 * dStack_1eb0) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar48 * adStack_1fb8[1]) & __real_7fffffffffffffff);
    auVar485._24_8_ =
         (double)((ulonglong)(dVar329 * dStack_1da8) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar586 * dStack_1ea8) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar49 * adStack_1fb8[2]) & __real_7fffffffffffffff);
    auVar551._0_8_ =
         (double)((ulonglong)(dVar334 * local_1da0) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar622 * (double)local_1ea0._0_8_) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar520 * (double)local_1fa0) & __real_7fffffffffffffff);
    auVar551._8_8_ =
         (double)((ulonglong)(dVar335 * dStack_1d98) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar638 * (double)local_1ea0._8_8_) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar564 * adStack_1f98[0]) & __real_7fffffffffffffff);
    auVar551._16_8_ =
         (double)((ulonglong)(dVar336 * dStack_1d90) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar640 * dStack_1e90) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar567 * adStack_1f98[1]) & __real_7fffffffffffffff);
    auVar551._24_8_ =
         (double)((ulonglong)(dVar337 * dStack_1d88) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar642 * dStack_1e88) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar582 * adStack_1f98[2]) & __real_7fffffffffffffff);
    auVar450._0_8_ =
         (double)((ulonglong)(dVar326 * local_1d80) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar46 * (double)local_1f80._0_8_) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar583 * (double)local_1e80._0_8_) & __real_7fffffffffffffff);
    auVar450._8_8_ =
         (double)((ulonglong)(dVar327 * dStack_1d78) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar47 * (double)local_1f80._8_8_) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar584 * (double)local_1e80._8_8_) & __real_7fffffffffffffff);
    auVar461._16_8_ =
         (double)((ulonglong)(dVar328 * dStack_1d70) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar48 * dStack_1f70) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar585 * dStack_1e70) & __real_7fffffffffffffff);
    auVar461._0_16_ = auVar450;
    auVar461._24_8_ =
         (double)((ulonglong)(dVar329 * dStack_1d68) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar49 * dStack_1f68) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar586 * dStack_1e68) & __real_7fffffffffffffff);
    auVar579._0_8_ =
         dVar468 * (double)local_1fa0 + dVar494 * (double)local_1ea0._0_8_ + dVar519 * local_1da0 +
         local_1ca0;
    auVar579._8_8_ =
         dVar491 * adStack_1f98[0] + dVar521 * (double)local_1ea0._8_8_ + dVar552 * dStack_1d98 +
         dStack_1c98;
    auVar579._16_8_ =
         dVar492 * adStack_1f98[1] + dVar565 * dStack_1e90 + dVar566 * dStack_1d90 + dStack_1c90;
    auVar579._24_8_ =
         dVar493 * adStack_1f98[2] + dVar568 * dStack_1e88 + dVar581 * dStack_1d88 + dStack_1c88;
    auVar610._0_8_ =
         dVar621 * local_1dc0 + dVar50 * (double)local_1fc0 + dVar330 * (double)local_1ec0._0_8_ +
         local_1cc0;
    auVar610._8_8_ =
         dVar637 * dStack_1db8 + dVar323 * adStack_1fb8[0] + dVar331 * (double)local_1ec0._8_8_ +
         dStack_1cb8;
    auVar610._16_8_ =
         dVar639 * dStack_1db0 + dVar324 * adStack_1fb8[1] + dVar332 * dStack_1eb0 + dStack_1cb0;
    auVar610._24_8_ =
         dVar641 * dStack_1da8 + dVar325 * adStack_1fb8[2] + dVar333 * dStack_1ea8 + dStack_1ca8;
    auVar618._0_8_ =
         dVar468 * (double)local_1f60._0_8_ + dVar494 * (double)local_1e60._0_8_ +
         dVar519 * local_1d60 + local_1c60;
    auVar618._8_8_ =
         dVar491 * (double)local_1f60._8_8_ + dVar521 * (double)local_1e60._8_8_ +
         dVar552 * dStack_1d58 + dStack_1c58;
    auVar618._16_8_ =
         dVar492 * dStack_1f50 + dVar565 * dStack_1e50 + dVar566 * dStack_1d50 + dStack_1c50;
    auVar618._24_8_ =
         dVar493 * dStack_1f48 + dVar568 * dStack_1e48 + dVar581 * dStack_1d48 + dStack_1c48;
    auVar633._0_8_ =
         dVar621 * local_1d80 +
         dVar50 * (double)local_1f80._0_8_ + dVar330 * (double)local_1e80._0_8_ + local_1c80;
    auVar633._8_8_ =
         dVar637 * dStack_1d78 +
         dVar323 * (double)local_1f80._8_8_ + dVar331 * (double)local_1e80._8_8_ + dStack_1c78;
    auVar633._16_8_ =
         dVar639 * dStack_1d70 + dVar324 * dStack_1f70 + dVar332 * dStack_1e70 + dStack_1c70;
    auVar633._24_8_ =
         dVar641 * dStack_1d68 + dVar325 * dStack_1f68 + dVar333 * dStack_1e68 + dStack_1c68;
    auVar651._0_8_ =
         dVar468 * (double)local_1f20._0_8_ + dVar494 * local_1e20 + dVar519 * local_1d20 +
         local_1c20;
    auVar651._8_8_ =
         dVar491 * (double)local_1f20._8_8_ + dVar521 * dStack_1e18 + dVar552 * dStack_1d18 +
         dStack_1c18;
    auVar651._16_8_ =
         dVar492 * dStack_1f10 + dVar565 * dStack_1e10 + dVar566 * dStack_1d10 + dStack_1c10;
    auVar651._24_8_ =
         dVar493 * dStack_1f08 + dVar568 * dStack_1e08 + dVar581 * dStack_1d08 + dStack_1c08;
    auVar660._0_8_ =
         dVar621 * local_1d40 + dVar50 * (double)local_1f40._0_8_ + dVar330 * dVar8 + local_1c40;
    auVar660._8_8_ =
         dVar637 * dStack_1d38 + dVar323 * (double)local_1f40._8_8_ + dVar331 * dStack_1e38 +
         dStack_1c38;
    auVar660._16_8_ =
         dVar639 * dStack_1d30 + dVar324 * dStack_1f30 + dVar332 * dStack_1e30 + dStack_1c30;
    auVar660._24_8_ =
         dVar641 * dStack_1d28 + dVar325 * dStack_1f28 + dVar333 * dStack_1e28 + dStack_1c28;
    auVar312._0_8_ =
         (double)((ulonglong)(dVar334 * local_1d60) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar520 * (double)local_1f60._0_8_) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar622 * (double)local_1e60._0_8_) & __real_7fffffffffffffff);
    auVar312._8_8_ =
         (double)((ulonglong)(dVar335 * dStack_1d58) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar564 * (double)local_1f60._8_8_) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar638 * (double)local_1e60._8_8_) & __real_7fffffffffffffff);
    auVar312._16_8_ =
         (double)((ulonglong)(dVar336 * dStack_1d50) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar567 * dStack_1f50) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar640 * dStack_1e50) & __real_7fffffffffffffff);
    auVar312._24_8_ =
         (double)((ulonglong)(dVar337 * dStack_1d48) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar582 * dStack_1f48) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar642 * dStack_1e48) & __real_7fffffffffffffff);
    auVar515._0_8_ =
         (double)(__real_7fffffffffffffff & (ulonglong)(dVar46 * (double)local_1f40._0_8_)) +
         (double)((ulonglong)(dVar583 * dVar8) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar326 * local_1d40) & __real_7fffffffffffffff);
    auVar515._8_8_ =
         (double)(__real_7fffffffffffffff & (ulonglong)(dVar47 * (double)local_1f40._8_8_)) +
         (double)((ulonglong)(dVar584 * dStack_1e38) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar327 * dStack_1d38) & __real_7fffffffffffffff);
    auVar515._16_8_ =
         (double)(__real_7fffffffffffffff & (ulonglong)(dVar48 * dStack_1f30)) +
         (double)((ulonglong)(dVar585 * dStack_1e30) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar328 * dStack_1d30) & __real_7fffffffffffffff);
    auVar515._24_8_ =
         (double)(__real_7fffffffffffffff & (ulonglong)(dVar49 * dStack_1f28)) +
         (double)((ulonglong)(dVar586 * dStack_1e28) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar329 * dStack_1d28) & __real_7fffffffffffffff);
    auVar431._0_8_ =
         (double)((ulonglong)(dVar622 * local_1e20) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar520 * (double)local_1f20._0_8_) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar334 * local_1d20) & __real_7fffffffffffffff);
    auVar431._8_8_ =
         (double)((ulonglong)(dVar638 * dStack_1e18) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar564 * (double)local_1f20._8_8_) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar335 * dStack_1d18) & __real_7fffffffffffffff);
    auVar431._16_8_ =
         (double)((ulonglong)(dVar640 * dStack_1e10) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar567 * dStack_1f10) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar336 * dStack_1d10) & __real_7fffffffffffffff);
    auVar431._24_8_ =
         (double)((ulonglong)(dVar642 * dStack_1e08) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar582 * dStack_1f08) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar337 * dStack_1d08) & __real_7fffffffffffffff);
    auVar458 = vsubpd_avx(auVar610,auVar485);
    auVar305 = vsubpd_avx(auVar579,auVar551);
    auVar306 = vsubpd_avx(auVar633,auVar461);
    auVar427 = vsubpd_avx(auVar618,auVar312);
    local_2380._8_8_ = auVar610._8_8_ + auVar485._8_8_;
    local_2380._0_8_ = auVar610._0_8_ + auVar485._0_8_;
    dStack_2370 = auVar610._16_8_ + auVar485._16_8_;
    dStack_2368 = auVar610._24_8_ + auVar485._24_8_;
    auVar457 = vsubpd_avx(auVar660,auVar515);
    auVar580._0_8_ = auVar579._0_8_ + auVar551._0_8_;
    auVar580._8_8_ = auVar579._8_8_ + auVar551._8_8_;
    auVar580._16_8_ = auVar579._16_8_ + auVar551._16_8_;
    auVar580._24_8_ = auVar579._24_8_ + auVar551._24_8_;
    auVar540 = vsubpd_avx(auVar651,auVar431);
    auVar634._0_8_ = auVar633._0_8_ + auVar450._0_8_;
    auVar634._8_8_ = auVar633._8_8_ + auVar450._8_8_;
    auVar634._16_8_ = auVar633._16_8_ + auVar461._16_8_;
    auVar634._24_8_ = auVar633._24_8_ + auVar461._24_8_;
    auVar619._0_8_ = auVar618._0_8_ + auVar312._0_8_;
    auVar619._8_8_ = auVar618._8_8_ + auVar312._8_8_;
    auVar619._16_8_ = auVar618._16_8_ + auVar312._16_8_;
    auVar619._24_8_ = auVar618._24_8_ + auVar312._24_8_;
    auVar563._0_8_ = auVar660._0_8_ + auVar515._0_8_;
    auVar563._8_8_ = auVar660._8_8_ + auVar515._8_8_;
    auVar563._16_8_ = auVar660._16_8_ + auVar515._16_8_;
    auVar563._24_8_ = auVar660._24_8_ + auVar515._24_8_;
    auVar611._0_8_ = auVar651._0_8_ + auVar431._0_8_;
    auVar611._8_8_ = auVar651._8_8_ + auVar431._8_8_;
    auVar611._16_8_ = auVar651._16_8_ + auVar431._16_8_;
    auVar611._24_8_ = auVar651._24_8_ + auVar431._24_8_;
    auVar477._8_8_ = 0;
    auVar477._0_8_ = local_16c0;
    auVar51 = vpcmpeqb_avx(auVar477,ZEXT816(0) << 0x40);
    auVar470 = vpcmpeqd_avx(auVar450,auVar450);
    auVar496 = vpmovsxbd_avx(auVar51 ^ auVar470);
    auVar470 = vpshufd_avx(auVar51 ^ auVar470,0x55);
    auVar470 = vpmovsxbd_avx(auVar470);
    uVar42 = local_19c0._0_4_;
    local_23c0._0_4_ = auVar496._0_4_ & uVar42;
    uVar44 = local_19c0._4_4_;
    local_23c0._4_4_ = auVar496._4_4_ & uVar44;
    uVar16 = local_19c0._8_4_;
    local_23c0._8_4_ = auVar496._8_4_ & uVar16;
    uVar17 = local_19c0._12_4_;
    local_23c0._12_4_ = auVar496._12_4_ & uVar17;
    uVar18 = local_19c0._16_4_;
    register0x00001210 = auVar470._0_4_ & uVar18;
    uVar19 = local_19c0._20_4_;
    register0x00001214 = auVar470._4_4_ & uVar19;
    uVar20 = local_19c0._24_4_;
    register0x00001218 = auVar470._8_4_ & uVar20;
    uVar21 = local_19c0._28_4_;
    register0x0000121c = auVar470._12_4_ & uVar21;
    iVar37 = vmovmskps_avx(_local_23c0);
    if (iVar37 == 0) {
      _local_23c0 = ZEXT432(0) << 0x20;
LAB_140a63afd:
      auVar470 = vpmovsxbw_avx(auVar51);
      auVar470 = vpand_avx(auVar470,local_18f0);
      auVar496 = vpmovsxwd_avx(auVar470);
      auVar470 = vpunpckhwd_avx(auVar470,auVar470);
      auVar318._16_16_ = auVar470;
      auVar318._0_16_ = auVar496;
      auVar470 = vpcmpgtd_avx(auVar474,auVar554);
      auVar496 = vpcmpgtd_avx(auVar474,local_19e0._0_16_);
      auVar488._16_16_ = auVar470;
      auVar488._0_16_ = auVar496;
      auVar488 = auVar488 & auVar318;
      if ((((((((SUB321(auVar488 >> 0x1f,0) & 1) != 0 || (SUB321(auVar488 >> 0x3f,0) & 1) != 0) ||
              (SUB321(auVar488 >> 0x5f,0) & 1) != 0) || SUB321(auVar488 >> 0x7f,0) != '\0') ||
            (SUB321(auVar488 >> 0x9f,0) & 1) != 0) || SUB321(auVar488 >> 0xbf,0) != '\0') ||
          (SUB321(auVar488 >> 0xdf,0) & 1) != 0) || auVar488[0x1f] < '\0') {
        auVar51 = vpmovzxbw_avx(auVar51);
        auVar470 = vpmovzxwd_avx(auVar51);
        auVar470 = vpslld_avx(auVar470,0x1f);
        auVar319._0_16_ = vpsrad_avx(auVar470,0x1f);
        auVar470 = vpunpckhwd_avx(auVar51,auVar51);
        auVar470 = vpslld_avx(auVar470,0x1f);
        auVar470 = vpsrad_avx(auVar470,0x1f);
        auVar319._16_16_ = auVar470;
        auVar459 = local_19c0 & auVar319;
        if ((((((((SUB321(auVar459 >> 0x1f,0) & 1) != 0 || (SUB321(auVar459 >> 0x3f,0) & 1) != 0) ||
                (SUB321(auVar459 >> 0x5f,0) & 1) != 0) || SUB321(auVar459 >> 0x7f,0) != '\0') ||
              (SUB321(auVar459 >> 0x9f,0) & 1) != 0) || SUB321(auVar459 >> 0xbf,0) != '\0') ||
            (SUB321(auVar459 >> 0xdf,0) & 1) != 0) || auVar459[0x1f] < '\0') {
          auVar496 = vpmovsxdq_avx(auVar319._0_16_);
          auVar546 = vshufps_avx(auVar319._0_16_,auVar319._0_16_,0xfa);
          auVar463._16_16_ = auVar546;
          auVar463._0_16_ = auVar496;
          auVar496 = vpmovsxdq_avx(auVar470);
          auVar546 = vpshufd_avx(auVar470,0xfa);
          auVar489._16_16_ = auVar546;
          auVar489._0_16_ = auVar496;
          _local_1fc0 = vmaskmovpd_avx(auVar463,auVar458);
          _local_1fa0 = vmaskmovpd_avx(auVar489,auVar305);
          _local_1f80 = vmaskmovpd_avx(auVar463,auVar306);
          _local_1f60 = vmaskmovpd_avx(auVar489,auVar427);
          _local_1f40 = vmaskmovpd_avx(auVar463,auVar457);
          _local_1f20 = vmaskmovpd_avx(auVar489,auVar540);
          local_1f00 = vmaskmovpd_avx(auVar463,_local_2380);
          local_1ee0 = vmaskmovpd_avx(auVar489,auVar580);
          _local_1ec0 = vmaskmovpd_avx(auVar463,auVar634);
          _local_1ea0 = vmaskmovpd_avx(auVar489,auVar619);
          _local_1e80 = vmaskmovpd_avx(auVar463,auVar563);
          _local_1e60 = vmaskmovpd_avx(auVar489,auVar611);
          auVar51 = vpsllw_avx(auVar51,0xf);
          auVar51 = vpacksswb_avx(auVar51,auVar51);
          bVar31 = SUB161(auVar51 >> 0xf,0) & 1;
          bVar10 = SUB161(auVar51 >> 0x17,0) & 1;
          bVar11 = SUB161(auVar51 >> 0x1f,0) & 1;
          bVar12 = SUB161(auVar51 >> 0x27,0) & 1;
          bVar13 = SUB161(auVar51 >> 0x2f,0) & 1;
          bVar14 = SUB161(auVar51 >> 0x37,0) & 1;
          if ((SUB161(auVar51 >> 7,0) & 1) == 0) {
            if (bVar31 != 0) goto LAB_140a643eb;
LAB_140a63c3e:
            if (bVar10 != 0) goto LAB_140a643fb;
LAB_140a63c46:
            if (bVar11 != 0) goto LAB_140a6440b;
LAB_140a63c4e:
            if (bVar12 != 0) goto LAB_140a6441b;
LAB_140a63c56:
            if (bVar13 != 0) goto LAB_140a6442b;
LAB_140a63c5e:
            if (bVar14 != 0) goto LAB_140a6443b;
LAB_140a63c66:
            auVar320._0_4_ = uVar42 & auVar319._0_4_;
            auVar320._4_4_ = uVar44 & auVar319._4_4_;
            auVar320._8_4_ = uVar16 & auVar319._8_4_;
            auVar320._12_4_ = uVar17 & auVar319._12_4_;
            auVar320._16_4_ = uVar18 & auVar470._0_4_;
            auVar320._20_4_ = uVar19 & auVar470._4_4_;
            auVar320._24_4_ = uVar20 & auVar470._8_4_;
            auVar320._28_4_ = uVar21 & auVar470._12_4_;
          }
          else {
            local_1e40 = 1;
            if (bVar31 == 0) goto LAB_140a63c3e;
LAB_140a643eb:
            uStack_1e3f = 1;
            if (bVar10 == 0) goto LAB_140a63c46;
LAB_140a643fb:
            uStack_1e3e = 1;
            if (bVar11 == 0) goto LAB_140a63c4e;
LAB_140a6440b:
            uStack_1e3d = 1;
            if (bVar12 == 0) goto LAB_140a63c56;
LAB_140a6441b:
            uStack_1e3c = 1;
            if (bVar13 == 0) goto LAB_140a63c5e;
LAB_140a6442b:
            uStack_1e3b = 1;
            if (bVar14 == 0) goto LAB_140a63c66;
LAB_140a6443b:
            uStack_1e3a = 1;
            auVar320._0_4_ = uVar42 & auVar319._0_4_;
            auVar320._4_4_ = uVar44 & auVar319._4_4_;
            auVar320._8_4_ = uVar16 & auVar319._8_4_;
            auVar320._12_4_ = uVar17 & auVar319._12_4_;
            auVar320._16_4_ = uVar18 & auVar470._0_4_;
            auVar320._20_4_ = uVar19 & auVar470._4_4_;
            auVar320._24_4_ = uVar20 & auVar470._8_4_;
            auVar320._28_4_ = uVar21 & auVar470._12_4_;
          }
          if ((SUB161(auVar51 >> 0x3f,0) & 1) != 0) {
            uStack_1e39 = 1;
          }
          vmovmskps_avx(auVar320 | _local_23c0);
        }
      }
    }
    else {
      auVar459 = vminpd_avx(local_1840,auVar458);
      auVar546 = vshufps_avx(auVar496,auVar496,0x50);
      auVar496 = vshufps_avx(auVar496,auVar496,0xfa);
      auVar313._16_16_ = auVar496;
      auVar313._0_16_ = auVar546;
      _local_1fc0 = vmaskmovpd_avx(auVar313,auVar459);
      auVar496 = vshufps_avx(auVar470,auVar470,0x50);
      auVar470 = vshufps_avx(auVar470,auVar470,0xfa);
      auVar652._16_16_ = auVar470;
      auVar652._0_16_ = auVar496;
      auVar459 = vminpd_avx(local_1820,auVar305);
      _local_1fa0 = vmaskmovpd_avx(auVar652,auVar459);
      auVar459 = vminpd_avx(local_1800,auVar306);
      _local_1f80 = vmaskmovpd_avx(auVar313,auVar459);
      auVar459 = vminpd_avx(local_17e0,auVar427);
      _local_1f60 = vmaskmovpd_avx(auVar652,auVar459);
      auVar459 = vminpd_avx(local_17c0,auVar457);
      _local_1f40 = vmaskmovpd_avx(auVar313,auVar459);
      auVar459 = vminpd_avx(local_17a0,auVar540);
      _local_1f20 = vmaskmovpd_avx(auVar652,auVar459);
      auVar459 = vmaxpd_avx(local_1780,_local_2380);
      local_1f00 = vmaskmovpd_avx(auVar313,auVar459);
      auVar459 = vmaxpd_avx(local_1760,auVar580);
      local_1ee0 = vmaskmovpd_avx(auVar652,auVar459);
      auVar459 = vmaxpd_avx(local_1740,auVar634);
      _local_1ec0 = vmaskmovpd_avx(auVar313,auVar459);
      auVar459 = vmaxpd_avx(local_1720,auVar619);
      _local_1ea0 = vmaskmovpd_avx(auVar652,auVar459);
      auVar459 = vmaxpd_avx(local_1700,auVar563);
      _local_1e80 = vmaskmovpd_avx(auVar313,auVar459);
      auVar459 = vmaxpd_avx(local_16e0,auVar611);
      _local_1e60 = vmaskmovpd_avx(auVar652,auVar459);
      auVar470 = vpshufd_avx(auVar477,0x44);
      auVar470 = vpcmpeqb_avx(auVar470,___xmm_00000000000000000000000000000000);
      bVar31 = ~(SUB161(auVar470 >> 7,0) & 1 | (SUB161(auVar470 >> 0xf,0) & 1) << 1 |
                 (SUB161(auVar470 >> 0x17,0) & 1) << 2 | (SUB161(auVar470 >> 0x1f,0) & 1) << 3 |
                 (SUB161(auVar470 >> 0x27,0) & 1) << 4 | (SUB161(auVar470 >> 0x2f,0) & 1) << 5 |
                (SUB161(auVar470 >> 0x37,0) & 1) << 6);
      if ((bVar31 & 1) != 0) {
        local_1e40 = (undefined1)local_16c0;
      }
      if ((bVar31 & 2) != 0) {
        uStack_1e3f = (undefined1)(local_16c0 >> 8);
      }
      if ((bVar31 & 4) != 0) {
        uStack_1e3e = (undefined1)(local_16c0 >> 0x10);
      }
      if ((bVar31 & 8) != 0) {
        uStack_1e3d = (undefined1)(local_16c0 >> 0x18);
      }
      if ((bVar31 & 0x10) != 0) {
        uStack_1e3c = (undefined1)(local_16c0 >> 0x20);
      }
      if ((bVar31 & 0x20) != 0) {
        uStack_1e3b = (undefined1)(local_16c0 >> 0x28);
      }
      if ((bVar31 & 0x40) != 0) {
        uStack_1e3a = (undefined1)(local_16c0 >> 0x30);
      }
      if ((SUB161(auVar470 >> 0x3f,0) & 1) == 0) {
        uStack_1e39 = (undefined1)(local_16c0 >> 0x38);
      }
      if ((char)uVar45 != (char)iVar37) goto LAB_140a63afd;
    }
    auVar470 = local_19c0._0_16_;
    auVar51 = vshufps_avx(auVar470,auVar470,0x50);
    auVar470 = vshufps_avx(auVar470,auVar470,0xfa);
    auVar636._16_16_ = auVar470;
    auVar636._0_16_ = auVar51;
    auVar470 = local_19c0._16_16_;
    auVar51 = vshufps_avx(auVar470,auVar470,0x50);
    auVar470 = vshufps_avx(auVar470,auVar470,0xfa);
    auVar654._16_16_ = auVar470;
    auVar654._0_16_ = auVar51;
    local_1840 = vmaskmovpd_avx(auVar636,_local_1fc0);
    local_1820 = vmaskmovpd_avx(auVar654,_local_1fa0);
    local_1800 = vmaskmovpd_avx(auVar636,_local_1f80);
    local_17e0 = vmaskmovpd_avx(auVar654,_local_1f60);
    local_17c0 = vmaskmovpd_avx(auVar636,_local_1f40);
    local_17a0 = vmaskmovpd_avx(auVar654,_local_1f20);
    local_1780 = vmaskmovpd_avx(auVar636,local_1f00);
    local_1760 = vmaskmovpd_avx(auVar654,local_1ee0);
    local_1740 = vmaskmovpd_avx(auVar636,_local_1ec0);
    local_1720 = vmaskmovpd_avx(auVar654,_local_1ea0);
    local_1700 = vmaskmovpd_avx(auVar636,_local_1e80);
    local_16e0 = vmaskmovpd_avx(auVar654,_local_1e60);
    uVar30 = local_16c0;
    if ((uVar45 & 1) != 0) {
      local_16c0 = CONCAT71(local_16c0._1_7_,local_1e40);
      uVar30 = local_16c0;
    }
    if ((uVar45 & 2) != 0) {
      local_16c0._2_6_ = (undefined6)(uVar30 >> 0x10);
      local_16c0._0_1_ = (undefined1)uVar30;
      local_16c0._0_2_ = CONCAT11(uStack_1e3f,(undefined1)local_16c0);
      uVar30 = local_16c0;
    }
    if ((uVar45 & 4) != 0) {
      local_16c0._3_5_ = (undefined5)(uVar30 >> 0x18);
      local_16c0._0_2_ = (undefined2)uVar30;
      local_16c0._0_3_ = CONCAT12(uStack_1e3e,(undefined2)local_16c0);
      uVar30 = local_16c0;
    }
    if ((uVar45 & 8) != 0) {
      local_16c0._4_4_ = (undefined4)(uVar30 >> 0x20);
      local_16c0._0_3_ = (undefined3)uVar30;
      local_16c0._0_4_ = CONCAT13(uStack_1e3d,(undefined3)local_16c0);
      uVar30 = local_16c0;
    }
    if ((uVar45 & 0x10) != 0) {
      local_16c0._5_3_ = (undefined3)(uVar30 >> 0x28);
      local_16c0._0_4_ = (undefined4)uVar30;
      local_16c0._0_5_ = CONCAT14(uStack_1e3c,(undefined4)local_16c0);
      uVar30 = local_16c0;
    }
    if ((uVar45 & 0x20) != 0) {
      local_16c0._6_2_ = (undefined2)(uVar30 >> 0x30);
      local_16c0._0_5_ = (undefined5)uVar30;
      local_16c0._0_6_ = CONCAT15(uStack_1e3b,(undefined5)local_16c0);
      uVar30 = local_16c0;
    }
    local_16c0 = uVar30;
    if ((uVar45 & 0x40) != 0) {
      local_16c0._7_1_ = (undefined1)(uVar30 >> 0x38);
      local_16c0._0_6_ = (undefined6)uVar30;
      local_16c0._0_7_ = CONCAT16(uStack_1e3a,(undefined6)local_16c0);
    }
    if ((char)uVar45 < '\0') {
      local_16c0 = CONCAT17(uStack_1e39,(undefined7)local_16c0);
    }
LAB_140a63de0:
    local_12c0 = vmovlhps_avx(local_1840._0_16_,local_1800._0_16_);
    local_1288 = vunpckhpd_avx(local_1840._0_16_,local_1800._0_16_);
    local_1250 = vmovlhps_avx(local_1840._16_16_,local_1800._16_16_);
    local_1218 = vunpckhpd_avx(local_1840._16_16_,local_1800._16_16_);
    local_11e0 = vmovlhps_avx(local_1820._0_16_,local_17e0._0_16_);
    local_11a8 = vunpckhpd_avx(local_1820._0_16_,local_17e0._0_16_);
    local_1170 = vmovlhps_avx(local_1820._16_16_,local_17e0._16_16_);
    local_1138 = vunpckhpd_avx(local_1820._16_16_,local_17e0._16_16_);
    local_12b0 = local_17c0._0_8_;
    local_1278 = local_17c0._8_8_;
    local_1240 = local_17c0._16_8_;
    local_1208 = local_17c0._24_8_;
    local_11d0 = local_17a0._0_8_;
    local_1198 = (double)local_17a0._8_8_;
    local_1160 = (double)local_17a0._16_8_;
    local_1128 = (double)local_17a0._24_8_;
    local_12a8 = vmovlhps_avx(local_1780._0_16_,local_1740._0_16_);
    local_1270 = vunpckhpd_avx(local_1780._0_16_,local_1740._0_16_);
    local_1238 = vmovlhps_avx(local_1780._16_16_,local_1740._16_16_);
    local_1200 = vunpckhpd_avx(local_1780._16_16_,local_1740._16_16_);
    local_11c8 = vmovlhps_avx(local_1760._0_16_,local_1720._0_16_);
    local_1190 = vunpckhpd_avx(local_1760._0_16_,local_1720._0_16_);
    local_1158 = vmovlhps_avx(local_1760._16_16_,local_1720._16_16_);
    local_1120 = vunpckhpd_avx(local_1760._16_16_,local_1720._16_16_);
    local_1298 = local_1700._0_8_;
    local_1260 = local_1700._8_8_;
    local_1228 = local_1700._16_8_;
    local_11f0 = local_1700._24_8_;
    local_11b8 = (double)local_16e0._0_8_;
    local_1180 = (double)local_16e0._8_8_;
    local_1148 = (double)local_16e0._16_8_;
    auVar51 = vpcmpgtd_avx(auVar474,___xmm_00000003000000020000000100000000);
    auVar474 = vpcmpgtd_avx(auVar474,___xmm_00000007000000060000000500000004);
    local_1110 = (double)local_16e0._24_8_;
    auVar321._16_16_ = auVar474;
    auVar321._0_16_ = auVar51;
    uVar45 = vmovmskps_avx(auVar321);
    local_1290[0] = (char)local_16c0;
    local_1258 = (char)(local_16c0 >> 8);
    local_1220 = (char)(local_16c0 >> 0x10);
    local_11e8 = (char)(local_16c0 >> 0x18);
    local_11b0[0] = (char)(local_16c0 >> 0x20);
    local_1178[0] = (char)(local_16c0 >> 0x28);
    local_1140[0] = (char)(local_16c0 >> 0x30);
    local_1108[0] = (char)(local_16c0 >> 0x38);
    if (uVar45 == 0) {
      return;
    }
    uVar30 = (ulonglong)(uVar45 & 0xff);
    do {
      if (uVar30 == 0) {
        uVar34 = 0x40;
      }
      else {
        uVar34 = 0;
        for (uVar15 = uVar30; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x8000000000000000) {
          uVar34 = uVar34 + 1;
        }
      }
      lVar29 = uVar34 * 0x38;
      cVar35 = param_6[2][0];
      cVar32 = local_1290[lVar29];
      if ((cVar35 == '\0') || (cVar32 == '\0')) {
        if (cVar32 == '\0') {
          cVar35 = param_6[2][0];
          uVar522 = *(undefined8 *)(param_6[1] + 0x10);
          uVar495 = *(undefined8 *)(param_6[1] + 8);
          uVar469 = *(undefined8 *)param_6[1];
          uVar435 = *(undefined8 *)(*param_6 + 0x10);
          auVar111._0_8_ = *(undefined8 *)*param_6;
          uVar338 = *(undefined8 *)(*param_6 + 8);
        }
        else {
          auVar111._0_8_ = *(undefined8 *)*(undefined1 (*) [24])(local_12c0 + lVar29);
          uVar338 = *(undefined8 *)(local_12c0 + lVar29 + 8);
          uVar435 = *(undefined8 *)(local_12a8 + lVar29 + -8);
          uVar469 = *(undefined8 *)(local_12a8 + lVar29);
          uVar495 = *(undefined8 *)(local_12a8 + lVar29 + 8);
          uVar522 = *(undefined8 *)(local_1290 + lVar29 + -8);
          cVar35 = cVar32;
        }
      }
      else {
        auVar322._24_8_ = 0;
        auVar322._0_24_ = *param_6;
        auVar434._24_8_ = 0;
        auVar434._0_24_ = *(undefined1 (*) [24])(local_12c0 + lVar29);
        auVar458 = vminpd_avx(auVar322,auVar434);
        auVar111._0_8_ = auVar458._0_8_;
        auVar474 = vshufpd_avx(auVar458._0_16_,auVar458._0_16_,1);
        uVar338 = auVar474._0_8_;
        uVar435 = auVar458._16_8_;
        auVar490._24_8_ = 0;
        auVar490._0_24_ = param_6[1];
        auVar518._16_8_ = *(undefined8 *)(local_1290 + lVar29 + -8);
        auVar518._0_16_ = *(undefined1 (*) [16])(local_12a8 + lVar29);
        auVar518._24_8_ = 0;
        auVar458 = vmaxpd_avx(auVar490,auVar518);
        uVar469 = auVar458._0_8_;
        auVar474 = vshufpd_avx(auVar458._0_16_,auVar458._0_16_,1);
        uVar495 = auVar474._0_8_;
        uVar522 = auVar458._16_8_;
      }
      uVar30 = uVar30 & ~(1L << (uVar34 & 0x3f));
      *(undefined8 *)*param_6 = auVar111._0_8_;
      *(undefined8 *)(*param_6 + 8) = uVar338;
      *(undefined8 *)(*param_6 + 0x10) = uVar435;
      *(undefined8 *)param_6[1] = uVar469;
      *(undefined8 *)(param_6[1] + 8) = uVar495;
      *(undefined8 *)(param_6[1] + 0x10) = uVar522;
      param_6[2][0] = cVar35;
    } while (uVar30 != 0);
    return;
  }
  local_1300 = *param_8;
  local_1520 = ZEXT1632(ZEXT816(0));
  local_1540 = ZEXT1632(ZEXT816(0));
  local_1560 = ZEXT1632(ZEXT816(0));
  local_1580 = ZEXT1632(ZEXT816(0));
  local_15a0 = ZEXT1632(ZEXT816(0));
  local_15c0 = ZEXT1632(ZEXT816(0));
  local_15e0 = ZEXT1632(ZEXT816(0));
  local_1600 = ZEXT1632(ZEXT816(0));
  local_1620 = ZEXT1632(ZEXT816(0));
  local_1640 = ZEXT1632(ZEXT816(0));
  local_1660 = ZEXT1632(ZEXT816(0));
  local_1680 = ZEXT1632(ZEXT816(0));
  local_1500 = 0;
  uVar42 = 0;
  if (0 < (int)uVar45) {
    auVar542 = ZEXT1664((undefined1  [16])0x0);
    do {
      auVar458 = local_1a00;
      auVar474 = *(undefined1 (*) [16])(param_2 + (ulonglong)(uVar42 * 4));
      uVar30 = (ulonglong)(uVar42 * 7);
      auVar51 = vpinsrb_avx(ZEXT116(*(byte *)(param_4 + 0x30 + uVar30 * 8)),
                            (uint)*(byte *)(param_4 + 0x68 + uVar30 * 8),1);
      auVar51 = vpinsrb_avx(auVar51,(uint)*(byte *)(param_4 + 0xa0 + uVar30 * 8),2);
      auVar51 = vpinsrb_avx(auVar51,(uint)*(byte *)(param_4 + 0xd8 + uVar30 * 8),3);
      auVar51 = vpinsrb_avx(auVar51,(uint)*(byte *)(param_4 + 0x110 + uVar30 * 8),4);
      auVar51 = vpinsrb_avx(auVar51,(uint)*(byte *)(param_4 + 0x148 + uVar30 * 8),5);
      auVar51 = vpinsrb_avx(auVar51,(uint)*(byte *)(param_4 + 0x180 + uVar30 * 8),6);
      auVar185 = vpinsrb_avx(auVar51,(uint)*(byte *)(param_4 + 0x1b8 + uVar30 * 8),7);
      auVar51 = *(undefined1 (*) [16])(param_2 + 0x10 + (ulonglong)(uVar42 * 4));
      auVar470 = vpslld_avx(auVar51,2);
      auVar496 = vpslld_avx(auVar474,2);
      auVar546 = vpcmpeqd_avx(in_ZMM5._0_16_,in_ZMM5._0_16_);
      in_ZMM5 = ZEXT1664(auVar546);
      auVar470 = vpcmpeqd_avx(ZEXT416(*(uint *)(local_19c0._0_8_ + (longlong)auVar470._0_4_)),
                              auVar546);
      auVar496 = vpcmpeqd_avx(ZEXT416(*(uint *)(local_19c0._0_8_ + (longlong)auVar496._0_4_)),
                              auVar546);
      auVar470 = vpackssdw_avx(auVar496,auVar470);
      auVar496 = vpcmpeqb_avx(auVar185,auVar542._0_16_);
      auVar496 = vpmovsxbw_avx(auVar496 ^ auVar546);
      auVar470 = vpandn_avx(auVar470,auVar496);
      if ((((((((((((((((SUB161(auVar470 >> 7,0) & 1) != 0 || (SUB161(auVar470 >> 0xf,0) & 1) != 0)
                      || (SUB161(auVar470 >> 0x17,0) & 1) != 0) ||
                     (SUB161(auVar470 >> 0x1f,0) & 1) != 0) || (SUB161(auVar470 >> 0x27,0) & 1) != 0
                    ) || (SUB161(auVar470 >> 0x2f,0) & 1) != 0) ||
                  (SUB161(auVar470 >> 0x37,0) & 1) != 0) || (SUB161(auVar470 >> 0x3f,0) & 1) != 0)
                || (SUB161(auVar470 >> 0x47,0) & 1) != 0) || (SUB161(auVar470 >> 0x4f,0) & 1) != 0)
              || (SUB161(auVar470 >> 0x57,0) & 1) != 0) || (SUB161(auVar470 >> 0x5f,0) & 1) != 0) ||
            (SUB161(auVar470 >> 0x67,0) & 1) != 0) || (SUB161(auVar470 >> 0x6f,0) & 1) != 0) ||
          (SUB161(auVar470 >> 0x77,0) & 1) != 0) || auVar470[0xf] < '\0') {
        auVar339._8_8_ = 0;
        auVar339._0_8_ = *(ulonglong *)(param_4 + 0x150 + uVar30 * 8);
        auVar546 = vmovhps_avx(auVar339,*(undefined8 *)(param_4 + 0x188 + uVar30 * 8));
        auVar436._8_8_ = 0;
        auVar436._0_8_ = *(ulonglong *)(param_4 + 0xe0 + uVar30 * 8);
        auVar185 = vmovhps_avx(auVar436,*(undefined8 *)(param_4 + 0x118 + uVar30 * 8));
        auVar420._16_16_ = auVar546;
        auVar420._0_16_ = auVar185;
        auVar340._8_8_ = 0;
        auVar340._0_8_ = *(ulonglong *)(param_4 + 0x70 + uVar30 * 8);
        auVar186 = vmovhps_avx(auVar340,*(undefined8 *)(param_4 + 0xa8 + uVar30 * 8));
        auVar341._8_8_ = 0;
        auVar341._0_8_ = *(ulonglong *)(param_4 + uVar30 * 8);
        auVar471._8_8_ = 0;
        auVar471._0_8_ = *(ulonglong *)(param_4 + 8 + uVar30 * 8);
        auVar497._8_8_ = 0;
        auVar497._0_8_ = *(ulonglong *)(param_4 + 0x10 + uVar30 * 8);
        auVar535 = vmovhps_avx(auVar341,*(undefined8 *)(param_4 + 0x38 + uVar30 * 8));
        auVar342._8_8_ = 0;
        auVar342._0_8_ = *(ulonglong *)(param_4 + 0x18 + uVar30 * 8);
        auVar533._8_8_ = 0;
        auVar533._0_8_ = *(ulonglong *)(param_4 + 0x158 + uVar30 * 8);
        auVar547 = vmovhps_avx(auVar533,*(undefined8 *)(param_4 + 400 + uVar30 * 8));
        auVar543._8_8_ = 0;
        auVar543._0_8_ = *(ulonglong *)(param_4 + 0xe8 + uVar30 * 8);
        auVar554 = vmovhps_avx(auVar543,*(undefined8 *)(param_4 + 0x120 + uVar30 * 8));
        auVar553._8_8_ = 0;
        auVar553._0_8_ = *(ulonglong *)(param_4 + 0x78 + uVar30 * 8);
        auVar445 = vmovhps_avx(auVar553,*(undefined8 *)(param_4 + 0xb0 + uVar30 * 8));
        auVar189 = vmovhps_avx(auVar471,*(undefined8 *)(param_4 + 0x40 + uVar30 * 8));
        auVar451._16_16_ = auVar186;
        auVar451._0_16_ = auVar535;
        auVar437._8_8_ = 0;
        auVar437._0_8_ = *(ulonglong *)(param_4 + 0x160 + uVar30 * 8);
        auVar496 = vmovhps_avx(auVar437,*(undefined8 *)(param_4 + 0x198 + uVar30 * 8));
        auVar523._8_8_ = 0;
        auVar523._0_8_ = *(ulonglong *)(param_4 + 0xf0 + uVar30 * 8);
        auVar372 = vmovhps_avx(auVar523,*(undefined8 *)(param_4 + 0x128 + uVar30 * 8));
        auVar569._8_8_ = 0;
        auVar569._0_8_ = *(ulonglong *)(param_4 + 0x80 + uVar30 * 8);
        auVar190 = vmovhps_avx(auVar569,*(undefined8 *)(param_4 + 0xb8 + uVar30 * 8));
        auVar188 = vmovhps_avx(auVar497,*(undefined8 *)(param_4 + 0x48 + uVar30 * 8));
        auVar538._16_16_ = auVar547;
        auVar538._0_16_ = auVar554;
        auVar534._8_8_ = 0;
        auVar534._0_8_ = *(ulonglong *)(param_4 + 0x168 + uVar30 * 8);
        auVar191 = vmovhps_avx(auVar534,*(undefined8 *)(param_4 + 0x1a0 + uVar30 * 8));
        auVar544._8_8_ = 0;
        auVar544._0_8_ = *(ulonglong *)(param_4 + 0xf8 + uVar30 * 8);
        auVar192 = vmovhps_avx(auVar544,*(undefined8 *)(param_4 + 0x130 + uVar30 * 8));
        auVar587._8_8_ = 0;
        auVar587._0_8_ = *(ulonglong *)(param_4 + 0x88 + uVar30 * 8);
        auVar505 = vmovhps_avx(auVar587,*(undefined8 *)(param_4 + 0xc0 + uVar30 * 8));
        auVar187 = vmovhps_avx(auVar342,*(undefined8 *)(param_4 + 0x50 + uVar30 * 8));
        auVar478._16_16_ = auVar445;
        auVar478._0_16_ = auVar189;
        auVar472._8_8_ = 0;
        auVar472._0_8_ = *(ulonglong *)(param_4 + 0x170 + uVar30 * 8);
        auVar193 = vmovhps_avx(auVar472,*(undefined8 *)(param_4 + 0x1a8 + uVar30 * 8));
        local_1920._16_16_ = auVar496;
        local_1920._0_16_ = auVar372;
        auVar438._8_8_ = 0;
        auVar438._0_8_ = *(ulonglong *)(param_4 + 0x100 + uVar30 * 8);
        auVar372 = vmovhps_avx(auVar438,*(undefined8 *)(param_4 + 0x138 + uVar30 * 8));
        local_1940._16_16_ = auVar190;
        local_1940._0_16_ = auVar188;
        auVar498._8_8_ = 0;
        auVar498._0_8_ = *(ulonglong *)(param_4 + 0x90 + uVar30 * 8);
        auVar496 = vmovhpd_avx(auVar498,*(undefined8 *)(param_4 + 200 + uVar30 * 8));
        local_1960._16_16_ = auVar191;
        local_1960._0_16_ = auVar192;
        auVar524._8_8_ = 0;
        auVar524._0_8_ = *(ulonglong *)(param_4 + 0x20 + uVar30 * 8);
        auVar190 = vmovhps_avx(auVar524,*(undefined8 *)(param_4 + 0x58 + uVar30 * 8));
        auVar421._16_16_ = auVar505;
        auVar421._0_16_ = auVar187;
        auVar343._8_8_ = 0;
        auVar343._0_8_ = *(ulonglong *)(param_4 + 0x178 + uVar30 * 8);
        auVar188 = vmovhps_avx(auVar343,*(undefined8 *)(param_4 + 0x1b0 + uVar30 * 8));
        local_1980._16_16_ = auVar193;
        local_1980._0_16_ = auVar372;
        auVar439._8_8_ = 0;
        auVar439._0_8_ = *(ulonglong *)(param_4 + 0x108 + uVar30 * 8);
        auVar372 = vmovhps_avx(auVar439,*(undefined8 *)(param_4 + 0x140 + uVar30 * 8));
        register0x000012d0 = auVar496;
        local_1a60 = auVar190;
        auVar473._8_8_ = 0;
        auVar473._0_8_ = *(ulonglong *)(param_4 + 0x98 + uVar30 * 8);
        auVar496 = vmovhps_avx(auVar473,*(undefined8 *)(param_4 + 0xd0 + uVar30 * 8));
        local_1a80._16_16_ = auVar188;
        local_1a80._0_16_ = auVar372;
        auVar344._8_8_ = 0;
        auVar344._0_8_ = *(ulonglong *)(param_4 + 0x28 + uVar30 * 8);
        auVar372 = vmovhps_avx(auVar344,*(undefined8 *)(param_4 + 0x60 + uVar30 * 8));
        local_1aa0._16_16_ = auVar496;
        local_1aa0._0_16_ = auVar372;
        auVar496 = vpmovsxwd_avx(auVar470);
        auVar372 = vpunpckhwd_avx(auVar470,auVar470);
        local_1a20._0_16_ = auVar470;
        auVar470 = vpacksswb_avx(auVar470,auVar470);
        local_1a00._2_2_ = 0;
        local_1a00._0_2_ =
             (ushort)(SUB161(auVar470 >> 7,0) & 1) | (ushort)(SUB161(auVar470 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar470 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar470 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar470 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar470 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar470 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar470 >> 0x3f,0) & 1) << 7;
        local_1a00._4_28_ = auVar458._4_28_;
        auVar474 = vpslld_avx(auVar474,7);
        auVar474 = vpand_avx(auVar496,auVar474);
        iVar37 = auVar474._12_4_;
        auVar479._16_16_ = auVar372;
        auVar479._0_16_ = auVar496;
        auVar51 = vpslld_avx(auVar51,7);
        lVar29 = param_3 + auVar474._0_4_;
        lVar1 = param_3 + auVar474._4_4_;
        auVar51 = vpand_avx(auVar372,auVar51);
        iVar43 = auVar51._0_4_;
        lVar2 = param_3 + auVar51._8_4_;
        auVar52._8_8_ = 0;
        auVar52._0_8_ = *(ulonglong *)(param_3 + auVar474._0_4_);
        local_d00 = vmovhps_avx(auVar52,*(undefined8 *)(param_3 + auVar474._4_4_));
        auVar53._8_8_ = 0;
        auVar53._0_8_ = *(ulonglong *)(param_3 + auVar51._8_4_);
        local_cd0 = vmovhps_avx(auVar53,*(undefined8 *)(param_3 + auVar51._12_4_));
        auVar54._8_8_ = 0;
        auVar54._0_8_ = *(ulonglong *)(param_3 + iVar43);
        local_ce0 = vmovhps_avx(auVar54,*(undefined8 *)(param_3 + auVar51._4_4_));
        auVar55._8_8_ = 0;
        auVar55._0_8_ = *(ulonglong *)(param_3 + auVar474._8_4_);
        local_cf0 = vmovhps_avx(auVar55,*(undefined8 *)(param_3 + iVar37));
        uVar16 = auVar496._0_4_;
        uVar17 = auVar496._4_4_;
        uVar18 = auVar496._8_4_;
        uVar19 = auVar496._12_4_;
        uVar20 = auVar372._0_4_;
        uVar21 = auVar372._4_4_;
        uVar38 = auVar372._8_4_;
        uVar41 = auVar372._12_4_;
        auVar345._8_8_ = 0;
        auVar345._0_8_ =
             *(ulonglong *)
              ((ulonglong)
               (uVar16 & ___ymm_0000000800000008000000080000000800000008000000080000000800000008) +
              lVar29);
        local_cc0 = vmovhps_avx(auVar345,*(undefined8 *)
                                          ((ulonglong)(uVar17 & _UNK_150b50d64) + lVar1));
        auVar56._8_8_ = 0;
        auVar56._0_8_ = *(ulonglong *)((ulonglong)(uVar38 & _UNK_150b50d78) + lVar2);
        lVar3 = param_3 + auVar51._12_4_;
        local_c90 = vmovhps_avx(auVar56,*(undefined8 *)
                                         ((ulonglong)(uVar41 & _UNK_150b50d7c) + lVar3));
        lVar4 = param_3 + auVar474._8_4_;
        lVar5 = param_3 + iVar37;
        lVar6 = param_3 + iVar43;
        lVar7 = param_3 + auVar51._4_4_;
        auVar57._8_8_ = 0;
        auVar57._0_8_ = *(ulonglong *)((ulonglong)(uVar20 & _UNK_150b50d70) + lVar6);
        local_ca0 = vmovhps_avx(auVar57,*(undefined8 *)
                                         ((ulonglong)(uVar21 & _UNK_150b50d74) + lVar7));
        auVar58._8_8_ = 0;
        auVar58._0_8_ = *(ulonglong *)((ulonglong)(uVar18 & _UNK_150b50d68) + lVar4);
        local_cb0 = vmovhps_avx(auVar58,*(undefined8 *)
                                         ((ulonglong)(uVar19 & _UNK_150b50d6c) + lVar5));
        auVar59._0_4_ =
             uVar16 & ___ymm_0000001000000010000000100000001000000010000000100000001000000010;
        auVar59._4_4_ = uVar17 & _UNK_150b51424;
        auVar59._8_4_ = uVar18 & _UNK_150b51428;
        auVar59._12_4_ = uVar19 & _UNK_150b5142c;
        uVar45 = vextractps_avx(auVar59,1);
        uVar36 = vextractps_avx(auVar59,2);
        iVar43 = iVar43 >> 0x1f;
        uVar39 = vextractps_avx(auVar59,3);
        auVar346._8_8_ = 0;
        auVar346._0_8_ = *(ulonglong *)((ulonglong)auVar59._0_4_ + lVar29);
        local_c80 = vmovhps_avx(auVar346,*(undefined8 *)((ulonglong)uVar45 + lVar1));
        auVar60._8_8_ = 0;
        auVar60._0_8_ = *(ulonglong *)((ulonglong)(uVar38 & _UNK_150b51438) + lVar2);
        local_c50 = vmovhps_avx(auVar60,*(undefined8 *)
                                         ((ulonglong)(uVar41 & _UNK_150b5143c) + lVar3));
        auVar61._8_8_ = 0;
        auVar61._0_8_ = *(ulonglong *)((ulonglong)(uVar20 & _UNK_150b51430) + lVar6);
        local_c60 = vmovhps_avx(auVar61,*(undefined8 *)
                                         ((ulonglong)(uVar21 & _UNK_150b51434) + lVar7));
        auVar62._8_8_ = 0;
        auVar62._0_8_ = *(ulonglong *)(CONCAT44(iVar37 >> 0x1f,uVar36) + lVar4);
        local_c70 = vmovhps_avx(auVar62,*(undefined8 *)(CONCAT44(iVar43,uVar39) + lVar5));
        auVar63._0_4_ =
             uVar16 & ___ymm_0000001800000018000000180000001800000018000000180000001800000018;
        auVar63._4_4_ = uVar17 & _UNK_151287344;
        auVar63._8_4_ = uVar18 & _UNK_151287348;
        auVar63._12_4_ = uVar19 & _UNK_15128734c;
        uVar45 = vextractps_avx(auVar63,1);
        uVar39 = (undefined4)((ulonglong)lVar2 >> 0x20);
        uVar36 = vextractps_avx(auVar63,2);
        uVar40 = vextractps_avx(auVar63,3);
        auVar347._8_8_ = 0;
        auVar347._0_8_ = *(ulonglong *)((ulonglong)auVar63._0_4_ + lVar29);
        local_c40 = vmovhps_avx(auVar347,*(undefined8 *)((ulonglong)uVar45 + lVar1));
        auVar64._8_8_ = 0;
        auVar64._0_8_ = *(ulonglong *)((ulonglong)(uVar38 & _UNK_151287358) + lVar2);
        local_c10 = vmovhps_avx(auVar64,*(undefined8 *)
                                         ((ulonglong)(uVar41 & _UNK_15128735c) + lVar3));
        auVar65._8_8_ = 0;
        auVar65._0_8_ = *(ulonglong *)((ulonglong)(uVar20 & _UNK_151287350) + lVar6);
        local_c20 = vmovhps_avx(auVar65,*(undefined8 *)
                                         ((ulonglong)(uVar21 & _UNK_151287354) + lVar7));
        auVar66._8_8_ = 0;
        auVar66._0_8_ = *(ulonglong *)(CONCAT44(uVar39,uVar36) + lVar4);
        local_c30 = vmovhps_avx(auVar66,*(undefined8 *)(CONCAT44(iVar43,uVar40) + lVar5));
        auVar67._0_4_ =
             uVar16 & ___ymm_0000002000000020000000200000002000000020000000200000002000000020;
        auVar67._4_4_ = uVar17 & _UNK_151287364;
        auVar67._8_4_ = uVar18 & _UNK_151287368;
        auVar67._12_4_ = uVar19 & _UNK_15128736c;
        uVar45 = vextractps_avx(auVar67,1);
        uVar36 = vextractps_avx(auVar67,2);
        uVar40 = vextractps_avx(auVar67,3);
        auVar348._8_8_ = 0;
        auVar348._0_8_ = *(ulonglong *)((ulonglong)auVar67._0_4_ + lVar29);
        local_c00 = vmovhps_avx(auVar348,*(undefined8 *)((ulonglong)uVar45 + lVar1));
        auVar68._8_8_ = 0;
        auVar68._0_8_ = *(ulonglong *)((ulonglong)(uVar38 & _UNK_151287378) + lVar2);
        local_bd0 = vmovhps_avx(auVar68,*(undefined8 *)
                                         ((ulonglong)(uVar41 & _UNK_15128737c) + lVar3));
        auVar69._8_8_ = 0;
        auVar69._0_8_ = *(ulonglong *)((ulonglong)(uVar20 & _UNK_151287370) + lVar6);
        local_be0 = vmovhps_avx(auVar69,*(undefined8 *)
                                         ((ulonglong)(uVar21 & _UNK_151287374) + lVar7));
        auVar70._8_8_ = 0;
        auVar70._0_8_ = *(ulonglong *)(CONCAT44(uVar39,uVar36) + lVar4);
        local_bf0 = vmovhps_avx(auVar70,*(undefined8 *)(CONCAT44(iVar43,uVar40) + lVar5));
        auVar71._0_4_ =
             uVar16 & ___ymm_0000002800000028000000280000002800000028000000280000002800000028;
        auVar71._4_4_ = uVar17 & _UNK_151287384;
        auVar71._8_4_ = uVar18 & _UNK_151287388;
        auVar71._12_4_ = uVar19 & _UNK_15128738c;
        uVar45 = vextractps_avx(auVar71,1);
        uVar36 = vextractps_avx(auVar71,2);
        uVar40 = vextractps_avx(auVar71,3);
        auVar349._8_8_ = 0;
        auVar349._0_8_ = *(ulonglong *)((ulonglong)auVar71._0_4_ + lVar29);
        local_bc0 = vmovhps_avx(auVar349,*(undefined8 *)((ulonglong)uVar45 + lVar1));
        auVar72._8_8_ = 0;
        auVar72._0_8_ = *(ulonglong *)((ulonglong)(uVar38 & _UNK_151287398) + lVar2);
        local_b90 = vmovhps_avx(auVar72,*(undefined8 *)
                                         ((ulonglong)(uVar41 & _UNK_15128739c) + lVar3));
        auVar73._8_8_ = 0;
        auVar73._0_8_ = *(ulonglong *)((ulonglong)(uVar20 & _UNK_151287390) + lVar6);
        local_ba0 = vmovhps_avx(auVar73,*(undefined8 *)
                                         ((ulonglong)(uVar21 & _UNK_151287394) + lVar7));
        auVar74._8_8_ = 0;
        auVar74._0_8_ = *(ulonglong *)(CONCAT44(uVar39,uVar36) + lVar4);
        local_bb0 = vmovhps_avx(auVar74,*(undefined8 *)(CONCAT44(iVar43,uVar40) + lVar5));
        auVar75._0_4_ =
             uVar16 & ___ymm_0000003000000030000000300000003000000030000000300000003000000030;
        auVar75._4_4_ = uVar17 & _UNK_1512873a4;
        auVar75._8_4_ = uVar18 & _UNK_1512873a8;
        auVar75._12_4_ = uVar19 & _UNK_1512873ac;
        uVar45 = vextractps_avx(auVar75,1);
        uVar36 = vextractps_avx(auVar75,2);
        uVar40 = vextractps_avx(auVar75,3);
        auVar350._8_8_ = 0;
        auVar350._0_8_ = *(ulonglong *)((ulonglong)auVar75._0_4_ + lVar29);
        local_b80 = vmovhps_avx(auVar350,*(undefined8 *)((ulonglong)uVar45 + lVar1));
        auVar76._8_8_ = 0;
        auVar76._0_8_ = *(ulonglong *)((ulonglong)(uVar38 & _UNK_1512873b8) + lVar2);
        local_b50 = vmovhps_avx(auVar76,*(undefined8 *)
                                         ((ulonglong)(uVar41 & _UNK_1512873bc) + lVar3));
        auVar77._8_8_ = 0;
        auVar77._0_8_ = *(ulonglong *)((ulonglong)(uVar20 & _UNK_1512873b0) + lVar6);
        local_b60 = vmovhps_avx(auVar77,*(undefined8 *)
                                         ((ulonglong)(uVar21 & _UNK_1512873b4) + lVar7));
        auVar78._8_8_ = 0;
        auVar78._0_8_ = *(ulonglong *)(CONCAT44(uVar39,uVar36) + lVar4);
        local_b70 = vmovhps_avx(auVar78,*(undefined8 *)(CONCAT44(iVar43,uVar40) + lVar5));
        auVar79._0_4_ =
             uVar16 & ___ymm_0000003800000038000000380000003800000038000000380000003800000038;
        auVar79._4_4_ = uVar17 & _UNK_1512873c4;
        auVar79._8_4_ = uVar18 & _UNK_1512873c8;
        auVar79._12_4_ = uVar19 & _UNK_1512873cc;
        uVar45 = vextractps_avx(auVar79,1);
        uVar36 = vextractps_avx(auVar79,2);
        uVar40 = vextractps_avx(auVar79,3);
        auVar351._8_8_ = 0;
        auVar351._0_8_ = *(ulonglong *)((ulonglong)auVar79._0_4_ + lVar29);
        local_b40 = vmovhps_avx(auVar351,*(undefined8 *)((ulonglong)uVar45 + lVar1));
        auVar80._8_8_ = 0;
        auVar80._0_8_ = *(ulonglong *)((ulonglong)(uVar38 & _UNK_1512873d8) + lVar2);
        local_b10 = vmovhps_avx(auVar80,*(undefined8 *)
                                         ((ulonglong)(uVar41 & _UNK_1512873dc) + lVar3));
        auVar81._8_8_ = 0;
        auVar81._0_8_ = *(ulonglong *)((ulonglong)(uVar20 & _UNK_1512873d0) + lVar6);
        local_b20 = vmovhps_avx(auVar81,*(undefined8 *)
                                         ((ulonglong)(uVar21 & _UNK_1512873d4) + lVar7));
        auVar82._8_8_ = 0;
        auVar82._0_8_ = *(ulonglong *)(CONCAT44(uVar39,uVar36) + lVar4);
        local_b30 = vmovhps_avx(auVar82,*(undefined8 *)(CONCAT44(iVar43,uVar40) + lVar5));
        auVar83._0_4_ =
             uVar16 & ___ymm_0000004000000040000000400000004000000040000000400000004000000040;
        auVar83._4_4_ = uVar17 & _UNK_1512873e4;
        auVar83._8_4_ = uVar18 & _UNK_1512873e8;
        auVar83._12_4_ = uVar19 & _UNK_1512873ec;
        uVar45 = vextractps_avx(auVar83,1);
        uVar36 = vextractps_avx(auVar83,2);
        uVar40 = vextractps_avx(auVar83,3);
        auVar352._8_8_ = 0;
        auVar352._0_8_ = *(ulonglong *)((ulonglong)auVar83._0_4_ + lVar29);
        local_b00 = vmovhps_avx(auVar352,*(undefined8 *)((ulonglong)uVar45 + lVar1));
        auVar84._8_8_ = 0;
        auVar84._0_8_ = *(ulonglong *)((ulonglong)(uVar38 & _UNK_1512873f8) + lVar2);
        local_ad0 = vmovhps_avx(auVar84,*(undefined8 *)
                                         ((ulonglong)(uVar41 & _UNK_1512873fc) + lVar3));
        auVar85._8_8_ = 0;
        auVar85._0_8_ = *(ulonglong *)((ulonglong)(uVar20 & _UNK_1512873f0) + lVar6);
        local_ae0 = vmovhps_avx(auVar85,*(undefined8 *)
                                         ((ulonglong)(uVar21 & _UNK_1512873f4) + lVar7));
        auVar86._8_8_ = 0;
        auVar86._0_8_ = *(ulonglong *)(CONCAT44(uVar39,uVar36) + lVar4);
        local_af0 = vmovhps_avx(auVar86,*(undefined8 *)(CONCAT44(iVar43,uVar40) + lVar5));
        auVar87._0_4_ =
             uVar16 & ___ymm_0000004800000048000000480000004800000048000000480000004800000048;
        auVar87._4_4_ = uVar17 & _UNK_151287404;
        auVar87._8_4_ = uVar18 & _UNK_151287408;
        auVar87._12_4_ = uVar19 & _UNK_15128740c;
        uVar45 = vextractps_avx(auVar87,1);
        uVar36 = vextractps_avx(auVar87,2);
        uVar40 = vextractps_avx(auVar87,3);
        auVar353._8_8_ = 0;
        auVar353._0_8_ = *(ulonglong *)((ulonglong)auVar87._0_4_ + lVar29);
        local_ac0 = vmovhps_avx(auVar353,*(undefined8 *)((ulonglong)uVar45 + lVar1));
        auVar88._8_8_ = 0;
        auVar88._0_8_ = *(ulonglong *)((ulonglong)(uVar38 & _UNK_151287418) + lVar2);
        local_a90 = vmovhps_avx(auVar88,*(undefined8 *)
                                         ((ulonglong)(uVar41 & _UNK_15128741c) + lVar3));
        auVar89._8_8_ = 0;
        auVar89._0_8_ = *(ulonglong *)((ulonglong)(uVar20 & _UNK_151287410) + lVar6);
        local_aa0 = vmovhps_avx(auVar89,*(undefined8 *)
                                         ((ulonglong)(uVar21 & _UNK_151287414) + lVar7));
        auVar90._8_8_ = 0;
        auVar90._0_8_ = *(ulonglong *)(CONCAT44(uVar39,uVar36) + lVar4);
        local_ab0 = vmovhps_avx(auVar90,*(undefined8 *)(CONCAT44(iVar43,uVar40) + lVar5));
        auVar91._0_4_ =
             uVar16 & ___ymm_0000005000000050000000500000005000000050000000500000005000000050;
        auVar91._4_4_ = uVar17 & _UNK_151287424;
        auVar91._8_4_ = uVar18 & _UNK_151287428;
        auVar91._12_4_ = uVar19 & _UNK_15128742c;
        uVar45 = vextractps_avx(auVar91,1);
        uVar36 = vextractps_avx(auVar91,2);
        uVar40 = vextractps_avx(auVar91,3);
        auVar354._8_8_ = 0;
        auVar354._0_8_ = *(ulonglong *)((ulonglong)auVar91._0_4_ + lVar29);
        local_a80 = vmovhps_avx(auVar354,*(undefined8 *)((ulonglong)uVar45 + lVar1));
        auVar92._8_8_ = 0;
        auVar92._0_8_ = *(ulonglong *)((ulonglong)(uVar38 & _UNK_151287438) + lVar2);
        local_a50 = vmovhps_avx(auVar92,*(undefined8 *)
                                         ((ulonglong)(uVar41 & _UNK_15128743c) + lVar3));
        auVar93._8_8_ = 0;
        auVar93._0_8_ = *(ulonglong *)((ulonglong)(uVar20 & _UNK_151287430) + lVar6);
        local_a60 = vmovhps_avx(auVar93,*(undefined8 *)
                                         ((ulonglong)(uVar21 & _UNK_151287434) + lVar7));
        auVar94._8_8_ = 0;
        auVar94._0_8_ = *(ulonglong *)(CONCAT44(uVar39,uVar36) + lVar4);
        local_a70 = vmovhps_avx(auVar94,*(undefined8 *)(CONCAT44(iVar43,uVar40) + lVar5));
        auVar95._0_4_ =
             uVar16 & ___ymm_0000005800000058000000580000005800000058000000580000005800000058;
        auVar95._4_4_ = uVar17 & _UNK_151287444;
        auVar95._8_4_ = uVar18 & _UNK_151287448;
        auVar95._12_4_ = uVar19 & _UNK_15128744c;
        uVar45 = vextractps_avx(auVar95,1);
        uVar36 = vextractps_avx(auVar95,2);
        uVar40 = vextractps_avx(auVar95,3);
        auVar355._8_8_ = 0;
        auVar355._0_8_ = *(ulonglong *)((ulonglong)auVar95._0_4_ + lVar29);
        local_a40 = vmovhps_avx(auVar355,*(undefined8 *)((ulonglong)uVar45 + lVar1));
        auVar96._8_8_ = 0;
        auVar96._0_8_ = *(ulonglong *)((ulonglong)(uVar38 & _UNK_151287458) + lVar2);
        local_a10 = vmovhps_avx(auVar96,*(undefined8 *)
                                         ((ulonglong)(uVar41 & _UNK_15128745c) + lVar3));
        auVar97._8_8_ = 0;
        auVar97._0_8_ = *(ulonglong *)((ulonglong)(uVar20 & _UNK_151287450) + lVar6);
        local_a20 = vmovhps_avx(auVar97,*(undefined8 *)
                                         ((ulonglong)(uVar21 & _UNK_151287454) + lVar7));
        auVar98._8_8_ = 0;
        auVar98._0_8_ = *(ulonglong *)(CONCAT44(uVar39,uVar36) + lVar4);
        local_a30 = vmovhps_avx(auVar98,*(undefined8 *)(CONCAT44(iVar43,uVar40) + lVar5));
        auVar99._0_4_ =
             uVar16 & ___ymm_0000006000000060000000600000006000000060000000600000006000000060;
        auVar99._4_4_ = uVar17 & _UNK_151287464;
        auVar99._8_4_ = uVar18 & _UNK_151287468;
        auVar99._12_4_ = uVar19 & _UNK_15128746c;
        uVar45 = vextractps_avx(auVar99,1);
        uVar36 = vextractps_avx(auVar99,2);
        uVar40 = vextractps_avx(auVar99,3);
        auVar356._8_8_ = 0;
        auVar356._0_8_ = *(ulonglong *)((ulonglong)auVar99._0_4_ + lVar29);
        local_a00 = vmovhps_avx(auVar356,*(undefined8 *)((ulonglong)uVar45 + lVar1));
        auVar100._8_8_ = 0;
        auVar100._0_8_ = *(ulonglong *)((ulonglong)(uVar38 & _UNK_151287478) + lVar2);
        local_9d0 = vmovhps_avx(auVar100,*(undefined8 *)
                                          ((ulonglong)(uVar41 & _UNK_15128747c) + lVar3));
        auVar101._8_8_ = 0;
        auVar101._0_8_ = *(ulonglong *)((ulonglong)(uVar20 & _UNK_151287470) + lVar6);
        local_9e0 = vmovhps_avx(auVar101,*(undefined8 *)
                                          ((ulonglong)(uVar21 & _UNK_151287474) + lVar7));
        auVar102._8_8_ = 0;
        auVar102._0_8_ = *(ulonglong *)(CONCAT44(uVar39,uVar36) + lVar4);
        local_9f0 = vmovhps_avx(auVar102,*(undefined8 *)(CONCAT44(iVar43,uVar40) + lVar5));
        auVar103._0_4_ =
             uVar16 & ___ymm_0000006800000068000000680000006800000068000000680000006800000068;
        auVar103._4_4_ = uVar17 & _UNK_151287484;
        auVar103._8_4_ = uVar18 & _UNK_151287488;
        auVar103._12_4_ = uVar19 & _UNK_15128748c;
        uVar45 = vextractps_avx(auVar103,1);
        uVar36 = vextractps_avx(auVar103,2);
        uVar40 = vextractps_avx(auVar103,3);
        auVar357._8_8_ = 0;
        auVar357._0_8_ = *(ulonglong *)((ulonglong)auVar103._0_4_ + lVar29);
        local_9c0 = vmovhps_avx(auVar357,*(undefined8 *)((ulonglong)uVar45 + lVar1));
        auVar104._8_8_ = 0;
        auVar104._0_8_ = *(ulonglong *)((ulonglong)(uVar38 & _UNK_151287498) + lVar2);
        local_990 = vmovhps_avx(auVar104,*(undefined8 *)
                                          ((ulonglong)(uVar41 & _UNK_15128749c) + lVar3));
        auVar105._8_8_ = 0;
        auVar105._0_8_ = *(ulonglong *)((ulonglong)(uVar20 & _UNK_151287490) + lVar6);
        local_9a0 = vmovhps_avx(auVar105,*(undefined8 *)
                                          ((ulonglong)(uVar21 & _UNK_151287494) + lVar7));
        auVar106._8_8_ = 0;
        auVar106._0_8_ = *(ulonglong *)(CONCAT44(uVar39,uVar36) + lVar4);
        local_9b0 = vmovhps_avx(auVar106,*(undefined8 *)(CONCAT44(iVar43,uVar40) + lVar5));
        auVar107._0_4_ =
             uVar16 & ___ymm_0000007000000070000000700000007000000070000000700000007000000070;
        auVar107._4_4_ = uVar17 & _UNK_1512874a4;
        auVar107._8_4_ = uVar18 & _UNK_1512874a8;
        auVar107._12_4_ = uVar19 & _UNK_1512874ac;
        uVar45 = vextractps_avx(auVar107,1);
        uVar44 = vextractps_avx(auVar107,2);
        uVar36 = vextractps_avx(auVar107,3);
        auVar358._8_8_ = 0;
        auVar358._0_8_ = *(ulonglong *)((ulonglong)auVar107._0_4_ + lVar29);
        local_980 = vmovhps_avx(auVar358,*(undefined8 *)((ulonglong)uVar45 + lVar1));
        auVar108._8_8_ = 0;
        auVar108._0_8_ = *(ulonglong *)((ulonglong)(uVar38 & _UNK_1512874b8) + lVar2);
        local_950 = vmovhps_avx(auVar108,*(undefined8 *)
                                          ((ulonglong)(uVar41 & _UNK_1512874bc) + lVar3));
        auVar109._8_8_ = 0;
        auVar109._0_8_ = *(ulonglong *)((ulonglong)(uVar20 & _UNK_1512874b0) + lVar6);
        local_960 = vmovhps_avx(auVar109,*(undefined8 *)
                                          ((ulonglong)(uVar21 & _UNK_1512874b4) + lVar7));
        auVar110._8_8_ = 0;
        auVar110._0_8_ =
             *(ulonglong *)
              ((ulonglong)
               (uVar16 & ___ymm_0000007800000078000000780000007800000078000000780000007800000078) +
              lVar29);
        local_940 = vmovhps_avx(auVar110,*(undefined8 *)
                                          ((ulonglong)(uVar17 & _UNK_1512874c4) + lVar1));
        auVar440._8_8_ = 0;
        auVar440._0_8_ = *(ulonglong *)((ulonglong)uVar44 + lVar4);
        local_970 = vmovhps_avx(auVar440,*(undefined8 *)(CONCAT44(iVar43,uVar36) + lVar5));
        auVar441._8_8_ = 0;
        auVar441._0_8_ = *(ulonglong *)((ulonglong)(uVar18 & _UNK_1512874c8) + lVar4);
        local_930 = vmovhps_avx(auVar441,*(undefined8 *)
                                          ((ulonglong)(uVar19 & _UNK_1512874cc) + lVar5));
        auVar359._8_8_ = 0;
        auVar359._0_8_ = *(ulonglong *)((ulonglong)(uVar38 & _UNK_1512874d8) + lVar2);
        local_910 = vmovhps_avx(auVar359,*(undefined8 *)
                                          ((ulonglong)(uVar41 & _UNK_1512874dc) + lVar3));
        auVar360._8_8_ = 0;
        auVar360._0_8_ = *(ulonglong *)((ulonglong)(uVar20 & _UNK_1512874d0) + lVar6);
        local_920 = vmovhps_avx(auVar360,*(undefined8 *)
                                          ((ulonglong)(uVar21 & _UNK_1512874d4) + lVar7));
        dVar8 = param_5[8];
        dVar46 = param_5[0xc];
        dVar47 = *param_5;
        lVar29 = 0xc0;
        dVar48 = param_5[1];
        dVar49 = param_5[5];
        dVar50 = param_5[9];
        dVar323 = param_5[0xd];
        dVar324 = param_5[2];
        dVar325 = param_5[6];
        dVar326 = param_5[10];
        dVar327 = param_5[0xe];
        dVar328 = param_5[3];
        dVar329 = param_5[7];
        dVar330 = param_5[0xb];
        dVar331 = param_5[0xf];
        do {
          dVar333 = *(double *)(local_dc0 + lVar29);
          dVar334 = *(double *)(local_dc0 + lVar29 + 8);
          dVar335 = *(double *)(local_db0 + lVar29);
          dVar336 = *(double *)(local_db0 + lVar29 + 8);
          dVar337 = *(double *)(local_da0 + lVar29);
          dVar468 = *(double *)(local_da0 + lVar29 + 8);
          dVar491 = *(double *)(local_d90 + lVar29);
          dVar492 = *(double *)(local_d90 + lVar29 + 8);
          dVar493 = *(double *)(local_d80 + lVar29);
          dVar494 = *(double *)(local_d80 + lVar29 + 8);
          dVar519 = *(double *)(local_d70 + lVar29);
          dVar520 = *(double *)(local_d70 + lVar29 + 8);
          dVar521 = *(double *)(local_d60 + lVar29);
          dVar552 = *(double *)(local_d60 + lVar29 + 8);
          dVar564 = *(double *)(local_d50 + lVar29);
          dVar565 = *(double *)(local_d50 + lVar29 + 8);
          dVar566 = *(double *)(local_d20 + lVar29);
          dVar567 = *(double *)(local_d20 + lVar29 + 8);
          dVar568 = *(double *)(local_d10 + lVar29);
          dVar581 = *(double *)(local_d10 + lVar29 + 8);
          dVar582 = *(double *)(local_d40 + lVar29);
          dVar583 = *(double *)(local_d40 + lVar29 + 8);
          dVar584 = *(double *)(local_d30 + lVar29);
          dVar585 = *(double *)(local_d30 + lVar29 + 8);
          dVar586 = *(double *)(local_d00 + lVar29);
          dVar621 = *(double *)(local_d00 + lVar29 + 8);
          dVar622 = *(double *)(local_cf0 + lVar29);
          dVar637 = *(double *)(local_cf0 + lVar29 + 8);
          dVar638 = *(double *)(local_ce0 + lVar29);
          dVar639 = *(double *)(local_ce0 + lVar29 + 8);
          dVar640 = *(double *)(local_cd0 + lVar29);
          dVar641 = *(double *)(local_cd0 + lVar29 + 8);
          dVar332 = param_5[4];
          *(double *)((longlong)local_2080 + lVar29 + 0x20) =
               dVar638 * dVar46 + dVar566 * dVar8 + dVar337 * dVar47 + 0.0 + dVar521 * dVar332;
          *(double *)((longlong)local_2080 + lVar29 + 0x28) =
               dVar639 * dVar46 + dVar567 * dVar8 + dVar468 * dVar47 + 0.0 + dVar552 * dVar332;
          *(double *)((longlong)local_2080 + lVar29 + 0x30) =
               dVar640 * dVar46 + dVar568 * dVar8 + dVar491 * dVar47 + 0.0 + dVar564 * dVar332;
          *(double *)((longlong)local_2080 + lVar29 + 0x38) =
               dVar641 * dVar46 + dVar581 * dVar8 + dVar492 * dVar47 + 0.0 + dVar565 * dVar332;
          *(double *)((longlong)local_2080 + lVar29) =
               dVar333 * dVar47 + 0.0 + dVar493 * dVar332 + dVar582 * dVar8 + dVar586 * dVar46;
          *(double *)((longlong)local_2080 + lVar29 + 8) =
               dVar334 * dVar47 + 0.0 + dVar494 * dVar332 + dVar583 * dVar8 + dVar621 * dVar46;
          *(double *)((longlong)local_2080 + lVar29 + 0x10) =
               dVar335 * dVar47 + 0.0 + dVar519 * dVar332 + dVar584 * dVar8 + dVar622 * dVar46;
          *(double *)((longlong)local_2080 + lVar29 + 0x18) =
               dVar336 * dVar47 + 0.0 + dVar520 * dVar332 + dVar585 * dVar8 + dVar637 * dVar46;
          *(double *)((longlong)local_2080 + lVar29 + 0x60) =
               dVar337 * dVar48 + 0.0 + dVar521 * dVar49 + dVar566 * dVar50 + dVar638 * dVar323;
          *(double *)((longlong)local_2080 + lVar29 + 0x68) =
               dVar468 * dVar48 + 0.0 + dVar552 * dVar49 + dVar567 * dVar50 + dVar639 * dVar323;
          *(double *)((longlong)local_2080 + lVar29 + 0x70) =
               dVar491 * dVar48 + 0.0 + dVar564 * dVar49 + dVar568 * dVar50 + dVar640 * dVar323;
          *(double *)((longlong)local_2080 + lVar29 + 0x78) =
               dVar492 * dVar48 + 0.0 + dVar565 * dVar49 + dVar581 * dVar50 + dVar641 * dVar323;
          *(double *)((longlong)local_2080 + lVar29 + 0x40) =
               dVar586 * dVar323 + dVar582 * dVar50 + dVar493 * dVar49 + dVar333 * dVar48 + 0.0;
          *(double *)((longlong)local_2080 + lVar29 + 0x48) =
               dVar621 * dVar323 + dVar583 * dVar50 + dVar494 * dVar49 + dVar334 * dVar48 + 0.0;
          *(double *)((longlong)local_2080 + lVar29 + 0x50) =
               dVar622 * dVar323 + dVar584 * dVar50 + dVar519 * dVar49 + dVar335 * dVar48 + 0.0;
          *(double *)((longlong)local_2080 + lVar29 + 0x58) =
               dVar637 * dVar323 + dVar585 * dVar50 + dVar520 * dVar49 + dVar336 * dVar48 + 0.0;
          *(double *)((longlong)local_2080 + lVar29 + 0xa0) =
               dVar337 * dVar324 + 0.0 + dVar521 * dVar325 + dVar566 * dVar326 + dVar638 * dVar327;
          *(double *)((longlong)local_2080 + lVar29 + 0xa8) =
               dVar468 * dVar324 + 0.0 + dVar552 * dVar325 + dVar567 * dVar326 + dVar639 * dVar327;
          *(double *)((longlong)local_2080 + lVar29 + 0xb0) =
               dVar491 * dVar324 + 0.0 + dVar564 * dVar325 + dVar568 * dVar326 + dVar640 * dVar327;
          *(double *)((longlong)local_2080 + lVar29 + 0xb8) =
               dVar492 * dVar324 + 0.0 + dVar565 * dVar325 + dVar581 * dVar326 + dVar641 * dVar327;
          *(double *)((longlong)local_2080 + lVar29 + 0x80) =
               dVar586 * dVar327 + dVar582 * dVar326 + dVar493 * dVar325 + dVar333 * dVar324 + 0.0;
          *(double *)((longlong)local_2080 + lVar29 + 0x88) =
               dVar621 * dVar327 + dVar583 * dVar326 + dVar494 * dVar325 + dVar334 * dVar324 + 0.0;
          *(double *)((longlong)local_2080 + lVar29 + 0x90) =
               dVar622 * dVar327 + dVar584 * dVar326 + dVar519 * dVar325 + dVar335 * dVar324 + 0.0;
          *(double *)((longlong)local_2080 + lVar29 + 0x98) =
               dVar637 * dVar327 + dVar585 * dVar326 + dVar520 * dVar325 + dVar336 * dVar324 + 0.0;
          *(double *)(local_1fa0 + lVar29) =
               dVar521 * dVar329 + dVar337 * dVar328 + 0.0 + dVar566 * dVar330 + dVar638 * dVar331;
          *(double *)(local_1fa0 + lVar29 + 8) =
               dVar552 * dVar329 + dVar468 * dVar328 + 0.0 + dVar567 * dVar330 + dVar639 * dVar331;
          *(double *)(local_1fa0 + lVar29 + 0x10) =
               dVar564 * dVar329 + dVar491 * dVar328 + 0.0 + dVar568 * dVar330 + dVar640 * dVar331;
          *(double *)(local_1fa0 + lVar29 + 0x18) =
               dVar565 * dVar329 + dVar492 * dVar328 + 0.0 + dVar581 * dVar330 + dVar641 * dVar331;
          *(double *)(local_1fc0 + lVar29) =
               dVar333 * dVar328 + 0.0 + dVar493 * dVar329 + dVar582 * dVar330 + dVar331 * dVar586;
          *(double *)(local_1fc0 + lVar29 + 8) =
               dVar334 * dVar328 + 0.0 + dVar494 * dVar329 + dVar583 * dVar330 + dVar331 * dVar621;
          *(double *)(local_1fc0 + lVar29 + 0x10) =
               dVar335 * dVar328 + 0.0 + dVar519 * dVar329 + dVar584 * dVar330 + dVar331 * dVar622;
          *(double *)(local_1fc0 + lVar29 + 0x18) =
               dVar336 * dVar328 + 0.0 + dVar520 * dVar329 + dVar585 * dVar330 + dVar331 * dVar637;
          lVar29 = lVar29 + 0x100;
        } while (lVar29 != 0x4c0);
        local_22a0 = auVar535._0_8_;
        dStack_2298 = auVar535._8_8_;
        dStack_2290 = auVar186._0_8_;
        dStack_2288 = auVar186._8_8_;
        local_2200 = auVar187._0_8_;
        dStack_21f8 = auVar187._8_8_;
        dStack_21f0 = auVar505._0_8_;
        dStack_21e8 = auVar505._8_8_;
        local_21e0 = auVar189._0_8_;
        dStack_21d8 = auVar189._8_8_;
        dStack_21d0 = auVar445._0_8_;
        dStack_21c8 = auVar445._8_8_;
        dVar46 = (local_22a0 + local_2200) * __real_3fe0000000000000;
        dVar323 = (dStack_2298 + dStack_21f8) * __real_3fe0000000000000;
        dVar328 = (dStack_2290 + dStack_21f0) * __real_3fe0000000000000;
        dVar333 = (dStack_2288 + dStack_21e8) * __real_3fe0000000000000;
        dVar494 = ((double)local_1a60._0_8_ + local_21e0) * __real_3fe0000000000000;
        dVar519 = ((double)local_1a60._8_8_ + dStack_21d8) * __real_3fe0000000000000;
        dVar520 = (dStack_1a50 + dStack_21d0) * __real_3fe0000000000000;
        dVar521 = (dStack_1a48 + dStack_21c8) * __real_3fe0000000000000;
        local_2280 = auVar185._0_8_;
        dStack_2278 = auVar185._8_8_;
        dStack_2270 = auVar546._0_8_;
        dStack_2268 = auVar546._8_8_;
        dVar552 = (local_1960._0_8_ + local_2280) * __real_3fe0000000000000;
        dVar564 = (local_1960._8_8_ + dStack_2278) * __real_3fe0000000000000;
        dVar565 = (local_1960._16_8_ + dStack_2270) * __real_3fe0000000000000;
        dVar566 = (local_1960._24_8_ + dStack_2268) * __real_3fe0000000000000;
        local_2220 = auVar554._0_8_;
        dStack_2218 = auVar554._8_8_;
        dStack_2210 = auVar547._0_8_;
        dStack_2208 = auVar547._8_8_;
        dVar567 = (local_1980._0_8_ + local_2220) * __real_3fe0000000000000;
        dVar581 = (local_1980._8_8_ + dStack_2218) * __real_3fe0000000000000;
        dVar583 = (local_1980._16_8_ + dStack_2210) * __real_3fe0000000000000;
        dVar585 = (local_1980._24_8_ + dStack_2208) * __real_3fe0000000000000;
        dVar8 = (double)CONCAT17(uStack_1e39,
                                 CONCAT16(uStack_1e3a,
                                          CONCAT15(uStack_1e3b,
                                                   CONCAT14(uStack_1e3c,
                                                            CONCAT13(uStack_1e3d,
                                                                     CONCAT12(uStack_1e3e,
                                                                              CONCAT11(uStack_1e3f,
                                                                                       local_1e40)))
                                                           ))));
        dVar468 = (local_1920._0_8_ + local_1a80._0_8_) * __real_3fe0000000000000;
        dVar491 = (local_1920._8_8_ + local_1a80._8_8_) * __real_3fe0000000000000;
        dVar492 = (local_1920._16_8_ + local_1a80._16_8_) * __real_3fe0000000000000;
        dVar493 = (local_1920._24_8_ + local_1a80._24_8_) * __real_3fe0000000000000;
        dVar568 = (local_1940._0_8_ + local_1aa0._0_8_) * __real_3fe0000000000000;
        dVar582 = (local_1940._8_8_ + local_1aa0._8_8_) * __real_3fe0000000000000;
        dVar584 = (local_1940._16_8_ + local_1aa0._16_8_) * __real_3fe0000000000000;
        dVar586 = (local_1940._24_8_ + local_1aa0._24_8_) * __real_3fe0000000000000;
        auVar458 = vsubpd_avx(auVar421,auVar451);
        auVar305 = vsubpd_avx(local_1960,auVar420);
        auVar306 = vsubpd_avx(_local_1a60,auVar478);
        auVar427 = vsubpd_avx(local_1980,auVar538);
        auVar457 = vsubpd_avx(local_1a80,local_1920);
        auVar540 = vsubpd_avx(local_1aa0,local_1940);
        dVar47 = auVar458._0_8_ * __real_3fe0000000000000;
        dVar324 = auVar458._8_8_ * __real_3fe0000000000000;
        dVar329 = auVar458._16_8_ * __real_3fe0000000000000;
        dVar334 = auVar458._24_8_ * __real_3fe0000000000000;
        dVar48 = auVar305._0_8_ * __real_3fe0000000000000;
        dVar325 = auVar305._8_8_ * __real_3fe0000000000000;
        dVar330 = auVar305._16_8_ * __real_3fe0000000000000;
        dVar335 = auVar305._24_8_ * __real_3fe0000000000000;
        dVar49 = auVar306._0_8_ * __real_3fe0000000000000;
        dVar326 = auVar306._8_8_ * __real_3fe0000000000000;
        dVar331 = auVar306._16_8_ * __real_3fe0000000000000;
        dVar336 = auVar306._24_8_ * __real_3fe0000000000000;
        dVar50 = auVar427._0_8_ * __real_3fe0000000000000;
        dVar327 = auVar427._8_8_ * __real_3fe0000000000000;
        dVar332 = auVar427._16_8_ * __real_3fe0000000000000;
        dVar337 = auVar427._24_8_ * __real_3fe0000000000000;
        local_22a0 = auVar457._0_8_;
        dStack_2298 = auVar457._8_8_;
        dStack_2290 = auVar457._16_8_;
        dStack_2288 = auVar457._24_8_;
        local_22a0 = __real_3fe0000000000000 * local_22a0;
        dStack_2298 = __real_3fe0000000000000 * dStack_2298;
        dStack_2290 = __real_3fe0000000000000 * dStack_2290;
        dStack_2288 = __real_3fe0000000000000 * dStack_2288;
        local_2280 = auVar540._0_8_;
        dStack_2278 = auVar540._8_8_;
        dStack_2270 = auVar540._16_8_;
        dStack_2268 = auVar540._24_8_;
        local_2280 = __real_3fe0000000000000 * local_2280;
        dStack_2278 = __real_3fe0000000000000 * dStack_2278;
        dStack_2270 = __real_3fe0000000000000 * dStack_2270;
        dStack_2268 = __real_3fe0000000000000 * dStack_2268;
        auVar510._0_8_ =
             (double)((ulonglong)(local_2280 * local_1dc0) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar47 * (double)local_1fc0) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar49 * (double)local_1ec0._0_8_) & __real_7fffffffffffffff);
        auVar510._8_8_ =
             (double)((ulonglong)(dStack_2278 * dStack_1db8) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar324 * adStack_1fb8[0]) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar326 * (double)local_1ec0._8_8_) & __real_7fffffffffffffff);
        auVar510._16_8_ =
             (double)((ulonglong)(dStack_2270 * dStack_1db0) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar329 * adStack_1fb8[1]) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar331 * dStack_1eb0) & __real_7fffffffffffffff);
        auVar510._24_8_ =
             (double)((ulonglong)(dStack_2268 * dStack_1da8) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar334 * adStack_1fb8[2]) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar336 * dStack_1ea8) & __real_7fffffffffffffff);
        auVar452._0_8_ =
             (double)((ulonglong)(local_22a0 * local_1da0) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar48 * (double)local_1fa0) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar50 * (double)local_1ea0._0_8_) & __real_7fffffffffffffff);
        auVar452._8_8_ =
             (double)((ulonglong)(dStack_2298 * dStack_1d98) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar325 * adStack_1f98[0]) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar327 * (double)local_1ea0._8_8_) & __real_7fffffffffffffff);
        auVar452._16_8_ =
             (double)((ulonglong)(dStack_2290 * dStack_1d90) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar330 * adStack_1f98[1]) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar332 * dStack_1e90) & __real_7fffffffffffffff);
        auVar452._24_8_ =
             (double)((ulonglong)(dStack_2288 * dStack_1d88) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar335 * adStack_1f98[2]) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar337 * dStack_1e88) & __real_7fffffffffffffff);
        auVar558._0_8_ =
             dVar552 * (double)local_1fa0 + dVar567 * (double)local_1ea0._0_8_ +
             dVar468 * local_1da0 + local_1ca0;
        auVar558._8_8_ =
             dVar564 * adStack_1f98[0] + dVar581 * (double)local_1ea0._8_8_ + dVar491 * dStack_1d98
             + dStack_1c98;
        auVar558._16_8_ =
             dVar565 * adStack_1f98[1] + dVar583 * dStack_1e90 + dVar492 * dStack_1d90 + dStack_1c90
        ;
        auVar558._24_8_ =
             dVar566 * adStack_1f98[2] + dVar585 * dStack_1e88 + dVar493 * dStack_1d88 + dStack_1c88
        ;
        auVar574._0_8_ =
             dVar568 * local_1dc0 + dVar46 * (double)local_1fc0 + dVar494 * (double)local_1ec0._0_8_
             + local_1cc0;
        auVar574._8_8_ =
             dVar582 * dStack_1db8 + dVar323 * adStack_1fb8[0] + dVar519 * (double)local_1ec0._8_8_
             + dStack_1cb8;
        auVar574._16_8_ =
             dVar584 * dStack_1db0 + dVar328 * adStack_1fb8[1] + dVar520 * dStack_1eb0 + dStack_1cb0
        ;
        auVar574._24_8_ =
             dVar586 * dStack_1da8 + dVar333 * adStack_1fb8[2] + dVar521 * dStack_1ea8 + dStack_1ca8
        ;
        auVar605._0_8_ =
             dVar468 * local_1d60 +
             dVar552 * (double)local_1f60._0_8_ + dVar567 * (double)local_1e60._0_8_ + local_1c60;
        auVar605._8_8_ =
             dVar491 * dStack_1d58 +
             dVar564 * (double)local_1f60._8_8_ + dVar581 * (double)local_1e60._8_8_ + dStack_1c58;
        auVar605._16_8_ =
             dVar492 * dStack_1d50 + dVar565 * dStack_1f50 + dVar583 * dStack_1e50 + dStack_1c50;
        auVar605._24_8_ =
             dVar493 * dStack_1d48 + dVar566 * dStack_1f48 + dVar585 * dStack_1e48 + dStack_1c48;
        auVar625._0_8_ =
             dVar568 * local_1d80 +
             dVar46 * (double)local_1f80._0_8_ + dVar494 * (double)local_1e80._0_8_ + local_1c80;
        auVar625._8_8_ =
             dVar582 * dStack_1d78 +
             dVar323 * (double)local_1f80._8_8_ + dVar519 * (double)local_1e80._8_8_ + dStack_1c78;
        auVar625._16_8_ =
             dVar584 * dStack_1d70 + dVar328 * dStack_1f70 + dVar520 * dStack_1e70 + dStack_1c70;
        auVar625._24_8_ =
             dVar586 * dStack_1d68 + dVar333 * dStack_1f68 + dVar521 * dStack_1e68 + dStack_1c68;
        auVar645._0_8_ =
             dVar552 * (double)local_1f20._0_8_ + dVar567 * local_1e20 + dVar468 * local_1d20 +
             local_1c20;
        auVar645._8_8_ =
             dVar564 * (double)local_1f20._8_8_ + dVar581 * dStack_1e18 + dVar491 * dStack_1d18 +
             dStack_1c18;
        auVar645._16_8_ =
             dVar565 * dStack_1f10 + dVar583 * dStack_1e10 + dVar492 * dStack_1d10 + dStack_1c10;
        auVar645._24_8_ =
             dVar566 * dStack_1f08 + dVar585 * dStack_1e08 + dVar493 * dStack_1d08 + dStack_1c08;
        auVar657._0_8_ =
             (double)local_1f40._0_8_ * dVar46 + dVar494 * dVar8 + dVar568 * local_1d40 + local_1c40
        ;
        auVar657._8_8_ =
             (double)local_1f40._8_8_ * dVar323 + dVar519 * dStack_1e38 + dVar582 * dStack_1d38 +
             dStack_1c38;
        auVar657._16_8_ =
             dStack_1f30 * dVar328 + dVar520 * dStack_1e30 + dVar584 * dStack_1d30 + dStack_1c30;
        auVar657._24_8_ =
             dStack_1f28 * dVar333 + dVar521 * dStack_1e28 + dVar586 * dStack_1d28 + dStack_1c28;
        auVar422._0_8_ =
             (double)((ulonglong)(local_2280 * local_1d80) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar47 * (double)local_1f80._0_8_) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar49 * (double)local_1e80._0_8_) & __real_7fffffffffffffff);
        auVar422._8_8_ =
             (double)((ulonglong)(dStack_2278 * dStack_1d78) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar324 * (double)local_1f80._8_8_) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar326 * (double)local_1e80._8_8_) & __real_7fffffffffffffff);
        auVar422._16_8_ =
             (double)((ulonglong)(dStack_2270 * dStack_1d70) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar329 * dStack_1f70) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar331 * dStack_1e70) & __real_7fffffffffffffff);
        auVar422._24_8_ =
             (double)((ulonglong)(dStack_2268 * dStack_1d68) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar334 * dStack_1f68) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar336 * dStack_1e68) & __real_7fffffffffffffff);
        auVar596._0_8_ =
             (double)((ulonglong)(local_22a0 * local_1d60) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar48 * (double)local_1f60._0_8_) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar50 * (double)local_1e60._0_8_) & __real_7fffffffffffffff);
        auVar596._8_8_ =
             (double)((ulonglong)(dStack_2298 * dStack_1d58) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar325 * (double)local_1f60._8_8_) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar327 * (double)local_1e60._8_8_) & __real_7fffffffffffffff);
        auVar596._16_8_ =
             (double)((ulonglong)(dStack_2290 * dStack_1d50) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar330 * dStack_1f50) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar332 * dStack_1e50) & __real_7fffffffffffffff);
        auVar596._24_8_ =
             (double)((ulonglong)(dStack_2288 * dStack_1d48) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar335 * dStack_1f48) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar337 * dStack_1e48) & __real_7fffffffffffffff);
        auVar527._0_8_ =
             (double)(__real_7fffffffffffffff & (ulonglong)((double)local_1f40._0_8_ * dVar47)) +
             (double)((ulonglong)(dVar49 * dVar8) & __real_7fffffffffffffff) +
             (double)((ulonglong)(local_2280 * local_1d40) & __real_7fffffffffffffff);
        auVar527._8_8_ =
             (double)(__real_7fffffffffffffff & (ulonglong)((double)local_1f40._8_8_ * dVar324)) +
             (double)((ulonglong)(dVar326 * dStack_1e38) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dStack_2278 * dStack_1d38) & __real_7fffffffffffffff);
        auVar527._16_8_ =
             (double)(__real_7fffffffffffffff & (ulonglong)(dStack_1f30 * dVar329)) +
             (double)((ulonglong)(dVar331 * dStack_1e30) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dStack_2270 * dStack_1d30) & __real_7fffffffffffffff);
        auVar527._24_8_ =
             (double)(__real_7fffffffffffffff & (ulonglong)(dStack_1f28 * dVar334)) +
             (double)((ulonglong)(dVar336 * dStack_1e28) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dStack_2268 * dStack_1d28) & __real_7fffffffffffffff);
        auVar480._0_8_ =
             (double)((ulonglong)((double)local_1f20._0_8_ * dVar48) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar50 * local_1e20) & __real_7fffffffffffffff) +
             (double)((ulonglong)(local_22a0 * local_1d20) & __real_7fffffffffffffff);
        auVar480._8_8_ =
             (double)((ulonglong)((double)local_1f20._8_8_ * dVar325) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar327 * dStack_1e18) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dStack_2298 * dStack_1d18) & __real_7fffffffffffffff);
        auVar480._16_8_ =
             (double)((ulonglong)(dStack_1f10 * dVar330) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar332 * dStack_1e10) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dStack_2290 * dStack_1d10) & __real_7fffffffffffffff);
        auVar480._24_8_ =
             (double)((ulonglong)(dStack_1f08 * dVar335) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar337 * dStack_1e08) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dStack_2288 * dStack_1d08) & __real_7fffffffffffffff);
        auVar458 = vsubpd_avx(auVar574,auVar510);
        auVar305 = vsubpd_avx(auVar558,auVar452);
        auVar306 = vsubpd_avx(auVar625,auVar422);
        auVar427 = vsubpd_avx(auVar605,auVar596);
        local_2380._8_8_ = auVar574._8_8_ + auVar510._8_8_;
        local_2380._0_8_ = auVar574._0_8_ + auVar510._0_8_;
        dStack_2370 = auVar574._16_8_ + auVar510._16_8_;
        dStack_2368 = auVar574._24_8_ + auVar510._24_8_;
        auVar457 = vsubpd_avx(auVar657,auVar527);
        local_23c0._8_8_ = auVar558._8_8_ + auVar452._8_8_;
        local_23c0._0_8_ = auVar558._0_8_ + auVar452._0_8_;
        dStack_23b0 = auVar558._16_8_ + auVar452._16_8_;
        dStack_23a8 = auVar558._24_8_ + auVar452._24_8_;
        auVar540 = vsubpd_avx(auVar645,auVar480);
        local_23e0._8_8_ = auVar625._8_8_ + auVar422._8_8_;
        local_23e0._0_8_ = auVar625._0_8_ + auVar422._0_8_;
        dStack_23d0 = auVar625._16_8_ + auVar422._16_8_;
        dStack_23c8 = auVar625._24_8_ + auVar422._24_8_;
        auVar626._0_8_ = auVar596._0_8_ + auVar605._0_8_;
        auVar626._8_8_ = auVar596._8_8_ + auVar605._8_8_;
        auVar626._16_8_ = auVar596._16_8_ + auVar605._16_8_;
        auVar626._24_8_ = auVar596._24_8_ + auVar605._24_8_;
        auVar575._0_8_ = auVar657._0_8_ + auVar527._0_8_;
        auVar575._8_8_ = auVar657._8_8_ + auVar527._8_8_;
        auVar575._16_8_ = auVar657._16_8_ + auVar527._16_8_;
        auVar575._24_8_ = auVar657._24_8_ + auVar527._24_8_;
        auVar481._0_8_ = auVar645._0_8_ + auVar480._0_8_;
        auVar481._8_8_ = auVar645._8_8_ + auVar480._8_8_;
        auVar481._16_8_ = auVar645._16_8_ + auVar480._16_8_;
        auVar481._24_8_ = auVar645._24_8_ + auVar480._24_8_;
        auVar545._8_8_ = 0;
        auVar545._0_8_ = local_1500;
        auVar474 = vpcmpeqb_avx(auVar545,ZEXT816(0) << 0x40);
        auVar51 = vpmovsxbd_avx(auVar474 ^ ___xmm_ffffffffffffffffffffffffffffffff);
        auVar470 = vpshufd_avx(auVar474 ^ ___xmm_ffffffffffffffffffffffffffffffff,0x55);
        auVar470 = vpmovsxbd_avx(auVar470);
        auVar111._0_8_ = CONCAT44(auVar51._4_4_ & uVar17,auVar51._0_4_ & uVar16);
        auVar111._8_4_ = auVar51._8_4_ & uVar18;
        auVar111._12_4_ = auVar51._12_4_ & uVar19;
        auVar298._16_4_ = auVar470._0_4_ & uVar20;
        auVar298._0_16_ = auVar111;
        auVar298._20_4_ = auVar470._4_4_ & uVar21;
        auVar299._24_4_ = auVar470._8_4_ & uVar38;
        auVar299._0_24_ = auVar298;
        auVar299._28_4_ = auVar470._12_4_ & uVar41;
        iVar37 = vmovmskps_avx(auVar299);
        if (iVar37 == 0) {
          auVar111._0_8_ = 0;
          local_2340._8_8_ = 0;
          local_2340._16_8_ = 0;
          local_2340._24_8_ = 0;
LAB_140a5ca60:
          auVar51 = vpmovzxbw_avx(auVar474);
          auVar474 = vpand_avx(local_1a20._0_16_,auVar51);
          auVar474 = vpshufb_avx(auVar474,___xmm_00000000000000000e0c0a0806040200);
          if ((((((((SUB161(auVar474 >> 7,0) & 1) != 0 || (SUB161(auVar474 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar474 >> 0x17,0) & 1) != 0) || (SUB161(auVar474 >> 0x1f,0) & 1) != 0)
                || (SUB161(auVar474 >> 0x27,0) & 1) != 0) || (SUB161(auVar474 >> 0x2f,0) & 1) != 0)
              || (SUB161(auVar474 >> 0x37,0) & 1) != 0) || (SUB161(auVar474 >> 0x3f,0) & 1) != 0) {
            auVar474 = vpmovzxwd_avx(auVar51);
            auVar474 = vpslld_avx(auVar474,0x1f);
            auVar470 = vpsrad_avx(auVar474,0x1f);
            auVar474 = vpunpckhwd_avx(auVar51,auVar51);
            auVar474 = vpslld_avx(auVar474,0x1f);
            auVar474 = vpsrad_avx(auVar474,0x1f);
            auVar549._16_16_ = auVar474;
            auVar549._0_16_ = auVar470;
            auVar479 = auVar479 & auVar549;
            if ((((((((SUB321(auVar479 >> 0x1f,0) & 1) != 0 || (SUB321(auVar479 >> 0x3f,0) & 1) != 0
                     ) || (SUB321(auVar479 >> 0x5f,0) & 1) != 0) ||
                   SUB321(auVar479 >> 0x7f,0) != '\0') || (SUB321(auVar479 >> 0x9f,0) & 1) != 0) ||
                 SUB321(auVar479 >> 0xbf,0) != '\0') || (SUB321(auVar479 >> 0xdf,0) & 1) != 0) ||
                auVar479[0x1f] < '\0') {
              local_2340._0_8_ = auVar111._0_8_;
              auVar546 = vpmovsxdq_avx(auVar470);
              auVar185 = vshufps_avx(auVar470,auVar470,0xfa);
              auVar301._16_16_ = auVar185;
              auVar301._0_16_ = auVar546;
              auVar546 = vpmovsxdq_avx(auVar474);
              auVar185 = vpshufd_avx(auVar474,0xfa);
              auVar453._16_16_ = auVar185;
              auVar453._0_16_ = auVar546;
              _local_1fc0 = vmaskmovpd_avx(auVar301,auVar458);
              _local_1fa0 = vmaskmovpd_avx(auVar453,auVar305);
              _local_1f80 = vmaskmovpd_avx(auVar301,auVar306);
              _local_1f60 = vmaskmovpd_avx(auVar453,auVar427);
              _local_1f40 = vmaskmovpd_avx(auVar301,auVar457);
              _local_1f20 = vmaskmovpd_avx(auVar453,auVar540);
              local_1f00 = vmaskmovpd_avx(auVar301,_local_2380);
              local_1ee0 = vmaskmovpd_avx(auVar453,_local_23c0);
              _local_1ec0 = vmaskmovpd_avx(auVar301,_local_23e0);
              _local_1ea0 = vmaskmovpd_avx(auVar453,auVar626);
              _local_1e80 = vmaskmovpd_avx(auVar301,auVar575);
              _local_1e60 = vmaskmovpd_avx(auVar453,auVar481);
              auVar51 = vpsllw_avx(auVar51,0xf);
              auVar51 = vpacksswb_avx(auVar51,auVar51);
              if ((SUB161(auVar51 >> 7,0) & 1) != 0) {
                local_1e40 = 1;
              }
              if ((SUB161(auVar51 >> 0xf,0) & 1) != 0) {
                uStack_1e3f = 1;
              }
              if ((SUB161(auVar51 >> 0x17,0) & 1) != 0) {
                uStack_1e3e = 1;
              }
              if ((SUB161(auVar51 >> 0x1f,0) & 1) != 0) {
                uStack_1e3d = 1;
              }
              if ((SUB161(auVar51 >> 0x27,0) & 1) != 0) {
                uStack_1e3c = 1;
              }
              if ((SUB161(auVar51 >> 0x2f,0) & 1) != 0) {
                uStack_1e3b = 1;
              }
              if ((SUB161(auVar51 >> 0x37,0) & 1) != 0) {
                uStack_1e3a = 1;
              }
              if ((SUB161(auVar51 >> 0x3f,0) & 1) != 0) {
                uStack_1e39 = 1;
              }
              auVar302._0_4_ = auVar470._0_4_ & uVar16;
              auVar302._4_4_ = auVar470._4_4_ & uVar17;
              auVar302._8_4_ = auVar470._8_4_ & uVar18;
              auVar302._12_4_ = auVar470._12_4_ & uVar19;
              auVar302._16_4_ = auVar474._0_4_ & uVar20;
              auVar302._20_4_ = auVar474._4_4_ & uVar21;
              auVar302._24_4_ = auVar474._8_4_ & uVar38;
              auVar302._28_4_ = auVar474._12_4_ & uVar41;
              vmovmskps_avx(local_2340 | auVar302);
            }
          }
        }
        else {
          auVar459 = vminpd_avx(local_1680,auVar458);
          auVar546 = vshufps_avx(auVar51,auVar51,0x50);
          auVar51 = vshufps_avx(auVar51,auVar51,0xfa);
          auVar300._16_16_ = auVar51;
          auVar300._0_16_ = auVar546;
          _local_1fc0 = vmaskmovpd_avx(auVar300,auVar459);
          auVar51 = vshufps_avx(auVar470,auVar470,0x50);
          auVar470 = vshufps_avx(auVar470,auVar470,0xfa);
          auVar539._16_16_ = auVar470;
          auVar539._0_16_ = auVar51;
          auVar459 = vminpd_avx(local_1660,auVar305);
          _local_1fa0 = vmaskmovpd_avx(auVar539,auVar459);
          auVar459 = vminpd_avx(local_1640,auVar306);
          _local_1f80 = vmaskmovpd_avx(auVar300,auVar459);
          auVar459 = vminpd_avx(local_1620,auVar427);
          _local_1f60 = vmaskmovpd_avx(auVar539,auVar459);
          auVar459 = vminpd_avx(local_1600,auVar457);
          _local_1f40 = vmaskmovpd_avx(auVar300,auVar459);
          auVar459 = vminpd_avx(local_15e0,auVar540);
          _local_1f20 = vmaskmovpd_avx(auVar539,auVar459);
          auVar459 = vmaxpd_avx(local_15c0,_local_2380);
          local_1f00 = vmaskmovpd_avx(auVar300,auVar459);
          auVar459 = vmaxpd_avx(local_15a0,_local_23c0);
          local_1ee0 = vmaskmovpd_avx(auVar539,auVar459);
          auVar459 = vmaxpd_avx(local_1580,_local_23e0);
          _local_1ec0 = vmaskmovpd_avx(auVar300,auVar459);
          auVar459 = vmaxpd_avx(local_1560,auVar626);
          _local_1ea0 = vmaskmovpd_avx(auVar539,auVar459);
          auVar459 = vmaxpd_avx(local_1540,auVar575);
          _local_1e80 = vmaskmovpd_avx(auVar300,auVar459);
          auVar459 = vmaxpd_avx(local_1520,auVar481);
          _local_1e60 = vmaskmovpd_avx(auVar539,auVar459);
          auVar51 = vpshufd_avx(auVar545,0x44);
          auVar51 = vpcmpeqb_avx(auVar51,ZEXT816(0) << 0x40);
          bVar31 = ~(SUB161(auVar51 >> 7,0) & 1 | (SUB161(auVar51 >> 0xf,0) & 1) << 1 |
                     (SUB161(auVar51 >> 0x17,0) & 1) << 2 | (SUB161(auVar51 >> 0x1f,0) & 1) << 3 |
                     (SUB161(auVar51 >> 0x27,0) & 1) << 4 | (SUB161(auVar51 >> 0x2f,0) & 1) << 5 |
                    (SUB161(auVar51 >> 0x37,0) & 1) << 6);
          if ((bVar31 & 1) != 0) {
            local_1e40 = (undefined1)local_1500;
          }
          if ((bVar31 & 2) != 0) {
            uStack_1e3f = (undefined1)(local_1500 >> 8);
          }
          local_2340._8_8_ = auVar111._8_8_;
          local_2340._16_8_ = auVar298._16_8_;
          local_2340._24_8_ = auVar299._24_8_;
          if ((bVar31 & 4) != 0) {
            uStack_1e3e = (undefined1)(local_1500 >> 0x10);
          }
          if ((bVar31 & 8) != 0) {
            uStack_1e3d = (undefined1)(local_1500 >> 0x18);
          }
          if ((bVar31 & 0x10) != 0) {
            uStack_1e3c = (undefined1)(local_1500 >> 0x20);
          }
          if ((bVar31 & 0x20) != 0) {
            uStack_1e3b = (undefined1)(local_1500 >> 0x28);
          }
          if ((bVar31 & 0x40) != 0) {
            uStack_1e3a = (undefined1)(local_1500 >> 0x30);
          }
          if ((SUB161(auVar51 >> 0x3f,0) & 1) == 0) {
            uStack_1e39 = (undefined1)(local_1500 >> 0x38);
          }
          if (local_1a00[0] != (char)iVar37) goto LAB_140a5ca60;
        }
        in_ZMM5 = ZEXT3264(_local_1f20);
        in_ZMM8 = ZEXT3264(_local_1ea0);
        auVar474 = vshufps_avx(auVar496,auVar496,0x50);
        auVar51 = vshufps_avx(auVar496,auVar496,0xfa);
        auVar627._16_16_ = auVar51;
        auVar627._0_16_ = auVar474;
        auVar474 = vshufps_avx(auVar372,auVar372,0x50);
        auVar51 = vshufps_avx(auVar372,auVar372,0xfa);
        auVar646._16_16_ = auVar51;
        auVar646._0_16_ = auVar474;
        local_1680 = vmaskmovpd_avx(auVar627,_local_1fc0);
        local_1660 = vmaskmovpd_avx(auVar646,_local_1fa0);
        local_1640 = vmaskmovpd_avx(auVar627,_local_1f80);
        local_1620 = vmaskmovpd_avx(auVar646,_local_1f60);
        local_1600 = vmaskmovpd_avx(auVar627,_local_1f40);
        local_15e0 = vmaskmovpd_avx(auVar646,_local_1f20);
        local_15c0 = vmaskmovpd_avx(auVar627,local_1f00);
        local_15a0 = vmaskmovpd_avx(auVar646,local_1ee0);
        local_1580 = vmaskmovpd_avx(auVar627,_local_1ec0);
        local_1560 = vmaskmovpd_avx(auVar646,_local_1ea0);
        local_1540 = vmaskmovpd_avx(auVar627,_local_1e80);
        local_1520 = vmaskmovpd_avx(auVar646,_local_1e60);
        uVar30 = local_1500;
        if ((local_1a00._0_4_ & 1) != 0) {
          local_1500 = CONCAT71(local_1500._1_7_,local_1e40);
          uVar30 = local_1500;
        }
        auVar542 = ZEXT864(0) << 0x40;
        if ((local_1a00._0_4_ & 2) != 0) {
          local_1500._2_6_ = (undefined6)(uVar30 >> 0x10);
          local_1500._0_1_ = (char)uVar30;
          local_1500._0_2_ = CONCAT11(uStack_1e3f,(char)local_1500);
          uVar30 = local_1500;
        }
        if ((local_1a00._0_4_ & 4) != 0) {
          local_1500._3_5_ = (undefined5)(uVar30 >> 0x18);
          local_1500._0_2_ = (undefined2)uVar30;
          local_1500._0_3_ = CONCAT12(uStack_1e3e,(undefined2)local_1500);
          uVar30 = local_1500;
        }
        if ((local_1a00._0_4_ & 8) != 0) {
          local_1500._4_4_ = (undefined4)(uVar30 >> 0x20);
          local_1500._0_3_ = (undefined3)uVar30;
          local_1500._0_4_ = CONCAT13(uStack_1e3d,(undefined3)local_1500);
          uVar30 = local_1500;
        }
        if ((local_1a00._0_4_ & 0x10) != 0) {
          local_1500._5_3_ = (undefined3)(uVar30 >> 0x28);
          local_1500._0_4_ = (undefined4)uVar30;
          local_1500._0_5_ = CONCAT14(uStack_1e3c,(undefined4)local_1500);
          uVar30 = local_1500;
        }
        if ((local_1a00._0_4_ & 0x20) != 0) {
          local_1500._6_2_ = (undefined2)(uVar30 >> 0x30);
          local_1500._0_5_ = (undefined5)uVar30;
          local_1500._0_6_ = CONCAT15(uStack_1e3b,(undefined5)local_1500);
          uVar30 = local_1500;
        }
        local_1500 = uVar30;
        if ((local_1a00._0_4_ & 0x40) != 0) {
          local_1500._7_1_ = (undefined1)(uVar30 >> 0x38);
          local_1500._0_6_ = (undefined6)uVar30;
          local_1500._0_7_ = CONCAT16(uStack_1e3a,(undefined6)local_1500);
        }
        uVar45 = local_19e0._0_4_;
        if (local_1a00[0] < '\0') {
          local_1500 = CONCAT17(uStack_1e39,(undefined7)local_1500);
        }
      }
      local_c8 = in_ZMM8._0_16_;
      uVar42 = uVar42 + 8;
    } while ((int)uVar42 < (int)uVar45);
  }
  auVar474 = ZEXT416(param_7);
  if ((int)param_7 <= (int)uVar42) goto LAB_140a6308c;
  auVar51 = vpshufd_avx(ZEXT416(uVar42),0);
  auVar423._16_16_ = auVar51;
  auVar423._0_16_ = auVar51;
  local_19e0 = auVar423 | ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
  local_1a40 = vpshufd_avx(ZEXT416(param_7),0);
  auVar554 = local_19e0._16_16_;
  auVar186 = vpcmpgtd_avx(local_1a40,auVar554);
  auVar535 = vpcmpgtd_avx(local_1a40,local_19e0._0_16_);
  auVar454._16_16_ = auVar186;
  auVar454._0_16_ = auVar535;
  auVar458 = vmaskmovps_avx(auVar454,*(undefined1 (*) [32])(param_2 + (int)(uVar42 << 2)));
  auVar470 = vpslld_avx(auVar51,3);
  auVar470 = vpsubd_avx(auVar470,auVar51);
  auVar51 = vpand_avx(auVar535,auVar470);
  lVar29 = param_4 + (longlong)auVar51._0_4_ * 8;
  lVar1 = param_4 + (longlong)auVar51._4_4_ * 8;
  lVar2 = param_4 + (longlong)auVar51._8_4_ * 8;
  lVar3 = param_4 + (longlong)auVar51._12_4_ * 8;
  auVar470 = vpand_avx(auVar186,auVar470);
  lVar4 = param_4 + (longlong)auVar470._0_4_ * 8;
  auVar496 = vpslld_avx(auVar458._16_16_,2);
  auVar496 = vpand_avx(auVar186,auVar496);
  auVar546 = vpslld_avx(auVar458._0_16_,2);
  auVar546 = vpand_avx(auVar535,auVar546);
  lVar5 = param_4 + (longlong)auVar470._4_4_ * 8;
  lVar6 = param_4 + (longlong)auVar470._8_4_ * 8;
  uVar42 = auVar535._0_4_;
  uVar44 = auVar535._4_4_;
  uVar16 = auVar535._8_4_;
  uVar17 = auVar535._12_4_;
  uVar18 = auVar186._0_4_;
  uVar19 = auVar186._4_4_;
  uVar20 = auVar186._8_4_;
  uVar21 = auVar186._12_4_;
  lVar7 = param_4 + (longlong)auVar470._12_4_ * 8;
  auVar470 = vpinsrb_avx(ZEXT116(*(byte *)((ulonglong)
                                           (uVar42 & 
                                           ___ymm_000001b8000001800000014800000110000000d8000000a00000006800000030
                                           ) + lVar29)),
                         (uint)*(byte *)((ulonglong)(uVar44 & _UNK_1512875a4) + lVar1),1);
  auVar470 = vpinsrb_avx(auVar470,(uint)*(byte *)((ulonglong)(uVar16 & _UNK_1512875a8) + lVar2),2);
  auVar470 = vpinsrb_avx(auVar470,(uint)*(byte *)((ulonglong)(uVar17 & _UNK_1512875ac) + lVar3),3);
  auVar470 = vpinsrb_avx(auVar470,(uint)*(byte *)((ulonglong)(uVar18 & _UNK_1512875b0) + lVar4),4);
  auVar470 = vpinsrb_avx(auVar470,(uint)*(byte *)((ulonglong)(uVar19 & _UNK_1512875b4) + lVar5),5);
  auVar470 = vpinsrb_avx(auVar470,(uint)*(byte *)((ulonglong)(uVar20 & _UNK_1512875b8) + lVar6),6);
  auVar470 = vpinsrb_avx(auVar470,(uint)*(byte *)((ulonglong)(uVar21 & _UNK_1512875bc) + lVar7),7);
  auVar185 = vpcmpeqd_avx(local_c8,local_c8);
  auVar496 = vpcmpeqd_avx(auVar185,ZEXT416(*(uint *)(local_19c0._0_8_ + (longlong)auVar496._0_4_)));
  auVar546 = vpcmpeqd_avx(auVar185,ZEXT416(*(uint *)(local_19c0._0_8_ + (longlong)auVar546._0_4_)));
  auVar470 = vpcmpeqb_avx((undefined1  [16])0x0,auVar470);
  auVar185 = auVar185 ^ auVar470;
  auVar470 = vpmovsxbd_avx(auVar185);
  auVar547 = vpshufd_avx(auVar185,0x55);
  auVar547 = vpmovsxbd_avx(auVar547);
  auVar303._0_4_ = ~auVar546._0_4_ & auVar470._0_4_ & uVar42;
  auVar303._4_4_ = ~auVar546._4_4_ & auVar470._4_4_ & uVar44;
  auVar303._8_4_ = ~auVar546._8_4_ & auVar470._8_4_ & uVar16;
  auVar303._12_4_ = ~auVar546._12_4_ & auVar470._12_4_ & uVar17;
  auVar303._16_4_ = ~auVar496._0_4_ & auVar547._0_4_ & uVar18;
  auVar303._20_4_ = ~auVar496._4_4_ & auVar547._4_4_ & uVar19;
  auVar303._24_4_ = ~auVar496._8_4_ & auVar547._8_4_ & uVar20;
  auVar303._28_4_ = ~auVar496._12_4_ & auVar547._12_4_ & uVar21;
  uVar45 = vmovmskps_avx(auVar303);
  if (uVar45 == 0) goto LAB_140a6308c;
  local_19c0._0_16_ = ZEXT416(param_7);
  auVar112._0_4_ = uVar42 & ___ymm_000001880000015000000118000000e0000000a8000000700000003800000000;
  auVar112._4_4_ = uVar44 & _UNK_1512874e4;
  auVar112._8_4_ = uVar16 & _UNK_1512874e8;
  auVar112._12_4_ = uVar17 & _UNK_1512874ec;
  uVar38 = vextractps_avx(auVar112,1);
  uVar36 = vextractps_avx(auVar112,2);
  auVar361._8_8_ = 0;
  auVar361._0_8_ = *(ulonglong *)(param_4 + (longlong)auVar51._0_4_ * 8);
  uVar40 = (undefined4)((ulonglong)lVar4 >> 0x20);
  uVar39 = vextractps_avx(auVar112,3);
  auVar470 = vmovhps_avx(auVar361,*(undefined8 *)((ulonglong)uVar38 + lVar1));
  auVar362._8_8_ = 0;
  auVar362._0_8_ = *(ulonglong *)(CONCAT44((int)((ulonglong)lVar29 >> 0x20),uVar36) + lVar2);
  auVar547 = vmovhps_avx(auVar362,*(undefined8 *)(CONCAT44(uVar40,uVar39) + lVar3));
  auVar363._8_8_ = 0;
  auVar363._0_8_ = *(ulonglong *)((ulonglong)(uVar20 & _UNK_1512874f8) + lVar6);
  auVar445 = vmovhps_avx(auVar363,*(undefined8 *)((ulonglong)(uVar21 & _UNK_1512874fc) + lVar7));
  auVar113._8_8_ = 0;
  auVar113._0_8_ = *(ulonglong *)((ulonglong)(uVar18 & _UNK_1512874f0) + lVar4);
  auVar189 = vmovhps_avx(auVar113,*(undefined8 *)((ulonglong)(uVar19 & _UNK_1512874f4) + lVar5));
  auVar643._0_4_ = uVar42 & ___ymm_000001900000015800000120000000e8000000b0000000780000004000000008;
  auVar643._4_4_ = uVar44 & _UNK_151287504;
  auVar643._8_4_ = uVar16 & _UNK_151287508;
  auVar643._12_4_ = uVar17 & _UNK_15128750c;
  uVar36 = vextractps_avx(auVar643,1);
  uVar38 = vextractps_avx(auVar643,2);
  uVar39 = vextractps_avx(auVar643,3);
  auVar192 = vpackssdw_avx(auVar535,auVar186);
  auVar499._8_8_ = 0;
  auVar499._0_8_ = *(ulonglong *)((ulonglong)(uVar20 & _UNK_151287518) + lVar6);
  auVar186 = vmovhps_avx(auVar499,*(undefined8 *)((ulonglong)(uVar21 & _UNK_15128751c) + lVar7));
  auVar588._8_8_ = 0;
  auVar588._0_8_ = *(ulonglong *)((ulonglong)(uVar18 & _UNK_151287510) + lVar4);
  auVar535 = vmovhps_avx(auVar588,*(undefined8 *)((ulonglong)(uVar19 & _UNK_151287514) + lVar5));
  auVar597._16_16_ = auVar547;
  auVar597._0_16_ = auVar470;
  auVar589._8_8_ = 0;
  auVar589._0_8_ = *(ulonglong *)((ulonglong)uVar38 + lVar2);
  auVar372 = vmovhps_avx(auVar589,*(undefined8 *)(CONCAT44(uVar40,uVar39) + lVar3));
  auVar612._8_8_ = 0;
  auVar612._0_8_ = *(ulonglong *)((ulonglong)auVar643._0_4_ + lVar29);
  auVar474 = vmovhpd_avx(auVar612,*(undefined8 *)(CONCAT44(uVar33,uVar36) + lVar1));
  auVar613._0_4_ = uVar42 & ___ymm_000001980000016000000128000000f0000000b8000000800000004800000010;
  auVar613._4_4_ = uVar44 & _UNK_151287524;
  auVar613._8_4_ = uVar16 & _UNK_151287528;
  auVar613._12_4_ = uVar17 & _UNK_15128752c;
  uVar36 = vextractps_avx(auVar613,1);
  auVar424._16_16_ = auVar445;
  auVar424._0_16_ = auVar189;
  uVar38 = vextractps_avx(auVar613,2);
  auVar511._16_16_ = auVar186;
  auVar511._0_16_ = auVar535;
  auVar500._8_8_ = 0;
  auVar500._0_8_ = *(ulonglong *)((ulonglong)(uVar20 & _UNK_151287538) + lVar6);
  auVar190 = vmovhps_avx(auVar500,*(undefined8 *)((ulonglong)(uVar21 & _UNK_15128753c) + lVar7));
  auVar364._8_8_ = 0;
  auVar364._0_8_ = *(ulonglong *)((ulonglong)(uVar18 & _UNK_151287530) + lVar4);
  uVar41 = vextractps_avx(auVar613,3);
  auVar188 = vmovhps_avx(auVar364,*(undefined8 *)((ulonglong)(uVar19 & _UNK_151287534) + lVar5));
  auVar598._16_16_ = auVar372;
  auVar598._0_16_ = auVar474;
  auVar590._8_8_ = 0;
  auVar590._0_8_ = *(ulonglong *)((ulonglong)uVar38 + lVar2);
  auVar191 = vmovhps_avx(auVar590,*(undefined8 *)((ulonglong)uVar41 + lVar3));
  auVar603._8_8_ = 0;
  auVar603._0_8_ = *(ulonglong *)((ulonglong)auVar613._0_4_ + lVar29);
  auVar51 = vmovhpd_avx(auVar603,*(undefined8 *)(CONCAT44(uVar33,uVar36) + lVar1));
  auVar614._0_4_ = uVar42 & ___ymm_000001a00000016800000130000000f8000000c0000000880000005000000018;
  auVar614._4_4_ = uVar44 & _UNK_151287544;
  auVar614._8_4_ = uVar16 & _UNK_151287548;
  auVar614._12_4_ = uVar17 & _UNK_15128754c;
  uVar33 = vextractps_avx(auVar614,1);
  uVar38 = vextractps_avx(auVar614,2);
  uVar41 = vextractps_avx(auVar614,3);
  local_1a00._16_16_ = auVar190;
  local_1a00._0_16_ = auVar188;
  local_1a20._16_16_ = auVar191;
  local_1a20._0_16_ = auVar51;
  auVar501._8_8_ = 0;
  auVar501._0_8_ = *(ulonglong *)((ulonglong)(uVar20 & _UNK_151287558) + lVar6);
  auVar190 = vmovhps_avx(auVar501,*(undefined8 *)((ulonglong)(uVar21 & _UNK_15128755c) + lVar7));
  auVar365._8_8_ = 0;
  auVar365._0_8_ = *(ulonglong *)((ulonglong)(uVar18 & _UNK_151287550) + lVar4);
  auVar188 = vmovhps_avx(auVar365,*(undefined8 *)((ulonglong)(uVar19 & _UNK_151287554) + lVar5));
  auVar591._8_8_ = 0;
  auVar591._0_8_ = *(ulonglong *)((ulonglong)uVar38 + lVar2);
  auVar51 = vmovhpd_avx(auVar591,*(undefined8 *)((ulonglong)uVar41 + lVar3));
  local_1920._16_16_ = auVar190;
  local_1920._0_16_ = auVar188;
  auVar366._8_8_ = 0;
  auVar366._0_8_ = *(ulonglong *)((ulonglong)auVar614._0_4_ + lVar29);
  auVar190 = vmovhps_avx(auVar366,*(undefined8 *)(CONCAT44(uVar40,uVar33) + lVar1));
  auVar502._0_4_ = uVar42 & ___ymm_000001a8000001700000013800000100000000c8000000900000005800000020;
  auVar502._4_4_ = uVar44 & _UNK_151287564;
  auVar502._8_4_ = uVar16 & _UNK_151287568;
  auVar502._12_4_ = uVar17 & _UNK_15128756c;
  uVar36 = (undefined4)((ulonglong)lVar3 >> 0x20);
  uVar33 = vextractps_avx(auVar502,1);
  uVar39 = vextractps_avx(auVar502,2);
  uVar38 = vextractps_avx(auVar502,3);
  auVar425._16_16_ = auVar51;
  auVar425._0_16_ = auVar190;
  auVar503._8_8_ = 0;
  auVar503._0_8_ = *(ulonglong *)((ulonglong)(uVar20 & _UNK_151287578) + lVar6);
  auVar188 = vmovhps_avx(auVar503,*(undefined8 *)((ulonglong)(uVar21 & _UNK_15128757c) + lVar7));
  auVar367._8_8_ = 0;
  auVar367._0_8_ = *(ulonglong *)((ulonglong)(uVar18 & _UNK_151287570) + lVar4);
  auVar191 = vmovhps_avx(auVar367,*(undefined8 *)((ulonglong)(uVar19 & _UNK_151287574) + lVar5));
  local_1940._16_16_ = auVar188;
  local_1940._0_16_ = auVar191;
  auVar368._8_8_ = 0;
  auVar368._0_8_ = *(ulonglong *)(CONCAT44(uVar40,uVar39) + lVar2);
  auVar188 = vmovhps_avx(auVar368,*(undefined8 *)((ulonglong)uVar38 + lVar3));
  auVar504._8_8_ = 0;
  auVar504._0_8_ = *(ulonglong *)((ulonglong)auVar502._0_4_ + lVar29);
  auVar191 = vmovhps_avx(auVar504,*(undefined8 *)(CONCAT44(uVar36,uVar33) + lVar1));
  register0x00001250 = auVar188;
  local_1a60 = auVar191;
  auVar369._0_4_ = uVar42 & ___ymm_000001b0000001780000014000000108000000d0000000980000006000000028;
  auVar369._4_4_ = uVar44 & _UNK_151287584;
  auVar369._8_4_ = uVar16 & _UNK_151287588;
  auVar369._12_4_ = uVar17 & _UNK_15128758c;
  uVar33 = vextractps_avx(auVar369,1);
  uVar39 = vextractps_avx(auVar369,2);
  uVar42 = vextractps_avx(auVar369,3);
  auVar370._8_8_ = 0;
  auVar370._0_8_ = *(ulonglong *)((ulonglong)(uVar20 & _UNK_151287598) + lVar6);
  auVar188 = vmovhps_avx(auVar370,*(undefined8 *)((ulonglong)(uVar21 & _UNK_15128759c) + lVar7));
  auVar442._8_8_ = 0;
  auVar442._0_8_ = *(ulonglong *)((ulonglong)(uVar18 & _UNK_151287590) + lVar4);
  auVar191 = vmovhps_avx(auVar442,*(undefined8 *)((ulonglong)(uVar19 & _UNK_151287594) + lVar5));
  local_1960._16_16_ = auVar188;
  local_1960._0_16_ = auVar191;
  auVar371._8_8_ = 0;
  auVar371._0_8_ = *(ulonglong *)(CONCAT44((int)((ulonglong)lVar1 >> 0x20),uVar39) + lVar2);
  auVar188 = vmovhps_avx(auVar371,*(undefined8 *)((ulonglong)uVar42 + lVar3));
  auVar443._8_8_ = 0;
  auVar443._0_8_ = *(ulonglong *)((ulonglong)auVar369._0_4_ + lVar29);
  auVar191 = vmovhps_avx(auVar443,*(undefined8 *)(CONCAT44(uVar36,uVar33) + lVar1));
  local_1980._16_16_ = auVar188;
  local_1980._0_16_ = auVar191;
  auVar496 = vpackssdw_avx(auVar546,auVar496);
  auVar546 = vpmovsxbw_avx(auVar185);
  local_12d0 = vpandn_avx(auVar496,auVar546);
  auVar496 = vpand_avx(local_12d0,auVar192);
  auVar546 = vpslld_avx(auVar458._0_16_,7);
  auVar185 = vpmovsxwd_avx(auVar496);
  auVar546 = vpand_avx(auVar185,auVar546);
  auVar188 = vpunpckhwd_avx(auVar496,auVar496);
  auVar496 = vpslld_avx(auVar458._16_16_,7);
  auVar482._16_16_ = auVar188;
  auVar482._0_16_ = auVar185;
  auVar496 = vpand_avx(auVar188,auVar496);
  uVar464 = auVar185._0_4_;
  uVar465 = auVar185._4_4_;
  uVar466 = auVar185._8_4_;
  uVar467 = auVar185._12_4_;
  uVar529 = auVar188._0_4_;
  uVar530 = auVar188._4_4_;
  uVar531 = auVar188._8_4_;
  uVar532 = auVar188._12_4_;
  auVar114._0_4_ = uVar464 & ___ymm_0000001000000010000000100000001000000010000000100000001000000010
  ;
  auVar114._4_4_ = uVar465 & _UNK_150b51424;
  auVar114._8_4_ = uVar466 & _UNK_150b51428;
  auVar114._12_4_ = uVar467 & _UNK_150b5142c;
  uVar42 = vextractps_avx(auVar114,1);
  uVar44 = vextractps_avx(auVar114,2);
  auVar115._0_4_ = uVar464 & ___ymm_0000002000000020000000200000002000000020000000200000002000000020
  ;
  auVar115._4_4_ = uVar465 & _UNK_151287364;
  auVar115._8_4_ = uVar466 & _UNK_151287368;
  auVar115._12_4_ = uVar467 & _UNK_15128736c;
  uVar16 = vextractps_avx(auVar115,1);
  uVar17 = vextractps_avx(auVar115,2);
  uVar18 = vextractps_avx(auVar115,3);
  auVar116._0_4_ = uVar464 & ___ymm_0000003000000030000000300000003000000030000000300000003000000030
  ;
  auVar116._4_4_ = uVar465 & _UNK_1512873a4;
  auVar116._8_4_ = uVar466 & _UNK_1512873a8;
  auVar116._12_4_ = uVar467 & _UNK_1512873ac;
  uVar19 = vextractps_avx(auVar116,1);
  uVar20 = vextractps_avx(auVar116,2);
  auVar117._0_4_ = uVar464 & ___ymm_0000004000000040000000400000004000000040000000400000004000000040
  ;
  auVar117._4_4_ = uVar465 & _UNK_1512873e4;
  auVar117._8_4_ = uVar466 & _UNK_1512873e8;
  auVar117._12_4_ = uVar467 & _UNK_1512873ec;
  uVar21 = vextractps_avx(auVar117,1);
  uVar38 = vextractps_avx(auVar117,2);
  uVar41 = vextractps_avx(auVar117,3);
  auVar118._0_4_ = uVar464 & ___ymm_0000005000000050000000500000005000000050000000500000005000000050
  ;
  auVar118._4_4_ = uVar465 & _UNK_151287424;
  auVar118._8_4_ = uVar466 & _UNK_151287428;
  auVar118._12_4_ = uVar467 & _UNK_15128742c;
  uVar22 = vextractps_avx(auVar118,1);
  uVar23 = vextractps_avx(auVar118,2);
  auVar119._0_4_ = uVar464 & ___ymm_0000006000000060000000600000006000000060000000600000006000000060
  ;
  auVar119._4_4_ = uVar465 & _UNK_151287464;
  auVar119._8_4_ = uVar466 & _UNK_151287468;
  auVar119._12_4_ = uVar467 & _UNK_15128746c;
  uVar24 = vextractps_avx(auVar119,1);
  uVar25 = vextractps_avx(auVar119,2);
  uVar26 = vextractps_avx(auVar119,3);
  auVar120._0_4_ = uVar464 & ___ymm_0000007000000070000000700000007000000070000000700000007000000070
  ;
  auVar120._4_4_ = uVar465 & _UNK_1512874a4;
  auVar120._8_4_ = uVar466 & _UNK_1512874a8;
  auVar120._12_4_ = uVar467 & _UNK_1512874ac;
  uVar27 = vextractps_avx(auVar120,1);
  uVar28 = vextractps_avx(auVar120,2);
  auVar121._8_8_ = 0;
  auVar121._0_8_ = *(ulonglong *)(param_3 + auVar496._8_4_);
  local_10d0 = vmovhps_avx(auVar121,*(undefined8 *)(param_3 + auVar496._12_4_));
  auVar122._8_8_ = 0;
  auVar122._0_8_ = *(ulonglong *)(param_3 + auVar496._0_4_);
  local_10e0 = vmovhps_avx(auVar122,*(undefined8 *)(param_3 + auVar496._4_4_));
  auVar123._8_8_ = 0;
  auVar123._0_8_ = *(ulonglong *)(param_3 + auVar546._8_4_);
  local_10f0 = vmovhps_avx(auVar123,*(undefined8 *)(param_3 + auVar546._12_4_));
  auVar124._8_8_ = 0;
  auVar124._0_8_ = *(ulonglong *)(param_3 + auVar546._0_4_);
  local_1100 = vmovhps_avx(auVar124,*(undefined8 *)(param_3 + auVar546._4_4_));
  lVar29 = param_3 + auVar496._8_4_;
  lVar1 = param_3 + auVar496._12_4_;
  auVar125._8_8_ = 0;
  auVar125._0_8_ = *(ulonglong *)((ulonglong)(uVar531 & _UNK_150b50d78) + lVar29);
  local_1090 = vmovhps_avx(auVar125,*(undefined8 *)((ulonglong)(uVar532 & _UNK_150b50d7c) + lVar1));
  lVar2 = param_3 + auVar496._0_4_;
  lVar3 = param_3 + auVar496._4_4_;
  auVar126._8_8_ = 0;
  auVar126._0_8_ = *(ulonglong *)((ulonglong)(uVar529 & _UNK_150b50d70) + lVar2);
  local_10a0 = vmovhps_avx(auVar126,*(undefined8 *)((ulonglong)(uVar530 & _UNK_150b50d74) + lVar3));
  lVar4 = param_3 + auVar546._8_4_;
  lVar5 = param_3 + auVar546._12_4_;
  auVar127._8_8_ = 0;
  auVar127._0_8_ = *(ulonglong *)((ulonglong)(uVar466 & _UNK_150b50d68) + lVar4);
  local_10b0 = vmovhps_avx(auVar127,*(undefined8 *)((ulonglong)(uVar467 & _UNK_150b50d6c) + lVar5));
  lVar6 = param_3 + auVar546._0_4_;
  param_3 = param_3 + auVar546._4_4_;
  auVar128._8_8_ = 0;
  auVar128._0_8_ =
       *(ulonglong *)
        ((ulonglong)
         (uVar464 & ___ymm_0000000800000008000000080000000800000008000000080000000800000008) + lVar6
        );
  local_10c0 = vmovhps_avx(auVar128,*(undefined8 *)((ulonglong)(uVar465 & _UNK_150b50d64) + param_3)
                          );
  auVar129._8_8_ = 0;
  auVar129._0_8_ = *(ulonglong *)((ulonglong)(uVar531 & _UNK_150b51438) + lVar29);
  local_1050 = vmovhps_avx(auVar129,*(undefined8 *)((ulonglong)(uVar532 & _UNK_150b5143c) + lVar1));
  auVar130._8_8_ = 0;
  auVar130._0_8_ = *(ulonglong *)((ulonglong)(uVar529 & _UNK_150b51430) + lVar2);
  local_1060 = vmovhps_avx(auVar130,*(undefined8 *)((ulonglong)(uVar530 & _UNK_150b51434) + lVar3));
  auVar131._8_8_ = 0;
  auVar131._0_8_ = *(ulonglong *)((ulonglong)uVar44 + lVar4);
  local_1070 = vmovhps_avx(auVar131,*(undefined8 *)((ulonglong)auVar114._12_4_ + lVar5));
  auVar132._8_8_ = 0;
  auVar132._0_8_ = *(ulonglong *)((ulonglong)auVar114._0_4_ + lVar6);
  local_1080 = vmovhps_avx(auVar132,*(undefined8 *)((ulonglong)uVar42 + param_3));
  auVar133._8_8_ = 0;
  auVar133._0_8_ = *(ulonglong *)((ulonglong)(uVar531 & _UNK_151287358) + lVar29);
  local_1010 = vmovhps_avx(auVar133,*(undefined8 *)((ulonglong)(uVar532 & _UNK_15128735c) + lVar1));
  auVar134._8_8_ = 0;
  auVar134._0_8_ = *(ulonglong *)((ulonglong)(uVar529 & _UNK_151287350) + lVar2);
  local_1020 = vmovhps_avx(auVar134,*(undefined8 *)((ulonglong)(uVar530 & _UNK_151287354) + lVar3));
  auVar135._8_8_ = 0;
  auVar135._0_8_ = *(ulonglong *)((ulonglong)(uVar466 & _UNK_151287348) + lVar4);
  local_1030 = vmovhps_avx(auVar135,*(undefined8 *)((ulonglong)(uVar467 & _UNK_15128734c) + lVar5));
  auVar136._8_8_ = 0;
  auVar136._0_8_ =
       *(ulonglong *)
        ((ulonglong)
         (uVar464 & ___ymm_0000001800000018000000180000001800000018000000180000001800000018) + lVar6
        );
  local_1040 = vmovhps_avx(auVar136,*(undefined8 *)((ulonglong)(uVar465 & _UNK_151287344) + param_3)
                          );
  auVar137._8_8_ = 0;
  auVar137._0_8_ = *(ulonglong *)((ulonglong)(uVar531 & _UNK_151287378) + lVar29);
  local_fd0 = vmovhps_avx(auVar137,*(undefined8 *)((ulonglong)(uVar532 & _UNK_15128737c) + lVar1));
  auVar138._8_8_ = 0;
  auVar138._0_8_ = *(ulonglong *)((ulonglong)(uVar529 & _UNK_151287370) + lVar2);
  local_fe0 = vmovhps_avx(auVar138,*(undefined8 *)((ulonglong)(uVar530 & _UNK_151287374) + lVar3));
  auVar139._8_8_ = 0;
  auVar139._0_8_ = *(ulonglong *)((ulonglong)uVar17 + lVar4);
  local_ff0 = vmovhps_avx(auVar139,*(undefined8 *)((ulonglong)uVar18 + lVar5));
  auVar140._8_8_ = 0;
  auVar140._0_8_ = *(ulonglong *)((ulonglong)auVar115._0_4_ + lVar6);
  local_1000 = vmovhps_avx(auVar140,*(undefined8 *)((ulonglong)uVar16 + param_3));
  auVar141._8_8_ = 0;
  auVar141._0_8_ = *(ulonglong *)((ulonglong)(uVar531 & _UNK_151287398) + lVar29);
  local_f90 = vmovhps_avx(auVar141,*(undefined8 *)((ulonglong)(uVar532 & _UNK_15128739c) + lVar1));
  auVar142._8_8_ = 0;
  auVar142._0_8_ = *(ulonglong *)((ulonglong)(uVar529 & _UNK_151287390) + lVar2);
  local_fa0 = vmovhps_avx(auVar142,*(undefined8 *)((ulonglong)(uVar530 & _UNK_151287394) + lVar3));
  auVar143._8_8_ = 0;
  auVar143._0_8_ = *(ulonglong *)((ulonglong)(uVar466 & _UNK_151287388) + lVar4);
  local_fb0 = vmovhps_avx(auVar143,*(undefined8 *)((ulonglong)(uVar467 & _UNK_15128738c) + lVar5));
  auVar144._8_8_ = 0;
  auVar144._0_8_ =
       *(ulonglong *)
        ((ulonglong)
         (uVar464 & ___ymm_0000002800000028000000280000002800000028000000280000002800000028) + lVar6
        );
  local_fc0 = vmovhps_avx(auVar144,*(undefined8 *)((ulonglong)(uVar465 & _UNK_151287384) + param_3))
  ;
  auVar145._8_8_ = 0;
  auVar145._0_8_ = *(ulonglong *)((ulonglong)(uVar531 & _UNK_1512873b8) + lVar29);
  local_f50 = vmovhps_avx(auVar145,*(undefined8 *)((ulonglong)(uVar532 & _UNK_1512873bc) + lVar1));
  auVar146._8_8_ = 0;
  auVar146._0_8_ = *(ulonglong *)((ulonglong)(uVar529 & _UNK_1512873b0) + lVar2);
  local_f60 = vmovhps_avx(auVar146,*(undefined8 *)((ulonglong)(uVar530 & _UNK_1512873b4) + lVar3));
  auVar147._8_8_ = 0;
  auVar147._0_8_ = *(ulonglong *)((ulonglong)uVar20 + lVar4);
  local_f70 = vmovhps_avx(auVar147,*(undefined8 *)((ulonglong)auVar116._12_4_ + lVar5));
  auVar148._8_8_ = 0;
  auVar148._0_8_ = *(ulonglong *)((ulonglong)auVar116._0_4_ + lVar6);
  local_f80 = vmovhps_avx(auVar148,*(undefined8 *)((ulonglong)uVar19 + param_3));
  auVar149._8_8_ = 0;
  auVar149._0_8_ = *(ulonglong *)((ulonglong)(uVar531 & _UNK_1512873d8) + lVar29);
  local_f10 = vmovhps_avx(auVar149,*(undefined8 *)((ulonglong)(uVar532 & _UNK_1512873dc) + lVar1));
  auVar150._8_8_ = 0;
  auVar150._0_8_ = *(ulonglong *)((ulonglong)(uVar529 & _UNK_1512873d0) + lVar2);
  local_f20 = vmovhps_avx(auVar150,*(undefined8 *)((ulonglong)(uVar530 & _UNK_1512873d4) + lVar3));
  auVar151._8_8_ = 0;
  auVar151._0_8_ = *(ulonglong *)((ulonglong)(uVar466 & _UNK_1512873c8) + lVar4);
  local_f30 = vmovhps_avx(auVar151,*(undefined8 *)((ulonglong)(uVar467 & _UNK_1512873cc) + lVar5));
  auVar152._8_8_ = 0;
  auVar152._0_8_ =
       *(ulonglong *)
        ((ulonglong)
         (uVar464 & ___ymm_0000003800000038000000380000003800000038000000380000003800000038) + lVar6
        );
  local_f40 = vmovhps_avx(auVar152,*(undefined8 *)((ulonglong)(uVar465 & _UNK_1512873c4) + param_3))
  ;
  auVar153._8_8_ = 0;
  auVar153._0_8_ = *(ulonglong *)((ulonglong)(uVar531 & _UNK_1512873f8) + lVar29);
  local_ed0 = vmovhps_avx(auVar153,*(undefined8 *)((ulonglong)(uVar532 & _UNK_1512873fc) + lVar1));
  auVar154._8_8_ = 0;
  auVar154._0_8_ = *(ulonglong *)((ulonglong)(uVar529 & _UNK_1512873f0) + lVar2);
  local_ee0 = vmovhps_avx(auVar154,*(undefined8 *)((ulonglong)(uVar530 & _UNK_1512873f4) + lVar3));
  auVar155._8_8_ = 0;
  auVar155._0_8_ = *(ulonglong *)((ulonglong)uVar38 + lVar4);
  local_ef0 = vmovhps_avx(auVar155,*(undefined8 *)((ulonglong)uVar41 + lVar5));
  auVar156._8_8_ = 0;
  auVar156._0_8_ = *(ulonglong *)((ulonglong)auVar117._0_4_ + lVar6);
  local_f00 = vmovhps_avx(auVar156,*(undefined8 *)((ulonglong)uVar21 + param_3));
  auVar157._8_8_ = 0;
  auVar157._0_8_ = *(ulonglong *)((ulonglong)(uVar531 & _UNK_151287418) + lVar29);
  local_e90 = vmovhps_avx(auVar157,*(undefined8 *)((ulonglong)(uVar532 & _UNK_15128741c) + lVar1));
  auVar158._8_8_ = 0;
  auVar158._0_8_ = *(ulonglong *)((ulonglong)(uVar529 & _UNK_151287410) + lVar2);
  local_ea0 = vmovhps_avx(auVar158,*(undefined8 *)((ulonglong)(uVar530 & _UNK_151287414) + lVar3));
  auVar159._8_8_ = 0;
  auVar159._0_8_ = *(ulonglong *)((ulonglong)(uVar466 & _UNK_151287408) + lVar4);
  local_eb0 = vmovhps_avx(auVar159,*(undefined8 *)((ulonglong)(uVar467 & _UNK_15128740c) + lVar5));
  auVar160._8_8_ = 0;
  auVar160._0_8_ =
       *(ulonglong *)
        ((ulonglong)
         (uVar464 & ___ymm_0000004800000048000000480000004800000048000000480000004800000048) + lVar6
        );
  local_ec0 = vmovhps_avx(auVar160,*(undefined8 *)((ulonglong)(uVar465 & _UNK_151287404) + param_3))
  ;
  auVar161._8_8_ = 0;
  auVar161._0_8_ = *(ulonglong *)((ulonglong)(uVar531 & _UNK_151287438) + lVar29);
  local_e50 = vmovhps_avx(auVar161,*(undefined8 *)((ulonglong)(uVar532 & _UNK_15128743c) + lVar1));
  auVar162._8_8_ = 0;
  auVar162._0_8_ = *(ulonglong *)((ulonglong)(uVar529 & _UNK_151287430) + lVar2);
  local_e60 = vmovhps_avx(auVar162,*(undefined8 *)((ulonglong)(uVar530 & _UNK_151287434) + lVar3));
  auVar163._8_8_ = 0;
  auVar163._0_8_ = *(ulonglong *)((ulonglong)uVar23 + lVar4);
  local_e70 = vmovhps_avx(auVar163,*(undefined8 *)((ulonglong)auVar118._12_4_ + lVar5));
  auVar164._8_8_ = 0;
  auVar164._0_8_ = *(ulonglong *)((ulonglong)auVar118._0_4_ + lVar6);
  local_e80 = vmovhps_avx(auVar164,*(undefined8 *)((ulonglong)uVar22 + param_3));
  auVar165._8_8_ = 0;
  auVar165._0_8_ = *(ulonglong *)((ulonglong)(uVar531 & _UNK_151287458) + lVar29);
  local_e10 = vmovhps_avx(auVar165,*(undefined8 *)((ulonglong)(uVar532 & _UNK_15128745c) + lVar1));
  auVar166._8_8_ = 0;
  auVar166._0_8_ = *(ulonglong *)((ulonglong)(uVar529 & _UNK_151287450) + lVar2);
  local_e20 = vmovhps_avx(auVar166,*(undefined8 *)((ulonglong)(uVar530 & _UNK_151287454) + lVar3));
  auVar167._8_8_ = 0;
  auVar167._0_8_ = *(ulonglong *)((ulonglong)(uVar466 & _UNK_151287448) + lVar4);
  local_e30 = vmovhps_avx(auVar167,*(undefined8 *)((ulonglong)(uVar467 & _UNK_15128744c) + lVar5));
  auVar168._8_8_ = 0;
  auVar168._0_8_ =
       *(ulonglong *)
        ((ulonglong)
         (uVar464 & ___ymm_0000005800000058000000580000005800000058000000580000005800000058) + lVar6
        );
  local_e40 = vmovhps_avx(auVar168,*(undefined8 *)((ulonglong)(uVar465 & _UNK_151287444) + param_3))
  ;
  auVar169._8_8_ = 0;
  auVar169._0_8_ = *(ulonglong *)((ulonglong)(uVar531 & _UNK_151287478) + lVar29);
  local_dd0 = vmovhps_avx(auVar169,*(undefined8 *)((ulonglong)(uVar532 & _UNK_15128747c) + lVar1));
  auVar170._8_8_ = 0;
  auVar170._0_8_ = *(ulonglong *)((ulonglong)(uVar529 & _UNK_151287470) + lVar2);
  local_de0 = vmovhps_avx(auVar170,*(undefined8 *)((ulonglong)(uVar530 & _UNK_151287474) + lVar3));
  auVar171._8_8_ = 0;
  auVar171._0_8_ = *(ulonglong *)((ulonglong)uVar25 + lVar4);
  local_df0 = vmovhps_avx(auVar171,*(undefined8 *)((ulonglong)uVar26 + lVar5));
  auVar172._8_8_ = 0;
  auVar172._0_8_ = *(ulonglong *)((ulonglong)auVar119._0_4_ + lVar6);
  local_e00 = vmovhps_avx(auVar172,*(undefined8 *)((ulonglong)uVar24 + param_3));
  auVar173._8_8_ = 0;
  auVar173._0_8_ = *(ulonglong *)((ulonglong)(uVar531 & _UNK_151287498) + lVar29);
  local_d90 = vmovhps_avx(auVar173,*(undefined8 *)((ulonglong)(uVar532 & _UNK_15128749c) + lVar1));
  auVar174._8_8_ = 0;
  auVar174._0_8_ = *(ulonglong *)((ulonglong)(uVar529 & _UNK_151287490) + lVar2);
  local_da0 = vmovhps_avx(auVar174,*(undefined8 *)((ulonglong)(uVar530 & _UNK_151287494) + lVar3));
  auVar175._8_8_ = 0;
  auVar175._0_8_ = *(ulonglong *)((ulonglong)(uVar466 & _UNK_151287488) + lVar4);
  local_db0 = vmovhps_avx(auVar175,*(undefined8 *)((ulonglong)(uVar467 & _UNK_15128748c) + lVar5));
  auVar176._8_8_ = 0;
  auVar176._0_8_ =
       *(ulonglong *)
        ((ulonglong)
         (uVar464 & ___ymm_0000006800000068000000680000006800000068000000680000006800000068) + lVar6
        );
  local_dc0 = vmovhps_avx(auVar176,*(undefined8 *)((ulonglong)(uVar465 & _UNK_151287484) + param_3))
  ;
  auVar177._8_8_ = 0;
  auVar177._0_8_ = *(ulonglong *)((ulonglong)(uVar531 & _UNK_1512874b8) + lVar29);
  local_d50 = vmovhps_avx(auVar177,*(undefined8 *)((ulonglong)(uVar532 & _UNK_1512874bc) + lVar1));
  auVar178._8_8_ = 0;
  auVar178._0_8_ = *(ulonglong *)((ulonglong)(uVar529 & _UNK_1512874b0) + lVar2);
  local_d60 = vmovhps_avx(auVar178,*(undefined8 *)((ulonglong)(uVar530 & _UNK_1512874b4) + lVar3));
  auVar179._8_8_ = 0;
  auVar179._0_8_ = *(ulonglong *)((ulonglong)uVar28 + lVar4);
  local_d70 = vmovhps_avx(auVar179,*(undefined8 *)((ulonglong)auVar120._12_4_ + lVar5));
  auVar180._8_8_ = 0;
  auVar180._0_8_ = *(ulonglong *)((ulonglong)auVar120._0_4_ + lVar6);
  local_d80 = vmovhps_avx(auVar180,*(undefined8 *)((ulonglong)uVar27 + param_3));
  auVar181._8_8_ = 0;
  auVar181._0_8_ = *(ulonglong *)((ulonglong)(uVar531 & _UNK_1512874d8) + lVar29);
  local_d10 = vmovhps_avx(auVar181,*(undefined8 *)((ulonglong)(uVar532 & _UNK_1512874dc) + lVar1));
  auVar182._8_8_ = 0;
  auVar182._0_8_ = *(ulonglong *)((ulonglong)(uVar529 & _UNK_1512874d0) + lVar2);
  local_d20 = vmovhps_avx(auVar182,*(undefined8 *)((ulonglong)(uVar530 & _UNK_1512874d4) + lVar3));
  auVar183._8_8_ = 0;
  auVar183._0_8_ = *(ulonglong *)((ulonglong)(uVar466 & _UNK_1512874c8) + lVar4);
  local_d30 = vmovhps_avx(auVar183,*(undefined8 *)((ulonglong)(uVar467 & _UNK_1512874cc) + lVar5));
  auVar184._8_8_ = 0;
  auVar184._0_8_ =
       *(ulonglong *)
        ((ulonglong)
         (uVar464 & ___ymm_0000007800000078000000780000007800000078000000780000007800000078) + lVar6
        );
  local_d40 = vmovhps_avx(auVar184,*(undefined8 *)((ulonglong)(uVar465 & _UNK_1512874c4) + param_3))
  ;
  dVar8 = *param_5;
  lVar29 = 0xc0;
  dVar46 = param_5[8];
  dVar47 = param_5[0xc];
  dVar48 = param_5[1];
  dVar49 = param_5[5];
  dVar50 = param_5[9];
  dVar323 = param_5[0xd];
  dVar324 = param_5[2];
  dVar325 = param_5[6];
  dVar326 = param_5[10];
  dVar327 = param_5[0xe];
  dVar328 = param_5[3];
  dVar329 = param_5[7];
  dVar330 = param_5[0xb];
  dVar331 = param_5[0xf];
  auStack_1a30 = local_1a40;
  do {
    dVar334 = *(double *)(local_11c8 + lVar29 + 8);
    dVar335 = *(double *)(local_11b0 + lVar29 + -8);
    dVar336 = *(double *)(local_11b0 + lVar29);
    dVar337 = *(double *)(local_11a8 + lVar29);
    dVar468 = *(double *)(local_11a8 + lVar29 + 8);
    dVar491 = *(double *)(local_1190 + lVar29 + -8);
    dVar492 = *(double *)(local_1190 + lVar29);
    dVar493 = *(double *)(local_1190 + lVar29 + 8);
    dVar494 = *(double *)(local_1178 + lVar29 + -8);
    dVar519 = *(double *)(local_1178 + lVar29);
    dVar520 = *(double *)(local_1170 + lVar29);
    dVar521 = *(double *)(local_1170 + lVar29 + 8);
    dVar552 = *(double *)(local_1158 + lVar29 + -8);
    dVar564 = *(double *)(local_1158 + lVar29);
    dVar565 = *(double *)(local_1158 + lVar29 + 8);
    dVar566 = *(double *)(local_1140 + lVar29 + -8);
    dVar567 = *(double *)(local_1120 + lVar29);
    dVar568 = *(double *)(local_1120 + lVar29 + 8);
    dVar581 = *(double *)(local_1108 + lVar29 + -8);
    dVar582 = *(double *)(local_1108 + lVar29);
    dVar583 = *(double *)(local_1140 + lVar29);
    dVar584 = *(double *)(local_1138 + lVar29);
    dVar585 = *(double *)(local_1138 + lVar29 + 8);
    dVar586 = *(double *)(local_1120 + lVar29 + -8);
    dVar621 = *(double *)(local_1100 + lVar29);
    dVar622 = *(double *)(local_1100 + lVar29 + 8);
    dVar637 = *(double *)(local_10f0 + lVar29);
    dVar638 = *(double *)(local_10f0 + lVar29 + 8);
    dVar639 = *(double *)(local_10e0 + lVar29);
    dVar640 = *(double *)(local_10e0 + lVar29 + 8);
    dVar641 = *(double *)(local_10d0 + lVar29);
    dVar642 = *(double *)(local_10d0 + lVar29 + 8);
    dVar333 = SUB168(ZEXT816(0),4);
    dVar332 = param_5[4];
    *(double *)((longlong)local_2080 + lVar29 + 0x20) =
         dVar468 * dVar8 + 0.0 + dVar552 * dVar332 + dVar46 * dVar567 + dVar47 * dVar639;
    *(double *)((longlong)local_2080 + lVar29 + 0x28) =
         dVar491 * dVar8 + dVar333 + dVar564 * dVar332 + dVar46 * dVar568 + dVar47 * dVar640;
    *(double *)((longlong)local_2080 + lVar29 + 0x30) =
         dVar492 * dVar8 + 0.0 + dVar565 * dVar332 + dVar46 * dVar581 + dVar47 * dVar641;
    *(double *)((longlong)local_2080 + lVar29 + 0x38) =
         dVar493 * dVar8 + 0.0 + dVar566 * dVar332 + dVar46 * dVar582 + dVar47 * dVar642;
    *(double *)((longlong)local_2080 + lVar29) =
         dVar8 * dVar334 + 0.0 + dVar332 * dVar494 + dVar583 * dVar46 + dVar47 * dVar621;
    *(double *)((longlong)local_2080 + lVar29 + 8) =
         dVar8 * dVar335 + dVar333 + dVar332 * dVar519 + dVar584 * dVar46 + dVar47 * dVar622;
    *(double *)((longlong)local_2080 + lVar29 + 0x10) =
         dVar8 * dVar336 + 0.0 + dVar332 * dVar520 + dVar585 * dVar46 + dVar47 * dVar637;
    *(double *)((longlong)local_2080 + lVar29 + 0x18) =
         dVar8 * dVar337 + 0.0 + dVar332 * dVar521 + dVar586 * dVar46 + dVar47 * dVar638;
    *(double *)((longlong)local_2080 + lVar29 + 0x60) =
         dVar468 * dVar48 + 0.0 + dVar552 * dVar49 + dVar50 * dVar567 + dVar323 * dVar639;
    *(double *)((longlong)local_2080 + lVar29 + 0x68) =
         dVar491 * dVar48 + dVar333 + dVar564 * dVar49 + dVar50 * dVar568 + dVar323 * dVar640;
    *(double *)((longlong)local_2080 + lVar29 + 0x70) =
         dVar492 * dVar48 + 0.0 + dVar565 * dVar49 + dVar50 * dVar581 + dVar323 * dVar641;
    *(double *)((longlong)local_2080 + lVar29 + 0x78) =
         dVar493 * dVar48 + 0.0 + dVar566 * dVar49 + dVar50 * dVar582 + dVar323 * dVar642;
    *(double *)((longlong)local_2080 + lVar29 + 0x40) =
         dVar48 * dVar334 + 0.0 + dVar49 * dVar494 + dVar583 * dVar50 + dVar323 * dVar621;
    *(double *)((longlong)local_2080 + lVar29 + 0x48) =
         dVar48 * dVar335 + dVar333 + dVar49 * dVar519 + dVar584 * dVar50 + dVar323 * dVar622;
    *(double *)((longlong)local_2080 + lVar29 + 0x50) =
         dVar48 * dVar336 + 0.0 + dVar49 * dVar520 + dVar585 * dVar50 + dVar323 * dVar637;
    *(double *)((longlong)local_2080 + lVar29 + 0x58) =
         dVar48 * dVar337 + 0.0 + dVar49 * dVar521 + dVar586 * dVar50 + dVar323 * dVar638;
    *(double *)((longlong)local_2080 + lVar29 + 0xa0) =
         dVar468 * dVar324 + 0.0 + dVar552 * dVar325 + dVar326 * dVar567 + dVar327 * dVar639;
    *(double *)((longlong)local_2080 + lVar29 + 0xa8) =
         dVar491 * dVar324 + dVar333 + dVar564 * dVar325 + dVar326 * dVar568 + dVar327 * dVar640;
    *(double *)((longlong)local_2080 + lVar29 + 0xb0) =
         dVar492 * dVar324 + 0.0 + dVar565 * dVar325 + dVar326 * dVar581 + dVar327 * dVar641;
    *(double *)((longlong)local_2080 + lVar29 + 0xb8) =
         dVar493 * dVar324 + 0.0 + dVar566 * dVar325 + dVar326 * dVar582 + dVar327 * dVar642;
    *(double *)((longlong)local_2080 + lVar29 + 0x80) =
         dVar324 * dVar334 + 0.0 + dVar325 * dVar494 + dVar583 * dVar326 + dVar327 * dVar621;
    *(double *)((longlong)local_2080 + lVar29 + 0x88) =
         dVar324 * dVar335 + dVar333 + dVar325 * dVar519 + dVar584 * dVar326 + dVar327 * dVar622;
    *(double *)((longlong)local_2080 + lVar29 + 0x90) =
         dVar324 * dVar336 + 0.0 + dVar325 * dVar520 + dVar585 * dVar326 + dVar327 * dVar637;
    *(double *)((longlong)local_2080 + lVar29 + 0x98) =
         dVar324 * dVar337 + 0.0 + dVar325 * dVar521 + dVar586 * dVar326 + dVar327 * dVar638;
    *(double *)(local_1fa0 + lVar29) =
         dVar468 * dVar328 + 0.0 + dVar552 * dVar329 + dVar567 * dVar330 + dVar639 * dVar331;
    *(double *)(local_1fa0 + lVar29 + 8) =
         dVar491 * dVar328 + dVar333 + dVar564 * dVar329 + dVar568 * dVar330 + dVar640 * dVar331;
    *(double *)(local_1fa0 + lVar29 + 0x10) =
         dVar492 * dVar328 + 0.0 + dVar565 * dVar329 + dVar581 * dVar330 + dVar641 * dVar331;
    *(double *)(local_1fa0 + lVar29 + 0x18) =
         dVar493 * dVar328 + 0.0 + dVar566 * dVar329 + dVar582 * dVar330 + dVar642 * dVar331;
    *(double *)(local_1fc0 + lVar29) =
         dVar328 * dVar334 + 0.0 + dVar329 * dVar494 + dVar583 * dVar330 + dVar621 * dVar331;
    *(double *)(local_1fc0 + lVar29 + 8) =
         dVar328 * dVar335 + dVar333 + dVar329 * dVar519 + dVar584 * dVar330 + dVar622 * dVar331;
    *(double *)(local_1fc0 + lVar29 + 0x10) =
         dVar328 * dVar336 + 0.0 + dVar329 * dVar520 + dVar585 * dVar330 + dVar637 * dVar331;
    *(double *)(local_1fc0 + lVar29 + 0x18) =
         dVar328 * dVar337 + 0.0 + dVar329 * dVar521 + dVar586 * dVar330 + dVar638 * dVar331;
    lVar29 = lVar29 + 0x100;
  } while (lVar29 != 0x4c0);
  local_2280 = auVar470._0_8_;
  dStack_2278 = auVar470._8_8_;
  dStack_2270 = auVar547._0_8_;
  dStack_2268 = auVar547._8_8_;
  local_2200 = auVar190._0_8_;
  dStack_21f8 = auVar190._8_8_;
  dStack_21f0 = auVar51._0_8_;
  dStack_21e8 = auVar51._8_8_;
  local_21e0 = auVar474._0_8_;
  dStack_21d8 = auVar474._8_8_;
  dStack_21d0 = auVar372._0_8_;
  dStack_21c8 = auVar372._8_8_;
  dVar50 = (local_2280 + local_2200) * __real_3fe0000000000000;
  dVar323 = (dStack_2278 + dStack_21f8) * __real_3fe0000000000000;
  dVar324 = (dStack_2270 + dStack_21f0) * __real_3fe0000000000000;
  dVar325 = (dStack_2268 + dStack_21e8) * __real_3fe0000000000000;
  dVar330 = (local_21e0 + (double)local_1a60._0_8_) * __real_3fe0000000000000;
  dVar331 = (dStack_21d8 + (double)local_1a60._8_8_) * __real_3fe0000000000000;
  dVar332 = (dStack_21d0 + dStack_1a50) * __real_3fe0000000000000;
  dVar333 = (dStack_21c8 + dStack_1a48) * __real_3fe0000000000000;
  local_22a0 = auVar189._0_8_;
  dStack_2298 = auVar189._8_8_;
  dStack_2290 = auVar445._0_8_;
  dStack_2288 = auVar445._8_8_;
  dVar468 = (local_1920._0_8_ + local_22a0) * __real_3fe0000000000000;
  dVar491 = (local_1920._8_8_ + dStack_2298) * __real_3fe0000000000000;
  dVar492 = (local_1920._16_8_ + dStack_2290) * __real_3fe0000000000000;
  dVar493 = (local_1920._24_8_ + dStack_2288) * __real_3fe0000000000000;
  local_2220 = auVar535._0_8_;
  dStack_2218 = auVar535._8_8_;
  dStack_2210 = auVar186._0_8_;
  dStack_2208 = auVar186._8_8_;
  dVar494 = (local_1940._0_8_ + local_2220) * __real_3fe0000000000000;
  dVar521 = (local_1940._8_8_ + dStack_2218) * __real_3fe0000000000000;
  dVar565 = (local_1940._16_8_ + dStack_2210) * __real_3fe0000000000000;
  dVar568 = (local_1940._24_8_ + dStack_2208) * __real_3fe0000000000000;
  dVar8 = (double)CONCAT17(uStack_1e39,
                           CONCAT16(uStack_1e3a,
                                    CONCAT15(uStack_1e3b,
                                             CONCAT14(uStack_1e3c,
                                                      CONCAT13(uStack_1e3d,
                                                               CONCAT12(uStack_1e3e,
                                                                        CONCAT11(uStack_1e3f,
                                                                                 local_1e40)))))));
  dVar519 = (local_1a00._0_8_ + local_1960._0_8_) * __real_3fe0000000000000;
  dVar552 = (local_1a00._8_8_ + local_1960._8_8_) * __real_3fe0000000000000;
  dVar566 = (local_1a00._16_8_ + local_1960._16_8_) * __real_3fe0000000000000;
  dVar581 = (local_1a00._24_8_ + local_1960._24_8_) * __real_3fe0000000000000;
  dVar621 = (local_1a20._0_8_ + local_1980._0_8_) * __real_3fe0000000000000;
  dVar637 = (local_1a20._8_8_ + local_1980._8_8_) * __real_3fe0000000000000;
  dVar639 = (local_1a20._16_8_ + local_1980._16_8_) * __real_3fe0000000000000;
  dVar641 = (local_1a20._24_8_ + local_1980._24_8_) * __real_3fe0000000000000;
  auVar458 = vsubpd_avx(auVar425,auVar597);
  auVar305 = vsubpd_avx(local_1920,auVar424);
  auVar306 = vsubpd_avx(_local_1a60,auVar598);
  auVar427 = vsubpd_avx(local_1940,auVar511);
  auVar457 = vsubpd_avx(local_1960,local_1a00);
  auVar540 = vsubpd_avx(local_1980,local_1a20);
  dVar520 = auVar305._0_8_ * __real_3fe0000000000000;
  dVar564 = auVar305._8_8_ * __real_3fe0000000000000;
  dVar567 = auVar305._16_8_ * __real_3fe0000000000000;
  dVar582 = auVar305._24_8_ * __real_3fe0000000000000;
  dVar46 = auVar458._0_8_ * __real_3fe0000000000000;
  dVar47 = auVar458._8_8_ * __real_3fe0000000000000;
  dVar48 = auVar458._16_8_ * __real_3fe0000000000000;
  dVar49 = auVar458._24_8_ * __real_3fe0000000000000;
  dVar622 = auVar427._0_8_ * __real_3fe0000000000000;
  dVar638 = auVar427._8_8_ * __real_3fe0000000000000;
  dVar640 = auVar427._16_8_ * __real_3fe0000000000000;
  dVar642 = auVar427._24_8_ * __real_3fe0000000000000;
  dVar583 = auVar306._0_8_ * __real_3fe0000000000000;
  dVar584 = auVar306._8_8_ * __real_3fe0000000000000;
  dVar585 = auVar306._16_8_ * __real_3fe0000000000000;
  dVar586 = auVar306._24_8_ * __real_3fe0000000000000;
  dVar326 = auVar540._0_8_ * __real_3fe0000000000000;
  dVar327 = auVar540._8_8_ * __real_3fe0000000000000;
  dVar328 = auVar540._16_8_ * __real_3fe0000000000000;
  dVar329 = auVar540._24_8_ * __real_3fe0000000000000;
  dVar334 = auVar457._0_8_ * __real_3fe0000000000000;
  dVar335 = auVar457._8_8_ * __real_3fe0000000000000;
  dVar336 = auVar457._16_8_ * __real_3fe0000000000000;
  dVar337 = auVar457._24_8_ * __real_3fe0000000000000;
  auVar483._0_8_ =
       (double)((ulonglong)(dVar326 * local_1dc0) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar583 * (double)local_1ec0._0_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar46 * (double)local_1fc0) & __real_7fffffffffffffff);
  auVar483._8_8_ =
       (double)((ulonglong)(dVar327 * dStack_1db8) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar584 * (double)local_1ec0._8_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar47 * adStack_1fb8[0]) & __real_7fffffffffffffff);
  auVar483._16_8_ =
       (double)((ulonglong)(dVar328 * dStack_1db0) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar585 * dStack_1eb0) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar48 * adStack_1fb8[1]) & __real_7fffffffffffffff);
  auVar483._24_8_ =
       (double)((ulonglong)(dVar329 * dStack_1da8) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar586 * dStack_1ea8) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar49 * adStack_1fb8[2]) & __real_7fffffffffffffff);
  auVar550._0_8_ =
       (double)((ulonglong)(dVar334 * local_1da0) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar622 * (double)local_1ea0._0_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar520 * (double)local_1fa0) & __real_7fffffffffffffff);
  auVar550._8_8_ =
       (double)((ulonglong)(dVar335 * dStack_1d98) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar638 * (double)local_1ea0._8_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar564 * adStack_1f98[0]) & __real_7fffffffffffffff);
  auVar550._16_8_ =
       (double)((ulonglong)(dVar336 * dStack_1d90) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar640 * dStack_1e90) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar567 * adStack_1f98[1]) & __real_7fffffffffffffff);
  auVar550._24_8_ =
       (double)((ulonglong)(dVar337 * dStack_1d88) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar642 * dStack_1e88) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar582 * adStack_1f98[2]) & __real_7fffffffffffffff);
  auVar444._0_8_ =
       (double)((ulonglong)(dVar326 * local_1d80) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar46 * (double)local_1f80._0_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar583 * (double)local_1e80._0_8_) & __real_7fffffffffffffff);
  auVar444._8_8_ =
       (double)((ulonglong)(dVar327 * dStack_1d78) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar47 * (double)local_1f80._8_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar584 * (double)local_1e80._8_8_) & __real_7fffffffffffffff);
  auVar455._16_8_ =
       (double)((ulonglong)(dVar328 * dStack_1d70) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar48 * dStack_1f70) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar585 * dStack_1e70) & __real_7fffffffffffffff);
  auVar455._0_16_ = auVar444;
  auVar455._24_8_ =
       (double)((ulonglong)(dVar329 * dStack_1d68) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar49 * dStack_1f68) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar586 * dStack_1e68) & __real_7fffffffffffffff);
  auVar576._0_8_ =
       dVar468 * (double)local_1fa0 + dVar494 * (double)local_1ea0._0_8_ + dVar519 * local_1da0 +
       local_1ca0;
  auVar576._8_8_ =
       dVar491 * adStack_1f98[0] + dVar521 * (double)local_1ea0._8_8_ + dVar552 * dStack_1d98 +
       dStack_1c98;
  auVar576._16_8_ =
       dVar492 * adStack_1f98[1] + dVar565 * dStack_1e90 + dVar566 * dStack_1d90 + dStack_1c90;
  auVar576._24_8_ =
       dVar493 * adStack_1f98[2] + dVar568 * dStack_1e88 + dVar581 * dStack_1d88 + dStack_1c88;
  auVar606._0_8_ =
       dVar621 * local_1dc0 + dVar50 * (double)local_1fc0 + dVar330 * (double)local_1ec0._0_8_ +
       local_1cc0;
  auVar606._8_8_ =
       dVar637 * dStack_1db8 + dVar323 * adStack_1fb8[0] + dVar331 * (double)local_1ec0._8_8_ +
       dStack_1cb8;
  auVar606._16_8_ =
       dVar639 * dStack_1db0 + dVar324 * adStack_1fb8[1] + dVar332 * dStack_1eb0 + dStack_1cb0;
  auVar606._24_8_ =
       dVar641 * dStack_1da8 + dVar325 * adStack_1fb8[2] + dVar333 * dStack_1ea8 + dStack_1ca8;
  auVar616._0_8_ =
       dVar468 * (double)local_1f60._0_8_ + dVar494 * (double)local_1e60._0_8_ +
       dVar519 * local_1d60 + local_1c60;
  auVar616._8_8_ =
       dVar491 * (double)local_1f60._8_8_ + dVar521 * (double)local_1e60._8_8_ +
       dVar552 * dStack_1d58 + dStack_1c58;
  auVar616._16_8_ =
       dVar492 * dStack_1f50 + dVar565 * dStack_1e50 + dVar566 * dStack_1d50 + dStack_1c50;
  auVar616._24_8_ =
       dVar493 * dStack_1f48 + dVar568 * dStack_1e48 + dVar581 * dStack_1d48 + dStack_1c48;
  auVar628._0_8_ =
       dVar621 * local_1d80 + dVar50 * (double)local_1f80._0_8_ + dVar330 * (double)local_1e80._0_8_
       + local_1c80;
  auVar628._8_8_ =
       dVar637 * dStack_1d78 +
       dVar323 * (double)local_1f80._8_8_ + dVar331 * (double)local_1e80._8_8_ + dStack_1c78;
  auVar628._16_8_ =
       dVar639 * dStack_1d70 + dVar324 * dStack_1f70 + dVar332 * dStack_1e70 + dStack_1c70;
  auVar628._24_8_ =
       dVar641 * dStack_1d68 + dVar325 * dStack_1f68 + dVar333 * dStack_1e68 + dStack_1c68;
  auVar647._0_8_ =
       dVar468 * (double)local_1f20._0_8_ + dVar494 * local_1e20 + dVar519 * local_1d20 + local_1c20
  ;
  auVar647._8_8_ =
       dVar491 * (double)local_1f20._8_8_ + dVar521 * dStack_1e18 + dVar552 * dStack_1d18 +
       dStack_1c18;
  auVar647._16_8_ =
       dVar492 * dStack_1f10 + dVar565 * dStack_1e10 + dVar566 * dStack_1d10 + dStack_1c10;
  auVar647._24_8_ =
       dVar493 * dStack_1f08 + dVar568 * dStack_1e08 + dVar581 * dStack_1d08 + dStack_1c08;
  auVar658._0_8_ =
       dVar621 * local_1d40 + dVar50 * (double)local_1f40._0_8_ + dVar330 * dVar8 + local_1c40;
  auVar658._8_8_ =
       dVar637 * dStack_1d38 + dVar323 * (double)local_1f40._8_8_ + dVar331 * dStack_1e38 +
       dStack_1c38;
  auVar658._16_8_ =
       dVar639 * dStack_1d30 + dVar324 * dStack_1f30 + dVar332 * dStack_1e30 + dStack_1c30;
  auVar658._24_8_ =
       dVar641 * dStack_1d28 + dVar325 * dStack_1f28 + dVar333 * dStack_1e28 + dStack_1c28;
  auVar599._0_8_ =
       (double)((ulonglong)(dVar334 * local_1d60) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar520 * (double)local_1f60._0_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar622 * (double)local_1e60._0_8_) & __real_7fffffffffffffff);
  auVar599._8_8_ =
       (double)((ulonglong)(dVar335 * dStack_1d58) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar564 * (double)local_1f60._8_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar638 * (double)local_1e60._8_8_) & __real_7fffffffffffffff);
  auVar599._16_8_ =
       (double)((ulonglong)(dVar336 * dStack_1d50) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar567 * dStack_1f50) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar640 * dStack_1e50) & __real_7fffffffffffffff);
  auVar599._24_8_ =
       (double)((ulonglong)(dVar337 * dStack_1d48) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar582 * dStack_1f48) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar642 * dStack_1e48) & __real_7fffffffffffffff);
  auVar512._0_8_ =
       (double)(__real_7fffffffffffffff & (ulonglong)(dVar46 * (double)local_1f40._0_8_)) +
       (double)((ulonglong)(dVar583 * dVar8) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar326 * local_1d40) & __real_7fffffffffffffff);
  auVar512._8_8_ =
       (double)(__real_7fffffffffffffff & (ulonglong)(dVar47 * (double)local_1f40._8_8_)) +
       (double)((ulonglong)(dVar584 * dStack_1e38) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar327 * dStack_1d38) & __real_7fffffffffffffff);
  auVar512._16_8_ =
       (double)(__real_7fffffffffffffff & (ulonglong)(dVar48 * dStack_1f30)) +
       (double)((ulonglong)(dVar585 * dStack_1e30) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar328 * dStack_1d30) & __real_7fffffffffffffff);
  auVar512._24_8_ =
       (double)(__real_7fffffffffffffff & (ulonglong)(dVar49 * dStack_1f28)) +
       (double)((ulonglong)(dVar586 * dStack_1e28) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar329 * dStack_1d28) & __real_7fffffffffffffff);
  auVar426._0_8_ =
       (double)((ulonglong)(dVar622 * local_1e20) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar520 * (double)local_1f20._0_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar334 * local_1d20) & __real_7fffffffffffffff);
  auVar426._8_8_ =
       (double)((ulonglong)(dVar638 * dStack_1e18) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar564 * (double)local_1f20._8_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar335 * dStack_1d18) & __real_7fffffffffffffff);
  auVar426._16_8_ =
       (double)((ulonglong)(dVar640 * dStack_1e10) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar567 * dStack_1f10) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar336 * dStack_1d10) & __real_7fffffffffffffff);
  auVar426._24_8_ =
       (double)((ulonglong)(dVar642 * dStack_1e08) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar582 * dStack_1f08) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar337 * dStack_1d08) & __real_7fffffffffffffff);
  auVar458 = vsubpd_avx(auVar606,auVar483);
  auVar305 = vsubpd_avx(auVar576,auVar550);
  auVar306 = vsubpd_avx(auVar628,auVar455);
  auVar427 = vsubpd_avx(auVar616,auVar599);
  local_2440._8_8_ = auVar606._8_8_ + auVar483._8_8_;
  local_2440._0_8_ = auVar606._0_8_ + auVar483._0_8_;
  dStack_2430 = auVar606._16_8_ + auVar483._16_8_;
  dStack_2428 = auVar606._24_8_ + auVar483._24_8_;
  auVar457 = vsubpd_avx(auVar658,auVar512);
  local_2380._8_8_ = auVar576._8_8_ + auVar550._8_8_;
  local_2380._0_8_ = auVar576._0_8_ + auVar550._0_8_;
  dStack_2370 = auVar576._16_8_ + auVar550._16_8_;
  dStack_2368 = auVar576._24_8_ + auVar550._24_8_;
  auVar540 = vsubpd_avx(auVar647,auVar426);
  local_23c0._8_8_ = auVar628._8_8_ + auVar444._8_8_;
  local_23c0._0_8_ = auVar628._0_8_ + auVar444._0_8_;
  dStack_23b0 = auVar628._16_8_ + auVar455._16_8_;
  dStack_23a8 = auVar628._24_8_ + auVar455._24_8_;
  auVar600._0_8_ = auVar599._0_8_ + auVar616._0_8_;
  auVar600._8_8_ = auVar599._8_8_ + auVar616._8_8_;
  auVar600._16_8_ = auVar599._16_8_ + auVar616._16_8_;
  auVar600._24_8_ = auVar599._24_8_ + auVar616._24_8_;
  auVar629._0_8_ = auVar658._0_8_ + auVar512._0_8_;
  auVar629._8_8_ = auVar658._8_8_ + auVar512._8_8_;
  auVar629._16_8_ = auVar658._16_8_ + auVar512._16_8_;
  auVar629._24_8_ = auVar658._24_8_ + auVar512._24_8_;
  auVar648._0_8_ = auVar647._0_8_ + auVar426._0_8_;
  auVar648._8_8_ = auVar647._8_8_ + auVar426._8_8_;
  auVar648._16_8_ = auVar647._16_8_ + auVar426._16_8_;
  auVar648._24_8_ = auVar647._24_8_ + auVar426._24_8_;
  auVar475._8_8_ = 0;
  auVar475._0_8_ = local_1500;
  auVar474 = vpcmpeqb_avx(auVar475,ZEXT816(0) << 0x40);
  auVar51 = vpcmpeqd_avx(auVar444,auVar444);
  auVar470 = vpmovsxbd_avx(auVar474 ^ auVar51);
  auVar51 = vpshufd_avx(auVar474 ^ auVar51,0x55);
  auVar51 = vpmovsxbd_avx(auVar51);
  auVar620._0_4_ = auVar470._0_4_ & uVar464;
  auVar620._4_4_ = auVar470._4_4_ & uVar465;
  auVar620._8_4_ = auVar470._8_4_ & uVar466;
  auVar620._12_4_ = auVar470._12_4_ & uVar467;
  auVar620._16_4_ = auVar51._0_4_ & uVar529;
  auVar620._20_4_ = auVar51._4_4_ & uVar530;
  auVar620._24_4_ = auVar51._8_4_ & uVar531;
  auVar620._28_4_ = auVar51._12_4_ & uVar532;
  iVar37 = vmovmskps_avx(auVar620);
  if (iVar37 == 0) {
    auVar620 = ZEXT832(0) << 0x40;
LAB_140a62d74:
    auVar51 = vpmovsxbw_avx(auVar474);
    auVar51 = vpand_avx(auVar51,local_12d0);
    auVar470 = vpmovsxwd_avx(auVar51);
    auVar51 = vpunpckhwd_avx(auVar51,auVar51);
    auVar486._16_16_ = auVar51;
    auVar486._0_16_ = auVar470;
    auVar51 = vpcmpgtd_avx(auStack_1a30,auVar554);
    auVar470 = vpcmpgtd_avx(local_1a40,local_19e0._0_16_);
    auVar516._16_16_ = auVar51;
    auVar516._0_16_ = auVar470;
    auVar516 = auVar516 & auVar486;
    if ((((((((SUB321(auVar516 >> 0x1f,0) & 1) != 0 || (SUB321(auVar516 >> 0x3f,0) & 1) != 0) ||
            (SUB321(auVar516 >> 0x5f,0) & 1) != 0) || SUB321(auVar516 >> 0x7f,0) != '\0') ||
          (SUB321(auVar516 >> 0x9f,0) & 1) != 0) || SUB321(auVar516 >> 0xbf,0) != '\0') ||
        (SUB321(auVar516 >> 0xdf,0) & 1) != 0) || auVar516[0x1f] < '\0') {
      auVar474 = vpmovzxbw_avx(auVar474);
      auVar51 = vpmovzxwd_avx(auVar474);
      auVar51 = vpslld_avx(auVar51,0x1f);
      auVar470 = vpsrad_avx(auVar51,0x1f);
      auVar51 = vpunpckhwd_avx(auVar474,auVar474);
      auVar51 = vpslld_avx(auVar51,0x1f);
      auVar51 = vpsrad_avx(auVar51,0x1f);
      auVar432._16_16_ = auVar51;
      auVar432._0_16_ = auVar470;
      auVar482 = auVar482 & auVar432;
      if ((((((((SUB321(auVar482 >> 0x1f,0) & 1) != 0 || (SUB321(auVar482 >> 0x3f,0) & 1) != 0) ||
              (SUB321(auVar482 >> 0x5f,0) & 1) != 0) || SUB321(auVar482 >> 0x7f,0) != '\0') ||
            (SUB321(auVar482 >> 0x9f,0) & 1) != 0) || SUB321(auVar482 >> 0xbf,0) != '\0') ||
          (SUB321(auVar482 >> 0xdf,0) & 1) != 0) || auVar482[0x1f] < '\0') {
        auVar496 = vpmovsxdq_avx(auVar470);
        auVar546 = vshufps_avx(auVar470,auVar470,0xfa);
        auVar314._16_16_ = auVar546;
        auVar314._0_16_ = auVar496;
        auVar496 = vpmovsxdq_avx(auVar51);
        auVar546 = vpshufd_avx(auVar51,0xfa);
        auVar462._16_16_ = auVar546;
        auVar462._0_16_ = auVar496;
        _local_1fc0 = vmaskmovpd_avx(auVar314,auVar458);
        _local_1fa0 = vmaskmovpd_avx(auVar462,auVar305);
        _local_1f80 = vmaskmovpd_avx(auVar314,auVar306);
        _local_1f60 = vmaskmovpd_avx(auVar462,auVar427);
        _local_1f40 = vmaskmovpd_avx(auVar314,auVar457);
        _local_1f20 = vmaskmovpd_avx(auVar462,auVar540);
        local_1f00 = vmaskmovpd_avx(auVar314,_local_2440);
        local_1ee0 = vmaskmovpd_avx(auVar462,_local_2380);
        _local_1ec0 = vmaskmovpd_avx(auVar314,_local_23c0);
        _local_1ea0 = vmaskmovpd_avx(auVar462,auVar600);
        _local_1e80 = vmaskmovpd_avx(auVar314,auVar629);
        _local_1e60 = vmaskmovpd_avx(auVar462,auVar648);
        auVar474 = vpsllw_avx(auVar474,0xf);
        auVar474 = vpacksswb_avx(auVar474,auVar474);
        bVar31 = SUB161(auVar474 >> 0xf,0) & 1;
        bVar10 = SUB161(auVar474 >> 0x17,0) & 1;
        bVar11 = SUB161(auVar474 >> 0x1f,0) & 1;
        bVar12 = SUB161(auVar474 >> 0x27,0) & 1;
        bVar13 = SUB161(auVar474 >> 0x2f,0) & 1;
        bVar14 = SUB161(auVar474 >> 0x37,0) & 1;
        if ((SUB161(auVar474 >> 7,0) & 1) == 0) {
          if (bVar31 != 0) goto LAB_140a64365;
LAB_140a62ee1:
          if (bVar10 != 0) goto LAB_140a64375;
LAB_140a62ee9:
          if (bVar11 != 0) goto LAB_140a64385;
LAB_140a62ef1:
          if (bVar12 != 0) goto LAB_140a64395;
LAB_140a62ef9:
          if (bVar13 != 0) goto LAB_140a643a5;
LAB_140a62f01:
          if (bVar14 != 0) goto LAB_140a643b5;
LAB_140a62f09:
          auVar315._0_4_ = auVar470._0_4_ & uVar464;
          auVar315._4_4_ = auVar470._4_4_ & uVar465;
          auVar315._8_4_ = auVar470._8_4_ & uVar466;
          auVar315._12_4_ = auVar470._12_4_ & uVar467;
          auVar315._16_4_ = auVar51._0_4_ & uVar529;
          auVar315._20_4_ = auVar51._4_4_ & uVar530;
          auVar315._24_4_ = auVar51._8_4_ & uVar531;
          auVar315._28_4_ = auVar51._12_4_ & uVar532;
        }
        else {
          local_1e40 = 1;
          if (bVar31 == 0) goto LAB_140a62ee1;
LAB_140a64365:
          uStack_1e3f = 1;
          if (bVar10 == 0) goto LAB_140a62ee9;
LAB_140a64375:
          uStack_1e3e = 1;
          if (bVar11 == 0) goto LAB_140a62ef1;
LAB_140a64385:
          uStack_1e3d = 1;
          if (bVar12 == 0) goto LAB_140a62ef9;
LAB_140a64395:
          uStack_1e3c = 1;
          if (bVar13 == 0) goto LAB_140a62f01;
LAB_140a643a5:
          uStack_1e3b = 1;
          if (bVar14 == 0) goto LAB_140a62f09;
LAB_140a643b5:
          uStack_1e3a = 1;
          auVar315._0_4_ = auVar470._0_4_ & uVar464;
          auVar315._4_4_ = auVar470._4_4_ & uVar465;
          auVar315._8_4_ = auVar470._8_4_ & uVar466;
          auVar315._12_4_ = auVar470._12_4_ & uVar467;
          auVar315._16_4_ = auVar51._0_4_ & uVar529;
          auVar315._20_4_ = auVar51._4_4_ & uVar530;
          auVar315._24_4_ = auVar51._8_4_ & uVar531;
          auVar315._28_4_ = auVar51._12_4_ & uVar532;
        }
        if ((SUB161(auVar474 >> 0x3f,0) & 1) != 0) {
          uStack_1e39 = 1;
        }
        vmovmskps_avx(auVar620 | auVar315);
      }
    }
  }
  else {
    auVar459 = vminpd_avx(local_1680,auVar458);
    auVar496 = vshufps_avx(auVar470,auVar470,0x50);
    auVar470 = vshufps_avx(auVar470,auVar470,0xfa);
    auVar456._16_16_ = auVar470;
    auVar456._0_16_ = auVar496;
    _local_1fc0 = vmaskmovpd_avx(auVar456,auVar459);
    auVar470 = vshufps_avx(auVar51,auVar51,0x50);
    auVar51 = vshufps_avx(auVar51,auVar51,0xfa);
    auVar304._16_16_ = auVar51;
    auVar304._0_16_ = auVar470;
    auVar459 = vminpd_avx(local_1660,auVar305);
    _local_1fa0 = vmaskmovpd_avx(auVar304,auVar459);
    auVar459 = vminpd_avx(local_1640,auVar306);
    _local_1f80 = vmaskmovpd_avx(auVar456,auVar459);
    auVar459 = vminpd_avx(local_1620,auVar427);
    _local_1f60 = vmaskmovpd_avx(auVar304,auVar459);
    auVar459 = vminpd_avx(local_1600,auVar457);
    _local_1f40 = vmaskmovpd_avx(auVar456,auVar459);
    auVar459 = vminpd_avx(local_15e0,auVar540);
    _local_1f20 = vmaskmovpd_avx(auVar304,auVar459);
    auVar459 = vmaxpd_avx(local_15c0,_local_2440);
    local_1f00 = vmaskmovpd_avx(auVar456,auVar459);
    auVar459 = vmaxpd_avx(local_15a0,_local_2380);
    local_1ee0 = vmaskmovpd_avx(auVar304,auVar459);
    auVar459 = vmaxpd_avx(local_1580,_local_23c0);
    _local_1ec0 = vmaskmovpd_avx(auVar456,auVar459);
    auVar459 = vmaxpd_avx(local_1560,auVar600);
    _local_1ea0 = vmaskmovpd_avx(auVar304,auVar459);
    auVar459 = vmaxpd_avx(local_1540,auVar629);
    _local_1e80 = vmaskmovpd_avx(auVar456,auVar459);
    auVar459 = vmaxpd_avx(local_1520,auVar648);
    _local_1e60 = vmaskmovpd_avx(auVar304,auVar459);
    auVar51 = vpshufd_avx(auVar475,0x44);
    auVar51 = vpcmpeqb_avx(auVar51,___xmm_00000000000000000000000000000000);
    bVar31 = ~(SUB161(auVar51 >> 7,0) & 1 | (SUB161(auVar51 >> 0xf,0) & 1) << 1 |
               (SUB161(auVar51 >> 0x17,0) & 1) << 2 | (SUB161(auVar51 >> 0x1f,0) & 1) << 3 |
               (SUB161(auVar51 >> 0x27,0) & 1) << 4 | (SUB161(auVar51 >> 0x2f,0) & 1) << 5 |
              (SUB161(auVar51 >> 0x37,0) & 1) << 6);
    if ((bVar31 & 1) != 0) {
      local_1e40 = (undefined1)local_1500;
    }
    if ((bVar31 & 2) != 0) {
      uStack_1e3f = (undefined1)(local_1500 >> 8);
    }
    if ((bVar31 & 4) != 0) {
      uStack_1e3e = (undefined1)(local_1500 >> 0x10);
    }
    if ((bVar31 & 8) != 0) {
      uStack_1e3d = (undefined1)(local_1500 >> 0x18);
    }
    if ((bVar31 & 0x10) != 0) {
      uStack_1e3c = (undefined1)(local_1500 >> 0x20);
    }
    if ((bVar31 & 0x20) != 0) {
      uStack_1e3b = (undefined1)(local_1500 >> 0x28);
    }
    if ((bVar31 & 0x40) != 0) {
      uStack_1e3a = (undefined1)(local_1500 >> 0x30);
    }
    if ((SUB161(auVar51 >> 0x3f,0) & 1) == 0) {
      uStack_1e39 = (undefined1)(local_1500 >> 0x38);
    }
    if ((char)uVar45 != (char)iVar37) goto LAB_140a62d74;
  }
  auVar474 = vshufps_avx(auVar185,auVar185,0x50);
  auVar51 = vshufps_avx(auVar185,auVar185,0xfa);
  auVar635._16_16_ = auVar51;
  auVar635._0_16_ = auVar474;
  auVar474 = vshufps_avx(auVar188,auVar188,0x50);
  auVar51 = vshufps_avx(auVar188,auVar188,0xfa);
  auVar653._16_16_ = auVar51;
  auVar653._0_16_ = auVar474;
  local_1680 = vmaskmovpd_avx(auVar635,_local_1fc0);
  local_1660 = vmaskmovpd_avx(auVar653,_local_1fa0);
  local_1640 = vmaskmovpd_avx(auVar635,_local_1f80);
  local_1620 = vmaskmovpd_avx(auVar653,_local_1f60);
  local_1600 = vmaskmovpd_avx(auVar635,_local_1f40);
  local_15e0 = vmaskmovpd_avx(auVar653,_local_1f20);
  local_15c0 = vmaskmovpd_avx(auVar635,local_1f00);
  local_15a0 = vmaskmovpd_avx(auVar653,local_1ee0);
  local_1580 = vmaskmovpd_avx(auVar635,_local_1ec0);
  local_1560 = vmaskmovpd_avx(auVar653,_local_1ea0);
  local_1540 = vmaskmovpd_avx(auVar635,_local_1e80);
  local_1520 = vmaskmovpd_avx(auVar653,_local_1e60);
  uVar30 = local_1500;
  if ((uVar45 & 1) != 0) {
    local_1500 = CONCAT71(local_1500._1_7_,local_1e40);
    uVar30 = local_1500;
  }
  if ((uVar45 & 2) != 0) {
    local_1500._2_6_ = (undefined6)(uVar30 >> 0x10);
    local_1500._0_1_ = (char)uVar30;
    local_1500._0_2_ = CONCAT11(uStack_1e3f,(char)local_1500);
    uVar30 = local_1500;
  }
  if ((uVar45 & 4) != 0) {
    local_1500._3_5_ = (undefined5)(uVar30 >> 0x18);
    local_1500._0_2_ = (undefined2)uVar30;
    local_1500._0_3_ = CONCAT12(uStack_1e3e,(undefined2)local_1500);
    uVar30 = local_1500;
  }
  if ((uVar45 & 8) != 0) {
    local_1500._4_4_ = (undefined4)(uVar30 >> 0x20);
    local_1500._0_3_ = (undefined3)uVar30;
    local_1500._0_4_ = CONCAT13(uStack_1e3d,(undefined3)local_1500);
    uVar30 = local_1500;
  }
  if ((uVar45 & 0x10) != 0) {
    local_1500._5_3_ = (undefined3)(uVar30 >> 0x28);
    local_1500._0_4_ = (undefined4)uVar30;
    local_1500._0_5_ = CONCAT14(uStack_1e3c,(undefined4)local_1500);
    uVar30 = local_1500;
  }
  if ((uVar45 & 0x20) != 0) {
    local_1500._6_2_ = (undefined2)(uVar30 >> 0x30);
    local_1500._0_5_ = (undefined5)uVar30;
    local_1500._0_6_ = CONCAT15(uStack_1e3b,(undefined5)local_1500);
    uVar30 = local_1500;
  }
  local_1500 = uVar30;
  if ((uVar45 & 0x40) != 0) {
    local_1500._7_1_ = (undefined1)(uVar30 >> 0x38);
    local_1500._0_6_ = (undefined6)uVar30;
    local_1500._0_7_ = CONCAT16(uStack_1e3a,(undefined6)local_1500);
  }
  auVar474 = local_19c0._0_16_;
  if ((char)uVar45 < '\0') {
    local_1500 = CONCAT17(uStack_1e39,(undefined7)local_1500);
  }
LAB_140a6308c:
  uVar45 = vmovmskps_avx(local_1300);
  cVar32 = (char)uVar45;
  if ((uVar45 & 1) != 0) {
    local_14c0 = vmovlps_avx(local_1680._0_16_);
  }
  if ((uVar45 & 2) != 0) {
    local_1488 = vmovhps_avx(local_1680._0_16_);
  }
  if ((uVar45 & 4) != 0) {
    local_1450 = vmovlps_avx(local_1680._16_16_);
  }
  if ((uVar45 & 8) != 0) {
    local_1418 = vmovhps_avx(local_1680._16_16_);
  }
  if ((uVar45 & 0x10) != 0) {
    local_13e0 = vmovlps_avx(local_1660._0_16_);
  }
  if ((uVar45 & 0x20) != 0) {
    local_13a8 = vmovhps_avx(local_1660._0_16_);
  }
  if ((uVar45 & 0x40) != 0) {
    local_1370 = local_1660._16_8_;
  }
  if (cVar32 < '\0') {
    local_1338 = vmovhps_avx(local_1660._16_16_);
  }
  if ((uVar45 & 1) != 0) {
    local_14b8[0] = vmovlps_avx(local_1640._0_16_);
  }
  if ((uVar45 & 2) != 0) {
    local_1480 = vmovhps_avx(local_1640._0_16_);
  }
  if ((uVar45 & 4) != 0) {
    local_1448 = vmovlps_avx(local_1640._16_16_);
  }
  if ((uVar45 & 8) != 0) {
    local_1410 = vmovhps_avx(local_1640._16_16_);
  }
  if ((uVar45 & 0x10) != 0) {
    local_13d8 = vmovlps_avx(local_1620._0_16_);
  }
  if ((uVar45 & 0x20) != 0) {
    local_13a0 = vmovhps_avx(local_1620._0_16_);
  }
  if ((uVar45 & 0x40) != 0) {
    local_1368 = local_1620._16_8_;
  }
  if (cVar32 < '\0') {
    local_1330 = vmovhps_avx(local_1620._16_16_);
  }
  if ((uVar45 & 1) != 0) {
    local_14b8[1] = vmovlps_avx(local_1600._0_16_);
  }
  if ((uVar45 & 2) != 0) {
    local_1478 = vmovhps_avx(local_1600._0_16_);
  }
  if ((uVar45 & 4) != 0) {
    local_1440 = vmovlps_avx(local_1600._16_16_);
  }
  if ((uVar45 & 8) != 0) {
    local_1408 = vmovhps_avx(local_1600._16_16_);
  }
  if ((uVar45 & 0x10) != 0) {
    local_13d0 = vmovlps_avx(local_15e0._0_16_);
  }
  if ((uVar45 & 0x20) != 0) {
    local_1398 = vmovhps_avx(local_15e0._0_16_);
  }
  if ((uVar45 & 0x40) != 0) {
    local_1360 = local_15e0._16_8_;
  }
  if (cVar32 < '\0') {
    local_1328 = vmovhps_avx(local_15e0._16_16_);
  }
  if ((uVar45 & 1) != 0) {
    local_14a8[0] = vmovlps_avx(local_15c0._0_16_);
  }
  if ((uVar45 & 2) != 0) {
    local_1470 = vmovhps_avx(local_15c0._0_16_);
  }
  if ((uVar45 & 4) != 0) {
    local_1438 = vmovlps_avx(local_15c0._16_16_);
  }
  if ((uVar45 & 8) != 0) {
    local_1400 = vmovhps_avx(local_15c0._16_16_);
  }
  if ((uVar45 & 0x10) != 0) {
    local_13c8 = vmovlps_avx(local_15a0._0_16_);
  }
  if ((uVar45 & 0x20) != 0) {
    local_1390 = vmovhps_avx(local_15a0._0_16_);
  }
  if ((uVar45 & 0x40) != 0) {
    local_1358 = local_15a0._16_8_;
  }
  if (cVar32 < '\0') {
    local_1320 = vmovhps_avx(local_15a0._16_16_);
  }
  if ((uVar45 & 1) != 0) {
    local_14a8[1] = vmovlps_avx(local_1580._0_16_);
  }
  if ((uVar45 & 2) != 0) {
    local_1468 = vmovhps_avx(local_1580._0_16_);
  }
  if ((uVar45 & 4) != 0) {
    local_1430 = vmovlps_avx(local_1580._16_16_);
  }
  if ((uVar45 & 8) != 0) {
    local_13f8 = vmovhps_avx(local_1580._16_16_);
  }
  if ((uVar45 & 0x10) != 0) {
    local_13c0 = vmovlps_avx(local_1560._0_16_);
  }
  if ((uVar45 & 0x20) != 0) {
    local_1388 = vmovhps_avx(local_1560._0_16_);
  }
  if ((uVar45 & 0x40) != 0) {
    local_1350 = local_1560._16_8_;
  }
  if (cVar32 < '\0') {
    local_1318 = vmovhps_avx(local_1560._16_16_);
  }
  if ((uVar45 & 1) != 0) {
    local_1498 = vmovlps_avx(local_1540._0_16_);
  }
  if ((uVar45 & 2) != 0) {
    local_1460 = vmovhps_avx(local_1540._0_16_);
  }
  if ((uVar45 & 4) != 0) {
    local_1428 = vmovlps_avx(local_1540._16_16_);
  }
  if ((uVar45 & 8) != 0) {
    local_13f0 = vmovhps_avx(local_1540._16_16_);
  }
  if ((uVar45 & 0x10) != 0) {
    local_13b8 = vmovlps_avx(local_1520._0_16_);
  }
  if ((uVar45 & 0x20) != 0) {
    local_1380 = vmovhps_avx(local_1520._0_16_);
  }
  if ((uVar45 & 0x40) != 0) {
    local_1348 = local_1520._16_8_;
  }
  if (cVar32 < '\0') {
    local_1310 = vmovhps_avx(local_1520._16_16_);
  }
  if ((uVar45 & 1) != 0) {
    local_1490[0] = (char)local_1500;
  }
  if ((uVar45 & 2) != 0) {
    local_1458 = local_1500._1_1_;
  }
  if ((uVar45 & 4) != 0) {
    local_1420 = local_1500._2_1_;
  }
  if ((uVar45 & 8) != 0) {
    local_13e8 = local_1500._3_1_;
  }
  if ((uVar45 & 0x10) != 0) {
    local_13b0 = local_1500._4_1_;
  }
  if ((uVar45 & 0x20) != 0) {
    local_1378 = local_1500._5_1_;
  }
  if ((uVar45 & 0x40) != 0) {
    local_1340 = local_1500._6_1_;
  }
  if (cVar32 < '\0') {
    local_1308 = local_1500._7_1_;
  }
  auVar51 = vpshufd_avx(auVar474,0);
  auVar474 = vpcmpgtd_avx(auVar51,___xmm_00000003000000020000000100000000);
  auVar51 = vpcmpgtd_avx(auVar51,___xmm_00000007000000060000000500000004);
  auVar316._0_4_ = auVar474._0_4_ & local_1300._0_4_;
  auVar316._4_4_ = auVar474._4_4_ & local_1300._4_4_;
  auVar316._8_4_ = auVar474._8_4_ & local_1300._8_4_;
  auVar316._12_4_ = auVar474._12_4_ & local_1300._12_4_;
  auVar316._16_4_ = auVar51._0_4_ & local_1300._16_4_;
  auVar316._20_4_ = auVar51._4_4_ & local_1300._20_4_;
  auVar316._24_4_ = auVar51._8_4_ & local_1300._24_4_;
  auVar316._28_4_ = auVar51._12_4_ & local_1300._28_4_;
  uVar45 = vmovmskps_avx(auVar316);
  if (uVar45 != 0) {
    uVar30 = (ulonglong)(uVar45 & 0xff);
    do {
      if (uVar30 == 0) {
        uVar34 = 0x40;
      }
      else {
        uVar34 = 0;
        for (uVar15 = uVar30; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x8000000000000000) {
          uVar34 = uVar34 + 1;
        }
      }
      lVar29 = uVar34 * 0x38;
      cVar35 = param_6[2][0];
      cVar32 = local_1490[lVar29];
      if ((cVar35 == '\0') || (cVar32 == '\0')) {
        if (cVar32 == '\0') {
          cVar35 = param_6[2][0];
          uVar522 = *(undefined8 *)(param_6[1] + 0x10);
          uVar495 = *(undefined8 *)(param_6[1] + 8);
          uVar469 = *(undefined8 *)param_6[1];
          uVar435 = *(undefined8 *)(*param_6 + 0x10);
          auVar111._0_8_ = *(undefined8 *)*param_6;
          uVar338 = *(undefined8 *)(*param_6 + 8);
        }
        else {
          auVar111._0_8_ = *(undefined8 *)*(undefined1 (*) [24])(&local_14c0 + uVar34 * 7);
          uVar338 = local_14b8[uVar34 * 7];
          uVar435 = local_14b8[uVar34 * 7 + 1];
          uVar469 = local_14a8[uVar34 * 7];
          uVar495 = local_14a8[uVar34 * 7 + 1];
          uVar522 = *(undefined8 *)(local_1490 + lVar29 + -8);
          cVar35 = cVar32;
        }
      }
      else {
        auVar317._24_8_ = 0;
        auVar317._0_24_ = *param_6;
        auVar433._24_8_ = 0;
        auVar433._0_24_ = *(undefined1 (*) [24])(&local_14c0 + uVar34 * 7);
        auVar458 = vminpd_avx(auVar317,auVar433);
        auVar111._0_8_ = auVar458._0_8_;
        auVar474 = vshufpd_avx(auVar458._0_16_,auVar458._0_16_,1);
        uVar338 = auVar474._0_8_;
        uVar435 = auVar458._16_8_;
        auVar487._24_8_ = 0;
        auVar487._0_24_ = param_6[1];
        auVar517._16_8_ = *(undefined8 *)(local_1490 + lVar29 + -8);
        auVar517._0_16_ = *(undefined1 (*) [16])(local_14a8 + uVar34 * 7);
        auVar517._24_8_ = 0;
        auVar458 = vmaxpd_avx(auVar487,auVar517);
        uVar469 = auVar458._0_8_;
        auVar474 = vshufpd_avx(auVar458._0_16_,auVar458._0_16_,1);
        uVar495 = auVar474._0_8_;
        uVar522 = auVar458._16_8_;
      }
      uVar30 = uVar30 & ~(1L << (uVar34 & 0x3f));
      *(undefined8 *)*param_6 = auVar111._0_8_;
      *(undefined8 *)(*param_6 + 8) = uVar338;
      *(undefined8 *)(*param_6 + 0x10) = uVar435;
      *(undefined8 *)param_6[1] = uVar469;
      *(undefined8 *)(param_6[1] + 8) = uVar495;
      *(undefined8 *)(param_6[1] + 0x10) = uVar522;
      param_6[2][0] = cVar35;
    } while (uVar30 != 0);
  }
  return;
}

// BoxCalcBoundsFromTransformGroup___un_3C_Cuni_3E_un_3C_s_5B__c_unFMatrix_5D__3E_un_3C_s_5B__c_unFBox_5D__3E_REFs_5B__c_unFMatrix_5D_REFs_5B_unFBox_5D_Cuni_avx @ 140a64460

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BoxCalcBoundsFromTransformGroup___un_3C_Cuni_3E_un_3C_s_5B__c_unFMatrix_5D__3E_un_3C_s_5B__c_unFBox_5D__3E_REFs_5B__c_unFMatrix_5D_REFs_5B_unFBox_5D_Cuni_avx
               (longlong param_1,longlong param_2,longlong param_3,double *param_4,
               undefined1 (*param_5) [24],uint param_6,undefined1 (*param_7) [32])

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  double dVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  undefined1 auVar23 [32];
  char cVar24;
  int iVar25;
  ulonglong uVar26;
  byte bVar27;
  undefined4 uVar28;
  longlong lVar29;
  longlong lVar30;
  undefined4 uVar32;
  ulonglong uVar31;
  char cVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  ulonglong uVar49;
  longlong lVar50;
  longlong lVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  longlong lVar54;
  longlong lVar55;
  uint uVar56;
  longlong lVar57;
  undefined4 uVar58;
  uint uVar59;
  longlong lVar60;
  ulonglong uVar61;
  longlong lVar62;
  longlong lVar63;
  undefined4 uVar64;
  longlong unaff_R12;
  longlong lVar65;
  uint uVar66;
  uint uVar67;
  longlong lVar68;
  longlong lVar69;
  uint uVar70;
  uint uVar71;
  uint uVar72;
  longlong lVar73;
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar224 [16];
  undefined1 auVar225 [16];
  undefined1 auVar226 [16];
  undefined1 auVar227 [16];
  undefined1 auVar228 [16];
  undefined1 auVar229 [16];
  undefined1 auVar230 [16];
  undefined1 auVar231 [16];
  undefined1 auVar232 [16];
  undefined1 auVar233 [16];
  undefined1 auVar234 [16];
  undefined1 auVar235 [16];
  undefined1 auVar236 [16];
  undefined1 auVar237 [16];
  undefined1 auVar238 [16];
  undefined1 auVar239 [16];
  undefined1 auVar240 [16];
  undefined1 auVar241 [16];
  undefined1 auVar242 [16];
  undefined1 auVar243 [16];
  undefined1 auVar244 [16];
  undefined1 auVar245 [16];
  undefined1 auVar246 [16];
  undefined1 auVar247 [16];
  undefined1 auVar248 [16];
  undefined1 auVar249 [16];
  undefined1 auVar250 [16];
  undefined1 auVar251 [16];
  undefined1 auVar252 [16];
  undefined1 auVar253 [16];
  undefined1 auVar254 [16];
  undefined1 auVar255 [16];
  undefined1 auVar256 [16];
  undefined1 auVar257 [16];
  undefined1 auVar258 [16];
  undefined1 auVar259 [16];
  undefined1 auVar260 [16];
  undefined1 auVar261 [16];
  undefined1 auVar262 [16];
  undefined1 auVar263 [16];
  undefined1 auVar264 [16];
  undefined1 auVar265 [16];
  undefined1 auVar266 [16];
  undefined1 auVar267 [16];
  double dVar74;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  double dVar75;
  double dVar76;
  double dVar77;
  double dVar78;
  double dVar310;
  undefined1 auVar277 [32];
  double dVar305;
  double dVar306;
  double dVar307;
  double dVar308;
  double dVar309;
  double dVar311;
  double dVar312;
  double dVar313;
  double dVar314;
  double dVar315;
  double dVar316;
  double dVar317;
  double dVar318;
  double dVar319;
  undefined1 auVar278 [32];
  undefined1 auVar279 [32];
  undefined1 auVar280 [32];
  undefined1 auVar281 [32];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  undefined1 auVar187 [16];
  undefined1 auVar282 [32];
  undefined1 auVar283 [32];
  undefined1 auVar188 [16];
  undefined1 auVar189 [16];
  undefined1 auVar190 [16];
  undefined1 auVar191 [16];
  undefined1 auVar192 [16];
  undefined1 auVar193 [16];
  undefined1 auVar194 [16];
  undefined1 auVar195 [16];
  undefined1 auVar196 [16];
  undefined1 auVar197 [16];
  undefined1 auVar198 [16];
  undefined1 auVar199 [16];
  undefined1 auVar200 [16];
  undefined1 auVar201 [16];
  undefined1 auVar202 [16];
  undefined1 auVar203 [16];
  undefined1 auVar204 [16];
  undefined1 auVar205 [16];
  undefined1 auVar206 [16];
  undefined1 auVar207 [16];
  undefined1 auVar208 [16];
  undefined1 auVar209 [16];
  undefined1 auVar210 [16];
  undefined1 auVar211 [16];
  undefined1 auVar212 [16];
  undefined1 auVar213 [16];
  undefined1 auVar214 [16];
  undefined1 auVar215 [16];
  undefined1 auVar216 [16];
  undefined1 auVar217 [16];
  undefined1 auVar218 [16];
  undefined1 auVar219 [16];
  undefined1 auVar220 [16];
  undefined1 auVar221 [16];
  undefined1 auVar222 [16];
  undefined1 auVar223 [16];
  undefined1 auVar284 [32];
  undefined1 auVar285 [32];
  undefined1 auVar286 [32];
  undefined1 auVar287 [32];
  undefined1 auVar288 [32];
  undefined1 auVar289 [32];
  undefined1 auVar290 [32];
  undefined1 auVar268 [16];
  undefined1 auVar269 [16];
  undefined1 auVar270 [16];
  undefined1 auVar271 [16];
  undefined1 auVar272 [16];
  undefined1 auVar273 [16];
  undefined1 auVar274 [16];
  undefined1 auVar275 [16];
  undefined1 auVar276 [16];
  undefined1 auVar291 [32];
  undefined1 auVar292 [32];
  undefined1 auVar293 [32];
  undefined1 auVar294 [32];
  undefined1 auVar295 [32];
  undefined1 auVar296 [32];
  undefined1 auVar297 [32];
  undefined1 auVar298 [32];
  undefined8 uVar79;
  undefined1 auVar299 [32];
  undefined1 auVar300 [32];
  undefined1 auVar301 [32];
  undefined1 auVar302 [32];
  undefined1 auVar303 [32];
  undefined1 auVar304 [32];
  undefined8 uVar320;
  undefined1 auVar321 [16];
  undefined1 auVar322 [16];
  undefined1 auVar323 [16];
  undefined1 auVar324 [16];
  undefined1 auVar325 [16];
  undefined1 auVar326 [16];
  undefined1 auVar327 [16];
  undefined1 auVar328 [16];
  undefined1 auVar329 [16];
  undefined1 auVar330 [16];
  undefined1 auVar331 [16];
  undefined1 auVar332 [16];
  undefined1 auVar333 [16];
  undefined1 auVar334 [16];
  undefined1 auVar335 [16];
  undefined1 auVar336 [16];
  undefined1 auVar337 [16];
  undefined1 auVar338 [16];
  undefined1 auVar339 [16];
  undefined1 auVar340 [16];
  undefined1 auVar341 [16];
  undefined1 auVar342 [16];
  undefined1 auVar343 [16];
  undefined1 auVar344 [16];
  undefined1 auVar345 [16];
  undefined1 auVar346 [16];
  undefined1 auVar347 [16];
  undefined1 auVar348 [16];
  undefined1 auVar349 [16];
  undefined1 auVar350 [16];
  undefined1 auVar351 [16];
  undefined1 auVar352 [16];
  undefined1 auVar353 [16];
  undefined1 auVar354 [16];
  undefined1 auVar355 [16];
  undefined1 auVar356 [16];
  undefined1 auVar357 [16];
  undefined1 auVar358 [16];
  undefined1 auVar359 [16];
  undefined1 auVar360 [16];
  undefined1 auVar361 [16];
  undefined1 auVar362 [16];
  undefined1 auVar367 [16];
  undefined1 auVar368 [16];
  undefined1 auVar369 [16];
  undefined1 auVar370 [16];
  undefined1 auVar371 [16];
  undefined1 auVar372 [16];
  undefined1 auVar373 [16];
  undefined1 auVar374 [16];
  undefined1 auVar375 [16];
  undefined1 auVar376 [16];
  undefined1 auVar377 [16];
  undefined1 auVar378 [16];
  undefined1 auVar379 [16];
  undefined1 auVar380 [16];
  undefined1 auVar381 [16];
  undefined1 auVar382 [16];
  undefined1 auVar383 [16];
  undefined1 auVar384 [16];
  undefined1 auVar385 [16];
  undefined1 auVar386 [16];
  undefined1 auVar387 [16];
  undefined1 auVar388 [16];
  undefined1 auVar389 [16];
  undefined1 auVar390 [16];
  undefined1 auVar391 [16];
  undefined1 auVar392 [16];
  undefined1 auVar393 [16];
  undefined1 auVar394 [16];
  undefined1 auVar395 [16];
  undefined1 auVar396 [16];
  undefined1 auVar397 [16];
  undefined1 auVar398 [16];
  undefined1 auVar399 [16];
  undefined1 auVar400 [16];
  undefined1 auVar401 [16];
  undefined1 auVar402 [16];
  undefined1 auVar403 [16];
  undefined1 auVar404 [16];
  undefined1 auVar405 [16];
  undefined1 auVar406 [16];
  undefined1 auVar407 [16];
  undefined1 auVar408 [16];
  undefined1 auVar409 [16];
  undefined1 auVar410 [16];
  undefined1 auVar411 [16];
  undefined1 auVar412 [16];
  undefined1 auVar413 [16];
  undefined1 auVar414 [16];
  undefined1 auVar415 [16];
  undefined1 auVar416 [16];
  undefined1 auVar417 [16];
  undefined1 auVar418 [16];
  undefined1 auVar419 [16];
  undefined1 auVar420 [16];
  undefined1 auVar421 [16];
  undefined1 auVar422 [16];
  undefined1 auVar423 [16];
  undefined1 auVar424 [16];
  undefined1 auVar425 [16];
  undefined1 auVar426 [16];
  undefined1 auVar427 [16];
  undefined1 auVar428 [16];
  undefined1 auVar429 [16];
  undefined1 auVar430 [16];
  undefined1 auVar431 [16];
  undefined1 auVar432 [16];
  undefined1 auVar433 [16];
  undefined1 auVar434 [16];
  undefined1 auVar435 [32];
  undefined1 auVar436 [32];
  undefined1 auVar437 [32];
  undefined1 auVar438 [32];
  undefined1 auVar439 [32];
  undefined1 auVar363 [16];
  undefined1 auVar364 [16];
  undefined1 auVar365 [16];
  undefined1 auVar366 [16];
  undefined1 auVar440 [32];
  undefined1 auVar441 [32];
  undefined1 auVar442 [32];
  undefined1 auVar443 [32];
  undefined1 auVar444 [32];
  undefined1 auVar445 [32];
  undefined1 auVar446 [32];
  undefined1 auVar447 [32];
  undefined1 auVar448 [32];
  undefined1 auVar449 [32];
  undefined1 auVar450 [32];
  undefined1 auVar451 [32];
  undefined1 in_ZMM1 [64];
  undefined8 uVar452;
  undefined1 auVar453 [16];
  undefined1 auVar454 [16];
  undefined1 auVar455 [16];
  undefined1 auVar456 [16];
  undefined1 auVar457 [16];
  undefined1 auVar458 [16];
  undefined1 auVar459 [16];
  undefined1 auVar460 [16];
  undefined1 auVar461 [16];
  undefined1 auVar462 [16];
  undefined1 auVar463 [16];
  undefined1 auVar464 [16];
  undefined1 auVar465 [16];
  undefined1 auVar466 [16];
  undefined1 auVar467 [16];
  undefined1 auVar468 [16];
  undefined1 auVar469 [16];
  undefined1 auVar470 [16];
  undefined1 auVar471 [16];
  undefined1 auVar472 [16];
  undefined1 auVar473 [16];
  undefined1 auVar474 [32];
  undefined1 auVar475 [32];
  undefined1 auVar476 [32];
  undefined1 auVar477 [32];
  undefined1 auVar479 [32];
  undefined1 auVar480 [32];
  undefined1 auVar481 [32];
  undefined1 auVar482 [32];
  undefined1 auVar483 [32];
  undefined1 auVar485 [32];
  undefined1 auVar486 [32];
  double dVar487;
  undefined8 uVar488;
  undefined1 auVar489 [16];
  undefined1 auVar490 [16];
  undefined1 auVar491 [16];
  undefined1 auVar492 [16];
  undefined1 auVar493 [16];
  undefined1 auVar494 [16];
  undefined1 auVar495 [16];
  undefined1 auVar496 [16];
  undefined1 auVar497 [16];
  undefined1 auVar498 [16];
  undefined1 auVar499 [16];
  undefined1 auVar500 [16];
  undefined1 auVar501 [16];
  double dVar518;
  undefined1 auVar502 [32];
  double dVar517;
  double dVar519;
  undefined1 auVar503 [32];
  undefined1 auVar504 [32];
  undefined1 auVar505 [32];
  undefined1 auVar506 [32];
  undefined1 auVar507 [32];
  undefined1 auVar508 [32];
  undefined1 auVar509 [32];
  undefined1 auVar510 [32];
  undefined1 auVar511 [32];
  undefined1 auVar512 [32];
  undefined1 auVar513 [32];
  undefined1 auVar514 [32];
  undefined1 auVar515 [32];
  undefined1 auVar516 [32];
  double dVar520;
  undefined8 uVar521;
  undefined1 auVar522 [16];
  undefined1 auVar523 [16];
  undefined1 auVar524 [16];
  undefined1 auVar525 [16];
  undefined1 auVar526 [16];
  undefined1 auVar527 [16];
  undefined1 auVar528 [16];
  undefined1 auVar529 [16];
  undefined1 auVar530 [16];
  undefined1 auVar531 [16];
  undefined1 auVar532 [16];
  undefined1 auVar533 [32];
  double dVar544;
  double dVar546;
  undefined1 auVar534 [32];
  undefined1 auVar535 [32];
  undefined1 auVar536 [32];
  undefined1 auVar537 [32];
  undefined1 auVar538 [32];
  undefined1 auVar539 [32];
  undefined1 auVar540 [32];
  undefined1 auVar541 [32];
  undefined1 auVar542 [32];
  undefined1 auVar543 [32];
  double dVar545;
  undefined1 in_ZMM4 [64];
  uint uVar547;
  undefined8 uVar548;
  uint uVar561;
  undefined1 auVar549 [16];
  undefined1 auVar550 [16];
  undefined1 auVar551 [16];
  uint uVar563;
  uint uVar564;
  uint uVar565;
  undefined1 auVar552 [32];
  undefined1 auVar553 [32];
  undefined1 auVar554 [32];
  undefined1 auVar555 [32];
  undefined1 auVar556 [32];
  uint uVar560;
  uint uVar562;
  uint uVar566;
  undefined1 auVar557 [32];
  undefined1 auVar558 [32];
  undefined1 auVar559 [32];
  undefined1 auVar567 [16];
  undefined1 auVar568 [16];
  undefined1 in_ZMM6 [64];
  undefined1 auVar569 [16];
  undefined1 auVar570 [16];
  undefined1 auVar571 [32];
  undefined1 auVar572 [32];
  undefined1 in_ZMM7 [64];
  double dVar573;
  undefined1 auVar574 [16];
  undefined1 auVar575 [16];
  undefined1 auVar576 [16];
  undefined1 auVar577 [16];
  undefined1 auVar578 [16];
  undefined1 auVar579 [16];
  undefined1 auVar580 [16];
  undefined1 auVar581 [16];
  undefined1 auVar582 [16];
  double dVar591;
  double dVar593;
  undefined1 auVar583 [32];
  undefined1 auVar584 [32];
  undefined1 auVar585 [32];
  undefined1 auVar586 [32];
  undefined1 auVar587 [32];
  undefined1 auVar588 [32];
  undefined1 auVar589 [32];
  undefined1 auVar590 [32];
  double dVar592;
  undefined1 in_ZMM8 [64];
  double dVar594;
  double dVar595;
  undefined1 auVar596 [16];
  undefined1 auVar597 [16];
  undefined1 auVar598 [16];
  undefined1 auVar599 [16];
  double dVar610;
  double dVar611;
  double dVar613;
  double dVar614;
  double dVar615;
  undefined1 auVar600 [32];
  undefined1 auVar601 [32];
  undefined1 auVar602 [32];
  undefined1 auVar603 [32];
  undefined1 auVar604 [32];
  undefined1 auVar605 [32];
  undefined1 auVar606 [32];
  undefined1 auVar607 [32];
  undefined1 auVar608 [32];
  undefined1 auVar609 [32];
  double dVar612;
  undefined1 in_ZMM9 [64];
  undefined1 auVar616 [16];
  undefined1 auVar617 [16];
  undefined1 auVar618 [16];
  undefined1 auVar619 [16];
  undefined1 auVar620 [32];
  undefined1 auVar621 [32];
  undefined1 auVar622 [32];
  undefined1 auVar623 [32];
  undefined1 in_ZMM10 [64];
  undefined1 auVar624 [16];
  undefined1 auVar625 [16];
  undefined1 auVar626 [32];
  undefined1 auVar627 [32];
  undefined1 auVar628 [32];
  undefined1 auVar629 [32];
  undefined1 auVar630 [32];
  undefined1 auVar631 [32];
  undefined1 auVar632 [32];
  undefined1 auVar633 [64];
  undefined1 auVar634 [16];
  undefined1 auVar635 [32];
  undefined1 auVar636 [32];
  undefined1 auVar637 [32];
  undefined1 auVar638 [32];
  undefined1 auVar641 [16];
  undefined1 auVar642 [16];
  undefined1 auVar643 [16];
  double dVar639;
  double dVar640;
  undefined1 auVar644 [32];
  undefined1 auVar645 [32];
  undefined1 auVar646 [32];
  undefined1 auVar647 [32];
  double dVar657;
  double dVar658;
  double dVar660;
  double dVar661;
  double dVar662;
  undefined1 auVar648 [32];
  undefined1 auVar649 [32];
  undefined1 auVar650 [32];
  undefined1 auVar651 [32];
  undefined1 auVar652 [32];
  undefined1 auVar653 [32];
  undefined1 auVar654 [32];
  undefined1 auVar655 [32];
  double dVar659;
  undefined1 in_ZMM13 [64];
  undefined1 auVar656 [64];
  undefined1 auVar663 [32];
  undefined1 auVar664 [32];
  undefined1 auVar665 [32];
  undefined1 auVar666 [32];
  undefined1 auVar667 [32];
  undefined1 auVar668 [32];
  undefined1 auVar669 [32];
  undefined1 auVar670 [32];
  undefined1 auVar671 [32];
  undefined1 auVar672 [32];
  undefined1 auVar673 [32];
  undefined1 in_ZMM14 [64];
  undefined1 auVar674 [32];
  undefined1 auVar675 [32];
  undefined1 auVar676 [32];
  undefined1 auVar677 [32];
  undefined1 in_ZMM15 [64];
  undefined1 local_2500 [16];
  double dStack_24f0;
  double dStack_24e8;
  undefined1 local_24e0 [16];
  double dStack_24d0;
  double dStack_24c8;
  undefined1 local_24a0 [16];
  double dStack_2490;
  double dStack_2488;
  undefined8 local_2480;
  undefined8 uStack_2478;
  undefined1 local_2460 [16];
  double dStack_2450;
  double dStack_2448;
  double local_2100;
  double dStack_20f8;
  double dStack_20f0;
  double dStack_20e8;
  double local_2020;
  double dStack_2018;
  double dStack_2010;
  double dStack_2008;
  undefined8 local_2000;
  undefined8 uStack_1ff8;
  undefined8 uStack_1ff0;
  undefined8 uStack_1fe8;
  double local_1ea0;
  double dStack_1e98;
  double dStack_1e90;
  double dStack_1e88;
  double local_1e80 [24];
  undefined1 local_1dc0 [8];
  double adStack_1db8 [3];
  undefined1 local_1da0 [8];
  double adStack_1d98 [3];
  undefined1 local_1d80 [16];
  double dStack_1d70;
  double dStack_1d68;
  undefined1 local_1d60 [16];
  double dStack_1d50;
  double dStack_1d48;
  undefined1 local_1d40 [16];
  double dStack_1d30;
  double dStack_1d28;
  undefined1 local_1d20 [16];
  double dStack_1d10;
  double dStack_1d08;
  undefined1 local_1d00 [32];
  undefined1 local_1ce0 [32];
  undefined1 local_1cc0 [16];
  double dStack_1cb0;
  double dStack_1ca8;
  undefined1 local_1ca0 [16];
  double dStack_1c90;
  double dStack_1c88;
  undefined1 local_1c80 [16];
  double dStack_1c70;
  double dStack_1c68;
  undefined1 local_1c60 [16];
  double dStack_1c50;
  double dStack_1c48;
  undefined1 local_1c40;
  undefined1 uStack_1c3f;
  undefined1 uStack_1c3e;
  undefined1 uStack_1c3d;
  undefined1 uStack_1c3c;
  undefined1 uStack_1c3b;
  undefined1 uStack_1c3a;
  undefined1 uStack_1c39;
  double dStack_1c38;
  double dStack_1c30;
  double dStack_1c28;
  double local_1c20;
  double dStack_1c18;
  double dStack_1c10;
  double dStack_1c08;
  double local_1bc0;
  double dStack_1bb8;
  double dStack_1bb0;
  double dStack_1ba8;
  double local_1ba0;
  double dStack_1b98;
  double dStack_1b90;
  double dStack_1b88;
  double local_1b80;
  double dStack_1b78;
  double dStack_1b70;
  double dStack_1b68;
  double local_1b60;
  double dStack_1b58;
  double dStack_1b50;
  double dStack_1b48;
  double local_1b40;
  double dStack_1b38;
  double dStack_1b30;
  double dStack_1b28;
  double local_1b20;
  double dStack_1b18;
  double dStack_1b10;
  double dStack_1b08;
  double local_1ac0;
  double dStack_1ab8;
  double dStack_1ab0;
  double dStack_1aa8;
  double local_1aa0;
  double dStack_1a98;
  double dStack_1a90;
  double dStack_1a88;
  double local_1a80;
  double dStack_1a78;
  double dStack_1a70;
  double dStack_1a68;
  double local_1a60;
  double dStack_1a58;
  double dStack_1a50;
  double dStack_1a48;
  double local_1a40;
  double dStack_1a38;
  double dStack_1a30;
  double dStack_1a28;
  double local_1a20;
  double dStack_1a18;
  double dStack_1a10;
  double dStack_1a08;
  undefined1 local_19c0 [32];
  undefined1 local_19a0 [32];
  undefined1 local_1970 [16];
  undefined1 local_1960 [32];
  undefined1 local_1940 [32];
  undefined1 local_1920 [32];
  undefined1 local_1900 [32];
  undefined1 local_18e0 [32];
  undefined1 local_18c0 [32];
  undefined1 local_18a0 [32];
  undefined1 local_1880 [32];
  undefined1 local_1850 [16];
  undefined1 local_1840 [32];
  undefined1 local_1820 [32];
  undefined1 local_1800 [32];
  undefined1 local_17e0 [32];
  undefined1 local_17c0 [32];
  undefined1 local_17a0 [32];
  undefined1 local_1780 [32];
  undefined1 local_1760 [32];
  undefined1 local_1740 [32];
  undefined1 local_1720 [32];
  undefined1 local_1700 [32];
  undefined1 local_16e0 [32];
  undefined8 local_16c0;
  undefined1 local_1680 [32];
  undefined1 local_1660 [32];
  undefined1 local_1640 [32];
  undefined1 local_1620 [32];
  undefined1 local_1600 [32];
  undefined1 local_15e0 [32];
  undefined1 local_15c0 [32];
  undefined1 local_15a0 [32];
  undefined1 local_1580 [32];
  undefined1 local_1560 [32];
  undefined1 local_1540 [32];
  undefined1 local_1520 [32];
  undefined8 local_1500;
  undefined8 local_14c0;
  undefined8 local_14b8 [2];
  undefined8 local_14a8 [2];
  undefined8 local_1498;
  char local_1490 [8];
  undefined8 local_1488;
  undefined8 local_1480;
  undefined8 local_1478;
  undefined8 local_1470;
  undefined8 local_1468;
  undefined8 local_1460;
  undefined1 local_1458;
  undefined8 local_1450;
  undefined8 local_1448;
  undefined8 local_1440;
  undefined8 local_1438;
  undefined8 local_1430;
  undefined8 local_1428;
  undefined1 local_1420;
  undefined8 local_1418;
  undefined8 local_1410;
  undefined8 local_1408;
  undefined8 local_1400;
  undefined8 local_13f8;
  undefined8 local_13f0;
  undefined1 local_13e8;
  undefined8 local_13e0;
  undefined8 local_13d8;
  undefined8 local_13d0;
  undefined8 local_13c8;
  undefined8 local_13c0;
  undefined8 local_13b8;
  undefined1 local_13b0;
  undefined8 local_13a8;
  undefined8 local_13a0;
  undefined8 local_1398;
  undefined8 local_1390;
  undefined8 local_1388;
  undefined8 local_1380;
  undefined1 local_1378;
  undefined8 local_1370;
  undefined8 local_1368;
  undefined8 local_1360;
  undefined8 local_1358;
  undefined8 local_1350;
  undefined8 local_1348;
  undefined1 local_1340;
  undefined8 local_1338;
  undefined8 local_1330;
  undefined8 local_1328;
  undefined8 local_1320;
  undefined8 local_1318;
  undefined8 local_1310;
  undefined1 local_1308;
  undefined1 local_1300 [16];
  undefined8 local_12f0;
  undefined1 local_12e8 [16];
  undefined8 local_12d8;
  char local_12d0 [8];
  undefined1 local_12c8 [16];
  undefined8 local_12b8;
  undefined1 local_12b0 [16];
  undefined8 local_12a0;
  undefined1 local_1298;
  undefined1 local_1290 [16];
  undefined8 local_1280;
  undefined1 local_1278 [16];
  undefined8 local_1268;
  undefined1 local_1260;
  undefined1 local_1258 [16];
  undefined8 local_1248;
  undefined1 local_1240 [16];
  undefined8 local_1230;
  undefined1 local_1228;
  undefined1 local_1220 [16];
  undefined8 local_1210;
  undefined1 local_1208 [16];
  double local_11f8;
  undefined1 local_11f0 [8];
  undefined1 local_11e8 [16];
  double local_11d8;
  undefined1 local_11d0 [16];
  double local_11c0;
  undefined1 local_11b8 [8];
  undefined1 local_11b0 [16];
  double local_11a0;
  undefined1 local_1198 [16];
  double local_1188;
  undefined1 local_1180 [8];
  undefined1 local_1178 [16];
  double local_1168;
  undefined1 local_1160 [16];
  double local_1150;
  undefined1 local_1148 [8];
  undefined1 local_1140 [16];
  undefined1 local_1130 [16];
  undefined1 local_1120 [16];
  undefined1 local_1110 [16];
  undefined1 local_1100 [16];
  undefined1 local_10f0 [16];
  undefined1 local_10e0 [16];
  undefined1 local_10d0 [16];
  undefined1 local_10c0 [16];
  undefined1 local_10b0 [16];
  undefined1 local_10a0 [16];
  undefined1 local_1090 [16];
  undefined1 local_1080 [16];
  undefined1 local_1070 [16];
  undefined1 local_1060 [16];
  undefined1 local_1050 [16];
  undefined1 local_1040 [16];
  undefined1 local_1030 [16];
  undefined1 local_1020 [16];
  undefined1 local_1010 [16];
  undefined1 local_1000 [16];
  undefined1 local_ff0 [16];
  undefined1 local_fe0 [16];
  undefined1 local_fd0 [16];
  undefined1 local_fc0 [16];
  undefined1 local_fb0 [16];
  undefined1 local_fa0 [16];
  undefined1 local_f90 [16];
  undefined1 local_f80 [16];
  undefined1 local_f70 [16];
  undefined1 local_f60 [16];
  undefined1 local_f50 [16];
  undefined1 local_f40 [16];
  undefined1 local_f30 [16];
  undefined1 local_f20 [16];
  undefined1 local_f10 [16];
  undefined1 local_f00 [16];
  undefined1 local_ef0 [16];
  undefined1 local_ee0 [16];
  undefined1 local_ed0 [16];
  undefined1 local_ec0 [16];
  undefined1 local_eb0 [16];
  undefined1 local_ea0 [16];
  undefined1 local_e90 [16];
  undefined1 local_e80 [16];
  undefined1 local_e70 [16];
  undefined1 local_e60 [16];
  undefined1 local_e50 [16];
  undefined1 local_e40 [16];
  undefined1 local_e30 [16];
  undefined1 local_e20 [16];
  undefined1 local_e10 [16];
  undefined1 local_e00 [16];
  undefined1 local_df0 [16];
  undefined1 local_de0 [16];
  undefined1 local_dd0 [16];
  undefined1 local_dc0 [16];
  undefined1 local_db0 [16];
  undefined1 local_da0 [16];
  undefined1 local_d90 [16];
  undefined1 local_d80 [16];
  undefined1 local_d70 [16];
  undefined1 local_d60 [16];
  undefined1 local_d50 [16];
  undefined1 local_d40 [16];
  undefined1 local_d30 [16];
  undefined1 local_d20 [16];
  undefined1 local_d10 [16];
  undefined1 local_d00 [16];
  undefined1 local_cf0 [16];
  undefined1 local_ce0 [16];
  undefined1 local_cd0 [16];
  undefined1 local_cc0 [16];
  undefined1 local_cb0 [16];
  undefined1 local_ca0 [16];
  undefined1 local_c90 [16];
  undefined1 local_c80 [16];
  undefined1 local_c70 [16];
  undefined1 local_c60 [16];
  undefined1 local_c50 [16];
  undefined1 local_c40 [16];
  undefined1 local_c30 [16];
  undefined1 local_c20 [16];
  undefined1 local_c10 [16];
  undefined1 local_c00 [16];
  undefined1 local_bf0 [16];
  undefined1 local_be0 [16];
  undefined1 local_bd0 [16];
  undefined1 local_bc0 [16];
  undefined1 local_bb0 [16];
  undefined1 local_ba0 [16];
  undefined1 local_b90 [16];
  undefined1 local_b80 [16];
  undefined1 local_b70 [16];
  undefined1 local_b60 [16];
  undefined1 local_b50 [16];
  undefined1 local_b40 [16];
  undefined1 local_b30 [16];
  undefined1 local_b20 [16];
  undefined1 local_b10 [16];
  undefined1 local_b00 [16];
  undefined1 local_af0 [16];
  undefined1 local_ae0 [16];
  undefined1 local_ad0 [16];
  undefined1 local_ac0 [16];
  undefined1 local_ab0 [16];
  undefined1 local_aa0 [16];
  undefined1 local_a90 [16];
  undefined1 local_a80 [16];
  undefined1 local_a70 [16];
  undefined1 local_a60 [16];
  undefined1 local_a50 [16];
  undefined1 local_a40 [16];
  undefined1 local_a30 [16];
  undefined1 local_a20 [16];
  undefined1 local_a10 [16];
  undefined1 local_a00 [16];
  undefined1 local_9f0 [16];
  undefined1 local_9e0 [16];
  undefined1 local_9d0 [16];
  undefined1 local_9c0 [16];
  undefined1 local_9b0 [16];
  undefined1 local_9a0 [16];
  undefined1 local_990 [16];
  undefined1 local_980 [16];
  undefined1 local_970 [16];
  undefined1 local_960 [16];
  undefined1 local_950 [16];
  undefined1 local_940 [16];
  undefined1 local_930 [16];
  undefined1 local_920 [16];
  undefined1 local_910 [16];
  undefined1 local_900 [16];
  undefined1 local_8f0 [16];
  undefined1 local_8e0 [16];
  undefined1 local_8d0 [16];
  undefined1 local_8c0 [16];
  undefined1 local_8b0 [16];
  undefined1 local_8a0 [16];
  undefined1 local_890 [16];
  undefined1 local_880 [16];
  undefined1 local_870 [16];
  undefined1 local_860 [16];
  undefined1 local_850 [16];
  undefined1 local_840 [16];
  undefined1 local_830 [16];
  undefined1 local_820 [16];
  undefined1 local_810 [16];
  undefined1 local_800 [16];
  undefined1 local_7f0 [16];
  undefined1 local_7e0 [16];
  undefined1 local_7d0 [16];
  undefined1 local_7c0 [16];
  undefined1 local_7b0 [16];
  undefined1 local_7a0 [16];
  undefined1 local_790 [16];
  undefined1 local_780 [16];
  undefined1 local_770 [16];
  undefined1 local_760 [16];
  undefined1 local_750 [16];
  undefined1 local_740 [16];
  undefined1 local_730 [16];
  undefined1 local_720 [16];
  undefined1 local_710 [16];
  undefined1 local_700 [16];
  undefined1 local_6f0 [16];
  undefined1 local_6e0 [16];
  undefined1 local_6d0 [16];
  undefined1 local_6c0 [16];
  undefined1 local_6b0 [16];
  undefined1 local_6a0 [16];
  undefined1 local_690 [16];
  undefined1 local_680 [16];
  undefined1 local_670 [16];
  undefined1 local_660 [16];
  undefined1 local_650 [16];
  undefined1 local_640 [16];
  undefined1 local_630 [16];
  undefined1 local_620 [16];
  undefined1 local_610 [16];
  undefined1 local_600 [16];
  undefined1 local_5f0 [16];
  undefined1 local_5e0 [16];
  undefined1 local_5d0 [16];
  undefined1 local_5c0 [16];
  undefined1 local_5b0 [16];
  undefined1 local_5a0 [16];
  undefined1 local_590 [16];
  undefined1 local_580 [16];
  undefined1 local_570 [16];
  undefined1 local_560 [16];
  undefined1 local_550 [16];
  undefined1 local_540 [16];
  undefined1 local_530 [16];
  undefined1 local_520 [16];
  undefined1 local_510 [16];
  undefined1 local_500 [16];
  undefined1 local_4f0 [16];
  undefined1 local_4e0 [16];
  undefined1 local_4d0 [16];
  undefined1 local_4c0 [16];
  undefined1 local_4b0 [16];
  undefined1 local_4a0 [16];
  undefined1 local_490 [16];
  undefined1 local_480 [16];
  undefined1 local_470 [16];
  undefined1 local_460 [16];
  undefined1 local_450 [16];
  undefined1 local_440 [16];
  undefined1 local_430 [16];
  undefined1 local_420 [16];
  undefined1 local_410 [16];
  undefined1 local_400 [16];
  undefined1 local_3f0 [16];
  undefined1 local_3e0 [16];
  undefined1 local_3d0 [16];
  undefined1 local_3c0 [16];
  undefined1 local_3b0 [16];
  undefined1 local_3a0 [16];
  undefined1 local_390 [16];
  undefined1 local_380 [16];
  undefined1 local_370 [16];
  undefined1 local_360 [16];
  undefined1 local_350 [16];
  undefined1 local_340 [16];
  undefined1 local_330 [16];
  undefined1 local_320 [16];
  undefined1 local_310 [16];
  undefined1 local_300 [16];
  undefined1 local_2f0 [16];
  undefined1 local_2e0 [16];
  undefined1 local_2d0 [16];
  undefined1 local_2c0 [16];
  undefined1 local_2b0 [16];
  undefined1 local_2a0 [16];
  undefined1 local_290 [16];
  undefined1 local_280 [16];
  undefined1 local_270 [16];
  undefined1 local_260 [16];
  undefined1 local_250 [16];
  undefined1 local_240 [16];
  undefined1 local_230 [16];
  undefined1 local_220 [16];
  undefined1 local_210 [16];
  undefined1 local_200 [16];
  undefined1 local_1f0 [16];
  undefined1 local_1e0 [16];
  undefined1 local_1d0 [16];
  undefined1 local_1c0 [16];
  undefined1 local_1b0 [16];
  undefined1 local_1a0 [16];
  undefined1 local_190 [16];
  undefined1 local_180 [16];
  undefined1 local_170 [16];
  undefined1 local_160 [16];
  undefined1 local_150 [16];
  undefined1 local_120 [32];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 uStack_48;
  undefined1 auVar478 [32];
  undefined1 auVar484 [32];
  
  uVar28 = (undefined4)((ulonglong)unaff_R12 >> 0x20);
  local_d8 = in_ZMM7._0_16_;
  uStack_48 = 0x140a64476;
  local_58 = in_ZMM15._0_16_;
  local_68 = in_ZMM14._0_16_;
  local_78 = in_ZMM13._0_16_;
  local_a8 = in_ZMM10._0_16_;
  local_b8 = in_ZMM9._0_16_;
  local_c8 = in_ZMM8._0_16_;
  local_e8 = in_ZMM6._0_16_;
  local_1920._0_8_ = param_1;
  local_120 = *param_7;
  auVar321 = vpcmpeqd_avx(in_ZMM1._0_16_,in_ZMM1._0_16_);
  auVar461 = vpcmpgtd_avx(*(undefined1 (*) [16])(*param_7 + 0x10),auVar321);
  auVar321 = vpcmpgtd_avx(local_120._0_16_,auVar321);
  auVar321 = vpor_avx(auVar321,auVar461);
  uVar56 = param_6 + 7;
  if (-1 < (int)param_6) {
    uVar56 = param_6;
  }
  uVar56 = uVar56 & 0xfffffff8;
  if ((((SUB161(auVar321 >> 0x1f,0) & 1) == 0 && (SUB161(auVar321 >> 0x3f,0) & 1) == 0) &&
      (SUB161(auVar321 >> 0x5f,0) & 1) == 0) && -1 < auVar321[0xf]) {
    auVar321 = ZEXT816(0);
    auVar633 = ZEXT1664(auVar321);
    local_1700 = ZEXT1632(auVar321);
    local_1780 = ZEXT1632(auVar321);
    local_1840 = ZEXT1632(auVar321);
    local_16c0 = 0;
    uVar59 = 0;
    local_1820 = local_1840;
    local_1800 = local_1840;
    local_17e0 = local_1840;
    local_17c0 = local_1840;
    local_17a0 = local_1840;
    local_1760 = local_1780;
    local_1740 = local_1780;
    local_1720 = local_1780;
    local_16e0 = local_1700;
    lVar62 = param_1;
    if (0 < (int)uVar56) {
      auVar656 = ZEXT1664(ZEXT816(0));
      uVar59 = 0;
      do {
        auVar442 = local_19a0;
        auVar80 = vpshufd_avx(ZEXT416(uVar59),0);
        auVar321 = vpslld_avx(auVar80,3);
        auVar321 = vpsubd_avx(auVar321,auVar80);
        uVar26 = (ulonglong)auVar321._0_4_;
        uVar31 = (ulonglong)auVar321._4_4_;
        uVar49 = (ulonglong)auVar321._8_4_;
        uVar61 = (ulonglong)auVar321._12_4_;
        auVar321 = vpinsrb_avx(ZEXT116(*(byte *)(param_3 + 0x30 + uVar26 * 8)),
                               (uint)*(byte *)(param_3 + 0x68 + uVar31 * 8),1);
        auVar321 = vpinsrb_avx(auVar321,(uint)*(byte *)(param_3 + 0xa0 + uVar49 * 8),2);
        auVar321 = vpinsrb_avx(auVar321,(uint)*(byte *)(param_3 + 0xd8 + uVar61 * 8),3);
        auVar321 = vpinsrb_avx(auVar321,(uint)*(byte *)(param_3 + 0x110 + uVar26 * 8),4);
        auVar321 = vpinsrb_avx(auVar321,(uint)*(byte *)(param_3 + 0x148 + uVar31 * 8),5);
        auVar321 = vpinsrb_avx(auVar321,(uint)*(byte *)(param_3 + 0x180 + uVar49 * 8),6);
        auVar464 = vpinsrb_avx(auVar321,(uint)*(byte *)(param_3 + 0x1b8 + uVar61 * 8),7);
        auVar465 = vpcmpeqd_avx(in_ZMM4._0_16_,in_ZMM4._0_16_);
        in_ZMM4 = ZEXT1664(auVar465);
        auVar321 = vpcmpeqd_avx(auVar465,*(undefined1 (*) [16])
                                          (local_1920._0_8_ + 0x10 + (ulonglong)(uVar59 * 4)));
        auVar461 = vpcmpeqd_avx(auVar465,*(undefined1 (*) [16])
                                          (local_1920._0_8_ + (ulonglong)(uVar59 * 4)));
        auVar321 = vpackssdw_avx(auVar461,auVar321);
        auVar192 = auVar656._0_16_;
        auVar461 = vpcmpeqb_avx(auVar192,auVar464);
        auVar461 = vpmovsxbw_avx(auVar461 ^ auVar465);
        local_1850 = vpandn_avx(auVar321,auVar461);
        if ((((((((((((((((SUB161(local_1850 >> 7,0) & 1) != 0 ||
                         (SUB161(local_1850 >> 0xf,0) & 1) != 0) ||
                        (SUB161(local_1850 >> 0x17,0) & 1) != 0) ||
                       (SUB161(local_1850 >> 0x1f,0) & 1) != 0) ||
                      (SUB161(local_1850 >> 0x27,0) & 1) != 0) ||
                     (SUB161(local_1850 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(local_1850 >> 0x37,0) & 1) != 0) ||
                   (SUB161(local_1850 >> 0x3f,0) & 1) != 0) ||
                  (SUB161(local_1850 >> 0x47,0) & 1) != 0) ||
                 (SUB161(local_1850 >> 0x4f,0) & 1) != 0) || (SUB161(local_1850 >> 0x57,0) & 1) != 0
                ) || (SUB161(local_1850 >> 0x5f,0) & 1) != 0) ||
              (SUB161(local_1850 >> 0x67,0) & 1) != 0) || (SUB161(local_1850 >> 0x6f,0) & 1) != 0)
            || (SUB161(local_1850 >> 0x77,0) & 1) != 0) || local_1850[0xf] < '\0') {
          auVar321._8_8_ = 0;
          auVar321._0_8_ = *(ulonglong *)(param_3 + 0x150 + uVar49 * 8);
          auVar321 = vmovhps_avx(auVar321,*(undefined8 *)(param_3 + 0x188 + uVar61 * 8));
          auVar461._8_8_ = 0;
          auVar461._0_8_ = *(ulonglong *)(param_3 + 0xe0 + uVar26 * 8);
          auVar461 = vmovhps_avx(auVar461,*(undefined8 *)(param_3 + 0x118 + uVar31 * 8));
          auVar284._16_16_ = auVar321;
          auVar284._0_16_ = auVar461;
          auVar465._8_8_ = 0;
          auVar465._0_8_ = *(ulonglong *)(param_3 + 0x70 + uVar49 * 8);
          auVar499._8_8_ = 0;
          auVar499._0_8_ = *(ulonglong *)(param_3 + 0x78 + uVar49 * 8);
          auVar526._8_8_ = 0;
          auVar526._0_8_ = *(ulonglong *)(param_3 + 0x80 + uVar49 * 8);
          auVar188._8_8_ = 0;
          auVar188._0_8_ = *(ulonglong *)(param_3 + 0x88 + uVar49 * 8);
          auVar465 = vmovhps_avx(auVar465,*(undefined8 *)(param_3 + 0xa8 + uVar61 * 8));
          auVar464._8_8_ = 0;
          auVar464._0_8_ = *(ulonglong *)(param_3 + uVar26 * 8);
          auVar568._8_8_ = 0;
          auVar568._0_8_ = *(ulonglong *)(param_3 + 8 + uVar26 * 8);
          auVar464 = vmovhps_avx(auVar464,*(undefined8 *)(param_3 + 0x38 + uVar31 * 8));
          auVar570._8_8_ = 0;
          auVar570._0_8_ = *(ulonglong *)(param_3 + 0x10 + uVar26 * 8);
          auVar580._8_8_ = 0;
          auVar580._0_8_ = *(ulonglong *)(param_3 + 0x158 + uVar49 * 8);
          auVar580 = vmovhps_avx(auVar580,*(undefined8 *)(param_3 + 400 + uVar61 * 8));
          auVar598._8_8_ = 0;
          auVar598._0_8_ = *(ulonglong *)(param_3 + 0x18 + uVar26 * 8);
          auVar617._8_8_ = 0;
          auVar617._0_8_ = *(ulonglong *)(param_3 + 0xe8 + uVar26 * 8);
          auVar617 = vmovhps_avx(auVar617,*(undefined8 *)(param_3 + 0x120 + uVar31 * 8));
          auVar499 = vmovhps_avx(auVar499,*(undefined8 *)(param_3 + 0xb0 + uVar61 * 8));
          auVar568 = vmovhps_avx(auVar568,*(undefined8 *)(param_3 + 0x40 + uVar31 * 8));
          auVar480._16_16_ = auVar465;
          auVar480._0_16_ = auVar464;
          auVar467._8_8_ = 0;
          auVar467._0_8_ = *(ulonglong *)(param_3 + 0x160 + uVar49 * 8);
          auVar467 = vmovhps_avx(auVar467,*(undefined8 *)(param_3 + 0x198 + uVar61 * 8));
          auVar558._16_16_ = auVar580;
          auVar558._0_16_ = auVar617;
          auVar551._8_8_ = 0;
          auVar551._0_8_ = *(ulonglong *)(param_3 + 0xf0 + uVar26 * 8);
          auVar468 = vmovhps_avx(auVar551,*(undefined8 *)(param_3 + 0x128 + uVar31 * 8));
          auVar190 = vmovhps_avx(auVar526,*(undefined8 *)(param_3 + 0xb8 + uVar61 * 8));
          auVar189 = vmovhps_avx(auVar570,*(undefined8 *)(param_3 + 0x48 + uVar31 * 8));
          auVar507._16_16_ = auVar499;
          auVar507._0_16_ = auVar568;
          auVar500._8_8_ = 0;
          auVar500._0_8_ = *(ulonglong *)(param_3 + 0x168 + uVar49 * 8);
          auVar191 = vmovhps_avx(auVar500,*(undefined8 *)(param_3 + 0x1a0 + uVar61 * 8));
          local_1880._16_16_ = auVar467;
          local_1880._0_16_ = auVar468;
          auVar468._8_8_ = 0;
          auVar468._0_8_ = *(ulonglong *)(param_3 + 0xf8 + uVar26 * 8);
          auVar467 = vmovhps_avx(auVar468,*(undefined8 *)(param_3 + 0x130 + uVar31 * 8));
          auVar468 = vmovhps_avx(auVar188,*(undefined8 *)(param_3 + 0xc0 + uVar61 * 8));
          auVar188 = vmovhps_avx(auVar598,*(undefined8 *)(param_3 + 0x50 + uVar31 * 8));
          local_18a0._16_16_ = auVar190;
          local_18a0._0_16_ = auVar189;
          auVar527._8_8_ = 0;
          auVar527._0_8_ = *(ulonglong *)(param_3 + 0x170 + uVar49 * 8);
          auVar190 = vmovhps_avx(auVar527,*(undefined8 *)(param_3 + 0x1a8 + uVar61 * 8));
          local_18c0._16_16_ = auVar191;
          local_18c0._0_16_ = auVar467;
          auVar469._8_8_ = 0;
          auVar469._0_8_ = *(ulonglong *)(param_3 + 0x100 + uVar26 * 8);
          auVar467 = vmovhps_avx(auVar469,*(undefined8 *)(param_3 + 0x138 + uVar31 * 8));
          auVar285._16_16_ = auVar468;
          auVar285._0_16_ = auVar188;
          auVar189._8_8_ = 0;
          auVar189._0_8_ = *(ulonglong *)(param_3 + 0x90 + uVar49 * 8);
          auVar189 = vmovhps_avx(auVar189,*(undefined8 *)(param_3 + 200 + uVar61 * 8));
          local_18e0._16_16_ = auVar190;
          local_18e0._0_16_ = auVar467;
          auVar470._8_8_ = 0;
          auVar470._0_8_ = *(ulonglong *)(param_3 + 0x20 + uVar26 * 8);
          auVar467 = vmovhps_avx(auVar470,*(undefined8 *)(param_3 + 0x58 + uVar31 * 8));
          auVar286._16_16_ = auVar189;
          auVar286._0_16_ = auVar467;
          auVar190._8_8_ = 0;
          auVar190._0_8_ = *(ulonglong *)(param_3 + 0x178 + uVar49 * 8);
          auVar190 = vmovhps_avx(auVar190,*(undefined8 *)(param_3 + 0x1b0 + uVar61 * 8));
          auVar471._8_8_ = 0;
          auVar471._0_8_ = *(ulonglong *)(param_3 + 0x108 + uVar26 * 8);
          auVar191 = vmovhps_avx(auVar471,*(undefined8 *)(param_3 + 0x140 + uVar31 * 8));
          local_1900._16_16_ = auVar190;
          local_1900._0_16_ = auVar191;
          auVar191._8_8_ = 0;
          auVar191._0_8_ = *(ulonglong *)(param_3 + 0x98 + uVar49 * 8);
          auVar190 = vmovhps_avx(auVar191,*(undefined8 *)(param_3 + 0xd0 + uVar61 * 8));
          auVar472._8_8_ = 0;
          auVar472._0_8_ = *(ulonglong *)(param_3 + 0x28 + uVar26 * 8);
          auVar191 = vmovhps_avx(auVar472,*(undefined8 *)(param_3 + 0x60 + uVar31 * 8));
          local_19c0._16_16_ = auVar190;
          local_19c0._0_16_ = auVar191;
          auVar191 = vpmovsxwd_avx(local_1850);
          auVar469 = vpunpckhwd_avx(local_1850,local_1850);
          auVar537._16_16_ = auVar469;
          auVar537._0_16_ = auVar191;
          auVar190 = vpacksswb_avx(local_1850,local_1850);
          local_19a0._2_2_ = 0;
          local_19a0._0_2_ =
               (ushort)(SUB161(auVar190 >> 7,0) & 1) | (ushort)(SUB161(auVar190 >> 0xf,0) & 1) << 1
               | (ushort)(SUB161(auVar190 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar190 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar190 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar190 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar190 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar190 >> 0x3f,0) & 1) << 7;
          local_19a0._4_28_ = auVar442._4_28_;
          auVar327 = vpslld_avx(auVar80,7);
          auVar80 = vpslld_avx(auVar80,7);
          auVar190 = vpunpckhdq_avx(auVar80,auVar192);
          auVar80 = vpmovzxdq_avx(auVar80);
          auVar287._16_16_ = auVar190;
          auVar287._0_16_ = auVar80;
          auVar192 = vpunpckhdq_avx(auVar327,auVar192);
          auVar80 = vpmovzxdq_avx(auVar327);
          auVar442._16_16_ = auVar192;
          auVar442._0_16_ = auVar80;
          auVar80 = vshufps_avx(auVar191,auVar191,0x50);
          auVar192 = vshufps_avx(auVar191,auVar191,0xfa);
          auVar508._16_16_ = auVar192;
          auVar508._0_16_ = auVar80;
          auVar293 = auVar633._0_32_;
          auVar442 = vblendvps_avx(auVar293,auVar442,auVar508);
          auVar289 = vblendvps_avx(auVar293,
                                   ___ymm_0000000000000180000000000000010000000000000000800000000000000000
                                   ,auVar508);
          lVar62 = vmovlps_avx(auVar289._0_16_);
          auVar80 = vshufps_avx(auVar469,auVar469,0x50);
          auVar192 = vshufps_avx(auVar469,auVar469,0xfa);
          local_1940 = ZEXT1632(auVar80);
          local_1960._0_16_ = auVar192;
          auVar538._16_16_ = auVar192;
          auVar538._0_16_ = auVar80;
          auVar287 = vblendvps_avx(auVar293,auVar287,auVar538);
          auVar651 = vblendvps_avx(auVar293,
                                   ___ymm_0000000000000380000000000000030000000000000002800000000000000200
                                   ,auVar538);
          auVar539 = vblendvps_avx(auVar293,
                                   ___ymm_0000000000000188000000000000010800000000000000880000000000000008
                                   ,auVar508);
          auVar481 = vblendvps_avx(auVar293,
                                   ___ymm_0000000000000388000000000000030800000000000002880000000000000208
                                   ,auVar538);
          lVar30 = vmovlps_avx(auVar481._0_16_);
          auVar288 = vblendvps_avx(auVar293,
                                   ___ymm_0000000000000190000000000000011000000000000000900000000000000010
                                   ,auVar508);
          lVar51 = vmovlps_avx(auVar288._0_16_);
          auVar443 = vblendvps_avx(auVar293,
                                   ___ymm_0000000000000390000000000000031000000000000002900000000000000210
                                   ,auVar538);
          lVar54 = vmovlps_avx(auVar443._0_16_);
          auVar509 = vblendvps_avx(auVar293,
                                   ___ymm_0000000000000198000000000000011800000000000000980000000000000018
                                   ,auVar508);
          auVar559 = vblendvps_avx(auVar293,
                                   ___ymm_0000000000000398000000000000031800000000000002980000000000000218
                                   ,auVar538);
          lVar57 = vmovlps_avx(auVar559._0_16_);
          auVar588 = vblendvps_avx(auVar293,
                                   ___ymm_00000000000001a0000000000000012000000000000000a00000000000000020
                                   ,auVar508);
          lVar60 = vmovlps_avx(auVar588._0_16_);
          auVar589 = vblendvps_avx(auVar293,
                                   ___ymm_00000000000003a0000000000000032000000000000002a00000000000000220
                                   ,auVar538);
          lVar73 = vmovlps_avx(auVar589._0_16_);
          auVar605 = vblendvps_avx(auVar293,
                                   ___ymm_00000000000001a8000000000000012800000000000000a80000000000000028
                                   ,auVar508);
          auVar606 = vblendvps_avx(auVar293,
                                   ___ymm_00000000000003a8000000000000032800000000000002a80000000000000228
                                   ,auVar538);
          lVar1 = vmovlps_avx(auVar606._0_16_);
          auVar622 = vblendvps_avx(auVar293,
                                   ___ymm_00000000000001b0000000000000013000000000000000b00000000000000030
                                   ,auVar508);
          lVar2 = vmovlps_avx(auVar622._0_16_);
          auVar629 = vblendvps_avx(auVar293,
                                   ___ymm_00000000000003b0000000000000033000000000000002b00000000000000230
                                   ,auVar538);
          lVar3 = vmovlps_avx(auVar629._0_16_);
          auVar630 = vblendvps_avx(auVar293,
                                   ___ymm_00000000000001b8000000000000013800000000000000b80000000000000038
                                   ,auVar508);
          auVar649 = vblendvps_avx(auVar293,
                                   ___ymm_00000000000003b8000000000000033800000000000002b80000000000000238
                                   ,auVar538);
          lVar4 = vmovlps_avx(auVar649._0_16_);
          auVar650 = vblendvps_avx(auVar293,
                                   ___ymm_00000000000001c0000000000000014000000000000000c00000000000000040
                                   ,auVar508);
          lVar5 = vmovlps_avx(auVar650._0_16_);
          auVar667 = vblendvps_avx(auVar293,
                                   ___ymm_00000000000003c0000000000000034000000000000002c00000000000000240
                                   ,auVar538);
          lVar6 = vmovlps_avx(auVar667._0_16_);
          auVar676 = vblendvps_avx(auVar293,
                                   ___ymm_00000000000001c8000000000000014800000000000000c80000000000000048
                                   ,auVar508);
          auVar444 = vblendvps_avx(auVar293,
                                   ___ymm_00000000000003c8000000000000034800000000000002c80000000000000248
                                   ,auVar538);
          lVar7 = vmovlps_avx(auVar444._0_16_);
          auVar668 = vblendvps_avx(auVar293,
                                   ___ymm_00000000000001d0000000000000015000000000000000d00000000000000050
                                   ,auVar508);
          lVar8 = vmovlps_avx(auVar668._0_16_);
          auVar623 = vblendvps_avx(auVar293,
                                   ___ymm_00000000000003d0000000000000035000000000000002d00000000000000250
                                   ,auVar538);
          lVar9 = vmovlps_avx(auVar623._0_16_);
          auVar445 = vblendvps_avx(auVar293,
                                   ___ymm_00000000000001d8000000000000015800000000000000d80000000000000058
                                   ,auVar508);
          auVar482 = vblendvps_avx(auVar293,
                                   ___ymm_00000000000003d8000000000000035800000000000002d80000000000000258
                                   ,auVar538);
          lVar10 = vmovlps_avx(auVar482._0_16_);
          auVar669 = vblendvps_avx(auVar293,
                                   ___ymm_00000000000001e0000000000000016000000000000000e00000000000000060
                                   ,auVar508);
          lVar11 = vmovlps_avx(auVar669._0_16_);
          auVar290 = vblendvps_avx(auVar293,
                                   ___ymm_00000000000003e0000000000000036000000000000002e00000000000000260
                                   ,auVar538);
          lVar12 = vmovlps_avx(auVar290._0_16_);
          auVar483 = vblendvps_avx(auVar293,
                                   ___ymm_00000000000001e8000000000000016800000000000000e80000000000000068
                                   ,auVar508);
          auVar510 = vblendvps_avx(auVar293,
                                   ___ymm_00000000000003e8000000000000036800000000000002e80000000000000268
                                   ,auVar538);
          lVar13 = vmovlps_avx(auVar510._0_16_);
          auVar291 = vblendvps_avx(auVar293,
                                   ___ymm_00000000000001f0000000000000017000000000000000f00000000000000070
                                   ,auVar508);
          lVar14 = vmovlps_avx(auVar291._0_16_);
          auVar292 = vblendvps_avx(auVar293,
                                   ___ymm_00000000000003f0000000000000037000000000000002f00000000000000270
                                   ,auVar538);
          lVar15 = vmovlps_avx(auVar292._0_16_);
          auVar508 = vblendvps_avx(auVar293,
                                   ___ymm_00000000000001f8000000000000017800000000000000f80000000000000078
                                   ,auVar508);
          lVar69 = auVar287._16_8_ + param_2;
          lVar29 = auVar287._24_8_ + param_2;
          auVar80._8_8_ = 0;
          auVar80._0_8_ = *(ulonglong *)(auVar651._16_8_ + lVar69);
          local_510 = vmovhps_avx(auVar80,*(undefined8 *)(auVar651._24_8_ + lVar29));
          lVar55 = auVar287._0_8_ + param_2;
          lVar50 = auVar287._8_8_ + param_2;
          auVar192._8_8_ = 0;
          auVar192._0_8_ = *(ulonglong *)(auVar651._0_8_ + lVar55);
          local_520 = vmovhps_avx(auVar192,*(undefined8 *)(auVar651._8_8_ + lVar50));
          lVar63 = auVar442._0_8_ + param_2;
          auVar287 = vblendvps_avx(auVar293,
                                   ___ymm_00000000000003f8000000000000037800000000000002f80000000000000278
                                   ,auVar538);
          lVar16 = vmovlps_avx(auVar287._0_16_);
          auVar327._8_8_ = 0;
          auVar327._0_8_ = *(ulonglong *)(lVar62 + lVar63);
          lVar65 = auVar442._8_8_ + param_2;
          local_540 = vmovhps_avx(auVar327,*(undefined8 *)(auVar289._8_8_ + lVar65));
          lVar62 = auVar442._16_8_ + param_2;
          lVar68 = auVar442._24_8_ + param_2;
          auVar367._8_8_ = 0;
          auVar367._0_8_ = *(ulonglong *)(auVar289._16_8_ + lVar62);
          local_530 = vmovhps_avx(auVar367,*(undefined8 *)(auVar289._24_8_ + lVar68));
          auVar368._8_8_ = 0;
          auVar368._0_8_ = *(ulonglong *)(auVar539._0_8_ + lVar63);
          local_500 = vmovhps_avx(auVar368,*(undefined8 *)(auVar539._8_8_ + lVar65));
          auVar193._8_8_ = 0;
          auVar193._0_8_ = *(ulonglong *)(auVar481._16_8_ + lVar69);
          local_4d0 = vmovhps_avx(auVar193,*(undefined8 *)(auVar481._24_8_ + lVar29));
          auVar194._8_8_ = 0;
          auVar194._0_8_ = *(ulonglong *)(lVar30 + lVar55);
          local_4e0 = vmovhps_avx(auVar194,*(undefined8 *)(auVar481._8_8_ + lVar50));
          auVar195._8_8_ = 0;
          auVar195._0_8_ = *(ulonglong *)(auVar539._16_8_ + lVar62);
          local_4f0 = vmovhps_avx(auVar195,*(undefined8 *)(auVar539._24_8_ + lVar68));
          auVar196._8_8_ = 0;
          auVar196._0_8_ = *(ulonglong *)(lVar51 + lVar63);
          local_4c0 = vmovhps_avx(auVar196,*(undefined8 *)(auVar288._8_8_ + lVar65));
          auVar369._8_8_ = 0;
          auVar369._0_8_ = *(ulonglong *)(auVar443._16_8_ + lVar69);
          local_490 = vmovhps_avx(auVar369,*(undefined8 *)(auVar443._24_8_ + lVar29));
          auVar370._8_8_ = 0;
          auVar370._0_8_ = *(ulonglong *)(lVar54 + lVar55);
          local_4a0 = vmovhps_avx(auVar370,*(undefined8 *)(auVar443._8_8_ + lVar50));
          auVar371._8_8_ = 0;
          auVar371._0_8_ = *(ulonglong *)(auVar288._16_8_ + lVar62);
          local_4b0 = vmovhps_avx(auVar371,*(undefined8 *)(auVar288._24_8_ + lVar68));
          auVar372._8_8_ = 0;
          auVar372._0_8_ = *(ulonglong *)(auVar509._0_8_ + lVar63);
          local_480 = vmovhps_avx(auVar372,*(undefined8 *)(auVar509._8_8_ + lVar65));
          auVar197._8_8_ = 0;
          auVar197._0_8_ = *(ulonglong *)(auVar559._16_8_ + lVar69);
          local_450 = vmovhps_avx(auVar197,*(undefined8 *)(auVar559._24_8_ + lVar29));
          auVar198._8_8_ = 0;
          auVar198._0_8_ = *(ulonglong *)(lVar57 + lVar55);
          local_460 = vmovhps_avx(auVar198,*(undefined8 *)(auVar559._8_8_ + lVar50));
          auVar199._8_8_ = 0;
          auVar199._0_8_ = *(ulonglong *)(auVar509._16_8_ + lVar62);
          local_470 = vmovhps_avx(auVar199,*(undefined8 *)(auVar509._24_8_ + lVar68));
          auVar200._8_8_ = 0;
          auVar200._0_8_ = *(ulonglong *)(lVar60 + lVar63);
          local_440 = vmovhps_avx(auVar200,*(undefined8 *)(auVar588._8_8_ + lVar65));
          auVar373._8_8_ = 0;
          auVar373._0_8_ = *(ulonglong *)(auVar589._16_8_ + lVar69);
          local_410 = vmovhps_avx(auVar373,*(undefined8 *)(auVar589._24_8_ + lVar29));
          auVar374._8_8_ = 0;
          auVar374._0_8_ = *(ulonglong *)(lVar73 + lVar55);
          local_420 = vmovhps_avx(auVar374,*(undefined8 *)(auVar589._8_8_ + lVar50));
          auVar375._8_8_ = 0;
          auVar375._0_8_ = *(ulonglong *)(auVar588._16_8_ + lVar62);
          local_430 = vmovhps_avx(auVar375,*(undefined8 *)(auVar588._24_8_ + lVar68));
          auVar376._8_8_ = 0;
          auVar376._0_8_ = *(ulonglong *)(auVar605._0_8_ + lVar63);
          local_400 = vmovhps_avx(auVar376,*(undefined8 *)(auVar605._8_8_ + lVar65));
          auVar201._8_8_ = 0;
          auVar201._0_8_ = *(ulonglong *)(auVar606._16_8_ + lVar69);
          local_3d0 = vmovhps_avx(auVar201,*(undefined8 *)(auVar606._24_8_ + lVar29));
          auVar202._8_8_ = 0;
          auVar202._0_8_ = *(ulonglong *)(lVar1 + lVar55);
          local_3e0 = vmovhps_avx(auVar202,*(undefined8 *)(auVar606._8_8_ + lVar50));
          auVar203._8_8_ = 0;
          auVar203._0_8_ = *(ulonglong *)(auVar605._16_8_ + lVar62);
          local_3f0 = vmovhps_avx(auVar203,*(undefined8 *)(auVar605._24_8_ + lVar68));
          auVar204._8_8_ = 0;
          auVar204._0_8_ = *(ulonglong *)(lVar2 + lVar63);
          local_3c0 = vmovhps_avx(auVar204,*(undefined8 *)(auVar622._8_8_ + lVar65));
          auVar377._8_8_ = 0;
          auVar377._0_8_ = *(ulonglong *)(auVar629._16_8_ + lVar69);
          local_390 = vmovhps_avx(auVar377,*(undefined8 *)(auVar629._24_8_ + lVar29));
          auVar378._8_8_ = 0;
          auVar378._0_8_ = *(ulonglong *)(lVar3 + lVar55);
          local_3a0 = vmovhps_avx(auVar378,*(undefined8 *)(auVar629._8_8_ + lVar50));
          auVar379._8_8_ = 0;
          auVar379._0_8_ = *(ulonglong *)(auVar622._16_8_ + lVar62);
          local_3b0 = vmovhps_avx(auVar379,*(undefined8 *)(auVar622._24_8_ + lVar68));
          auVar380._8_8_ = 0;
          auVar380._0_8_ = *(ulonglong *)(auVar630._0_8_ + lVar63);
          local_380 = vmovhps_avx(auVar380,*(undefined8 *)(auVar630._8_8_ + lVar65));
          auVar205._8_8_ = 0;
          auVar205._0_8_ = *(ulonglong *)(auVar649._16_8_ + lVar69);
          local_350 = vmovhps_avx(auVar205,*(undefined8 *)(auVar649._24_8_ + lVar29));
          auVar206._8_8_ = 0;
          auVar206._0_8_ = *(ulonglong *)(lVar4 + lVar55);
          local_360 = vmovhps_avx(auVar206,*(undefined8 *)(auVar649._8_8_ + lVar50));
          auVar207._8_8_ = 0;
          auVar207._0_8_ = *(ulonglong *)(auVar630._16_8_ + lVar62);
          local_370 = vmovhps_avx(auVar207,*(undefined8 *)(auVar630._24_8_ + lVar68));
          auVar208._8_8_ = 0;
          auVar208._0_8_ = *(ulonglong *)(lVar5 + lVar63);
          local_340 = vmovhps_avx(auVar208,*(undefined8 *)(auVar650._8_8_ + lVar65));
          auVar381._8_8_ = 0;
          auVar381._0_8_ = *(ulonglong *)(auVar667._16_8_ + lVar69);
          local_310 = vmovhps_avx(auVar381,*(undefined8 *)(auVar667._24_8_ + lVar29));
          auVar382._8_8_ = 0;
          auVar382._0_8_ = *(ulonglong *)(lVar6 + lVar55);
          local_320 = vmovhps_avx(auVar382,*(undefined8 *)(auVar667._8_8_ + lVar50));
          auVar383._8_8_ = 0;
          auVar383._0_8_ = *(ulonglong *)(auVar650._16_8_ + lVar62);
          local_330 = vmovhps_avx(auVar383,*(undefined8 *)(auVar650._24_8_ + lVar68));
          auVar384._8_8_ = 0;
          auVar384._0_8_ = *(ulonglong *)(auVar676._0_8_ + lVar63);
          local_300 = vmovhps_avx(auVar384,*(undefined8 *)(auVar676._8_8_ + lVar65));
          auVar209._8_8_ = 0;
          auVar209._0_8_ = *(ulonglong *)(auVar444._16_8_ + lVar69);
          local_2d0 = vmovhps_avx(auVar209,*(undefined8 *)(auVar444._24_8_ + lVar29));
          auVar210._8_8_ = 0;
          auVar210._0_8_ = *(ulonglong *)(lVar7 + lVar55);
          local_2e0 = vmovhps_avx(auVar210,*(undefined8 *)(auVar444._8_8_ + lVar50));
          auVar211._8_8_ = 0;
          auVar211._0_8_ = *(ulonglong *)(auVar676._16_8_ + lVar62);
          local_2f0 = vmovhps_avx(auVar211,*(undefined8 *)(auVar676._24_8_ + lVar68));
          auVar212._8_8_ = 0;
          auVar212._0_8_ = *(ulonglong *)(lVar8 + lVar63);
          local_2c0 = vmovhps_avx(auVar212,*(undefined8 *)(auVar668._8_8_ + lVar65));
          auVar385._8_8_ = 0;
          auVar385._0_8_ = *(ulonglong *)(auVar623._16_8_ + lVar69);
          local_290 = vmovhps_avx(auVar385,*(undefined8 *)(auVar623._24_8_ + lVar29));
          auVar386._8_8_ = 0;
          auVar386._0_8_ = *(ulonglong *)(lVar9 + lVar55);
          local_2a0 = vmovhps_avx(auVar386,*(undefined8 *)(auVar623._8_8_ + lVar50));
          auVar387._8_8_ = 0;
          auVar387._0_8_ = *(ulonglong *)(auVar668._16_8_ + lVar62);
          local_2b0 = vmovhps_avx(auVar387,*(undefined8 *)(auVar668._24_8_ + lVar68));
          auVar388._8_8_ = 0;
          auVar388._0_8_ = *(ulonglong *)(auVar445._0_8_ + lVar63);
          local_280 = vmovhps_avx(auVar388,*(undefined8 *)(auVar445._8_8_ + lVar65));
          auVar213._8_8_ = 0;
          auVar213._0_8_ = *(ulonglong *)(auVar482._16_8_ + lVar69);
          local_250 = vmovhps_avx(auVar213,*(undefined8 *)(auVar482._24_8_ + lVar29));
          auVar214._8_8_ = 0;
          auVar214._0_8_ = *(ulonglong *)(lVar10 + lVar55);
          local_260 = vmovhps_avx(auVar214,*(undefined8 *)(auVar482._8_8_ + lVar50));
          auVar215._8_8_ = 0;
          auVar215._0_8_ = *(ulonglong *)(auVar445._16_8_ + lVar62);
          local_270 = vmovhps_avx(auVar215,*(undefined8 *)(auVar445._24_8_ + lVar68));
          auVar216._8_8_ = 0;
          auVar216._0_8_ = *(ulonglong *)(lVar11 + lVar63);
          local_240 = vmovhps_avx(auVar216,*(undefined8 *)(auVar669._8_8_ + lVar65));
          auVar389._8_8_ = 0;
          auVar389._0_8_ = *(ulonglong *)(auVar290._16_8_ + lVar69);
          local_210 = vmovhps_avx(auVar389,*(undefined8 *)(auVar290._24_8_ + lVar29));
          auVar390._8_8_ = 0;
          auVar390._0_8_ = *(ulonglong *)(lVar12 + lVar55);
          local_220 = vmovhps_avx(auVar390,*(undefined8 *)(auVar290._8_8_ + lVar50));
          auVar391._8_8_ = 0;
          auVar391._0_8_ = *(ulonglong *)(auVar669._16_8_ + lVar62);
          local_230 = vmovhps_avx(auVar391,*(undefined8 *)(auVar669._24_8_ + lVar68));
          auVar392._8_8_ = 0;
          auVar392._0_8_ = *(ulonglong *)(auVar483._0_8_ + lVar63);
          local_200 = vmovhps_avx(auVar392,*(undefined8 *)(auVar483._8_8_ + lVar65));
          auVar217._8_8_ = 0;
          auVar217._0_8_ = *(ulonglong *)(auVar510._16_8_ + lVar69);
          local_1d0 = vmovhps_avx(auVar217,*(undefined8 *)(auVar510._24_8_ + lVar29));
          auVar218._8_8_ = 0;
          auVar218._0_8_ = *(ulonglong *)(lVar13 + lVar55);
          local_1e0 = vmovhps_avx(auVar218,*(undefined8 *)(auVar510._8_8_ + lVar50));
          auVar219._8_8_ = 0;
          auVar219._0_8_ = *(ulonglong *)(auVar483._16_8_ + lVar62);
          local_1f0 = vmovhps_avx(auVar219,*(undefined8 *)(auVar483._24_8_ + lVar68));
          auVar220._8_8_ = 0;
          auVar220._0_8_ = *(ulonglong *)(lVar14 + lVar63);
          local_1c0 = vmovhps_avx(auVar220,*(undefined8 *)(auVar291._8_8_ + lVar65));
          auVar393._8_8_ = 0;
          auVar393._0_8_ = *(ulonglong *)(auVar292._16_8_ + lVar69);
          local_190 = vmovhps_avx(auVar393,*(undefined8 *)(auVar292._24_8_ + lVar29));
          auVar394._8_8_ = 0;
          auVar394._0_8_ = *(ulonglong *)(lVar15 + lVar55);
          local_1a0 = vmovhps_avx(auVar394,*(undefined8 *)(auVar292._8_8_ + lVar50));
          auVar395._8_8_ = 0;
          auVar395._0_8_ = *(ulonglong *)(auVar291._16_8_ + lVar62);
          local_1b0 = vmovhps_avx(auVar395,*(undefined8 *)(auVar291._24_8_ + lVar68));
          auVar396._8_8_ = 0;
          auVar396._0_8_ = *(ulonglong *)(auVar508._0_8_ + lVar63);
          local_180 = vmovhps_avx(auVar396,*(undefined8 *)(auVar508._8_8_ + lVar65));
          auVar221._8_8_ = 0;
          auVar221._0_8_ = *(ulonglong *)(auVar287._16_8_ + lVar69);
          local_150 = vmovhps_avx(auVar221,*(undefined8 *)(auVar287._24_8_ + lVar29));
          auVar222._8_8_ = 0;
          auVar222._0_8_ = *(ulonglong *)(lVar16 + lVar55);
          local_160 = vmovhps_avx(auVar222,*(undefined8 *)(auVar287._8_8_ + lVar50));
          auVar223._8_8_ = 0;
          auVar223._0_8_ = *(ulonglong *)(auVar508._16_8_ + lVar62);
          local_170 = vmovhps_avx(auVar223,*(undefined8 *)(auVar508._24_8_ + lVar68));
          dVar17 = *param_4;
          lVar62 = 0xc0;
          dVar74 = param_4[8];
          dVar75 = param_4[0xc];
          dVar76 = param_4[1];
          dVar77 = param_4[5];
          dVar78 = param_4[9];
          dVar305 = param_4[0xd];
          dVar306 = param_4[2];
          dVar307 = param_4[6];
          dVar308 = param_4[10];
          dVar309 = param_4[0xe];
          dVar310 = param_4[3];
          dVar311 = param_4[7];
          dVar312 = param_4[0xb];
          dVar313 = param_4[0xf];
          do {
            dVar315 = *(double *)(local_600 + lVar62);
            dVar316 = *(double *)(local_600 + lVar62 + 8);
            dVar317 = *(double *)(local_5f0 + lVar62);
            dVar318 = *(double *)(local_5f0 + lVar62 + 8);
            dVar319 = *(double *)(local_5e0 + lVar62);
            dVar487 = *(double *)(local_5e0 + lVar62 + 8);
            dVar517 = *(double *)(local_5d0 + lVar62);
            dVar518 = *(double *)(local_5d0 + lVar62 + 8);
            dVar519 = *(double *)(local_5c0 + lVar62);
            dVar520 = *(double *)(local_5c0 + lVar62 + 8);
            dVar544 = *(double *)(local_5b0 + lVar62);
            dVar545 = *(double *)(local_5b0 + lVar62 + 8);
            dVar546 = *(double *)(local_5a0 + lVar62);
            dVar573 = *(double *)(local_5a0 + lVar62 + 8);
            dVar591 = *(double *)(local_590 + lVar62);
            dVar592 = *(double *)(local_590 + lVar62 + 8);
            dVar593 = *(double *)(local_560 + lVar62);
            dVar594 = *(double *)(local_560 + lVar62 + 8);
            dVar595 = *(double *)(local_550 + lVar62);
            dVar610 = *(double *)(local_550 + lVar62 + 8);
            dVar611 = *(double *)(local_580 + lVar62);
            dVar612 = *(double *)(local_580 + lVar62 + 8);
            dVar613 = *(double *)(local_570 + lVar62);
            dVar614 = *(double *)(local_570 + lVar62 + 8);
            dVar615 = *(double *)(local_540 + lVar62);
            dVar639 = *(double *)(local_540 + lVar62 + 8);
            dVar640 = *(double *)(local_530 + lVar62);
            dVar657 = *(double *)(local_530 + lVar62 + 8);
            dVar658 = *(double *)(local_520 + lVar62);
            dVar659 = *(double *)(local_520 + lVar62 + 8);
            dVar660 = *(double *)(local_510 + lVar62);
            dVar661 = *(double *)(local_510 + lVar62 + 8);
            dVar314 = param_4[4];
            *(double *)((longlong)local_1e80 + lVar62 + 0x20) =
                 dVar658 * dVar75 + dVar593 * dVar74 + dVar546 * dVar314 + dVar319 * dVar17 + 0.0;
            *(double *)((longlong)local_1e80 + lVar62 + 0x28) =
                 dVar659 * dVar75 + dVar594 * dVar74 + dVar573 * dVar314 + dVar487 * dVar17 + 0.0;
            *(double *)((longlong)local_1e80 + lVar62 + 0x30) =
                 dVar660 * dVar75 + dVar595 * dVar74 + dVar591 * dVar314 + dVar517 * dVar17 + 0.0;
            *(double *)((longlong)local_1e80 + lVar62 + 0x38) =
                 dVar661 * dVar75 + dVar610 * dVar74 + dVar592 * dVar314 + dVar518 * dVar17 + 0.0;
            *(double *)((longlong)local_1e80 + lVar62) =
                 dVar615 * dVar75 + dVar611 * dVar74 + dVar315 * dVar17 + 0.0 + dVar519 * dVar314;
            *(double *)((longlong)local_1e80 + lVar62 + 8) =
                 dVar639 * dVar75 + dVar612 * dVar74 + dVar316 * dVar17 + 0.0 + dVar520 * dVar314;
            *(double *)((longlong)local_1e80 + lVar62 + 0x10) =
                 dVar640 * dVar75 + dVar613 * dVar74 + dVar317 * dVar17 + 0.0 + dVar544 * dVar314;
            *(double *)((longlong)local_1e80 + lVar62 + 0x18) =
                 dVar657 * dVar75 + dVar614 * dVar74 + dVar318 * dVar17 + 0.0 + dVar545 * dVar314;
            *(double *)((longlong)local_1e80 + lVar62 + 0x60) =
                 dVar658 * dVar305 + dVar593 * dVar78 + dVar546 * dVar77 + dVar319 * dVar76 + 0.0;
            *(double *)((longlong)local_1e80 + lVar62 + 0x68) =
                 dVar659 * dVar305 + dVar594 * dVar78 + dVar573 * dVar77 + dVar487 * dVar76 + 0.0;
            *(double *)((longlong)local_1e80 + lVar62 + 0x70) =
                 dVar660 * dVar305 + dVar595 * dVar78 + dVar591 * dVar77 + dVar517 * dVar76 + 0.0;
            *(double *)((longlong)local_1e80 + lVar62 + 0x78) =
                 dVar661 * dVar305 + dVar610 * dVar78 + dVar592 * dVar77 + dVar518 * dVar76 + 0.0;
            *(double *)((longlong)local_1e80 + lVar62 + 0x40) =
                 dVar615 * dVar305 + dVar611 * dVar78 + dVar519 * dVar77 + dVar315 * dVar76 + 0.0;
            *(double *)((longlong)local_1e80 + lVar62 + 0x48) =
                 dVar639 * dVar305 + dVar612 * dVar78 + dVar520 * dVar77 + dVar316 * dVar76 + 0.0;
            *(double *)((longlong)local_1e80 + lVar62 + 0x50) =
                 dVar640 * dVar305 + dVar613 * dVar78 + dVar544 * dVar77 + dVar317 * dVar76 + 0.0;
            *(double *)((longlong)local_1e80 + lVar62 + 0x58) =
                 dVar657 * dVar305 + dVar614 * dVar78 + dVar545 * dVar77 + dVar318 * dVar76 + 0.0;
            *(double *)((longlong)local_1e80 + lVar62 + 0xa0) =
                 dVar658 * dVar309 + dVar593 * dVar308 + dVar546 * dVar307 + dVar319 * dVar306 + 0.0
            ;
            *(double *)((longlong)local_1e80 + lVar62 + 0xa8) =
                 dVar659 * dVar309 + dVar594 * dVar308 + dVar573 * dVar307 + dVar487 * dVar306 + 0.0
            ;
            *(double *)((longlong)local_1e80 + lVar62 + 0xb0) =
                 dVar660 * dVar309 + dVar595 * dVar308 + dVar591 * dVar307 + dVar517 * dVar306 + 0.0
            ;
            *(double *)(local_1dc0 + lVar62 + -8) =
                 dVar661 * dVar309 + dVar610 * dVar308 + dVar592 * dVar307 + dVar518 * dVar306 + 0.0
            ;
            *(double *)((longlong)local_1e80 + lVar62 + 0x80) =
                 dVar615 * dVar309 + dVar611 * dVar308 + dVar519 * dVar307 + dVar315 * dVar306 + 0.0
            ;
            *(double *)((longlong)local_1e80 + lVar62 + 0x88) =
                 dVar639 * dVar309 + dVar612 * dVar308 + dVar520 * dVar307 + dVar316 * dVar306 + 0.0
            ;
            *(double *)((longlong)local_1e80 + lVar62 + 0x90) =
                 dVar640 * dVar309 + dVar613 * dVar308 + dVar544 * dVar307 + dVar317 * dVar306 + 0.0
            ;
            *(double *)((longlong)local_1e80 + lVar62 + 0x98) =
                 dVar657 * dVar309 + dVar614 * dVar308 + dVar545 * dVar307 + dVar318 * dVar306 + 0.0
            ;
            *(double *)(local_1da0 + lVar62) =
                 dVar319 * dVar310 + 0.0 + dVar546 * dVar311 + dVar312 * dVar593 + dVar313 * dVar658
            ;
            *(double *)(local_1da0 + lVar62 + 8) =
                 dVar487 * dVar310 + 0.0 + dVar573 * dVar311 + dVar312 * dVar594 + dVar313 * dVar659
            ;
            *(double *)(local_1da0 + lVar62 + 0x10) =
                 dVar517 * dVar310 + 0.0 + dVar591 * dVar311 + dVar312 * dVar595 + dVar313 * dVar660
            ;
            *(double *)(local_1da0 + lVar62 + 0x18) =
                 dVar518 * dVar310 + 0.0 + dVar592 * dVar311 + dVar312 * dVar610 + dVar313 * dVar661
            ;
            *(double *)(local_1dc0 + lVar62) =
                 dVar315 * dVar310 + 0.0 + dVar519 * dVar311 + dVar611 * dVar312 + dVar313 * dVar615
            ;
            *(double *)(local_1dc0 + lVar62 + 8) =
                 dVar316 * dVar310 + 0.0 + dVar520 * dVar311 + dVar612 * dVar312 + dVar313 * dVar639
            ;
            *(double *)(local_1dc0 + lVar62 + 0x10) =
                 dVar317 * dVar310 + 0.0 + dVar544 * dVar311 + dVar613 * dVar312 + dVar313 * dVar640
            ;
            *(double *)(local_1dc0 + lVar62 + 0x18) =
                 dVar318 * dVar310 + 0.0 + dVar545 * dVar311 + dVar614 * dVar312 + dVar313 * dVar657
            ;
            lVar62 = lVar62 + 0x100;
          } while (lVar62 != 0x4c0);
          local_2100 = auVar464._0_8_;
          dStack_20f8 = auVar464._8_8_;
          dStack_20f0 = auVar465._0_8_;
          dStack_20e8 = auVar465._8_8_;
          local_1e80[0] = auVar188._0_8_;
          local_1e80[1] = auVar188._8_8_;
          local_1e80[2] = auVar468._0_8_;
          local_1e80[3] = auVar468._8_8_;
          local_1ea0 = auVar467._0_8_;
          dStack_1e98 = auVar467._8_8_;
          dStack_1e90 = auVar189._0_8_;
          dStack_1e88 = auVar189._8_8_;
          local_1e80[4] = auVar568._0_8_;
          local_1e80[5] = auVar568._8_8_;
          local_1e80[6] = auVar499._0_8_;
          local_1e80[7] = auVar499._8_8_;
          dVar74 = (local_2100 + local_1e80[0]) * __real_3fe0000000000000;
          dVar305 = (dStack_20f8 + local_1e80[1]) * __real_3fe0000000000000;
          dVar310 = (dStack_20f0 + local_1e80[2]) * __real_3fe0000000000000;
          dVar315 = (dStack_20e8 + local_1e80[3]) * __real_3fe0000000000000;
          dVar520 = (local_1ea0 + local_1e80[4]) * __real_3fe0000000000000;
          dVar544 = (dStack_1e98 + local_1e80[5]) * __real_3fe0000000000000;
          dVar545 = (dStack_1e90 + local_1e80[6]) * __real_3fe0000000000000;
          dVar546 = (dStack_1e88 + local_1e80[7]) * __real_3fe0000000000000;
          local_2000 = auVar461._0_8_;
          uStack_1ff8 = auVar461._8_8_;
          uStack_1ff0 = auVar321._0_8_;
          uStack_1fe8 = auVar321._8_8_;
          dVar573 = (local_18c0._0_8_ + local_2000) * __real_3fe0000000000000;
          dVar591 = (local_18c0._8_8_ + uStack_1ff8) * __real_3fe0000000000000;
          dVar592 = (local_18c0._16_8_ + uStack_1ff0) * __real_3fe0000000000000;
          dVar593 = (local_18c0._24_8_ + uStack_1fe8) * __real_3fe0000000000000;
          local_2020 = auVar617._0_8_;
          dStack_2018 = auVar617._8_8_;
          dStack_2010 = auVar580._0_8_;
          dStack_2008 = auVar580._8_8_;
          dVar594 = (local_18e0._0_8_ + local_2020) * __real_3fe0000000000000;
          dVar610 = (local_18e0._8_8_ + dStack_2018) * __real_3fe0000000000000;
          dVar612 = (local_18e0._16_8_ + dStack_2010) * __real_3fe0000000000000;
          dVar614 = (local_18e0._24_8_ + dStack_2008) * __real_3fe0000000000000;
          dVar17 = (double)CONCAT17(uStack_1c39,
                                    CONCAT16(uStack_1c3a,
                                             CONCAT15(uStack_1c3b,
                                                      CONCAT14(uStack_1c3c,
                                                               CONCAT13(uStack_1c3d,
                                                                        CONCAT12(uStack_1c3e,
                                                                                 CONCAT11(
                                                  uStack_1c3f,local_1c40)))))));
          dVar487 = (local_1880._0_8_ + local_1900._0_8_) * __real_3fe0000000000000;
          dVar517 = (local_1880._8_8_ + local_1900._8_8_) * __real_3fe0000000000000;
          dVar518 = (local_1880._16_8_ + local_1900._16_8_) * __real_3fe0000000000000;
          dVar519 = (local_1880._24_8_ + local_1900._24_8_) * __real_3fe0000000000000;
          dVar595 = (local_18a0._0_8_ + local_19c0._0_8_) * __real_3fe0000000000000;
          dVar611 = (local_18a0._8_8_ + local_19c0._8_8_) * __real_3fe0000000000000;
          dVar613 = (local_18a0._16_8_ + local_19c0._16_8_) * __real_3fe0000000000000;
          dVar615 = (local_18a0._24_8_ + local_19c0._24_8_) * __real_3fe0000000000000;
          auVar442 = vsubpd_avx(auVar285,auVar480);
          auVar289 = vsubpd_avx(local_18c0,auVar284);
          auVar287 = vsubpd_avx(auVar286,auVar507);
          auVar651 = vsubpd_avx(local_18e0,auVar558);
          auVar539 = vsubpd_avx(local_1900,local_1880);
          auVar481 = vsubpd_avx(local_19c0,local_18a0);
          dVar75 = auVar442._0_8_ * __real_3fe0000000000000;
          dVar306 = auVar442._8_8_ * __real_3fe0000000000000;
          dVar311 = auVar442._16_8_ * __real_3fe0000000000000;
          dVar316 = auVar442._24_8_ * __real_3fe0000000000000;
          dVar76 = auVar289._0_8_ * __real_3fe0000000000000;
          dVar307 = auVar289._8_8_ * __real_3fe0000000000000;
          dVar312 = auVar289._16_8_ * __real_3fe0000000000000;
          dVar317 = auVar289._24_8_ * __real_3fe0000000000000;
          dVar77 = auVar287._0_8_ * __real_3fe0000000000000;
          dVar308 = auVar287._8_8_ * __real_3fe0000000000000;
          dVar313 = auVar287._16_8_ * __real_3fe0000000000000;
          dVar318 = auVar287._24_8_ * __real_3fe0000000000000;
          dVar78 = auVar651._0_8_ * __real_3fe0000000000000;
          dVar309 = auVar651._8_8_ * __real_3fe0000000000000;
          dVar314 = auVar651._16_8_ * __real_3fe0000000000000;
          dVar319 = auVar651._24_8_ * __real_3fe0000000000000;
          local_2100 = auVar539._0_8_;
          dStack_20f8 = auVar539._8_8_;
          dStack_20f0 = auVar539._16_8_;
          dStack_20e8 = auVar539._24_8_;
          local_2100 = __real_3fe0000000000000 * local_2100;
          dStack_20f8 = __real_3fe0000000000000 * dStack_20f8;
          dStack_20f0 = __real_3fe0000000000000 * dStack_20f0;
          dStack_20e8 = __real_3fe0000000000000 * dStack_20e8;
          local_2000 = auVar481._0_8_;
          uStack_1ff8 = auVar481._8_8_;
          uStack_1ff0 = auVar481._16_8_;
          uStack_1fe8 = auVar481._24_8_;
          local_2000 = __real_3fe0000000000000 * local_2000;
          uStack_1ff8 = __real_3fe0000000000000 * uStack_1ff8;
          uStack_1ff0 = __real_3fe0000000000000 * uStack_1ff0;
          uStack_1fe8 = __real_3fe0000000000000 * uStack_1fe8;
          auVar539._0_8_ =
               (double)((ulonglong)(local_2000 * local_1bc0) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar75 * (double)local_1dc0) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar77 * (double)local_1cc0._0_8_) & __real_7fffffffffffffff);
          auVar539._8_8_ =
               (double)((ulonglong)(uStack_1ff8 * dStack_1bb8) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar306 * adStack_1db8[0]) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar308 * (double)local_1cc0._8_8_) & __real_7fffffffffffffff);
          auVar539._16_8_ =
               (double)((ulonglong)(uStack_1ff0 * dStack_1bb0) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar311 * adStack_1db8[1]) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar313 * dStack_1cb0) & __real_7fffffffffffffff);
          auVar539._24_8_ =
               (double)((ulonglong)(uStack_1fe8 * dStack_1ba8) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar316 * adStack_1db8[2]) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar318 * dStack_1ca8) & __real_7fffffffffffffff);
          auVar481._0_8_ =
               (double)((ulonglong)(local_2100 * local_1ba0) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar76 * (double)local_1da0) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar78 * (double)local_1ca0._0_8_) & __real_7fffffffffffffff);
          auVar481._8_8_ =
               (double)((ulonglong)(dStack_20f8 * dStack_1b98) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar307 * adStack_1d98[0]) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar309 * (double)local_1ca0._8_8_) & __real_7fffffffffffffff);
          auVar481._16_8_ =
               (double)((ulonglong)(dStack_20f0 * dStack_1b90) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar312 * adStack_1d98[1]) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar314 * dStack_1c90) & __real_7fffffffffffffff);
          auVar481._24_8_ =
               (double)((ulonglong)(dStack_20e8 * dStack_1b88) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar317 * adStack_1d98[2]) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar319 * dStack_1c88) & __real_7fffffffffffffff);
          auVar588._0_8_ =
               dVar573 * (double)local_1da0 + dVar594 * (double)local_1ca0._0_8_ +
               dVar487 * local_1ba0 + local_1aa0;
          auVar588._8_8_ =
               dVar591 * adStack_1d98[0] + dVar610 * (double)local_1ca0._8_8_ +
               dVar517 * dStack_1b98 + dStack_1a98;
          auVar588._16_8_ =
               dVar592 * adStack_1d98[1] + dVar612 * dStack_1c90 + dVar518 * dStack_1b90 +
               dStack_1a90;
          auVar588._24_8_ =
               dVar593 * adStack_1d98[2] + dVar614 * dStack_1c88 + dVar519 * dStack_1b88 +
               dStack_1a88;
          auVar605._0_8_ =
               dVar595 * local_1bc0 +
               dVar74 * (double)local_1dc0 + dVar520 * (double)local_1cc0._0_8_ + local_1ac0;
          auVar605._8_8_ =
               dVar611 * dStack_1bb8 +
               dVar305 * adStack_1db8[0] + dVar544 * (double)local_1cc0._8_8_ + dStack_1ab8;
          auVar605._16_8_ =
               dVar613 * dStack_1bb0 + dVar310 * adStack_1db8[1] + dVar545 * dStack_1cb0 +
               dStack_1ab0;
          auVar605._24_8_ =
               dVar615 * dStack_1ba8 + dVar315 * adStack_1db8[2] + dVar546 * dStack_1ca8 +
               dStack_1aa8;
          auVar629._0_8_ =
               dVar487 * local_1b60 +
               dVar573 * (double)local_1d60._0_8_ + dVar594 * (double)local_1c60._0_8_ + local_1a60;
          auVar629._8_8_ =
               dVar517 * dStack_1b58 +
               dVar591 * (double)local_1d60._8_8_ + dVar610 * (double)local_1c60._8_8_ + dStack_1a58
          ;
          auVar629._16_8_ =
               dVar518 * dStack_1b50 + dVar592 * dStack_1d50 + dVar612 * dStack_1c50 + dStack_1a50;
          auVar629._24_8_ =
               dVar519 * dStack_1b48 + dVar593 * dStack_1d48 + dVar614 * dStack_1c48 + dStack_1a48;
          auVar649._0_8_ =
               dVar595 * local_1b80 +
               dVar74 * (double)local_1d80._0_8_ + dVar520 * (double)local_1c80._0_8_ + local_1a80;
          auVar649._8_8_ =
               dVar611 * dStack_1b78 +
               dVar305 * (double)local_1d80._8_8_ + dVar544 * (double)local_1c80._8_8_ + dStack_1a78
          ;
          auVar649._16_8_ =
               dVar613 * dStack_1b70 + dVar310 * dStack_1d70 + dVar545 * dStack_1c70 + dStack_1a70;
          auVar649._24_8_ =
               dVar615 * dStack_1b68 + dVar315 * dStack_1d68 + dVar546 * dStack_1c68 + dStack_1a68;
          auVar676._0_8_ =
               dVar573 * (double)local_1d20._0_8_ + dVar594 * local_1c20 + dVar487 * local_1b20 +
               local_1a20;
          auVar676._8_8_ =
               dVar591 * (double)local_1d20._8_8_ + dVar610 * dStack_1c18 + dVar517 * dStack_1b18 +
               dStack_1a18;
          auVar676._16_8_ =
               dVar592 * dStack_1d10 + dVar612 * dStack_1c10 + dVar518 * dStack_1b10 + dStack_1a10;
          auVar676._24_8_ =
               dVar593 * dStack_1d08 + dVar614 * dStack_1c08 + dVar519 * dStack_1b08 + dStack_1a08;
          auVar667._0_8_ =
               (double)local_1d40._0_8_ * dVar74 + dVar520 * dVar17 + dVar595 * local_1b40 +
               local_1a40;
          auVar667._8_8_ =
               (double)local_1d40._8_8_ * dVar305 + dVar544 * dStack_1c38 + dVar611 * dStack_1b38 +
               dStack_1a38;
          auVar667._16_8_ =
               dStack_1d30 * dVar310 + dVar545 * dStack_1c30 + dVar613 * dStack_1b30 + dStack_1a30;
          auVar667._24_8_ =
               dStack_1d28 * dVar315 + dVar546 * dStack_1c28 + dVar615 * dStack_1b28 + dStack_1a28;
          auVar443._0_8_ =
               (double)((ulonglong)(local_2000 * local_1b80) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar75 * (double)local_1d80._0_8_) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar77 * (double)local_1c80._0_8_) & __real_7fffffffffffffff);
          auVar443._8_8_ =
               (double)((ulonglong)(uStack_1ff8 * dStack_1b78) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar306 * (double)local_1d80._8_8_) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar308 * (double)local_1c80._8_8_) & __real_7fffffffffffffff);
          auVar443._16_8_ =
               (double)((ulonglong)(uStack_1ff0 * dStack_1b70) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar311 * dStack_1d70) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar313 * dStack_1c70) & __real_7fffffffffffffff);
          auVar443._24_8_ =
               (double)((ulonglong)(uStack_1fe8 * dStack_1b68) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar316 * dStack_1d68) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar318 * dStack_1c68) & __real_7fffffffffffffff);
          auVar622._0_8_ =
               (double)((ulonglong)(local_2100 * local_1b60) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar76 * (double)local_1d60._0_8_) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar78 * (double)local_1c60._0_8_) & __real_7fffffffffffffff);
          auVar622._8_8_ =
               (double)((ulonglong)(dStack_20f8 * dStack_1b58) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar307 * (double)local_1d60._8_8_) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar309 * (double)local_1c60._8_8_) & __real_7fffffffffffffff);
          auVar622._16_8_ =
               (double)((ulonglong)(dStack_20f0 * dStack_1b50) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar312 * dStack_1d50) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar314 * dStack_1c50) & __real_7fffffffffffffff);
          auVar622._24_8_ =
               (double)((ulonglong)(dStack_20e8 * dStack_1b48) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar317 * dStack_1d48) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar319 * dStack_1c48) & __real_7fffffffffffffff);
          auVar559._0_8_ =
               (double)(__real_7fffffffffffffff & (ulonglong)((double)local_1d40._0_8_ * dVar75)) +
               (double)((ulonglong)(dVar77 * dVar17) & __real_7fffffffffffffff) +
               (double)((ulonglong)(local_2000 * local_1b40) & __real_7fffffffffffffff);
          auVar559._8_8_ =
               (double)(__real_7fffffffffffffff & (ulonglong)((double)local_1d40._8_8_ * dVar306)) +
               (double)((ulonglong)(dVar308 * dStack_1c38) & __real_7fffffffffffffff) +
               (double)((ulonglong)(uStack_1ff8 * dStack_1b38) & __real_7fffffffffffffff);
          auVar559._16_8_ =
               (double)(__real_7fffffffffffffff & (ulonglong)(dStack_1d30 * dVar311)) +
               (double)((ulonglong)(dVar313 * dStack_1c30) & __real_7fffffffffffffff) +
               (double)((ulonglong)(uStack_1ff0 * dStack_1b30) & __real_7fffffffffffffff);
          auVar559._24_8_ =
               (double)(__real_7fffffffffffffff & (ulonglong)(dStack_1d28 * dVar316)) +
               (double)((ulonglong)(dVar318 * dStack_1c28) & __real_7fffffffffffffff) +
               (double)((ulonglong)(uStack_1fe8 * dStack_1b28) & __real_7fffffffffffffff);
          auVar509._0_8_ =
               (double)((ulonglong)((double)local_1d20._0_8_ * dVar76) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar78 * local_1c20) & __real_7fffffffffffffff) +
               (double)((ulonglong)(local_2100 * local_1b20) & __real_7fffffffffffffff);
          auVar509._8_8_ =
               (double)((ulonglong)((double)local_1d20._8_8_ * dVar307) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar309 * dStack_1c18) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dStack_20f8 * dStack_1b18) & __real_7fffffffffffffff);
          auVar509._16_8_ =
               (double)((ulonglong)(dStack_1d10 * dVar312) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar314 * dStack_1c10) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dStack_20f0 * dStack_1b10) & __real_7fffffffffffffff);
          auVar509._24_8_ =
               (double)((ulonglong)(dStack_1d08 * dVar317) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar319 * dStack_1c08) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dStack_20e8 * dStack_1b08) & __real_7fffffffffffffff);
          auVar442 = vsubpd_avx(auVar605,auVar539);
          auVar289 = vsubpd_avx(auVar588,auVar481);
          auVar287 = vsubpd_avx(auVar649,auVar443);
          auVar651 = vsubpd_avx(auVar629,auVar622);
          auVar606._0_8_ = auVar605._0_8_ + auVar539._0_8_;
          auVar606._8_8_ = auVar605._8_8_ + auVar539._8_8_;
          auVar606._16_8_ = auVar605._16_8_ + auVar539._16_8_;
          auVar606._24_8_ = auVar605._24_8_ + auVar539._24_8_;
          auVar539 = vsubpd_avx(auVar667,auVar559);
          local_24e0._8_8_ = auVar588._8_8_ + auVar481._8_8_;
          local_24e0._0_8_ = auVar588._0_8_ + auVar481._0_8_;
          dStack_24d0 = auVar588._16_8_ + auVar481._16_8_;
          dStack_24c8 = auVar588._24_8_ + auVar481._24_8_;
          auVar481 = vsubpd_avx(auVar676,auVar509);
          local_24a0._8_8_ = auVar649._8_8_ + auVar443._8_8_;
          local_24a0._0_8_ = auVar649._0_8_ + auVar443._0_8_;
          dStack_2490 = auVar649._16_8_ + auVar443._16_8_;
          dStack_2488 = auVar649._24_8_ + auVar443._24_8_;
          auVar650._0_8_ = auVar622._0_8_ + auVar629._0_8_;
          auVar650._8_8_ = auVar622._8_8_ + auVar629._8_8_;
          auVar650._16_8_ = auVar622._16_8_ + auVar629._16_8_;
          auVar650._24_8_ = auVar622._24_8_ + auVar629._24_8_;
          auVar589._0_8_ = auVar667._0_8_ + auVar559._0_8_;
          auVar589._8_8_ = auVar667._8_8_ + auVar559._8_8_;
          auVar589._16_8_ = auVar667._16_8_ + auVar559._16_8_;
          auVar589._24_8_ = auVar667._24_8_ + auVar559._24_8_;
          auVar630._0_8_ = auVar676._0_8_ + auVar509._0_8_;
          auVar630._8_8_ = auVar676._8_8_ + auVar509._8_8_;
          auVar630._16_8_ = auVar676._16_8_ + auVar509._16_8_;
          auVar630._24_8_ = auVar676._24_8_ + auVar509._24_8_;
          auVar618._8_8_ = 0;
          auVar618._0_8_ = local_16c0;
          auVar321 = vpcmpeqb_avx(auVar618,ZEXT816(0) << 0x40);
          auVar461 = vpmovsxbd_avx(auVar321 ^ ___xmm_ffffffffffffffffffffffffffffffff);
          auVar465 = vpshufd_avx(auVar321 ^ ___xmm_ffffffffffffffffffffffffffffffff,0x55);
          auVar465 = vpmovsxbd_avx(auVar465);
          auVar288._0_4_ = auVar461._0_4_ & auVar191._0_4_;
          auVar288._4_4_ = auVar461._4_4_ & auVar191._4_4_;
          auVar288._8_4_ = auVar461._8_4_ & auVar191._8_4_;
          auVar288._12_4_ = auVar461._12_4_ & auVar191._12_4_;
          auVar288._16_4_ = auVar465._0_4_ & auVar469._0_4_;
          auVar288._20_4_ = auVar465._4_4_ & auVar469._4_4_;
          auVar288._24_4_ = auVar465._8_4_ & auVar469._8_4_;
          auVar288._28_4_ = auVar465._12_4_ & auVar469._12_4_;
          iVar25 = vmovmskps_avx(auVar288);
          if (iVar25 == 0) {
            auVar288 = ZEXT832(0) << 0x40;
            auVar656 = ZEXT864(0) << 0x20;
LAB_140a6abd0:
            auVar461 = vpmovzxbw_avx(auVar321);
            auVar321 = vpand_avx(auVar461,local_1850);
            auVar321 = vpshufb_avx(auVar321,___xmm_00000000000000000e0c0a0806040200);
            if ((((((((SUB161(auVar321 >> 7,0) & 1) != 0 || (SUB161(auVar321 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar321 >> 0x17,0) & 1) != 0) || (SUB161(auVar321 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar321 >> 0x27,0) & 1) != 0) || (SUB161(auVar321 >> 0x2f,0) & 1) != 0
                 ) || (SUB161(auVar321 >> 0x37,0) & 1) != 0) ||
                (SUB161(auVar321 >> 0x3f,0) & 1) != 0) {
              auVar321 = vpmovzxwd_avx(auVar461);
              auVar321 = vpslld_avx(auVar321,0x1f);
              auVar465 = vpsrad_avx(auVar321,0x1f);
              auVar321 = vpunpckhwd_avx(auVar461,auVar461);
              auVar321 = vpslld_avx(auVar321,0x1f);
              auVar321 = vpsrad_avx(auVar321,0x1f);
              auVar623._16_16_ = auVar321;
              auVar623._0_16_ = auVar465;
              auVar537 = auVar537 & auVar623;
              if ((((((((SUB321(auVar537 >> 0x1f,0) & 1) != 0 ||
                       (SUB321(auVar537 >> 0x3f,0) & 1) != 0) ||
                      (SUB321(auVar537 >> 0x5f,0) & 1) != 0) || SUB321(auVar537 >> 0x7f,0) != '\0')
                    || (SUB321(auVar537 >> 0x9f,0) & 1) != 0) || SUB321(auVar537 >> 0xbf,0) != '\0')
                  || (SUB321(auVar537 >> 0xdf,0) & 1) != 0) || auVar537[0x1f] < '\0') {
                auVar464 = vpmovsxdq_avx(auVar465);
                auVar80 = vshufps_avx(auVar465,auVar465,0xfa);
                auVar445._16_16_ = auVar80;
                auVar445._0_16_ = auVar464;
                auVar464 = vpmovsxdq_avx(auVar321);
                auVar80 = vpshufd_avx(auVar321,0xfa);
                auVar482._16_16_ = auVar80;
                auVar482._0_16_ = auVar464;
                _local_1dc0 = vmaskmovpd_avx(auVar445,auVar442);
                _local_1da0 = vmaskmovpd_avx(auVar482,auVar289);
                _local_1d80 = vmaskmovpd_avx(auVar445,auVar287);
                _local_1d60 = vmaskmovpd_avx(auVar482,auVar651);
                _local_1d40 = vmaskmovpd_avx(auVar445,auVar539);
                _local_1d20 = vmaskmovpd_avx(auVar482,auVar481);
                local_1d00 = vmaskmovpd_avx(auVar445,auVar606);
                local_1ce0 = vmaskmovpd_avx(auVar482,_local_24e0);
                _local_1cc0 = vmaskmovpd_avx(auVar445,_local_24a0);
                _local_1ca0 = vmaskmovpd_avx(auVar482,auVar650);
                _local_1c80 = vmaskmovpd_avx(auVar445,auVar589);
                _local_1c60 = vmaskmovpd_avx(auVar482,auVar630);
                auVar461 = vpsllw_avx(auVar461,0xf);
                auVar461 = vpacksswb_avx(auVar461,auVar461);
                if ((SUB161(auVar461 >> 7,0) & 1) != 0) {
                  local_1c40 = 1;
                }
                if ((SUB161(auVar461 >> 0xf,0) & 1) != 0) {
                  uStack_1c3f = 1;
                }
                if ((SUB161(auVar461 >> 0x17,0) & 1) != 0) {
                  uStack_1c3e = 1;
                }
                if ((SUB161(auVar461 >> 0x1f,0) & 1) != 0) {
                  uStack_1c3d = 1;
                }
                if ((SUB161(auVar461 >> 0x27,0) & 1) != 0) {
                  uStack_1c3c = 1;
                }
                if ((SUB161(auVar461 >> 0x2f,0) & 1) != 0) {
                  uStack_1c3b = 1;
                }
                if ((SUB161(auVar461 >> 0x37,0) & 1) != 0) {
                  uStack_1c3a = 1;
                }
                if ((SUB161(auVar461 >> 0x3f,0) & 1) != 0) {
                  uStack_1c39 = 1;
                }
                auVar289._0_4_ = auVar465._0_4_ & auVar191._0_4_;
                auVar289._4_4_ = auVar465._4_4_ & auVar191._4_4_;
                auVar289._8_4_ = auVar465._8_4_ & auVar191._8_4_;
                auVar289._12_4_ = auVar465._12_4_ & auVar191._12_4_;
                auVar289._16_4_ = auVar321._0_4_ & auVar469._0_4_;
                auVar289._20_4_ = auVar321._4_4_ & auVar469._4_4_;
                auVar289._24_4_ = auVar321._8_4_ & auVar469._8_4_;
                auVar289._28_4_ = auVar321._12_4_ & auVar469._12_4_;
                vmovmskps_avx(auVar288 | auVar289);
              }
            }
          }
          else {
            auVar443 = vminpd_avx(local_1840,auVar442);
            auVar464 = vshufps_avx(auVar461,auVar461,0x50);
            auVar461 = vshufps_avx(auVar461,auVar461,0xfa);
            auVar444._16_16_ = auVar461;
            auVar444._0_16_ = auVar464;
            _local_1dc0 = vmaskmovpd_avx(auVar444,auVar443);
            auVar461 = vshufps_avx(auVar465,auVar465,0x50);
            auVar465 = vshufps_avx(auVar465,auVar465,0xfa);
            auVar668._16_16_ = auVar465;
            auVar668._0_16_ = auVar461;
            auVar443 = vminpd_avx(local_1820,auVar289);
            _local_1da0 = vmaskmovpd_avx(auVar668,auVar443);
            auVar443 = vminpd_avx(local_1800,auVar287);
            _local_1d80 = vmaskmovpd_avx(auVar444,auVar443);
            auVar443 = vminpd_avx(local_17e0,auVar651);
            _local_1d60 = vmaskmovpd_avx(auVar668,auVar443);
            auVar443 = vminpd_avx(local_17c0,auVar539);
            _local_1d40 = vmaskmovpd_avx(auVar444,auVar443);
            auVar443 = vminpd_avx(local_17a0,auVar481);
            _local_1d20 = vmaskmovpd_avx(auVar668,auVar443);
            auVar443 = vmaxpd_avx(local_1780,auVar606);
            local_1d00 = vmaskmovpd_avx(auVar444,auVar443);
            auVar443 = vmaxpd_avx(local_1760,_local_24e0);
            local_1ce0 = vmaskmovpd_avx(auVar668,auVar443);
            auVar443 = vmaxpd_avx(local_1740,_local_24a0);
            _local_1cc0 = vmaskmovpd_avx(auVar444,auVar443);
            auVar443 = vmaxpd_avx(local_1720,auVar650);
            _local_1ca0 = vmaskmovpd_avx(auVar668,auVar443);
            auVar443 = vmaxpd_avx(local_1700,auVar589);
            _local_1c80 = vmaskmovpd_avx(auVar444,auVar443);
            auVar443 = vmaxpd_avx(local_16e0,auVar630);
            _local_1c60 = vmaskmovpd_avx(auVar668,auVar443);
            auVar461 = vpshufd_avx(auVar618,0x44);
            auVar461 = vpcmpeqb_avx(auVar461,___xmm_00000000000000000000000000000000);
            bVar27 = ~(SUB161(auVar461 >> 7,0) & 1 | (SUB161(auVar461 >> 0xf,0) & 1) << 1 |
                       (SUB161(auVar461 >> 0x17,0) & 1) << 2 | (SUB161(auVar461 >> 0x1f,0) & 1) << 3
                       | (SUB161(auVar461 >> 0x27,0) & 1) << 4 |
                       (SUB161(auVar461 >> 0x2f,0) & 1) << 5 | (SUB161(auVar461 >> 0x37,0) & 1) << 6
                      );
            if ((bVar27 & 1) != 0) {
              local_1c40 = (undefined1)local_16c0;
            }
            if ((bVar27 & 2) != 0) {
              uStack_1c3f = (undefined1)(local_16c0 >> 8);
            }
            if ((bVar27 & 4) != 0) {
              uStack_1c3e = (undefined1)(local_16c0 >> 0x10);
            }
            auVar656 = ZEXT864(0) << 0x20;
            if ((bVar27 & 8) != 0) {
              uStack_1c3d = (undefined1)(local_16c0 >> 0x18);
            }
            if ((bVar27 & 0x10) != 0) {
              uStack_1c3c = (undefined1)(local_16c0 >> 0x20);
            }
            if ((bVar27 & 0x20) != 0) {
              uStack_1c3b = (undefined1)(local_16c0 >> 0x28);
            }
            if ((bVar27 & 0x40) != 0) {
              uStack_1c3a = (undefined1)(local_16c0 >> 0x30);
            }
            if ((SUB161(auVar461 >> 0x3f,0) & 1) == 0) {
              uStack_1c39 = (undefined1)(local_16c0 >> 0x38);
            }
            if (local_19a0[0] != (char)iVar25) goto LAB_140a6abd0;
          }
          in_ZMM4 = ZEXT3264(_local_1d40);
          in_ZMM7 = ZEXT3264(local_1d00);
          auVar321 = vshufps_avx(auVar191,auVar191,0x50);
          auVar461 = vshufps_avx(auVar191,auVar191,0xfa);
          auVar651._16_16_ = auVar461;
          auVar651._0_16_ = auVar321;
          auVar669._0_16_ = local_1940._0_16_;
          auVar669._16_16_ = local_1960._0_16_;
          local_1840 = vmaskmovpd_avx(auVar651,_local_1dc0);
          local_1820 = vmaskmovpd_avx(auVar669,_local_1da0);
          local_1800 = vmaskmovpd_avx(auVar651,_local_1d80);
          local_17e0 = vmaskmovpd_avx(auVar669,_local_1d60);
          local_17c0 = vmaskmovpd_avx(auVar651,_local_1d40);
          local_17a0 = vmaskmovpd_avx(auVar669,_local_1d20);
          local_1780 = vmaskmovpd_avx(auVar651,local_1d00);
          local_1760 = vmaskmovpd_avx(auVar669,local_1ce0);
          local_1740 = vmaskmovpd_avx(auVar651,_local_1cc0);
          local_1720 = vmaskmovpd_avx(auVar669,_local_1ca0);
          local_1700 = vmaskmovpd_avx(auVar651,_local_1c80);
          local_16e0 = vmaskmovpd_avx(auVar669,_local_1c60);
          uVar26 = local_16c0;
          if ((local_19a0._0_4_ & 1) != 0) {
            local_16c0 = CONCAT71(local_16c0._1_7_,local_1c40);
            uVar26 = local_16c0;
          }
          auVar633 = ZEXT864(0) << 0x40;
          if ((local_19a0._0_4_ & 2) != 0) {
            local_16c0._2_6_ = (undefined6)(uVar26 >> 0x10);
            local_16c0._0_1_ = (undefined1)uVar26;
            local_16c0._0_2_ = CONCAT11(uStack_1c3f,(undefined1)local_16c0);
            uVar26 = local_16c0;
          }
          if ((local_19a0._0_4_ & 4) != 0) {
            local_16c0._3_5_ = (undefined5)(uVar26 >> 0x18);
            local_16c0._0_2_ = (undefined2)uVar26;
            local_16c0._0_3_ = CONCAT12(uStack_1c3e,(undefined2)local_16c0);
            uVar26 = local_16c0;
          }
          if ((local_19a0._0_4_ & 8) != 0) {
            local_16c0._4_4_ = (undefined4)(uVar26 >> 0x20);
            local_16c0._0_3_ = (undefined3)uVar26;
            local_16c0._0_4_ = CONCAT13(uStack_1c3d,(undefined3)local_16c0);
            uVar26 = local_16c0;
          }
          if ((local_19a0._0_4_ & 0x10) != 0) {
            local_16c0._5_3_ = (undefined3)(uVar26 >> 0x28);
            local_16c0._0_4_ = (undefined4)uVar26;
            local_16c0._0_5_ = CONCAT14(uStack_1c3c,(undefined4)local_16c0);
            uVar26 = local_16c0;
          }
          if ((local_19a0._0_4_ & 0x20) != 0) {
            local_16c0._6_2_ = (undefined2)(uVar26 >> 0x30);
            local_16c0._0_5_ = (undefined5)uVar26;
            local_16c0._0_6_ = CONCAT15(uStack_1c3b,(undefined5)local_16c0);
            uVar26 = local_16c0;
          }
          local_16c0 = uVar26;
          if ((local_19a0._0_4_ & 0x40) != 0) {
            local_16c0._7_1_ = (undefined1)(uVar26 >> 0x38);
            local_16c0._0_6_ = (undefined6)uVar26;
            local_16c0._0_7_ = CONCAT16(uStack_1c3a,(undefined6)local_16c0);
          }
          if (local_19a0[0] < '\0') {
            local_16c0 = CONCAT17(uStack_1c39,(undefined7)local_16c0);
          }
        }
        local_d8 = in_ZMM7._0_16_;
        uVar59 = uVar59 + 8;
        lVar62 = local_1920._0_8_;
      } while ((int)uVar59 < (int)uVar56);
    }
    local_1920._0_8_ = lVar62;
    if ((int)param_6 <= (int)uVar59) {
      auVar321 = vpshufd_avx(ZEXT416(param_6),0);
      goto LAB_140a6e09d;
    }
    auVar499 = vpshufd_avx(ZEXT416(uVar59),0);
    auVar483._16_16_ = auVar499;
    auVar483._0_16_ = auVar499;
    local_19a0 = auVar483 | ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
    auVar321 = vpshufd_avx(ZEXT416(param_6),0);
    auVar192 = vpcmpgtd_avx(auVar321,local_19a0._16_16_);
    auVar580 = vpcmpgtd_avx(auVar321,local_19a0._0_16_);
    auVar461 = vpslld_avx(auVar499,3);
    auVar465 = vpsubd_avx(auVar461,auVar499);
    auVar461 = vpand_avx(auVar580,auVar465);
    auVar510._16_16_ = auVar192;
    auVar510._0_16_ = auVar580;
    iVar25 = auVar461._0_4_;
    lVar62 = param_3 + (longlong)iVar25 * 8;
    lVar30 = param_3 + (longlong)auVar461._4_4_ * 8;
    lVar51 = param_3 + (longlong)auVar461._8_4_ * 8;
    lVar54 = param_3 + (longlong)auVar461._12_4_ * 8;
    auVar461 = vpand_avx(auVar192,auVar465);
    lVar57 = param_3 + (longlong)auVar461._0_4_ * 8;
    auVar442 = vmaskmovps_avx(auVar510,*(undefined1 (*) [32])
                                        (local_1920._0_8_ + (longlong)(int)(uVar59 << 2)));
    lVar60 = param_3 + (longlong)auVar461._4_4_ * 8;
    lVar73 = param_3 + (longlong)auVar461._8_4_ * 8;
    uVar59 = auVar580._0_4_;
    uVar67 = auVar580._4_4_;
    uVar72 = auVar580._8_4_;
    uVar34 = auVar580._12_4_;
    uVar35 = auVar192._0_4_;
    uVar36 = auVar192._4_4_;
    uVar37 = auVar192._8_4_;
    uVar38 = auVar192._12_4_;
    lVar1 = param_3 + (longlong)auVar461._12_4_ * 8;
    auVar461 = vpinsrb_avx(ZEXT116(*(byte *)((ulonglong)
                                             (uVar59 & 
                                             ___ymm_000001b8000001800000014800000110000000d8000000a00000006800000030
                                             ) + lVar62)),
                           (uint)*(byte *)((ulonglong)(uVar67 & _UNK_1512875a4) + lVar30),1);
    auVar461 = vpinsrb_avx(auVar461,(uint)*(byte *)((ulonglong)(uVar72 & _UNK_1512875a8) + lVar51),2
                          );
    auVar461 = vpinsrb_avx(auVar461,(uint)*(byte *)((ulonglong)(uVar34 & _UNK_1512875ac) + lVar54),3
                          );
    auVar461 = vpinsrb_avx(auVar461,(uint)*(byte *)((ulonglong)(uVar35 & _UNK_1512875b0) + lVar57),4
                          );
    auVar461 = vpinsrb_avx(auVar461,(uint)*(byte *)((ulonglong)(uVar36 & _UNK_1512875b4) + lVar60),5
                          );
    auVar461 = vpinsrb_avx(auVar461,(uint)*(byte *)((ulonglong)(uVar37 & _UNK_1512875b8) + lVar73),6
                          );
    auVar461 = vpinsrb_avx(auVar461,(uint)*(byte *)((ulonglong)(uVar38 & _UNK_1512875bc) + lVar1),7)
    ;
    auVar465 = vpcmpeqd_avx(local_d8,local_d8);
    auVar464 = vpcmpeqd_avx(auVar442._16_16_,auVar465);
    auVar80 = vpcmpeqd_avx(auVar442._0_16_,auVar465);
    auVar461 = vpcmpeqb_avx(ZEXT816(0),auVar461);
    auVar461 = auVar461 ^ auVar465;
    auVar465 = vpmovsxbd_avx(auVar461);
    auVar617 = vpshufd_avx(auVar461,0x55);
    auVar617 = vpmovsxbd_avx(auVar617);
    auVar290._0_4_ = ~auVar80._0_4_ & auVar465._0_4_ & uVar59;
    auVar290._4_4_ = ~auVar80._4_4_ & auVar465._4_4_ & uVar67;
    auVar290._8_4_ = ~auVar80._8_4_ & auVar465._8_4_ & uVar72;
    auVar290._12_4_ = ~auVar80._12_4_ & auVar465._12_4_ & uVar34;
    auVar290._16_4_ = ~auVar464._0_4_ & auVar617._0_4_ & uVar35;
    auVar290._20_4_ = ~auVar464._4_4_ & auVar617._4_4_ & uVar36;
    auVar290._24_4_ = ~auVar464._8_4_ & auVar617._8_4_ & uVar37;
    auVar290._28_4_ = ~auVar464._12_4_ & auVar617._12_4_ & uVar38;
    uVar56 = vmovmskps_avx(auVar290);
    if (uVar56 == 0) goto LAB_140a6e09d;
    local_1940._0_16_ = local_19a0._16_16_;
    auVar224._0_4_ =
         uVar59 & ___ymm_000001880000015000000118000000e0000000a8000000700000003800000000;
    auVar224._4_4_ = uVar67 & _UNK_1512874e4;
    auVar224._8_4_ = uVar72 & _UNK_1512874e8;
    auVar224._12_4_ = uVar34 & _UNK_1512874ec;
    uVar70 = vextractps_avx(auVar224,1);
    uVar64 = (undefined4)((ulonglong)lVar62 >> 0x20);
    uVar58 = vextractps_avx(auVar224,2);
    auVar581._8_8_ = 0;
    auVar581._0_8_ = *(ulonglong *)(param_3 + (longlong)iVar25 * 8);
    uVar28 = vextractps_avx(auVar224,3);
    auVar617 = vmovhps_avx(auVar581,*(undefined8 *)((ulonglong)uVar70 + lVar30));
    auVar225._8_8_ = 0;
    auVar225._0_8_ = *(ulonglong *)(CONCAT44(uVar64,uVar58) + lVar51);
    auVar568 = vmovhps_avx(auVar225,*(undefined8 *)(CONCAT44(iVar25 >> 0x1f,uVar28) + lVar54));
    auVar226._8_8_ = 0;
    auVar226._0_8_ = *(ulonglong *)((ulonglong)(uVar37 & _UNK_1512874f8) + lVar73);
    auVar467 = vmovhps_avx(auVar226,*(undefined8 *)((ulonglong)(uVar38 & _UNK_1512874fc) + lVar1));
    auVar582._8_8_ = 0;
    auVar582._0_8_ = *(ulonglong *)((ulonglong)(uVar35 & _UNK_1512874f0) + lVar57);
    auVar468 = vmovhps_avx(auVar582,*(undefined8 *)((ulonglong)(uVar36 & _UNK_1512874f4) + lVar60));
    auVar634._0_4_ =
         uVar59 & ___ymm_000001900000015800000120000000e8000000b0000000780000004000000008;
    auVar634._4_4_ = uVar67 & _UNK_151287504;
    auVar634._8_4_ = uVar72 & _UNK_151287508;
    auVar634._12_4_ = uVar34 & _UNK_15128750c;
    uVar70 = vextractps_avx(auVar634,1);
    uVar66 = vextractps_avx(auVar634,2);
    uVar71 = vextractps_avx(auVar634,3);
    auVar194 = vpackssdw_avx(auVar580,auVar192);
    auVar397._8_8_ = 0;
    auVar397._0_8_ = *(ulonglong *)((ulonglong)(uVar37 & _UNK_151287518) + lVar73);
    auVar190 = vmovhps_avx(auVar397,*(undefined8 *)((ulonglong)(uVar38 & _UNK_15128751c) + lVar1));
    auVar398._8_8_ = 0;
    auVar398._0_8_ = *(ulonglong *)((ulonglong)(uVar35 & _UNK_151287510) + lVar57);
    auVar465 = vmovhpd_avx(auVar398,*(undefined8 *)((ulonglong)(uVar36 & _UNK_151287514) + lVar60));
    auVar446._16_16_ = auVar568;
    auVar446._0_16_ = auVar617;
    auVar399._8_8_ = 0;
    auVar399._0_8_ = *(ulonglong *)((ulonglong)uVar66 + lVar51);
    auVar189 = vmovhps_avx(auVar399,*(undefined8 *)((ulonglong)uVar71 + lVar54));
    auVar528._8_8_ = 0;
    auVar528._0_8_ = *(ulonglong *)((ulonglong)auVar634._0_4_ + lVar62);
    auVar191 = vmovhps_avx(auVar528,*(undefined8 *)((ulonglong)uVar70 + lVar30));
    auVar529._0_4_ =
         uVar59 & ___ymm_000001980000016000000128000000f0000000b8000000800000004800000010;
    auVar529._4_4_ = uVar67 & _UNK_151287524;
    auVar529._8_4_ = uVar72 & _UNK_151287528;
    auVar529._12_4_ = uVar34 & _UNK_15128752c;
    uVar70 = vextractps_avx(auVar529,1);
    uVar66 = vextractps_avx(auVar529,2);
    uVar71 = vextractps_avx(auVar529,3);
    auVar291._16_16_ = auVar467;
    auVar291._0_16_ = auVar468;
    auVar607._16_16_ = auVar190;
    auVar607._0_16_ = auVar465;
    auVar599._8_8_ = 0;
    auVar599._0_8_ = *(ulonglong *)((ulonglong)(uVar37 & _UNK_151287538) + lVar73);
    auVar192 = vmovhpd_avx(auVar599,*(undefined8 *)((ulonglong)(uVar38 & _UNK_15128753c) + lVar1));
    auVar625._8_8_ = 0;
    auVar625._0_8_ = *(ulonglong *)((ulonglong)(uVar35 & _UNK_151287530) + lVar57);
    auVar580 = vmovhpd_avx(auVar625,*(undefined8 *)((ulonglong)(uVar36 & _UNK_151287534) + lVar60));
    auVar447._16_16_ = auVar189;
    auVar447._0_16_ = auVar191;
    auVar400._8_8_ = 0;
    auVar400._0_8_ = *(ulonglong *)((ulonglong)uVar66 + lVar51);
    auVar188 = vmovhps_avx(auVar400,*(undefined8 *)((ulonglong)uVar71 + lVar54));
    auVar530._8_8_ = 0;
    auVar530._0_8_ = *(ulonglong *)((ulonglong)auVar529._0_4_ + lVar62);
    auVar469 = vmovhps_avx(auVar530,*(undefined8 *)((ulonglong)uVar70 + lVar30));
    auVar619._0_4_ =
         uVar59 & ___ymm_000001a00000016800000130000000f8000000c0000000880000005000000018;
    auVar619._4_4_ = uVar67 & _UNK_151287544;
    auVar619._8_4_ = uVar72 & _UNK_151287548;
    auVar619._12_4_ = uVar34 & _UNK_15128754c;
    uVar70 = vextractps_avx(auVar619,1);
    uVar66 = vextractps_avx(auVar619,2);
    uVar71 = vextractps_avx(auVar619,3);
    local_1960._16_16_ = auVar192;
    local_1960._0_16_ = auVar580;
    local_1880._16_16_ = auVar188;
    local_1880._0_16_ = auVar469;
    auVar401._8_8_ = 0;
    auVar401._0_8_ = *(ulonglong *)((ulonglong)(uVar37 & _UNK_151287558) + lVar73);
    auVar192 = vmovhps_avx(auVar401,*(undefined8 *)((ulonglong)(uVar38 & _UNK_15128755c) + lVar1));
    auVar531._8_8_ = 0;
    auVar531._0_8_ = *(ulonglong *)((ulonglong)(uVar35 & _UNK_151287550) + lVar57);
    auVar580 = vmovhps_avx(auVar531,*(undefined8 *)((ulonglong)(uVar36 & _UNK_151287554) + lVar60));
    auVar532._8_8_ = 0;
    auVar532._0_8_ = *(ulonglong *)((ulonglong)uVar66 + lVar51);
    auVar188 = vmovhps_avx(auVar532,*(undefined8 *)((ulonglong)uVar71 + lVar54));
    local_18a0._16_16_ = auVar192;
    local_18a0._0_16_ = auVar580;
    auVar227._8_8_ = 0;
    auVar227._0_8_ = *(ulonglong *)((ulonglong)auVar619._0_4_ + lVar62);
    auVar192 = vmovhps_avx(auVar227,*(undefined8 *)((ulonglong)uVar70 + lVar30));
    auVar402._0_4_ =
         uVar59 & ___ymm_000001a8000001700000013800000100000000c8000000900000005800000020;
    auVar402._4_4_ = uVar67 & _UNK_151287564;
    auVar402._8_4_ = uVar72 & _UNK_151287568;
    auVar402._12_4_ = uVar34 & _UNK_15128756c;
    uVar70 = vextractps_avx(auVar402,1);
    uVar66 = vextractps_avx(auVar402,2);
    uVar71 = vextractps_avx(auVar402,3);
    auVar292._16_16_ = auVar188;
    auVar292._0_16_ = auVar192;
    auVar403._8_8_ = 0;
    auVar403._0_8_ = *(ulonglong *)((ulonglong)(uVar37 & _UNK_151287578) + lVar73);
    auVar580 = vmovhps_avx(auVar403,*(undefined8 *)((ulonglong)(uVar38 & _UNK_15128757c) + lVar1));
    auVar228._8_8_ = 0;
    auVar228._0_8_ = *(ulonglong *)((ulonglong)(uVar35 & _UNK_151287570) + lVar57);
    auVar469 = vmovhps_avx(auVar228,*(undefined8 *)((ulonglong)(uVar36 & _UNK_151287574) + lVar60));
    local_18c0._16_16_ = auVar580;
    local_18c0._0_16_ = auVar469;
    auVar229._8_8_ = 0;
    auVar229._0_8_ = *(ulonglong *)((ulonglong)uVar66 + lVar51);
    auVar580 = vmovhps_avx(auVar229,*(undefined8 *)((ulonglong)uVar71 + lVar54));
    auVar404._8_8_ = 0;
    auVar404._0_8_ = *(ulonglong *)((ulonglong)auVar402._0_4_ + lVar62);
    auVar469 = vmovhps_avx(auVar404,*(undefined8 *)((ulonglong)uVar70 + lVar30));
    auVar293._16_16_ = auVar580;
    auVar293._0_16_ = auVar469;
    auVar230._0_4_ =
         uVar59 & ___ymm_000001b0000001780000014000000108000000d0000000980000006000000028;
    auVar230._4_4_ = uVar67 & _UNK_151287584;
    auVar230._8_4_ = uVar72 & _UNK_151287588;
    auVar230._12_4_ = uVar34 & _UNK_15128758c;
    uVar59 = vextractps_avx(auVar230,1);
    uVar28 = vextractps_avx(auVar230,2);
    uVar67 = vextractps_avx(auVar230,3);
    auVar231._8_8_ = 0;
    auVar231._0_8_ = *(ulonglong *)((ulonglong)(uVar37 & _UNK_151287598) + lVar73);
    auVar327 = vmovhps_avx(auVar231,*(undefined8 *)((ulonglong)(uVar38 & _UNK_15128759c) + lVar1));
    auVar405._8_8_ = 0;
    auVar405._0_8_ = *(ulonglong *)((ulonglong)(uVar35 & _UNK_151287590) + lVar57);
    auVar193 = vmovhps_avx(auVar405,*(undefined8 *)((ulonglong)(uVar36 & _UNK_151287594) + lVar60));
    local_18e0._16_16_ = auVar327;
    local_18e0._0_16_ = auVar193;
    auVar232._8_8_ = 0;
    auVar232._0_8_ = *(ulonglong *)(CONCAT44(uVar64,uVar28) + lVar51);
    auVar327 = vmovhps_avx(auVar232,*(undefined8 *)((ulonglong)uVar67 + lVar54));
    auVar406._8_8_ = 0;
    auVar406._0_8_ = *(ulonglong *)((ulonglong)auVar230._0_4_ + lVar62);
    auVar193 = vmovhps_avx(auVar406,*(undefined8 *)((ulonglong)uVar59 + lVar30));
    local_1900._16_16_ = auVar327;
    local_1900._0_16_ = auVar193;
    auVar464 = vpackssdw_avx(auVar80,auVar464);
    auVar461 = vpmovsxbw_avx(auVar461);
    auVar80 = vpandn_avx(auVar464,auVar461);
    auVar461 = vpand_avx(auVar194,auVar80);
    auVar327 = vpmovsxwd_avx(auVar461);
    auVar464 = vpslld_avx(auVar499,7);
    auVar464 = vpand_avx(auVar327,auVar464);
    auVar193 = vpunpckhwd_avx(auVar461,auVar461);
    auVar461 = vpslld_avx(auVar499,7);
    local_1920._16_16_ = auVar193;
    local_1920._0_16_ = auVar327;
    auVar461 = vpand_avx(auVar193,auVar461);
    uVar66 = auVar327._0_4_;
    auVar233._0_4_ =
         uVar66 & ___ymm_0000038000000300000002800000020000000180000001000000008000000000;
    uVar71 = auVar327._4_4_;
    auVar233._4_4_ = uVar71 & _UNK_1512879c4;
    uVar39 = auVar327._8_4_;
    auVar233._8_4_ = uVar39 & _UNK_1512879c8;
    uVar40 = auVar327._12_4_;
    auVar233._12_4_ = uVar40 & _UNK_1512879cc;
    uVar41 = auVar193._0_4_;
    uVar42 = auVar193._4_4_;
    uVar43 = auVar193._8_4_;
    uVar44 = auVar193._12_4_;
    uVar32 = (undefined4)((ulonglong)lVar30 >> 0x20);
    uVar28 = vextractps_avx(auVar233,1);
    uVar59 = vextractps_avx(auVar233,2);
    uVar58 = vextractps_avx(auVar233,3);
    lVar62 = auVar461._8_4_ + param_2;
    lVar60 = auVar461._12_4_ + param_2;
    auVar234._8_8_ = 0;
    auVar234._0_8_ = *(ulonglong *)((ulonglong)(uVar43 & _UNK_1512879d8) + lVar62);
    local_910 = vmovhpd_avx(auVar234,*(undefined8 *)((ulonglong)(uVar44 & _UNK_1512879dc) + lVar60))
    ;
    lVar73 = auVar461._0_4_ + param_2;
    auVar235._8_8_ = 0;
    auVar235._0_8_ = *(ulonglong *)((ulonglong)(uVar41 & _UNK_1512879d0) + lVar73);
    lVar30 = auVar464._8_4_ + param_2;
    lVar54 = auVar461._4_4_ + param_2;
    local_920 = vmovhps_avx(auVar235,*(undefined8 *)((ulonglong)(uVar42 & _UNK_1512879d4) + lVar54))
    ;
    auVar236._0_4_ =
         uVar66 & ___ymm_0000038800000308000002880000020800000188000001080000008800000008;
    auVar236._4_4_ = uVar71 & _UNK_1512879e4;
    auVar236._8_4_ = uVar39 & _UNK_1512879e8;
    auVar236._12_4_ = uVar40 & _UNK_1512879ec;
    uVar52 = (undefined4)((ulonglong)lVar54 >> 0x20);
    uVar46 = vextractps_avx(auVar236,1);
    uVar47 = vextractps_avx(auVar236,2);
    uVar48 = vextractps_avx(auVar236,3);
    auVar237._8_8_ = 0;
    auVar237._0_8_ = *(ulonglong *)((ulonglong)uVar59 + lVar30);
    lVar51 = auVar464._12_4_ + param_2;
    local_930 = vmovhps_avx(auVar237,*(undefined8 *)(CONCAT44(uVar32,uVar58) + lVar51));
    auVar238._0_4_ =
         uVar66 & ___ymm_0000039800000318000002980000021800000198000001180000009800000018;
    auVar238._4_4_ = uVar71 & _UNK_151287a24;
    auVar238._8_4_ = uVar39 & _UNK_151287a28;
    auVar238._12_4_ = uVar40 & _UNK_151287a2c;
    uVar58 = vextractps_avx(auVar238,1);
    uVar64 = vextractps_avx(auVar238,2);
    uVar53 = vextractps_avx(auVar238,3);
    auVar239._0_4_ =
         uVar66 & ___ymm_000003b000000330000002b000000230000001b000000130000000b000000030;
    auVar239._4_4_ = uVar71 & _UNK_151287a84;
    auVar239._8_4_ = uVar39 & _UNK_151287a88;
    auVar239._12_4_ = uVar40 & _UNK_151287a8c;
    uVar59 = vextractps_avx(auVar239,1);
    uVar67 = vextractps_avx(auVar239,2);
    uVar72 = vextractps_avx(auVar239,3);
    auVar240._0_4_ =
         uVar66 & ___ymm_000003c800000348000002c800000248000001c800000148000000c800000048;
    auVar240._4_4_ = uVar71 & _UNK_151287ae4;
    auVar240._8_4_ = uVar39 & _UNK_151287ae8;
    auVar240._12_4_ = uVar40 & _UNK_151287aec;
    uVar34 = vextractps_avx(auVar240,1);
    uVar35 = vextractps_avx(auVar240,2);
    uVar36 = vextractps_avx(auVar240,3);
    lVar57 = auVar464._4_4_ + param_2;
    auVar241._0_4_ =
         uVar66 & ___ymm_000003e000000360000002e000000260000001e000000160000000e000000060;
    auVar241._4_4_ = uVar71 & _UNK_151287b44;
    auVar241._8_4_ = uVar39 & _UNK_151287b48;
    auVar241._12_4_ = uVar40 & _UNK_151287b4c;
    uVar37 = vextractps_avx(auVar241,1);
    uVar38 = vextractps_avx(auVar241,2);
    uVar70 = vextractps_avx(auVar241,3);
    auVar242._8_8_ = 0;
    auVar242._0_8_ = *(ulonglong *)(param_2 + auVar464._0_4_);
    local_940 = vmovhps_avx(auVar242,*(undefined8 *)(CONCAT44(uVar32,uVar28) + lVar57));
    param_2 = param_2 + auVar464._0_4_;
    auVar407._8_8_ = 0;
    auVar407._0_8_ = *(ulonglong *)((ulonglong)auVar236._0_4_ + param_2);
    local_900 = vmovhps_avx(auVar407,*(undefined8 *)(CONCAT44(uVar52,uVar46) + lVar57));
    auVar243._8_8_ = 0;
    auVar243._0_8_ = *(ulonglong *)((ulonglong)(uVar43 & _UNK_1512879f8) + lVar62);
    local_8d0 = vmovhps_avx(auVar243,*(undefined8 *)((ulonglong)(uVar44 & _UNK_1512879fc) + lVar60))
    ;
    auVar244._8_8_ = 0;
    auVar244._0_8_ = *(ulonglong *)((ulonglong)(uVar41 & _UNK_1512879f0) + lVar73);
    local_8e0 = vmovhps_avx(auVar244,*(undefined8 *)((ulonglong)(uVar42 & _UNK_1512879f4) + lVar54))
    ;
    auVar245._8_8_ = 0;
    auVar245._0_8_ = *(ulonglong *)(CONCAT44(uVar52,uVar47) + lVar30);
    local_8f0 = vmovhps_avx(auVar245,*(undefined8 *)(CONCAT44(uVar52,uVar48) + lVar51));
    auVar246._8_8_ = 0;
    auVar246._0_8_ =
         *(ulonglong *)
          ((ulonglong)
           (uVar66 & ___ymm_0000039000000310000002900000021000000190000001100000009000000010) +
          param_2);
    local_8c0 = vmovhps_avx(auVar246,*(undefined8 *)((ulonglong)(uVar71 & _UNK_151287a04) + lVar57))
    ;
    auVar408._8_8_ = 0;
    auVar408._0_8_ = *(ulonglong *)((ulonglong)(uVar43 & _UNK_151287a18) + lVar62);
    local_890 = vmovhps_avx(auVar408,*(undefined8 *)((ulonglong)(uVar44 & _UNK_151287a1c) + lVar60))
    ;
    auVar409._8_8_ = 0;
    auVar409._0_8_ = *(ulonglong *)((ulonglong)(uVar41 & _UNK_151287a10) + lVar73);
    local_8a0 = vmovhps_avx(auVar409,*(undefined8 *)((ulonglong)(uVar42 & _UNK_151287a14) + lVar54))
    ;
    auVar410._8_8_ = 0;
    auVar410._0_8_ = *(ulonglong *)((ulonglong)(uVar39 & _UNK_151287a08) + lVar30);
    local_8b0 = vmovhps_avx(auVar410,*(undefined8 *)((ulonglong)(uVar40 & _UNK_151287a0c) + lVar51))
    ;
    auVar411._8_8_ = 0;
    auVar411._0_8_ = *(ulonglong *)((ulonglong)auVar238._0_4_ + param_2);
    local_880 = vmovhps_avx(auVar411,*(undefined8 *)(CONCAT44(uVar32,uVar58) + lVar57));
    auVar247._8_8_ = 0;
    auVar247._0_8_ = *(ulonglong *)((ulonglong)(uVar43 & _UNK_151287a38) + lVar62);
    local_850 = vmovhps_avx(auVar247,*(undefined8 *)((ulonglong)(uVar44 & _UNK_151287a3c) + lVar60))
    ;
    auVar248._8_8_ = 0;
    auVar248._0_8_ = *(ulonglong *)((ulonglong)(uVar41 & _UNK_151287a30) + lVar73);
    local_860 = vmovhps_avx(auVar248,*(undefined8 *)((ulonglong)(uVar42 & _UNK_151287a34) + lVar54))
    ;
    auVar249._8_8_ = 0;
    auVar249._0_8_ = *(ulonglong *)(CONCAT44(uVar32,uVar64) + lVar30);
    local_870 = vmovhps_avx(auVar249,*(undefined8 *)(CONCAT44(uVar32,uVar53) + lVar51));
    auVar250._8_8_ = 0;
    auVar250._0_8_ =
         *(ulonglong *)
          ((ulonglong)
           (uVar66 & ___ymm_000003a000000320000002a000000220000001a000000120000000a000000020) +
          param_2);
    local_840 = vmovhps_avx(auVar250,*(undefined8 *)((ulonglong)(uVar71 & _UNK_151287a44) + lVar57))
    ;
    auVar412._8_8_ = 0;
    auVar412._0_8_ = *(ulonglong *)((ulonglong)(uVar43 & _UNK_151287a58) + lVar62);
    local_810 = vmovhps_avx(auVar412,*(undefined8 *)((ulonglong)(uVar44 & _UNK_151287a5c) + lVar60))
    ;
    auVar413._8_8_ = 0;
    auVar413._0_8_ = *(ulonglong *)((ulonglong)(uVar41 & _UNK_151287a50) + lVar73);
    local_820 = vmovhps_avx(auVar413,*(undefined8 *)((ulonglong)(uVar42 & _UNK_151287a54) + lVar54))
    ;
    auVar414._8_8_ = 0;
    auVar414._0_8_ = *(ulonglong *)((ulonglong)(uVar39 & _UNK_151287a48) + lVar30);
    local_830 = vmovhps_avx(auVar414,*(undefined8 *)((ulonglong)(uVar40 & _UNK_151287a4c) + lVar51))
    ;
    auVar415._8_8_ = 0;
    auVar415._0_8_ =
         *(ulonglong *)
          ((ulonglong)
           (uVar66 & ___ymm_000003a800000328000002a800000228000001a800000128000000a800000028) +
          param_2);
    local_800 = vmovhps_avx(auVar415,*(undefined8 *)((ulonglong)(uVar71 & _UNK_151287a64) + lVar57))
    ;
    auVar251._8_8_ = 0;
    auVar251._0_8_ = *(ulonglong *)((ulonglong)(uVar43 & _UNK_151287a78) + lVar62);
    local_7d0 = vmovhps_avx(auVar251,*(undefined8 *)((ulonglong)(uVar44 & _UNK_151287a7c) + lVar60))
    ;
    auVar252._8_8_ = 0;
    auVar252._0_8_ = *(ulonglong *)((ulonglong)(uVar41 & _UNK_151287a70) + lVar73);
    local_7e0 = vmovhps_avx(auVar252,*(undefined8 *)((ulonglong)(uVar42 & _UNK_151287a74) + lVar54))
    ;
    auVar253._8_8_ = 0;
    auVar253._0_8_ = *(ulonglong *)((ulonglong)(uVar39 & _UNK_151287a68) + lVar30);
    local_7f0 = vmovhps_avx(auVar253,*(undefined8 *)((ulonglong)(uVar40 & _UNK_151287a6c) + lVar51))
    ;
    auVar254._8_8_ = 0;
    auVar254._0_8_ = *(ulonglong *)((ulonglong)auVar239._0_4_ + param_2);
    local_7c0 = vmovhps_avx(auVar254,*(undefined8 *)((ulonglong)uVar59 + lVar57));
    auVar416._8_8_ = 0;
    auVar416._0_8_ = *(ulonglong *)((ulonglong)(uVar43 & _UNK_151287a98) + lVar62);
    local_790 = vmovhps_avx(auVar416,*(undefined8 *)((ulonglong)(uVar44 & _UNK_151287a9c) + lVar60))
    ;
    auVar417._8_8_ = 0;
    auVar417._0_8_ = *(ulonglong *)((ulonglong)(uVar41 & _UNK_151287a90) + lVar73);
    local_7a0 = vmovhps_avx(auVar417,*(undefined8 *)((ulonglong)(uVar42 & _UNK_151287a94) + lVar54))
    ;
    auVar418._8_8_ = 0;
    auVar418._0_8_ = *(ulonglong *)((ulonglong)uVar67 + lVar30);
    local_7b0 = vmovhps_avx(auVar418,*(undefined8 *)((ulonglong)uVar72 + lVar51));
    auVar419._8_8_ = 0;
    auVar419._0_8_ =
         *(ulonglong *)
          ((ulonglong)
           (uVar66 & ___ymm_000003b800000338000002b800000238000001b800000138000000b800000038) +
          param_2);
    local_780 = vmovhps_avx(auVar419,*(undefined8 *)((ulonglong)(uVar71 & _UNK_151287aa4) + lVar57))
    ;
    auVar255._8_8_ = 0;
    auVar255._0_8_ = *(ulonglong *)((ulonglong)(uVar43 & _UNK_151287ab8) + lVar62);
    local_750 = vmovhps_avx(auVar255,*(undefined8 *)((ulonglong)(uVar44 & _UNK_151287abc) + lVar60))
    ;
    auVar256._8_8_ = 0;
    auVar256._0_8_ = *(ulonglong *)((ulonglong)(uVar41 & _UNK_151287ab0) + lVar73);
    local_760 = vmovhps_avx(auVar256,*(undefined8 *)((ulonglong)(uVar42 & _UNK_151287ab4) + lVar54))
    ;
    auVar257._8_8_ = 0;
    auVar257._0_8_ = *(ulonglong *)((ulonglong)(uVar39 & _UNK_151287aa8) + lVar30);
    local_770 = vmovhps_avx(auVar257,*(undefined8 *)((ulonglong)(uVar40 & _UNK_151287aac) + lVar51))
    ;
    auVar258._8_8_ = 0;
    auVar258._0_8_ =
         *(ulonglong *)
          ((ulonglong)
           (uVar66 & ___ymm_000003c000000340000002c000000240000001c000000140000000c000000040) +
          param_2);
    local_740 = vmovhps_avx(auVar258,*(undefined8 *)((ulonglong)(uVar71 & _UNK_151287ac4) + lVar57))
    ;
    auVar420._8_8_ = 0;
    auVar420._0_8_ = *(ulonglong *)((ulonglong)(uVar43 & _UNK_151287ad8) + lVar62);
    local_710 = vmovhps_avx(auVar420,*(undefined8 *)((ulonglong)(uVar44 & _UNK_151287adc) + lVar60))
    ;
    auVar421._8_8_ = 0;
    auVar421._0_8_ = *(ulonglong *)((ulonglong)(uVar41 & _UNK_151287ad0) + lVar73);
    local_720 = vmovhps_avx(auVar421,*(undefined8 *)((ulonglong)(uVar42 & _UNK_151287ad4) + lVar54))
    ;
    auVar422._8_8_ = 0;
    auVar422._0_8_ = *(ulonglong *)((ulonglong)(uVar39 & _UNK_151287ac8) + lVar30);
    local_730 = vmovhps_avx(auVar422,*(undefined8 *)((ulonglong)(uVar40 & _UNK_151287acc) + lVar51))
    ;
    auVar423._8_8_ = 0;
    auVar423._0_8_ = *(ulonglong *)((ulonglong)auVar240._0_4_ + param_2);
    local_700 = vmovhps_avx(auVar423,*(undefined8 *)((ulonglong)uVar34 + lVar57));
    auVar259._8_8_ = 0;
    auVar259._0_8_ = *(ulonglong *)((ulonglong)(uVar43 & _UNK_151287af8) + lVar62);
    local_6d0 = vmovhps_avx(auVar259,*(undefined8 *)((ulonglong)(uVar44 & _UNK_151287afc) + lVar60))
    ;
    auVar260._8_8_ = 0;
    auVar260._0_8_ = *(ulonglong *)((ulonglong)(uVar41 & _UNK_151287af0) + lVar73);
    local_6e0 = vmovhps_avx(auVar260,*(undefined8 *)((ulonglong)(uVar42 & _UNK_151287af4) + lVar54))
    ;
    auVar261._8_8_ = 0;
    auVar261._0_8_ = *(ulonglong *)((ulonglong)uVar35 + lVar30);
    local_6f0 = vmovhps_avx(auVar261,*(undefined8 *)((ulonglong)uVar36 + lVar51));
    auVar262._8_8_ = 0;
    auVar262._0_8_ =
         *(ulonglong *)
          ((ulonglong)
           (uVar66 & ___ymm_000003d000000350000002d000000250000001d000000150000000d000000050) +
          param_2);
    local_6c0 = vmovhps_avx(auVar262,*(undefined8 *)((ulonglong)(uVar71 & _UNK_151287b04) + lVar57))
    ;
    auVar424._8_8_ = 0;
    auVar424._0_8_ = *(ulonglong *)((ulonglong)(uVar43 & _UNK_151287b18) + lVar62);
    local_690 = vmovhps_avx(auVar424,*(undefined8 *)((ulonglong)(uVar44 & _UNK_151287b1c) + lVar60))
    ;
    auVar425._8_8_ = 0;
    auVar425._0_8_ = *(ulonglong *)((ulonglong)(uVar41 & _UNK_151287b10) + lVar73);
    local_6a0 = vmovhps_avx(auVar425,*(undefined8 *)((ulonglong)(uVar42 & _UNK_151287b14) + lVar54))
    ;
    auVar426._8_8_ = 0;
    auVar426._0_8_ = *(ulonglong *)((ulonglong)(uVar39 & _UNK_151287b08) + lVar30);
    local_6b0 = vmovhps_avx(auVar426,*(undefined8 *)((ulonglong)(uVar40 & _UNK_151287b0c) + lVar51))
    ;
    auVar427._8_8_ = 0;
    auVar427._0_8_ =
         *(ulonglong *)
          ((ulonglong)
           (uVar66 & ___ymm_000003d800000358000002d800000258000001d800000158000000d800000058) +
          param_2);
    local_680 = vmovhps_avx(auVar427,*(undefined8 *)((ulonglong)(uVar71 & _UNK_151287b24) + lVar57))
    ;
    auVar263._8_8_ = 0;
    auVar263._0_8_ = *(ulonglong *)((ulonglong)(uVar43 & _UNK_151287b38) + lVar62);
    local_650 = vmovhps_avx(auVar263,*(undefined8 *)((ulonglong)(uVar44 & _UNK_151287b3c) + lVar60))
    ;
    auVar264._8_8_ = 0;
    auVar264._0_8_ = *(ulonglong *)((ulonglong)(uVar41 & _UNK_151287b30) + lVar73);
    local_660 = vmovhps_avx(auVar264,*(undefined8 *)((ulonglong)(uVar42 & _UNK_151287b34) + lVar54))
    ;
    auVar265._8_8_ = 0;
    auVar265._0_8_ = *(ulonglong *)((ulonglong)(uVar39 & _UNK_151287b28) + lVar30);
    local_670 = vmovhps_avx(auVar265,*(undefined8 *)((ulonglong)(uVar40 & _UNK_151287b2c) + lVar51))
    ;
    auVar266._8_8_ = 0;
    auVar266._0_8_ = *(ulonglong *)((ulonglong)auVar241._0_4_ + param_2);
    local_640 = vmovhps_avx(auVar266,*(undefined8 *)((ulonglong)uVar37 + lVar57));
    auVar428._8_8_ = 0;
    auVar428._0_8_ = *(ulonglong *)((ulonglong)(uVar43 & _UNK_151287b58) + lVar62);
    local_610 = vmovhps_avx(auVar428,*(undefined8 *)((ulonglong)(uVar44 & _UNK_151287b5c) + lVar60))
    ;
    auVar429._8_8_ = 0;
    auVar429._0_8_ = *(ulonglong *)((ulonglong)(uVar41 & _UNK_151287b50) + lVar73);
    local_620 = vmovhps_avx(auVar429,*(undefined8 *)((ulonglong)(uVar42 & _UNK_151287b54) + lVar54))
    ;
    auVar430._8_8_ = 0;
    auVar430._0_8_ = *(ulonglong *)((ulonglong)uVar38 + lVar30);
    local_630 = vmovhps_avx(auVar430,*(undefined8 *)((ulonglong)uVar70 + lVar51));
    auVar267._0_4_ =
         uVar66 & ___ymm_000003e800000368000002e800000268000001e800000168000000e800000068;
    auVar267._4_4_ = uVar71 & _UNK_151287b64;
    auVar267._8_4_ = uVar39 & _UNK_151287b68;
    auVar267._12_4_ = uVar40 & _UNK_151287b6c;
    uVar59 = vextractps_avx(auVar267,1);
    uVar28 = vextractps_avx(auVar267,2);
    auVar431._8_8_ = 0;
    auVar431._0_8_ = *(ulonglong *)((ulonglong)(uVar43 & _UNK_151287b78) + lVar62);
    local_5d0 = vmovhps_avx(auVar431,*(undefined8 *)((ulonglong)(uVar44 & _UNK_151287b7c) + lVar60))
    ;
    auVar268._8_8_ = 0;
    auVar268._0_8_ = *(ulonglong *)((ulonglong)(uVar41 & _UNK_151287b70) + lVar73);
    local_5e0 = vmovhps_avx(auVar268,*(undefined8 *)((ulonglong)(uVar42 & _UNK_151287b74) + lVar54))
    ;
    auVar269._8_8_ = 0;
    auVar269._0_8_ = *(ulonglong *)(CONCAT44((int)((ulonglong)lVar51 >> 0x20),uVar28) + lVar30);
    local_5f0 = vmovhps_avx(auVar269,*(undefined8 *)((ulonglong)auVar267._12_4_ + lVar51));
    auVar270._8_8_ = 0;
    auVar270._0_8_ = *(ulonglong *)((ulonglong)auVar267._0_4_ + param_2);
    local_600 = vmovhps_avx(auVar270,*(undefined8 *)((ulonglong)uVar59 + lVar57));
    auVar432._0_4_ =
         uVar66 & ___ymm_000003f000000370000002f000000270000001f000000170000000f000000070;
    auVar432._4_4_ = uVar71 & _UNK_151287b84;
    auVar432._8_4_ = uVar39 & _UNK_151287b88;
    auVar432._12_4_ = uVar40 & _UNK_151287b8c;
    uVar59 = vextractps_avx(auVar432,1);
    uVar67 = vextractps_avx(auVar432,2);
    auVar271._8_8_ = 0;
    auVar271._0_8_ = *(ulonglong *)((ulonglong)(uVar43 & _UNK_151287b98) + lVar62);
    local_590 = vmovhps_avx(auVar271,*(undefined8 *)((ulonglong)(uVar44 & _UNK_151287b9c) + lVar60))
    ;
    auVar272._8_8_ = 0;
    auVar272._0_8_ = *(ulonglong *)((ulonglong)(uVar41 & _UNK_151287b90) + lVar73);
    local_5a0 = vmovhps_avx(auVar272,*(undefined8 *)((ulonglong)(uVar42 & _UNK_151287b94) + lVar54))
    ;
    auVar273._8_8_ = 0;
    auVar273._0_8_ = *(ulonglong *)((ulonglong)auVar432._0_4_ + param_2);
    local_5c0 = vmovhps_avx(auVar273,*(undefined8 *)((ulonglong)uVar59 + lVar57));
    auVar433._8_8_ = 0;
    auVar433._0_8_ = *(ulonglong *)((ulonglong)uVar67 + lVar30);
    local_5b0 = vmovhps_avx(auVar433,*(undefined8 *)((ulonglong)auVar432._12_4_ + lVar51));
    auVar434._8_8_ = 0;
    auVar434._0_8_ =
         *(ulonglong *)
          ((ulonglong)
           (uVar66 & ___ymm_000003f800000378000002f800000278000001f800000178000000f800000078) +
          param_2);
    local_580 = vmovhps_avx(auVar434,*(undefined8 *)((ulonglong)(uVar71 & _UNK_151287ba4) + lVar57))
    ;
    auVar274._8_8_ = 0;
    auVar274._0_8_ = *(ulonglong *)((ulonglong)(uVar43 & _UNK_151287bb8) + lVar62);
    local_550 = vmovhps_avx(auVar274,*(undefined8 *)((ulonglong)(uVar44 & _UNK_151287bbc) + lVar60))
    ;
    auVar275._8_8_ = 0;
    auVar275._0_8_ = *(ulonglong *)((ulonglong)(uVar41 & _UNK_151287bb0) + lVar73);
    local_560 = vmovhps_avx(auVar275,*(undefined8 *)((ulonglong)(uVar42 & _UNK_151287bb4) + lVar54))
    ;
    auVar276._8_8_ = 0;
    auVar276._0_8_ = *(ulonglong *)((ulonglong)(uVar39 & _UNK_151287ba8) + lVar30);
    local_570 = vmovhps_avx(auVar276,*(undefined8 *)((ulonglong)(uVar40 & _UNK_151287bac) + lVar51))
    ;
    dVar17 = param_4[8];
    dVar74 = *param_4;
    lVar62 = 0xc0;
    dVar75 = param_4[0xc];
    dVar76 = param_4[1];
    dVar77 = param_4[5];
    dVar78 = param_4[9];
    dVar305 = param_4[0xd];
    dVar306 = param_4[2];
    dVar307 = param_4[6];
    dVar308 = param_4[10];
    dVar309 = param_4[0xe];
    dVar310 = param_4[3];
    dVar311 = param_4[7];
    dVar312 = param_4[0xb];
    dVar313 = param_4[0xf];
    do {
      dVar315 = *(double *)(local_a00 + lVar62);
      dVar316 = *(double *)(local_a00 + lVar62 + 8);
      dVar317 = *(double *)(local_9f0 + lVar62);
      dVar318 = *(double *)(local_9f0 + lVar62 + 8);
      dVar319 = *(double *)(local_9e0 + lVar62);
      dVar487 = *(double *)(local_9e0 + lVar62 + 8);
      dVar517 = *(double *)(local_9d0 + lVar62);
      dVar518 = *(double *)(local_9d0 + lVar62 + 8);
      dVar519 = *(double *)(local_9c0 + lVar62);
      dVar520 = *(double *)(local_9c0 + lVar62 + 8);
      dVar544 = *(double *)(local_9b0 + lVar62);
      dVar545 = *(double *)(local_9b0 + lVar62 + 8);
      dVar546 = *(double *)(local_9a0 + lVar62);
      dVar573 = *(double *)(local_9a0 + lVar62 + 8);
      dVar591 = *(double *)(local_990 + lVar62);
      dVar592 = *(double *)(local_990 + lVar62 + 8);
      dVar593 = *(double *)(local_960 + lVar62);
      dVar594 = *(double *)(local_960 + lVar62 + 8);
      dVar595 = *(double *)(local_950 + lVar62);
      dVar610 = *(double *)(local_950 + lVar62 + 8);
      dVar611 = *(double *)(local_980 + lVar62);
      dVar612 = *(double *)(local_980 + lVar62 + 8);
      dVar613 = *(double *)(local_970 + lVar62);
      dVar614 = *(double *)(local_970 + lVar62 + 8);
      dVar615 = *(double *)(local_940 + lVar62);
      dVar639 = *(double *)(local_940 + lVar62 + 8);
      dVar640 = *(double *)(local_930 + lVar62);
      dVar657 = *(double *)(local_930 + lVar62 + 8);
      dVar658 = *(double *)(local_920 + lVar62);
      dVar659 = *(double *)(local_920 + lVar62 + 8);
      dVar660 = *(double *)(local_910 + lVar62);
      dVar661 = *(double *)(local_910 + lVar62 + 8);
      dVar314 = param_4[4];
      *(double *)((longlong)local_1e80 + lVar62 + 0x20) =
           dVar319 * dVar74 + 0.0 + dVar546 * dVar314 + dVar17 * dVar593 + dVar75 * dVar658;
      *(double *)((longlong)local_1e80 + lVar62 + 0x28) =
           dVar487 * dVar74 + 0.0 + dVar573 * dVar314 + dVar17 * dVar594 + dVar75 * dVar659;
      *(double *)((longlong)local_1e80 + lVar62 + 0x30) =
           dVar517 * dVar74 + 0.0 + dVar591 * dVar314 + dVar17 * dVar595 + dVar75 * dVar660;
      *(double *)((longlong)local_1e80 + lVar62 + 0x38) =
           dVar518 * dVar74 + 0.0 + dVar592 * dVar314 + dVar17 * dVar610 + dVar75 * dVar661;
      *(double *)((longlong)local_1e80 + lVar62) =
           dVar74 * dVar315 + 0.0 + dVar314 * dVar519 + dVar17 * dVar611 + dVar75 * dVar615;
      *(double *)((longlong)local_1e80 + lVar62 + 8) =
           dVar74 * dVar316 + 0.0 + dVar314 * dVar520 + dVar17 * dVar612 + dVar75 * dVar639;
      *(double *)((longlong)local_1e80 + lVar62 + 0x10) =
           dVar74 * dVar317 + 0.0 + dVar314 * dVar544 + dVar17 * dVar613 + dVar75 * dVar640;
      *(double *)((longlong)local_1e80 + lVar62 + 0x18) =
           dVar74 * dVar318 + 0.0 + dVar314 * dVar545 + dVar17 * dVar614 + dVar75 * dVar657;
      *(double *)((longlong)local_1e80 + lVar62 + 0x60) =
           dVar319 * dVar76 + 0.0 + dVar546 * dVar77 + dVar78 * dVar593 + dVar305 * dVar658;
      *(double *)((longlong)local_1e80 + lVar62 + 0x68) =
           dVar487 * dVar76 + 0.0 + dVar573 * dVar77 + dVar78 * dVar594 + dVar305 * dVar659;
      *(double *)((longlong)local_1e80 + lVar62 + 0x70) =
           dVar517 * dVar76 + 0.0 + dVar591 * dVar77 + dVar78 * dVar595 + dVar305 * dVar660;
      *(double *)((longlong)local_1e80 + lVar62 + 0x78) =
           dVar518 * dVar76 + 0.0 + dVar592 * dVar77 + dVar78 * dVar610 + dVar305 * dVar661;
      *(double *)((longlong)local_1e80 + lVar62 + 0x40) =
           dVar76 * dVar315 + 0.0 + dVar77 * dVar519 + dVar78 * dVar611 + dVar305 * dVar615;
      *(double *)((longlong)local_1e80 + lVar62 + 0x48) =
           dVar76 * dVar316 + 0.0 + dVar77 * dVar520 + dVar78 * dVar612 + dVar305 * dVar639;
      *(double *)((longlong)local_1e80 + lVar62 + 0x50) =
           dVar76 * dVar317 + 0.0 + dVar77 * dVar544 + dVar78 * dVar613 + dVar305 * dVar640;
      *(double *)((longlong)local_1e80 + lVar62 + 0x58) =
           dVar76 * dVar318 + 0.0 + dVar77 * dVar545 + dVar78 * dVar614 + dVar305 * dVar657;
      *(double *)((longlong)local_1e80 + lVar62 + 0xa0) =
           dVar319 * dVar306 + 0.0 + dVar546 * dVar307 + dVar308 * dVar593 + dVar309 * dVar658;
      *(double *)((longlong)local_1e80 + lVar62 + 0xa8) =
           dVar487 * dVar306 + 0.0 + dVar573 * dVar307 + dVar308 * dVar594 + dVar309 * dVar659;
      *(double *)((longlong)local_1e80 + lVar62 + 0xb0) =
           dVar517 * dVar306 + 0.0 + dVar591 * dVar307 + dVar308 * dVar595 + dVar309 * dVar660;
      *(double *)(local_1dc0 + lVar62 + -8) =
           dVar518 * dVar306 + 0.0 + dVar592 * dVar307 + dVar308 * dVar610 + dVar309 * dVar661;
      *(double *)((longlong)local_1e80 + lVar62 + 0x80) =
           dVar306 * dVar315 + 0.0 + dVar307 * dVar519 + dVar308 * dVar611 + dVar309 * dVar615;
      *(double *)((longlong)local_1e80 + lVar62 + 0x88) =
           dVar306 * dVar316 + 0.0 + dVar307 * dVar520 + dVar308 * dVar612 + dVar309 * dVar639;
      *(double *)((longlong)local_1e80 + lVar62 + 0x90) =
           dVar306 * dVar317 + 0.0 + dVar307 * dVar544 + dVar308 * dVar613 + dVar309 * dVar640;
      *(double *)((longlong)local_1e80 + lVar62 + 0x98) =
           dVar306 * dVar318 + 0.0 + dVar307 * dVar545 + dVar308 * dVar614 + dVar309 * dVar657;
      *(double *)(local_1da0 + lVar62) =
           dVar319 * dVar310 + 0.0 + dVar546 * dVar311 + dVar312 * dVar593 + dVar658 * dVar313;
      *(double *)(local_1da0 + lVar62 + 8) =
           dVar487 * dVar310 + 0.0 + dVar573 * dVar311 + dVar312 * dVar594 + dVar659 * dVar313;
      *(double *)(local_1da0 + lVar62 + 0x10) =
           dVar517 * dVar310 + 0.0 + dVar591 * dVar311 + dVar312 * dVar595 + dVar660 * dVar313;
      *(double *)(local_1da0 + lVar62 + 0x18) =
           dVar518 * dVar310 + 0.0 + dVar592 * dVar311 + dVar312 * dVar610 + dVar661 * dVar313;
      *(double *)(local_1dc0 + lVar62) =
           dVar310 * dVar315 + 0.0 + dVar311 * dVar519 + dVar312 * dVar611 + dVar615 * dVar313;
      *(double *)(local_1dc0 + lVar62 + 8) =
           dVar310 * dVar316 + 0.0 + dVar311 * dVar520 + dVar312 * dVar612 + dVar639 * dVar313;
      *(double *)(local_1dc0 + lVar62 + 0x10) =
           dVar310 * dVar317 + 0.0 + dVar311 * dVar544 + dVar312 * dVar613 + dVar640 * dVar313;
      *(double *)(local_1dc0 + lVar62 + 0x18) =
           dVar310 * dVar318 + 0.0 + dVar311 * dVar545 + dVar312 * dVar614 + dVar657 * dVar313;
      lVar62 = lVar62 + 0x100;
    } while (lVar62 != 0x4c0);
    local_2100 = auVar617._0_8_;
    dStack_20f8 = auVar617._8_8_;
    dStack_20f0 = auVar568._0_8_;
    dStack_20e8 = auVar568._8_8_;
    local_1ea0 = auVar192._0_8_;
    dStack_1e98 = auVar192._8_8_;
    dStack_1e90 = auVar188._0_8_;
    dStack_1e88 = auVar188._8_8_;
    local_1e80[0] = auVar191._0_8_;
    local_1e80[1] = auVar191._8_8_;
    local_1e80[2] = auVar189._0_8_;
    local_1e80[3] = auVar189._8_8_;
    local_1e80[0x14] = auVar469._0_8_;
    local_1e80[0x15] = auVar469._8_8_;
    local_1e80[0x16] = auVar580._0_8_;
    local_1e80[0x17] = auVar580._8_8_;
    dVar78 = (local_2100 + local_1ea0) * __real_3fe0000000000000;
    dVar305 = (dStack_20f8 + dStack_1e98) * __real_3fe0000000000000;
    dVar306 = (dStack_20f0 + dStack_1e90) * __real_3fe0000000000000;
    dVar307 = (dStack_20e8 + dStack_1e88) * __real_3fe0000000000000;
    dVar312 = (local_1e80[0] + local_1e80[0x14]) * __real_3fe0000000000000;
    dVar313 = (local_1e80[1] + local_1e80[0x15]) * __real_3fe0000000000000;
    dVar314 = (local_1e80[2] + local_1e80[0x16]) * __real_3fe0000000000000;
    dVar315 = (local_1e80[3] + local_1e80[0x17]) * __real_3fe0000000000000;
    local_2020 = auVar468._0_8_;
    dStack_2018 = auVar468._8_8_;
    dStack_2010 = auVar467._0_8_;
    dStack_2008 = auVar467._8_8_;
    dVar487 = (local_18a0._0_8_ + local_2020) * __real_3fe0000000000000;
    dVar517 = (local_18a0._8_8_ + dStack_2018) * __real_3fe0000000000000;
    dVar518 = (local_18a0._16_8_ + dStack_2010) * __real_3fe0000000000000;
    dVar519 = (local_18a0._24_8_ + dStack_2008) * __real_3fe0000000000000;
    local_1e80[4] = auVar465._0_8_;
    local_1e80[5] = auVar465._8_8_;
    local_1e80[6] = auVar190._0_8_;
    local_1e80[7] = auVar190._8_8_;
    dVar520 = (local_18c0._0_8_ + local_1e80[4]) * __real_3fe0000000000000;
    dVar546 = (local_18c0._8_8_ + local_1e80[5]) * __real_3fe0000000000000;
    dVar592 = (local_18c0._16_8_ + local_1e80[6]) * __real_3fe0000000000000;
    dVar595 = (local_18c0._24_8_ + local_1e80[7]) * __real_3fe0000000000000;
    dVar17 = (double)CONCAT17(uStack_1c39,
                              CONCAT16(uStack_1c3a,
                                       CONCAT15(uStack_1c3b,
                                                CONCAT14(uStack_1c3c,
                                                         CONCAT13(uStack_1c3d,
                                                                  CONCAT12(uStack_1c3e,
                                                                           CONCAT11(uStack_1c3f,
                                                                                    local_1c40))))))
                             );
    dVar544 = (local_1960._0_8_ + local_18e0._0_8_) * __real_3fe0000000000000;
    dVar573 = (local_1960._8_8_ + local_18e0._8_8_) * __real_3fe0000000000000;
    dVar593 = (local_1960._16_8_ + local_18e0._16_8_) * __real_3fe0000000000000;
    dVar610 = (local_1960._24_8_ + local_18e0._24_8_) * __real_3fe0000000000000;
    dVar639 = (local_1880._0_8_ + local_1900._0_8_) * __real_3fe0000000000000;
    dVar657 = (local_1880._8_8_ + local_1900._8_8_) * __real_3fe0000000000000;
    dVar659 = (local_1880._16_8_ + local_1900._16_8_) * __real_3fe0000000000000;
    dVar661 = (local_1880._24_8_ + local_1900._24_8_) * __real_3fe0000000000000;
    auVar442 = vsubpd_avx(auVar292,auVar446);
    auVar289 = vsubpd_avx(local_18a0,auVar291);
    auVar287 = vsubpd_avx(auVar293,auVar447);
    auVar651 = vsubpd_avx(local_18c0,auVar607);
    auVar539 = vsubpd_avx(local_18e0,local_1960);
    auVar481 = vsubpd_avx(local_1900,local_1880);
    dVar545 = auVar289._0_8_ * __real_3fe0000000000000;
    dVar591 = auVar289._8_8_ * __real_3fe0000000000000;
    dVar594 = auVar289._16_8_ * __real_3fe0000000000000;
    dVar611 = auVar289._24_8_ * __real_3fe0000000000000;
    dVar74 = auVar442._0_8_ * __real_3fe0000000000000;
    dVar75 = auVar442._8_8_ * __real_3fe0000000000000;
    dVar76 = auVar442._16_8_ * __real_3fe0000000000000;
    dVar77 = auVar442._24_8_ * __real_3fe0000000000000;
    dVar640 = auVar651._0_8_ * __real_3fe0000000000000;
    dVar658 = auVar651._8_8_ * __real_3fe0000000000000;
    dVar660 = auVar651._16_8_ * __real_3fe0000000000000;
    dVar662 = auVar651._24_8_ * __real_3fe0000000000000;
    dVar612 = auVar287._0_8_ * __real_3fe0000000000000;
    dVar613 = auVar287._8_8_ * __real_3fe0000000000000;
    dVar614 = auVar287._16_8_ * __real_3fe0000000000000;
    dVar615 = auVar287._24_8_ * __real_3fe0000000000000;
    dVar308 = auVar481._0_8_ * __real_3fe0000000000000;
    dVar309 = auVar481._8_8_ * __real_3fe0000000000000;
    dVar310 = auVar481._16_8_ * __real_3fe0000000000000;
    dVar311 = auVar481._24_8_ * __real_3fe0000000000000;
    dVar316 = auVar539._0_8_ * __real_3fe0000000000000;
    dVar317 = auVar539._8_8_ * __real_3fe0000000000000;
    dVar318 = auVar539._16_8_ * __real_3fe0000000000000;
    dVar319 = auVar539._24_8_ * __real_3fe0000000000000;
    auVar511._0_8_ =
         (double)((ulonglong)(dVar308 * local_1bc0) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar612 * (double)local_1cc0._0_8_) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar74 * (double)local_1dc0) & __real_7fffffffffffffff);
    auVar511._8_8_ =
         (double)((ulonglong)(dVar309 * dStack_1bb8) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar613 * (double)local_1cc0._8_8_) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar75 * adStack_1db8[0]) & __real_7fffffffffffffff);
    auVar511._16_8_ =
         (double)((ulonglong)(dVar310 * dStack_1bb0) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar614 * dStack_1cb0) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar76 * adStack_1db8[1]) & __real_7fffffffffffffff);
    auVar511._24_8_ =
         (double)((ulonglong)(dVar311 * dStack_1ba8) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar615 * dStack_1ca8) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar77 * adStack_1db8[2]) & __real_7fffffffffffffff);
    auVar572._0_8_ =
         (double)((ulonglong)(dVar316 * local_1ba0) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar640 * (double)local_1ca0._0_8_) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar545 * (double)local_1da0) & __real_7fffffffffffffff);
    auVar572._8_8_ =
         (double)((ulonglong)(dVar317 * dStack_1b98) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar658 * (double)local_1ca0._8_8_) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar591 * adStack_1d98[0]) & __real_7fffffffffffffff);
    auVar572._16_8_ =
         (double)((ulonglong)(dVar318 * dStack_1b90) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar660 * dStack_1c90) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar594 * adStack_1d98[1]) & __real_7fffffffffffffff);
    auVar572._24_8_ =
         (double)((ulonglong)(dVar319 * dStack_1b88) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar662 * dStack_1c88) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar611 * adStack_1d98[2]) & __real_7fffffffffffffff);
    auVar473._0_8_ =
         (double)((ulonglong)(dVar308 * local_1b80) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar74 * (double)local_1d80._0_8_) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar612 * (double)local_1c80._0_8_) & __real_7fffffffffffffff);
    auVar473._8_8_ =
         (double)((ulonglong)(dVar309 * dStack_1b78) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar75 * (double)local_1d80._8_8_) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar613 * (double)local_1c80._8_8_) & __real_7fffffffffffffff);
    auVar484._16_8_ =
         (double)((ulonglong)(dVar310 * dStack_1b70) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar76 * dStack_1d70) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar614 * dStack_1c70) & __real_7fffffffffffffff);
    auVar484._0_16_ = auVar473;
    auVar484._24_8_ =
         (double)((ulonglong)(dVar311 * dStack_1b68) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar77 * dStack_1d68) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar615 * dStack_1c68) & __real_7fffffffffffffff);
    auVar608._0_8_ =
         dVar487 * (double)local_1da0 + dVar520 * (double)local_1ca0._0_8_ + dVar544 * local_1ba0 +
         local_1aa0;
    auVar608._8_8_ =
         dVar517 * adStack_1d98[0] + dVar546 * (double)local_1ca0._8_8_ + dVar573 * dStack_1b98 +
         dStack_1a98;
    auVar608._16_8_ =
         dVar518 * adStack_1d98[1] + dVar592 * dStack_1c90 + dVar593 * dStack_1b90 + dStack_1a90;
    auVar608._24_8_ =
         dVar519 * adStack_1d98[2] + dVar595 * dStack_1c88 + dVar610 * dStack_1b88 + dStack_1a88;
    auVar631._0_8_ =
         dVar639 * local_1bc0 + dVar78 * (double)local_1dc0 + dVar312 * (double)local_1cc0._0_8_ +
         local_1ac0;
    auVar631._8_8_ =
         dVar657 * dStack_1bb8 + dVar305 * adStack_1db8[0] + dVar313 * (double)local_1cc0._8_8_ +
         dStack_1ab8;
    auVar631._16_8_ =
         dVar659 * dStack_1bb0 + dVar306 * adStack_1db8[1] + dVar314 * dStack_1cb0 + dStack_1ab0;
    auVar631._24_8_ =
         dVar661 * dStack_1ba8 + dVar307 * adStack_1db8[2] + dVar315 * dStack_1ca8 + dStack_1aa8;
    auVar637._0_8_ =
         dVar487 * (double)local_1d60._0_8_ + dVar520 * (double)local_1c60._0_8_ +
         dVar544 * local_1b60 + local_1a60;
    auVar637._8_8_ =
         dVar517 * (double)local_1d60._8_8_ + dVar546 * (double)local_1c60._8_8_ +
         dVar573 * dStack_1b58 + dStack_1a58;
    auVar637._16_8_ =
         dVar518 * dStack_1d50 + dVar592 * dStack_1c50 + dVar593 * dStack_1b50 + dStack_1a50;
    auVar637._24_8_ =
         dVar519 * dStack_1d48 + dVar595 * dStack_1c48 + dVar610 * dStack_1b48 + dStack_1a48;
    auVar652._0_8_ =
         dVar639 * local_1b80 +
         dVar78 * (double)local_1d80._0_8_ + dVar312 * (double)local_1c80._0_8_ + local_1a80;
    auVar652._8_8_ =
         dVar657 * dStack_1b78 +
         dVar305 * (double)local_1d80._8_8_ + dVar313 * (double)local_1c80._8_8_ + dStack_1a78;
    auVar652._16_8_ =
         dVar659 * dStack_1b70 + dVar306 * dStack_1d70 + dVar314 * dStack_1c70 + dStack_1a70;
    auVar652._24_8_ =
         dVar661 * dStack_1b68 + dVar307 * dStack_1d68 + dVar315 * dStack_1c68 + dStack_1a68;
    auVar670._0_8_ =
         dVar487 * (double)local_1d20._0_8_ + dVar520 * local_1c20 + dVar544 * local_1b20 +
         local_1a20;
    auVar670._8_8_ =
         dVar517 * (double)local_1d20._8_8_ + dVar546 * dStack_1c18 + dVar573 * dStack_1b18 +
         dStack_1a18;
    auVar670._16_8_ =
         dVar518 * dStack_1d10 + dVar592 * dStack_1c10 + dVar593 * dStack_1b10 + dStack_1a10;
    auVar670._24_8_ =
         dVar519 * dStack_1d08 + dVar595 * dStack_1c08 + dVar610 * dStack_1b08 + dStack_1a08;
    auVar677._0_8_ =
         dVar639 * local_1b40 + dVar78 * (double)local_1d40._0_8_ + dVar312 * dVar17 + local_1a40;
    auVar677._8_8_ =
         dVar657 * dStack_1b38 + dVar305 * (double)local_1d40._8_8_ + dVar313 * dStack_1c38 +
         dStack_1a38;
    auVar677._16_8_ =
         dVar659 * dStack_1b30 + dVar306 * dStack_1d30 + dVar314 * dStack_1c30 + dStack_1a30;
    auVar677._24_8_ =
         dVar661 * dStack_1b28 + dVar307 * dStack_1d28 + dVar315 * dStack_1c28 + dStack_1a28;
    auVar294._0_8_ =
         (double)((ulonglong)(dVar316 * local_1b60) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar545 * (double)local_1d60._0_8_) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar640 * (double)local_1c60._0_8_) & __real_7fffffffffffffff);
    auVar294._8_8_ =
         (double)((ulonglong)(dVar317 * dStack_1b58) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar591 * (double)local_1d60._8_8_) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar658 * (double)local_1c60._8_8_) & __real_7fffffffffffffff);
    auVar294._16_8_ =
         (double)((ulonglong)(dVar318 * dStack_1b50) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar594 * dStack_1d50) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar660 * dStack_1c50) & __real_7fffffffffffffff);
    auVar294._24_8_ =
         (double)((ulonglong)(dVar319 * dStack_1b48) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar611 * dStack_1d48) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar662 * dStack_1c48) & __real_7fffffffffffffff);
    auVar540._0_8_ =
         (double)(__real_7fffffffffffffff & (ulonglong)(dVar74 * (double)local_1d40._0_8_)) +
         (double)((ulonglong)(dVar612 * dVar17) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar308 * local_1b40) & __real_7fffffffffffffff);
    auVar540._8_8_ =
         (double)(__real_7fffffffffffffff & (ulonglong)(dVar75 * (double)local_1d40._8_8_)) +
         (double)((ulonglong)(dVar613 * dStack_1c38) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar309 * dStack_1b38) & __real_7fffffffffffffff);
    auVar540._16_8_ =
         (double)(__real_7fffffffffffffff & (ulonglong)(dVar76 * dStack_1d30)) +
         (double)((ulonglong)(dVar614 * dStack_1c30) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar310 * dStack_1b30) & __real_7fffffffffffffff);
    auVar540._24_8_ =
         (double)(__real_7fffffffffffffff & (ulonglong)(dVar77 * dStack_1d28)) +
         (double)((ulonglong)(dVar615 * dStack_1c28) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar311 * dStack_1b28) & __real_7fffffffffffffff);
    auVar448._0_8_ =
         (double)((ulonglong)(dVar640 * local_1c20) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar545 * (double)local_1d20._0_8_) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar316 * local_1b20) & __real_7fffffffffffffff);
    auVar448._8_8_ =
         (double)((ulonglong)(dVar658 * dStack_1c18) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar591 * (double)local_1d20._8_8_) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar317 * dStack_1b18) & __real_7fffffffffffffff);
    auVar448._16_8_ =
         (double)((ulonglong)(dVar660 * dStack_1c10) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar594 * dStack_1d10) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar318 * dStack_1b10) & __real_7fffffffffffffff);
    auVar448._24_8_ =
         (double)((ulonglong)(dVar662 * dStack_1c08) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar611 * dStack_1d08) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar319 * dStack_1b08) & __real_7fffffffffffffff);
    auVar442 = vsubpd_avx(auVar631,auVar511);
    auVar289 = vsubpd_avx(auVar608,auVar572);
    auVar287 = vsubpd_avx(auVar652,auVar484);
    auVar651 = vsubpd_avx(auVar637,auVar294);
    local_2460._8_8_ = auVar631._8_8_ + auVar511._8_8_;
    local_2460._0_8_ = auVar631._0_8_ + auVar511._0_8_;
    dStack_2450 = auVar631._16_8_ + auVar511._16_8_;
    dStack_2448 = auVar631._24_8_ + auVar511._24_8_;
    auVar539 = vsubpd_avx(auVar677,auVar540);
    auVar609._0_8_ = auVar608._0_8_ + auVar572._0_8_;
    auVar609._8_8_ = auVar608._8_8_ + auVar572._8_8_;
    auVar609._16_8_ = auVar608._16_8_ + auVar572._16_8_;
    auVar609._24_8_ = auVar608._24_8_ + auVar572._24_8_;
    auVar481 = vsubpd_avx(auVar670,auVar448);
    auVar653._0_8_ = auVar652._0_8_ + auVar473._0_8_;
    auVar653._8_8_ = auVar652._8_8_ + auVar473._8_8_;
    auVar653._16_8_ = auVar652._16_8_ + auVar484._16_8_;
    auVar653._24_8_ = auVar652._24_8_ + auVar484._24_8_;
    auVar638._0_8_ = auVar637._0_8_ + auVar294._0_8_;
    auVar638._8_8_ = auVar637._8_8_ + auVar294._8_8_;
    auVar638._16_8_ = auVar637._16_8_ + auVar294._16_8_;
    auVar638._24_8_ = auVar637._24_8_ + auVar294._24_8_;
    auVar590._0_8_ = auVar677._0_8_ + auVar540._0_8_;
    auVar590._8_8_ = auVar677._8_8_ + auVar540._8_8_;
    auVar590._16_8_ = auVar677._16_8_ + auVar540._16_8_;
    auVar590._24_8_ = auVar677._24_8_ + auVar540._24_8_;
    auVar632._0_8_ = auVar670._0_8_ + auVar448._0_8_;
    auVar632._8_8_ = auVar670._8_8_ + auVar448._8_8_;
    auVar632._16_8_ = auVar670._16_8_ + auVar448._16_8_;
    auVar632._24_8_ = auVar670._24_8_ + auVar448._24_8_;
    auVar501._8_8_ = 0;
    auVar501._0_8_ = local_16c0;
    auVar461 = vpcmpeqb_avx(auVar501,ZEXT816(0) << 0x40);
    auVar465 = vpcmpeqd_avx(auVar473,auVar473);
    auVar464 = vpmovsxbd_avx(auVar461 ^ auVar465);
    auVar465 = vpshufd_avx(auVar461 ^ auVar465,0x55);
    auVar465 = vpmovsxbd_avx(auVar465);
    uVar59 = local_1920._0_4_;
    local_24a0._0_4_ = auVar464._0_4_ & uVar59;
    uVar67 = local_1920._4_4_;
    local_24a0._4_4_ = auVar464._4_4_ & uVar67;
    uVar72 = local_1920._8_4_;
    local_24a0._8_4_ = auVar464._8_4_ & uVar72;
    uVar34 = local_1920._12_4_;
    local_24a0._12_4_ = auVar464._12_4_ & uVar34;
    uVar35 = local_1920._16_4_;
    register0x00001210 = auVar465._0_4_ & uVar35;
    uVar36 = local_1920._20_4_;
    register0x00001214 = auVar465._4_4_ & uVar36;
    uVar37 = local_1920._24_4_;
    register0x00001218 = auVar465._8_4_ & uVar37;
    uVar38 = local_1920._28_4_;
    register0x0000121c = auVar465._12_4_ & uVar38;
    iVar25 = vmovmskps_avx(_local_24a0);
    if (iVar25 == 0) {
      _local_24a0 = ZEXT432(0) << 0x20;
LAB_140a6ddbd:
      auVar465 = vpmovsxbw_avx(auVar461);
      auVar465 = vpand_avx(auVar465,auVar80);
      auVar464 = vpmovsxwd_avx(auVar465);
      auVar465 = vpunpckhwd_avx(auVar465,auVar465);
      auVar300._16_16_ = auVar465;
      auVar300._0_16_ = auVar464;
      auVar465 = vpcmpgtd_avx(auVar321,local_1940._0_16_);
      auVar464 = vpcmpgtd_avx(auVar321,local_19a0._0_16_);
      auVar514._16_16_ = auVar465;
      auVar514._0_16_ = auVar464;
      auVar514 = auVar514 & auVar300;
      if ((((((((SUB321(auVar514 >> 0x1f,0) & 1) != 0 || (SUB321(auVar514 >> 0x3f,0) & 1) != 0) ||
              (SUB321(auVar514 >> 0x5f,0) & 1) != 0) || SUB321(auVar514 >> 0x7f,0) != '\0') ||
            (SUB321(auVar514 >> 0x9f,0) & 1) != 0) || SUB321(auVar514 >> 0xbf,0) != '\0') ||
          (SUB321(auVar514 >> 0xdf,0) & 1) != 0) || auVar514[0x1f] < '\0') {
        auVar461 = vpmovzxbw_avx(auVar461);
        auVar465 = vpmovzxwd_avx(auVar461);
        auVar465 = vpslld_avx(auVar465,0x1f);
        auVar301._0_16_ = vpsrad_avx(auVar465,0x1f);
        auVar465 = vpunpckhwd_avx(auVar461,auVar461);
        auVar465 = vpslld_avx(auVar465,0x1f);
        auVar465 = vpsrad_avx(auVar465,0x1f);
        auVar301._16_16_ = auVar465;
        auVar288 = local_1920 & auVar301;
        if ((((((((SUB321(auVar288 >> 0x1f,0) & 1) != 0 || (SUB321(auVar288 >> 0x3f,0) & 1) != 0) ||
                (SUB321(auVar288 >> 0x5f,0) & 1) != 0) || SUB321(auVar288 >> 0x7f,0) != '\0') ||
              (SUB321(auVar288 >> 0x9f,0) & 1) != 0) || SUB321(auVar288 >> 0xbf,0) != '\0') ||
            (SUB321(auVar288 >> 0xdf,0) & 1) != 0) || auVar288[0x1f] < '\0') {
          auVar464 = vpmovsxdq_avx(auVar301._0_16_);
          auVar80 = vshufps_avx(auVar301._0_16_,auVar301._0_16_,0xfa);
          auVar486._16_16_ = auVar80;
          auVar486._0_16_ = auVar464;
          auVar464 = vpmovsxdq_avx(auVar465);
          auVar80 = vpshufd_avx(auVar465,0xfa);
          auVar515._16_16_ = auVar80;
          auVar515._0_16_ = auVar464;
          _local_1dc0 = vmaskmovpd_avx(auVar486,auVar442);
          _local_1da0 = vmaskmovpd_avx(auVar515,auVar289);
          _local_1d80 = vmaskmovpd_avx(auVar486,auVar287);
          _local_1d60 = vmaskmovpd_avx(auVar515,auVar651);
          _local_1d40 = vmaskmovpd_avx(auVar486,auVar539);
          _local_1d20 = vmaskmovpd_avx(auVar515,auVar481);
          local_1d00 = vmaskmovpd_avx(auVar486,_local_2460);
          local_1ce0 = vmaskmovpd_avx(auVar515,auVar609);
          _local_1cc0 = vmaskmovpd_avx(auVar486,auVar653);
          _local_1ca0 = vmaskmovpd_avx(auVar515,auVar638);
          _local_1c80 = vmaskmovpd_avx(auVar486,auVar590);
          _local_1c60 = vmaskmovpd_avx(auVar515,auVar632);
          auVar461 = vpsllw_avx(auVar461,0xf);
          auVar461 = vpacksswb_avx(auVar461,auVar461);
          bVar27 = SUB161(auVar461 >> 0xf,0) & 1;
          bVar18 = SUB161(auVar461 >> 0x17,0) & 1;
          bVar19 = SUB161(auVar461 >> 0x1f,0) & 1;
          bVar20 = SUB161(auVar461 >> 0x27,0) & 1;
          bVar21 = SUB161(auVar461 >> 0x2f,0) & 1;
          bVar22 = SUB161(auVar461 >> 0x37,0) & 1;
          if ((SUB161(auVar461 >> 7,0) & 1) == 0) {
            if (bVar27 != 0) goto LAB_140a6e69b;
LAB_140a6defe:
            if (bVar18 != 0) goto LAB_140a6e6ab;
LAB_140a6df06:
            if (bVar19 != 0) goto LAB_140a6e6bb;
LAB_140a6df0e:
            if (bVar20 != 0) goto LAB_140a6e6cb;
LAB_140a6df16:
            if (bVar21 != 0) goto LAB_140a6e6db;
LAB_140a6df1e:
            if (bVar22 != 0) goto LAB_140a6e6eb;
LAB_140a6df26:
            auVar302._0_4_ = uVar59 & auVar301._0_4_;
            auVar302._4_4_ = uVar67 & auVar301._4_4_;
            auVar302._8_4_ = uVar72 & auVar301._8_4_;
            auVar302._12_4_ = uVar34 & auVar301._12_4_;
            auVar302._16_4_ = uVar35 & auVar465._0_4_;
            auVar302._20_4_ = uVar36 & auVar465._4_4_;
            auVar302._24_4_ = uVar37 & auVar465._8_4_;
            auVar302._28_4_ = uVar38 & auVar465._12_4_;
          }
          else {
            local_1c40 = 1;
            if (bVar27 == 0) goto LAB_140a6defe;
LAB_140a6e69b:
            uStack_1c3f = 1;
            if (bVar18 == 0) goto LAB_140a6df06;
LAB_140a6e6ab:
            uStack_1c3e = 1;
            if (bVar19 == 0) goto LAB_140a6df0e;
LAB_140a6e6bb:
            uStack_1c3d = 1;
            if (bVar20 == 0) goto LAB_140a6df16;
LAB_140a6e6cb:
            uStack_1c3c = 1;
            if (bVar21 == 0) goto LAB_140a6df1e;
LAB_140a6e6db:
            uStack_1c3b = 1;
            if (bVar22 == 0) goto LAB_140a6df26;
LAB_140a6e6eb:
            uStack_1c3a = 1;
            auVar302._0_4_ = uVar59 & auVar301._0_4_;
            auVar302._4_4_ = uVar67 & auVar301._4_4_;
            auVar302._8_4_ = uVar72 & auVar301._8_4_;
            auVar302._12_4_ = uVar34 & auVar301._12_4_;
            auVar302._16_4_ = uVar35 & auVar465._0_4_;
            auVar302._20_4_ = uVar36 & auVar465._4_4_;
            auVar302._24_4_ = uVar37 & auVar465._8_4_;
            auVar302._28_4_ = uVar38 & auVar465._12_4_;
          }
          if ((SUB161(auVar461 >> 0x3f,0) & 1) != 0) {
            uStack_1c39 = 1;
          }
          vmovmskps_avx(auVar302 | _local_24a0);
        }
      }
    }
    else {
      auVar288 = vminpd_avx(local_1840,auVar442);
      auVar192 = vshufps_avx(auVar464,auVar464,0x50);
      auVar464 = vshufps_avx(auVar464,auVar464,0xfa);
      auVar295._16_16_ = auVar464;
      auVar295._0_16_ = auVar192;
      _local_1dc0 = vmaskmovpd_avx(auVar295,auVar288);
      auVar464 = vshufps_avx(auVar465,auVar465,0x50);
      auVar465 = vshufps_avx(auVar465,auVar465,0xfa);
      auVar671._16_16_ = auVar465;
      auVar671._0_16_ = auVar464;
      auVar288 = vminpd_avx(local_1820,auVar289);
      _local_1da0 = vmaskmovpd_avx(auVar671,auVar288);
      auVar288 = vminpd_avx(local_1800,auVar287);
      _local_1d80 = vmaskmovpd_avx(auVar295,auVar288);
      auVar288 = vminpd_avx(local_17e0,auVar651);
      _local_1d60 = vmaskmovpd_avx(auVar671,auVar288);
      auVar288 = vminpd_avx(local_17c0,auVar539);
      _local_1d40 = vmaskmovpd_avx(auVar295,auVar288);
      auVar288 = vminpd_avx(local_17a0,auVar481);
      _local_1d20 = vmaskmovpd_avx(auVar671,auVar288);
      auVar288 = vmaxpd_avx(local_1780,_local_2460);
      local_1d00 = vmaskmovpd_avx(auVar295,auVar288);
      auVar288 = vmaxpd_avx(local_1760,auVar609);
      local_1ce0 = vmaskmovpd_avx(auVar671,auVar288);
      auVar288 = vmaxpd_avx(local_1740,auVar653);
      _local_1cc0 = vmaskmovpd_avx(auVar295,auVar288);
      auVar288 = vmaxpd_avx(local_1720,auVar638);
      _local_1ca0 = vmaskmovpd_avx(auVar671,auVar288);
      auVar288 = vmaxpd_avx(local_1700,auVar590);
      _local_1c80 = vmaskmovpd_avx(auVar295,auVar288);
      auVar288 = vmaxpd_avx(local_16e0,auVar632);
      _local_1c60 = vmaskmovpd_avx(auVar671,auVar288);
      auVar465 = vpshufd_avx(auVar501,0x44);
      auVar465 = vpcmpeqb_avx(auVar465,___xmm_00000000000000000000000000000000);
      bVar27 = ~(SUB161(auVar465 >> 7,0) & 1 | (SUB161(auVar465 >> 0xf,0) & 1) << 1 |
                 (SUB161(auVar465 >> 0x17,0) & 1) << 2 | (SUB161(auVar465 >> 0x1f,0) & 1) << 3 |
                 (SUB161(auVar465 >> 0x27,0) & 1) << 4 | (SUB161(auVar465 >> 0x2f,0) & 1) << 5 |
                (SUB161(auVar465 >> 0x37,0) & 1) << 6);
      if ((bVar27 & 1) != 0) {
        local_1c40 = (undefined1)local_16c0;
      }
      if ((bVar27 & 2) != 0) {
        uStack_1c3f = (undefined1)(local_16c0 >> 8);
      }
      if ((bVar27 & 4) != 0) {
        uStack_1c3e = (undefined1)(local_16c0 >> 0x10);
      }
      if ((bVar27 & 8) != 0) {
        uStack_1c3d = (undefined1)(local_16c0 >> 0x18);
      }
      if ((bVar27 & 0x10) != 0) {
        uStack_1c3c = (undefined1)(local_16c0 >> 0x20);
      }
      if ((bVar27 & 0x20) != 0) {
        uStack_1c3b = (undefined1)(local_16c0 >> 0x28);
      }
      if ((bVar27 & 0x40) != 0) {
        uStack_1c3a = (undefined1)(local_16c0 >> 0x30);
      }
      if ((SUB161(auVar465 >> 0x3f,0) & 1) == 0) {
        uStack_1c39 = (undefined1)(local_16c0 >> 0x38);
      }
      if ((char)uVar56 != (char)iVar25) goto LAB_140a6ddbd;
    }
    auVar465 = local_1920._0_16_;
    auVar461 = vshufps_avx(auVar465,auVar465,0x50);
    auVar465 = vshufps_avx(auVar465,auVar465,0xfa);
    auVar655._16_16_ = auVar465;
    auVar655._0_16_ = auVar461;
    auVar465 = local_1920._16_16_;
    auVar461 = vshufps_avx(auVar465,auVar465,0x50);
    auVar465 = vshufps_avx(auVar465,auVar465,0xfa);
    auVar673._16_16_ = auVar465;
    auVar673._0_16_ = auVar461;
    local_1840 = vmaskmovpd_avx(auVar655,_local_1dc0);
    local_1820 = vmaskmovpd_avx(auVar673,_local_1da0);
    local_1800 = vmaskmovpd_avx(auVar655,_local_1d80);
    local_17e0 = vmaskmovpd_avx(auVar673,_local_1d60);
    local_17c0 = vmaskmovpd_avx(auVar655,_local_1d40);
    local_17a0 = vmaskmovpd_avx(auVar673,_local_1d20);
    local_1780 = vmaskmovpd_avx(auVar655,local_1d00);
    local_1760 = vmaskmovpd_avx(auVar673,local_1ce0);
    local_1740 = vmaskmovpd_avx(auVar655,_local_1cc0);
    local_1720 = vmaskmovpd_avx(auVar673,_local_1ca0);
    local_1700 = vmaskmovpd_avx(auVar655,_local_1c80);
    local_16e0 = vmaskmovpd_avx(auVar673,_local_1c60);
    uVar26 = local_16c0;
    if ((uVar56 & 1) != 0) {
      local_16c0 = CONCAT71(local_16c0._1_7_,local_1c40);
      uVar26 = local_16c0;
    }
    if ((uVar56 & 2) != 0) {
      local_16c0._2_6_ = (undefined6)(uVar26 >> 0x10);
      local_16c0._0_1_ = (undefined1)uVar26;
      local_16c0._0_2_ = CONCAT11(uStack_1c3f,(undefined1)local_16c0);
      uVar26 = local_16c0;
    }
    if ((uVar56 & 4) != 0) {
      local_16c0._3_5_ = (undefined5)(uVar26 >> 0x18);
      local_16c0._0_2_ = (undefined2)uVar26;
      local_16c0._0_3_ = CONCAT12(uStack_1c3e,(undefined2)local_16c0);
      uVar26 = local_16c0;
    }
    if ((uVar56 & 8) != 0) {
      local_16c0._4_4_ = (undefined4)(uVar26 >> 0x20);
      local_16c0._0_3_ = (undefined3)uVar26;
      local_16c0._0_4_ = CONCAT13(uStack_1c3d,(undefined3)local_16c0);
      uVar26 = local_16c0;
    }
    if ((uVar56 & 0x10) != 0) {
      local_16c0._5_3_ = (undefined3)(uVar26 >> 0x28);
      local_16c0._0_4_ = (undefined4)uVar26;
      local_16c0._0_5_ = CONCAT14(uStack_1c3c,(undefined4)local_16c0);
      uVar26 = local_16c0;
    }
    if ((uVar56 & 0x20) != 0) {
      local_16c0._6_2_ = (undefined2)(uVar26 >> 0x30);
      local_16c0._0_5_ = (undefined5)uVar26;
      local_16c0._0_6_ = CONCAT15(uStack_1c3b,(undefined5)local_16c0);
      uVar26 = local_16c0;
    }
    local_16c0 = uVar26;
    if ((uVar56 & 0x40) != 0) {
      local_16c0._7_1_ = (undefined1)(uVar26 >> 0x38);
      local_16c0._0_6_ = (undefined6)uVar26;
      local_16c0._0_7_ = CONCAT16(uStack_1c3a,(undefined6)local_16c0);
    }
    if ((char)uVar56 < '\0') {
      local_16c0 = CONCAT17(uStack_1c39,(undefined7)local_16c0);
    }
LAB_140a6e09d:
    local_1300 = vmovlhps_avx(local_1840._0_16_,local_1800._0_16_);
    local_12c8 = vunpckhpd_avx(local_1840._0_16_,local_1800._0_16_);
    local_1290 = vmovlhps_avx(local_1840._16_16_,local_1800._16_16_);
    local_1258 = vunpckhpd_avx(local_1840._16_16_,local_1800._16_16_);
    local_1220 = vmovlhps_avx(local_1820._0_16_,local_17e0._0_16_);
    local_11e8 = vunpckhpd_avx(local_1820._0_16_,local_17e0._0_16_);
    local_11b0 = vmovlhps_avx(local_1820._16_16_,local_17e0._16_16_);
    local_1178 = vunpckhpd_avx(local_1820._16_16_,local_17e0._16_16_);
    local_12f0 = local_17c0._0_8_;
    local_12b8 = local_17c0._8_8_;
    local_1280 = local_17c0._16_8_;
    local_1248 = local_17c0._24_8_;
    local_1210 = local_17a0._0_8_;
    local_11d8 = (double)local_17a0._8_8_;
    local_11a0 = (double)local_17a0._16_8_;
    local_1168 = (double)local_17a0._24_8_;
    local_12e8 = vmovlhps_avx(local_1780._0_16_,local_1740._0_16_);
    local_12b0 = vunpckhpd_avx(local_1780._0_16_,local_1740._0_16_);
    local_1278 = vmovlhps_avx(local_1780._16_16_,local_1740._16_16_);
    local_1240 = vunpckhpd_avx(local_1780._16_16_,local_1740._16_16_);
    local_1208 = vmovlhps_avx(local_1760._0_16_,local_1720._0_16_);
    local_11d0 = vunpckhpd_avx(local_1760._0_16_,local_1720._0_16_);
    local_1198 = vmovlhps_avx(local_1760._16_16_,local_1720._16_16_);
    local_1160 = vunpckhpd_avx(local_1760._16_16_,local_1720._16_16_);
    local_12d8 = local_1700._0_8_;
    local_12a0 = local_1700._8_8_;
    local_1268 = local_1700._16_8_;
    local_1230 = local_1700._24_8_;
    local_11f8 = (double)local_16e0._0_8_;
    local_11c0 = (double)local_16e0._8_8_;
    local_1188 = (double)local_16e0._16_8_;
    auVar461 = vpcmpgtd_avx(auVar321,___xmm_00000003000000020000000100000000);
    auVar321 = vpcmpgtd_avx(auVar321,___xmm_00000007000000060000000500000004);
    local_1150 = (double)local_16e0._24_8_;
    auVar303._16_16_ = auVar321;
    auVar303._0_16_ = auVar461;
    uVar56 = vmovmskps_avx(auVar303);
    local_12d0[0] = (char)local_16c0;
    local_1298 = (char)(local_16c0 >> 8);
    local_1260 = (char)(local_16c0 >> 0x10);
    local_1228 = (char)(local_16c0 >> 0x18);
    local_11f0[0] = (char)(local_16c0 >> 0x20);
    local_11b8[0] = (char)(local_16c0 >> 0x28);
    local_1180[0] = (char)(local_16c0 >> 0x30);
    local_1148[0] = (char)(local_16c0 >> 0x38);
    if (uVar56 == 0) {
      return;
    }
    uVar26 = (ulonglong)(uVar56 & 0xff);
    do {
      if (uVar26 == 0) {
        uVar31 = 0x40;
      }
      else {
        uVar31 = 0;
        for (uVar49 = uVar26; (uVar49 & 1) == 0; uVar49 = uVar49 >> 1 | 0x8000000000000000) {
          uVar31 = uVar31 + 1;
        }
      }
      lVar62 = uVar31 * 0x38;
      cVar33 = param_5[2][0];
      cVar24 = local_12d0[lVar62];
      if ((cVar33 == '\0') || (cVar24 == '\0')) {
        if (cVar24 == '\0') {
          cVar33 = param_5[2][0];
          uVar548 = *(undefined8 *)(param_5[1] + 0x10);
          uVar521 = *(undefined8 *)(param_5[1] + 8);
          uVar488 = *(undefined8 *)param_5[1];
          uVar452 = *(undefined8 *)(*param_5 + 0x10);
          uVar79 = *(undefined8 *)*param_5;
          uVar320 = *(undefined8 *)(*param_5 + 8);
        }
        else {
          uVar79 = *(undefined8 *)*(undefined1 (*) [24])(local_1300 + lVar62);
          uVar320 = *(undefined8 *)(local_1300 + lVar62 + 8);
          uVar452 = *(undefined8 *)(local_12e8 + lVar62 + -8);
          uVar488 = *(undefined8 *)(local_12e8 + lVar62);
          uVar521 = *(undefined8 *)(local_12e8 + lVar62 + 8);
          uVar548 = *(undefined8 *)(local_12d0 + lVar62 + -8);
          cVar33 = cVar24;
        }
      }
      else {
        auVar304._24_8_ = 0;
        auVar304._0_24_ = *param_5;
        auVar451._24_8_ = 0;
        auVar451._0_24_ = *(undefined1 (*) [24])(local_1300 + lVar62);
        auVar442 = vminpd_avx(auVar304,auVar451);
        uVar79 = auVar442._0_8_;
        auVar321 = vshufpd_avx(auVar442._0_16_,auVar442._0_16_,1);
        uVar320 = auVar321._0_8_;
        uVar452 = auVar442._16_8_;
        auVar516._24_8_ = 0;
        auVar516._0_24_ = param_5[1];
        auVar543._16_8_ = *(undefined8 *)(local_12d0 + lVar62 + -8);
        auVar543._0_16_ = *(undefined1 (*) [16])(local_12e8 + lVar62);
        auVar543._24_8_ = 0;
        auVar442 = vmaxpd_avx(auVar516,auVar543);
        uVar488 = auVar442._0_8_;
        auVar321 = vshufpd_avx(auVar442._0_16_,auVar442._0_16_,1);
        uVar521 = auVar321._0_8_;
        uVar548 = auVar442._16_8_;
      }
      uVar26 = uVar26 & ~(1L << (uVar31 & 0x3f));
      *(undefined8 *)*param_5 = uVar79;
      *(undefined8 *)(*param_5 + 8) = uVar320;
      *(undefined8 *)(*param_5 + 0x10) = uVar452;
      *(undefined8 *)param_5[1] = uVar488;
      *(undefined8 *)(param_5[1] + 8) = uVar521;
      *(undefined8 *)(param_5[1] + 0x10) = uVar548;
      param_5[2][0] = cVar33;
    } while (uVar26 != 0);
    return;
  }
  auVar321 = ZEXT816(0);
  auVar633 = ZEXT1664(auVar321);
  local_1540 = ZEXT1632(auVar321);
  local_15c0 = ZEXT1632(auVar321);
  local_1680 = ZEXT1632(auVar321);
  local_1500 = 0;
  uVar59 = 0;
  local_1660 = local_1680;
  local_1640 = local_1680;
  local_1620 = local_1680;
  local_1600 = local_1680;
  local_15e0 = local_1680;
  local_15a0 = local_15c0;
  local_1580 = local_15c0;
  local_1560 = local_15c0;
  local_1520 = local_1540;
  if (0 < (int)uVar56) {
    auVar656 = ZEXT1664((undefined1  [16])0x0);
    uVar59 = 0;
    do {
      auVar442 = local_19a0;
      auVar80 = vpshufd_avx(ZEXT416(uVar59),0);
      auVar321 = vpslld_avx(auVar80,3);
      auVar321 = vpsubd_avx(auVar321,auVar80);
      uVar26 = (ulonglong)auVar321._0_4_;
      uVar31 = (ulonglong)auVar321._4_4_;
      uVar49 = (ulonglong)auVar321._8_4_;
      uVar61 = (ulonglong)auVar321._12_4_;
      auVar321 = vpinsrb_avx(ZEXT116(*(byte *)(param_3 + 0x30 + uVar26 * 8)),
                             (uint)*(byte *)(param_3 + 0x68 + uVar31 * 8),1);
      auVar321 = vpinsrb_avx(auVar321,(uint)*(byte *)(param_3 + 0xa0 + uVar49 * 8),2);
      auVar321 = vpinsrb_avx(auVar321,(uint)*(byte *)(param_3 + 0xd8 + uVar61 * 8),3);
      auVar321 = vpinsrb_avx(auVar321,(uint)*(byte *)(param_3 + 0x110 + uVar26 * 8),4);
      auVar321 = vpinsrb_avx(auVar321,(uint)*(byte *)(param_3 + 0x148 + uVar31 * 8),5);
      auVar321 = vpinsrb_avx(auVar321,(uint)*(byte *)(param_3 + 0x180 + uVar49 * 8),6);
      auVar464 = vpinsrb_avx(auVar321,(uint)*(byte *)(param_3 + 0x1b8 + uVar61 * 8),7);
      auVar465 = vpcmpeqd_avx(in_ZMM4._0_16_,in_ZMM4._0_16_);
      in_ZMM4 = ZEXT1664(auVar465);
      auVar321 = vpcmpeqd_avx(auVar465,*(undefined1 (*) [16])
                                        (local_1920._0_8_ + 0x10 + (ulonglong)(uVar59 * 4)));
      auVar461 = vpcmpeqd_avx(auVar465,*(undefined1 (*) [16])
                                        (local_1920._0_8_ + (ulonglong)(uVar59 * 4)));
      auVar321 = vpackssdw_avx(auVar461,auVar321);
      auVar192 = auVar656._0_16_;
      auVar461 = vpcmpeqb_avx(auVar192,auVar464);
      auVar461 = vpmovsxbw_avx(auVar461 ^ auVar465);
      local_1850 = vpandn_avx(auVar321,auVar461);
      if ((((((((((((((((SUB161(local_1850 >> 7,0) & 1) != 0 ||
                       (SUB161(local_1850 >> 0xf,0) & 1) != 0) ||
                      (SUB161(local_1850 >> 0x17,0) & 1) != 0) ||
                     (SUB161(local_1850 >> 0x1f,0) & 1) != 0) ||
                    (SUB161(local_1850 >> 0x27,0) & 1) != 0) ||
                   (SUB161(local_1850 >> 0x2f,0) & 1) != 0) ||
                  (SUB161(local_1850 >> 0x37,0) & 1) != 0) ||
                 (SUB161(local_1850 >> 0x3f,0) & 1) != 0) || (SUB161(local_1850 >> 0x47,0) & 1) != 0
                ) || (SUB161(local_1850 >> 0x4f,0) & 1) != 0) ||
              (SUB161(local_1850 >> 0x57,0) & 1) != 0) || (SUB161(local_1850 >> 0x5f,0) & 1) != 0)
            || (SUB161(local_1850 >> 0x67,0) & 1) != 0) || (SUB161(local_1850 >> 0x6f,0) & 1) != 0)
          || (SUB161(local_1850 >> 0x77,0) & 1) != 0) || local_1850[0xf] < '\0') {
        auVar322._8_8_ = 0;
        auVar322._0_8_ = *(ulonglong *)(param_3 + 0x150 + uVar49 * 8);
        auVar321 = vmovhps_avx(auVar322,*(undefined8 *)(param_3 + 0x188 + uVar61 * 8));
        auVar453._8_8_ = 0;
        auVar453._0_8_ = *(ulonglong *)(param_3 + 0xe0 + uVar26 * 8);
        auVar461 = vmovhps_avx(auVar453,*(undefined8 *)(param_3 + 0x118 + uVar31 * 8));
        auVar435._16_16_ = auVar321;
        auVar435._0_16_ = auVar461;
        auVar454._8_8_ = 0;
        auVar454._0_8_ = *(ulonglong *)(param_3 + 0x70 + uVar49 * 8);
        auVar489._8_8_ = 0;
        auVar489._0_8_ = *(ulonglong *)(param_3 + 0x78 + uVar49 * 8);
        auVar522._8_8_ = 0;
        auVar522._0_8_ = *(ulonglong *)(param_3 + 0x80 + uVar49 * 8);
        auVar323._8_8_ = 0;
        auVar323._0_8_ = *(ulonglong *)(param_3 + 0x88 + uVar49 * 8);
        auVar465 = vmovhps_avx(auVar454,*(undefined8 *)(param_3 + 0xa8 + uVar61 * 8));
        auVar549._8_8_ = 0;
        auVar549._0_8_ = *(ulonglong *)(param_3 + uVar26 * 8);
        auVar567._8_8_ = 0;
        auVar567._0_8_ = *(ulonglong *)(param_3 + 8 + uVar26 * 8);
        auVar464 = vmovhps_avx(auVar549,*(undefined8 *)(param_3 + 0x38 + uVar31 * 8));
        auVar569._8_8_ = 0;
        auVar569._0_8_ = *(ulonglong *)(param_3 + 0x10 + uVar26 * 8);
        auVar574._8_8_ = 0;
        auVar574._0_8_ = *(ulonglong *)(param_3 + 0x158 + uVar49 * 8);
        auVar580 = vmovhps_avx(auVar574,*(undefined8 *)(param_3 + 400 + uVar61 * 8));
        auVar596._8_8_ = 0;
        auVar596._0_8_ = *(ulonglong *)(param_3 + 0x18 + uVar26 * 8);
        auVar616._8_8_ = 0;
        auVar616._0_8_ = *(ulonglong *)(param_3 + 0xe8 + uVar26 * 8);
        auVar617 = vmovhps_avx(auVar616,*(undefined8 *)(param_3 + 0x120 + uVar31 * 8));
        auVar499 = vmovhps_avx(auVar489,*(undefined8 *)(param_3 + 0xb0 + uVar61 * 8));
        auVar568 = vmovhps_avx(auVar567,*(undefined8 *)(param_3 + 0x40 + uVar31 * 8));
        auVar474._16_16_ = auVar465;
        auVar474._0_16_ = auVar464;
        auVar455._8_8_ = 0;
        auVar455._0_8_ = *(ulonglong *)(param_3 + 0x160 + uVar49 * 8);
        auVar467 = vmovhps_avx(auVar455,*(undefined8 *)(param_3 + 0x198 + uVar61 * 8));
        auVar552._16_16_ = auVar580;
        auVar552._0_16_ = auVar617;
        auVar550._8_8_ = 0;
        auVar550._0_8_ = *(ulonglong *)(param_3 + 0xf0 + uVar26 * 8);
        auVar468 = vmovhps_avx(auVar550,*(undefined8 *)(param_3 + 0x128 + uVar31 * 8));
        auVar190 = vmovhps_avx(auVar522,*(undefined8 *)(param_3 + 0xb8 + uVar61 * 8));
        auVar189 = vmovhps_avx(auVar569,*(undefined8 *)(param_3 + 0x48 + uVar31 * 8));
        auVar502._16_16_ = auVar499;
        auVar502._0_16_ = auVar568;
        auVar490._8_8_ = 0;
        auVar490._0_8_ = *(ulonglong *)(param_3 + 0x168 + uVar49 * 8);
        auVar191 = vmovhps_avx(auVar490,*(undefined8 *)(param_3 + 0x1a0 + uVar61 * 8));
        local_1880._16_16_ = auVar467;
        local_1880._0_16_ = auVar468;
        auVar456._8_8_ = 0;
        auVar456._0_8_ = *(ulonglong *)(param_3 + 0xf8 + uVar26 * 8);
        auVar467 = vmovhps_avx(auVar456,*(undefined8 *)(param_3 + 0x130 + uVar31 * 8));
        auVar468 = vmovhps_avx(auVar323,*(undefined8 *)(param_3 + 0xc0 + uVar61 * 8));
        auVar188 = vmovhps_avx(auVar596,*(undefined8 *)(param_3 + 0x50 + uVar31 * 8));
        local_18a0._16_16_ = auVar190;
        local_18a0._0_16_ = auVar189;
        auVar523._8_8_ = 0;
        auVar523._0_8_ = *(ulonglong *)(param_3 + 0x170 + uVar49 * 8);
        auVar190 = vmovhps_avx(auVar523,*(undefined8 *)(param_3 + 0x1a8 + uVar61 * 8));
        local_18c0._16_16_ = auVar191;
        local_18c0._0_16_ = auVar467;
        auVar457._8_8_ = 0;
        auVar457._0_8_ = *(ulonglong *)(param_3 + 0x100 + uVar26 * 8);
        auVar467 = vmovhps_avx(auVar457,*(undefined8 *)(param_3 + 0x138 + uVar31 * 8));
        auVar436._16_16_ = auVar468;
        auVar436._0_16_ = auVar188;
        auVar324._8_8_ = 0;
        auVar324._0_8_ = *(ulonglong *)(param_3 + 0x90 + uVar49 * 8);
        auVar189 = vmovhps_avx(auVar324,*(undefined8 *)(param_3 + 200 + uVar61 * 8));
        local_18e0._16_16_ = auVar190;
        local_18e0._0_16_ = auVar467;
        auVar458._8_8_ = 0;
        auVar458._0_8_ = *(ulonglong *)(param_3 + 0x20 + uVar26 * 8);
        auVar467 = vmovhps_avx(auVar458,*(undefined8 *)(param_3 + 0x58 + uVar31 * 8));
        auVar437._16_16_ = auVar189;
        auVar437._0_16_ = auVar467;
        auVar325._8_8_ = 0;
        auVar325._0_8_ = *(ulonglong *)(param_3 + 0x178 + uVar49 * 8);
        auVar190 = vmovhps_avx(auVar325,*(undefined8 *)(param_3 + 0x1b0 + uVar61 * 8));
        auVar459._8_8_ = 0;
        auVar459._0_8_ = *(ulonglong *)(param_3 + 0x108 + uVar26 * 8);
        auVar191 = vmovhps_avx(auVar459,*(undefined8 *)(param_3 + 0x140 + uVar31 * 8));
        local_1900._16_16_ = auVar190;
        local_1900._0_16_ = auVar191;
        auVar326._8_8_ = 0;
        auVar326._0_8_ = *(ulonglong *)(param_3 + 0x98 + uVar49 * 8);
        auVar190 = vmovhps_avx(auVar326,*(undefined8 *)(param_3 + 0xd0 + uVar61 * 8));
        auVar460._8_8_ = 0;
        auVar460._0_8_ = *(ulonglong *)(param_3 + 0x28 + uVar26 * 8);
        auVar191 = vmovhps_avx(auVar460,*(undefined8 *)(param_3 + 0x60 + uVar31 * 8));
        local_19c0._16_16_ = auVar190;
        local_19c0._0_16_ = auVar191;
        auVar191 = vpmovsxwd_avx(local_1850);
        auVar469 = vpunpckhwd_avx(local_1850,local_1850);
        auVar553._16_16_ = auVar469;
        auVar553._0_16_ = auVar191;
        auVar190 = vpacksswb_avx(local_1850,local_1850);
        local_19a0._2_2_ = 0;
        local_19a0._0_2_ =
             (ushort)(SUB161(auVar190 >> 7,0) & 1) | (ushort)(SUB161(auVar190 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar190 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar190 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar190 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar190 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar190 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar190 >> 0x3f,0) & 1) << 7;
        local_19a0._4_28_ = auVar442._4_28_;
        auVar327 = vpslld_avx(auVar80,7);
        auVar80 = vpslld_avx(auVar80,7);
        auVar190 = vpunpckhdq_avx(auVar80,auVar192);
        auVar80 = vpmovzxdq_avx(auVar80);
        auVar277._16_16_ = auVar190;
        auVar277._0_16_ = auVar80;
        auVar192 = vpunpckhdq_avx(auVar327,auVar192);
        auVar80 = vpmovzxdq_avx(auVar327);
        auVar438._16_16_ = auVar192;
        auVar438._0_16_ = auVar80;
        auVar80 = vshufps_avx(auVar191,auVar191,0x50);
        auVar192 = vshufps_avx(auVar191,auVar191,0xfa);
        auVar533._16_16_ = auVar192;
        auVar533._0_16_ = auVar80;
        auVar537 = auVar633._0_32_;
        auVar442 = vblendvps_avx(auVar537,auVar438,auVar533);
        auVar289 = vblendvps_avx(auVar537,
                                 ___ymm_0000000000000180000000000000010000000000000000800000000000000000
                                 ,auVar533);
        lVar62 = vmovlps_avx(auVar289._0_16_);
        auVar80 = vshufps_avx(auVar469,auVar469,0x50);
        auVar192 = vshufps_avx(auVar469,auVar469,0xfa);
        local_1940 = ZEXT1632(auVar80);
        local_1960._0_16_ = auVar192;
        auVar554._16_16_ = auVar192;
        auVar554._0_16_ = auVar80;
        auVar287 = vblendvps_avx(auVar537,auVar277,auVar554);
        auVar651 = vblendvps_avx(auVar537,
                                 ___ymm_0000000000000380000000000000030000000000000002800000000000000200
                                 ,auVar554);
        auVar539 = vblendvps_avx(auVar537,
                                 ___ymm_0000000000000188000000000000010800000000000000880000000000000008
                                 ,auVar533);
        auVar481 = vblendvps_avx(auVar537,
                                 ___ymm_0000000000000388000000000000030800000000000002880000000000000208
                                 ,auVar554);
        lVar30 = vmovlps_avx(auVar481._0_16_);
        auVar288 = vblendvps_avx(auVar537,
                                 ___ymm_0000000000000190000000000000011000000000000000900000000000000010
                                 ,auVar533);
        lVar51 = vmovlps_avx(auVar288._0_16_);
        auVar443 = vblendvps_avx(auVar537,
                                 ___ymm_0000000000000390000000000000031000000000000002900000000000000210
                                 ,auVar554);
        lVar54 = vmovlps_avx(auVar443._0_16_);
        auVar509 = vblendvps_avx(auVar537,
                                 ___ymm_0000000000000198000000000000011800000000000000980000000000000018
                                 ,auVar533);
        auVar559 = vblendvps_avx(auVar537,
                                 ___ymm_0000000000000398000000000000031800000000000002980000000000000218
                                 ,auVar554);
        lVar57 = vmovlps_avx(auVar559._0_16_);
        auVar588 = vblendvps_avx(auVar537,
                                 ___ymm_00000000000001a0000000000000012000000000000000a00000000000000020
                                 ,auVar533);
        lVar60 = vmovlps_avx(auVar588._0_16_);
        auVar589 = vblendvps_avx(auVar537,
                                 ___ymm_00000000000003a0000000000000032000000000000002a00000000000000220
                                 ,auVar554);
        lVar73 = vmovlps_avx(auVar589._0_16_);
        auVar605 = vblendvps_avx(auVar537,
                                 ___ymm_00000000000001a8000000000000012800000000000000a80000000000000028
                                 ,auVar533);
        auVar606 = vblendvps_avx(auVar537,
                                 ___ymm_00000000000003a8000000000000032800000000000002a80000000000000228
                                 ,auVar554);
        lVar1 = vmovlps_avx(auVar606._0_16_);
        auVar622 = vblendvps_avx(auVar537,
                                 ___ymm_00000000000001b0000000000000013000000000000000b00000000000000030
                                 ,auVar533);
        lVar2 = vmovlps_avx(auVar622._0_16_);
        auVar629 = vblendvps_avx(auVar537,
                                 ___ymm_00000000000003b0000000000000033000000000000002b00000000000000230
                                 ,auVar554);
        lVar3 = vmovlps_avx(auVar629._0_16_);
        auVar630 = vblendvps_avx(auVar537,
                                 ___ymm_00000000000001b8000000000000013800000000000000b80000000000000038
                                 ,auVar533);
        auVar649 = vblendvps_avx(auVar537,
                                 ___ymm_00000000000003b8000000000000033800000000000002b80000000000000238
                                 ,auVar554);
        lVar4 = vmovlps_avx(auVar649._0_16_);
        auVar650 = vblendvps_avx(auVar537,
                                 ___ymm_00000000000001c0000000000000014000000000000000c00000000000000040
                                 ,auVar533);
        lVar5 = vmovlps_avx(auVar650._0_16_);
        auVar667 = vblendvps_avx(auVar537,
                                 ___ymm_00000000000003c0000000000000034000000000000002c00000000000000240
                                 ,auVar554);
        lVar6 = vmovlps_avx(auVar667._0_16_);
        auVar676 = vblendvps_avx(auVar537,
                                 ___ymm_00000000000001c8000000000000014800000000000000c80000000000000048
                                 ,auVar533);
        auVar444 = vblendvps_avx(auVar537,
                                 ___ymm_00000000000003c8000000000000034800000000000002c80000000000000248
                                 ,auVar554);
        lVar7 = vmovlps_avx(auVar444._0_16_);
        auVar668 = vblendvps_avx(auVar537,
                                 ___ymm_00000000000001d0000000000000015000000000000000d00000000000000050
                                 ,auVar533);
        lVar8 = vmovlps_avx(auVar668._0_16_);
        auVar623 = vblendvps_avx(auVar537,
                                 ___ymm_00000000000003d0000000000000035000000000000002d00000000000000250
                                 ,auVar554);
        lVar9 = vmovlps_avx(auVar623._0_16_);
        auVar445 = vblendvps_avx(auVar537,
                                 ___ymm_00000000000001d8000000000000015800000000000000d80000000000000058
                                 ,auVar533);
        auVar482 = vblendvps_avx(auVar537,
                                 ___ymm_00000000000003d8000000000000035800000000000002d80000000000000258
                                 ,auVar554);
        lVar10 = vmovlps_avx(auVar482._0_16_);
        auVar669 = vblendvps_avx(auVar537,
                                 ___ymm_00000000000001e0000000000000016000000000000000e00000000000000060
                                 ,auVar533);
        lVar11 = vmovlps_avx(auVar669._0_16_);
        auVar290 = vblendvps_avx(auVar537,
                                 ___ymm_00000000000003e0000000000000036000000000000002e00000000000000260
                                 ,auVar554);
        lVar12 = vmovlps_avx(auVar290._0_16_);
        auVar483 = vblendvps_avx(auVar537,
                                 ___ymm_00000000000001e8000000000000016800000000000000e80000000000000068
                                 ,auVar533);
        auVar510 = vblendvps_avx(auVar537,
                                 ___ymm_00000000000003e8000000000000036800000000000002e80000000000000268
                                 ,auVar554);
        lVar13 = vmovlps_avx(auVar510._0_16_);
        auVar291 = vblendvps_avx(auVar537,
                                 ___ymm_00000000000001f0000000000000017000000000000000f00000000000000070
                                 ,auVar533);
        lVar14 = vmovlps_avx(auVar291._0_16_);
        auVar292 = vblendvps_avx(auVar537,
                                 ___ymm_00000000000003f0000000000000037000000000000002f00000000000000270
                                 ,auVar554);
        lVar15 = vmovlps_avx(auVar292._0_16_);
        auVar508 = vblendvps_avx(auVar537,
                                 ___ymm_00000000000001f8000000000000017800000000000000f80000000000000078
                                 ,auVar533);
        lVar68 = auVar287._16_8_ + param_2;
        lVar29 = auVar287._24_8_ + param_2;
        auVar81._8_8_ = 0;
        auVar81._0_8_ = *(ulonglong *)(auVar651._16_8_ + lVar68);
        local_d10 = vmovhps_avx(auVar81,*(undefined8 *)(auVar651._24_8_ + lVar29));
        lVar55 = auVar287._0_8_ + param_2;
        lVar50 = auVar287._8_8_ + param_2;
        auVar82._8_8_ = 0;
        auVar82._0_8_ = *(ulonglong *)(auVar651._0_8_ + lVar55);
        local_d20 = vmovhps_avx(auVar82,*(undefined8 *)(auVar651._8_8_ + lVar50));
        lVar65 = auVar442._0_8_ + param_2;
        auVar287 = vblendvps_avx(auVar537,
                                 ___ymm_00000000000003f8000000000000037800000000000002f80000000000000278
                                 ,auVar554);
        lVar16 = vmovlps_avx(auVar287._0_16_);
        auVar83._8_8_ = 0;
        auVar83._0_8_ = *(ulonglong *)(lVar62 + lVar65);
        unaff_R12 = auVar442._8_8_ + param_2;
        local_d40 = vmovhps_avx(auVar83,*(undefined8 *)(auVar289._8_8_ + unaff_R12));
        lVar62 = auVar442._16_8_ + param_2;
        lVar63 = auVar442._24_8_ + param_2;
        auVar328._8_8_ = 0;
        auVar328._0_8_ = *(ulonglong *)(auVar289._16_8_ + lVar62);
        local_d30 = vmovhps_avx(auVar328,*(undefined8 *)(auVar289._24_8_ + lVar63));
        auVar329._8_8_ = 0;
        auVar329._0_8_ = *(ulonglong *)(auVar539._0_8_ + lVar65);
        local_d00 = vmovhps_avx(auVar329,*(undefined8 *)(auVar539._8_8_ + unaff_R12));
        auVar84._8_8_ = 0;
        auVar84._0_8_ = *(ulonglong *)(auVar481._16_8_ + lVar68);
        local_cd0 = vmovhps_avx(auVar84,*(undefined8 *)(auVar481._24_8_ + lVar29));
        auVar85._8_8_ = 0;
        auVar85._0_8_ = *(ulonglong *)(lVar30 + lVar55);
        local_ce0 = vmovhps_avx(auVar85,*(undefined8 *)(auVar481._8_8_ + lVar50));
        auVar86._8_8_ = 0;
        auVar86._0_8_ = *(ulonglong *)(auVar539._16_8_ + lVar62);
        local_cf0 = vmovhps_avx(auVar86,*(undefined8 *)(auVar539._24_8_ + lVar63));
        auVar87._8_8_ = 0;
        auVar87._0_8_ = *(ulonglong *)(lVar51 + lVar65);
        local_cc0 = vmovhps_avx(auVar87,*(undefined8 *)(auVar288._8_8_ + unaff_R12));
        auVar330._8_8_ = 0;
        auVar330._0_8_ = *(ulonglong *)(auVar443._16_8_ + lVar68);
        local_c90 = vmovhps_avx(auVar330,*(undefined8 *)(auVar443._24_8_ + lVar29));
        auVar331._8_8_ = 0;
        auVar331._0_8_ = *(ulonglong *)(lVar54 + lVar55);
        local_ca0 = vmovhps_avx(auVar331,*(undefined8 *)(auVar443._8_8_ + lVar50));
        auVar332._8_8_ = 0;
        auVar332._0_8_ = *(ulonglong *)(auVar288._16_8_ + lVar62);
        local_cb0 = vmovhps_avx(auVar332,*(undefined8 *)(auVar288._24_8_ + lVar63));
        auVar333._8_8_ = 0;
        auVar333._0_8_ = *(ulonglong *)(auVar509._0_8_ + lVar65);
        local_c80 = vmovhps_avx(auVar333,*(undefined8 *)(auVar509._8_8_ + unaff_R12));
        auVar88._8_8_ = 0;
        auVar88._0_8_ = *(ulonglong *)(auVar559._16_8_ + lVar68);
        local_c50 = vmovhps_avx(auVar88,*(undefined8 *)(auVar559._24_8_ + lVar29));
        auVar89._8_8_ = 0;
        auVar89._0_8_ = *(ulonglong *)(lVar57 + lVar55);
        local_c60 = vmovhps_avx(auVar89,*(undefined8 *)(auVar559._8_8_ + lVar50));
        auVar90._8_8_ = 0;
        auVar90._0_8_ = *(ulonglong *)(auVar509._16_8_ + lVar62);
        local_c70 = vmovhps_avx(auVar90,*(undefined8 *)(auVar509._24_8_ + lVar63));
        auVar91._8_8_ = 0;
        auVar91._0_8_ = *(ulonglong *)(lVar60 + lVar65);
        local_c40 = vmovhps_avx(auVar91,*(undefined8 *)(auVar588._8_8_ + unaff_R12));
        auVar334._8_8_ = 0;
        auVar334._0_8_ = *(ulonglong *)(auVar589._16_8_ + lVar68);
        local_c10 = vmovhps_avx(auVar334,*(undefined8 *)(auVar589._24_8_ + lVar29));
        auVar335._8_8_ = 0;
        auVar335._0_8_ = *(ulonglong *)(lVar73 + lVar55);
        local_c20 = vmovhps_avx(auVar335,*(undefined8 *)(auVar589._8_8_ + lVar50));
        auVar336._8_8_ = 0;
        auVar336._0_8_ = *(ulonglong *)(auVar588._16_8_ + lVar62);
        local_c30 = vmovhps_avx(auVar336,*(undefined8 *)(auVar588._24_8_ + lVar63));
        auVar337._8_8_ = 0;
        auVar337._0_8_ = *(ulonglong *)(auVar605._0_8_ + lVar65);
        local_c00 = vmovhps_avx(auVar337,*(undefined8 *)(auVar605._8_8_ + unaff_R12));
        auVar92._8_8_ = 0;
        auVar92._0_8_ = *(ulonglong *)(auVar606._16_8_ + lVar68);
        local_bd0 = vmovhps_avx(auVar92,*(undefined8 *)(auVar606._24_8_ + lVar29));
        auVar93._8_8_ = 0;
        auVar93._0_8_ = *(ulonglong *)(lVar1 + lVar55);
        local_be0 = vmovhps_avx(auVar93,*(undefined8 *)(auVar606._8_8_ + lVar50));
        auVar94._8_8_ = 0;
        auVar94._0_8_ = *(ulonglong *)(auVar605._16_8_ + lVar62);
        local_bf0 = vmovhps_avx(auVar94,*(undefined8 *)(auVar605._24_8_ + lVar63));
        auVar95._8_8_ = 0;
        auVar95._0_8_ = *(ulonglong *)(lVar2 + lVar65);
        local_bc0 = vmovhps_avx(auVar95,*(undefined8 *)(auVar622._8_8_ + unaff_R12));
        auVar338._8_8_ = 0;
        auVar338._0_8_ = *(ulonglong *)(auVar629._16_8_ + lVar68);
        local_b90 = vmovhps_avx(auVar338,*(undefined8 *)(auVar629._24_8_ + lVar29));
        auVar339._8_8_ = 0;
        auVar339._0_8_ = *(ulonglong *)(lVar3 + lVar55);
        local_ba0 = vmovhps_avx(auVar339,*(undefined8 *)(auVar629._8_8_ + lVar50));
        auVar340._8_8_ = 0;
        auVar340._0_8_ = *(ulonglong *)(auVar622._16_8_ + lVar62);
        local_bb0 = vmovhps_avx(auVar340,*(undefined8 *)(auVar622._24_8_ + lVar63));
        auVar341._8_8_ = 0;
        auVar341._0_8_ = *(ulonglong *)(auVar630._0_8_ + lVar65);
        local_b80 = vmovhps_avx(auVar341,*(undefined8 *)(auVar630._8_8_ + unaff_R12));
        auVar96._8_8_ = 0;
        auVar96._0_8_ = *(ulonglong *)(auVar649._16_8_ + lVar68);
        local_b50 = vmovhps_avx(auVar96,*(undefined8 *)(auVar649._24_8_ + lVar29));
        auVar97._8_8_ = 0;
        auVar97._0_8_ = *(ulonglong *)(lVar4 + lVar55);
        local_b60 = vmovhps_avx(auVar97,*(undefined8 *)(auVar649._8_8_ + lVar50));
        auVar98._8_8_ = 0;
        auVar98._0_8_ = *(ulonglong *)(auVar630._16_8_ + lVar62);
        local_b70 = vmovhps_avx(auVar98,*(undefined8 *)(auVar630._24_8_ + lVar63));
        auVar99._8_8_ = 0;
        auVar99._0_8_ = *(ulonglong *)(lVar5 + lVar65);
        local_b40 = vmovhps_avx(auVar99,*(undefined8 *)(auVar650._8_8_ + unaff_R12));
        auVar342._8_8_ = 0;
        auVar342._0_8_ = *(ulonglong *)(auVar667._16_8_ + lVar68);
        local_b10 = vmovhps_avx(auVar342,*(undefined8 *)(auVar667._24_8_ + lVar29));
        auVar343._8_8_ = 0;
        auVar343._0_8_ = *(ulonglong *)(lVar6 + lVar55);
        local_b20 = vmovhps_avx(auVar343,*(undefined8 *)(auVar667._8_8_ + lVar50));
        auVar344._8_8_ = 0;
        auVar344._0_8_ = *(ulonglong *)(auVar650._16_8_ + lVar62);
        local_b30 = vmovhps_avx(auVar344,*(undefined8 *)(auVar650._24_8_ + lVar63));
        auVar345._8_8_ = 0;
        auVar345._0_8_ = *(ulonglong *)(auVar676._0_8_ + lVar65);
        local_b00 = vmovhps_avx(auVar345,*(undefined8 *)(auVar676._8_8_ + unaff_R12));
        auVar100._8_8_ = 0;
        auVar100._0_8_ = *(ulonglong *)(auVar444._16_8_ + lVar68);
        local_ad0 = vmovhps_avx(auVar100,*(undefined8 *)(auVar444._24_8_ + lVar29));
        auVar101._8_8_ = 0;
        auVar101._0_8_ = *(ulonglong *)(lVar7 + lVar55);
        local_ae0 = vmovhps_avx(auVar101,*(undefined8 *)(auVar444._8_8_ + lVar50));
        auVar102._8_8_ = 0;
        auVar102._0_8_ = *(ulonglong *)(auVar676._16_8_ + lVar62);
        local_af0 = vmovhps_avx(auVar102,*(undefined8 *)(auVar676._24_8_ + lVar63));
        auVar103._8_8_ = 0;
        auVar103._0_8_ = *(ulonglong *)(lVar8 + lVar65);
        local_ac0 = vmovhps_avx(auVar103,*(undefined8 *)(auVar668._8_8_ + unaff_R12));
        auVar346._8_8_ = 0;
        auVar346._0_8_ = *(ulonglong *)(auVar623._16_8_ + lVar68);
        local_a90 = vmovhps_avx(auVar346,*(undefined8 *)(auVar623._24_8_ + lVar29));
        auVar347._8_8_ = 0;
        auVar347._0_8_ = *(ulonglong *)(lVar9 + lVar55);
        local_aa0 = vmovhps_avx(auVar347,*(undefined8 *)(auVar623._8_8_ + lVar50));
        auVar348._8_8_ = 0;
        auVar348._0_8_ = *(ulonglong *)(auVar668._16_8_ + lVar62);
        local_ab0 = vmovhps_avx(auVar348,*(undefined8 *)(auVar668._24_8_ + lVar63));
        auVar349._8_8_ = 0;
        auVar349._0_8_ = *(ulonglong *)(auVar445._0_8_ + lVar65);
        local_a80 = vmovhps_avx(auVar349,*(undefined8 *)(auVar445._8_8_ + unaff_R12));
        auVar104._8_8_ = 0;
        auVar104._0_8_ = *(ulonglong *)(auVar482._16_8_ + lVar68);
        local_a50 = vmovhps_avx(auVar104,*(undefined8 *)(auVar482._24_8_ + lVar29));
        auVar105._8_8_ = 0;
        auVar105._0_8_ = *(ulonglong *)(lVar10 + lVar55);
        local_a60 = vmovhps_avx(auVar105,*(undefined8 *)(auVar482._8_8_ + lVar50));
        auVar106._8_8_ = 0;
        auVar106._0_8_ = *(ulonglong *)(auVar445._16_8_ + lVar62);
        local_a70 = vmovhps_avx(auVar106,*(undefined8 *)(auVar445._24_8_ + lVar63));
        auVar107._8_8_ = 0;
        auVar107._0_8_ = *(ulonglong *)(lVar11 + lVar65);
        local_a40 = vmovhps_avx(auVar107,*(undefined8 *)(auVar669._8_8_ + unaff_R12));
        auVar350._8_8_ = 0;
        auVar350._0_8_ = *(ulonglong *)(auVar290._16_8_ + lVar68);
        local_a10 = vmovhps_avx(auVar350,*(undefined8 *)(auVar290._24_8_ + lVar29));
        auVar351._8_8_ = 0;
        auVar351._0_8_ = *(ulonglong *)(lVar12 + lVar55);
        local_a20 = vmovhps_avx(auVar351,*(undefined8 *)(auVar290._8_8_ + lVar50));
        auVar352._8_8_ = 0;
        auVar352._0_8_ = *(ulonglong *)(auVar669._16_8_ + lVar62);
        local_a30 = vmovhps_avx(auVar352,*(undefined8 *)(auVar669._24_8_ + lVar63));
        auVar353._8_8_ = 0;
        auVar353._0_8_ = *(ulonglong *)(auVar483._0_8_ + lVar65);
        local_a00 = vmovhps_avx(auVar353,*(undefined8 *)(auVar483._8_8_ + unaff_R12));
        auVar108._8_8_ = 0;
        auVar108._0_8_ = *(ulonglong *)(auVar510._16_8_ + lVar68);
        local_9d0 = vmovhps_avx(auVar108,*(undefined8 *)(auVar510._24_8_ + lVar29));
        auVar109._8_8_ = 0;
        auVar109._0_8_ = *(ulonglong *)(lVar13 + lVar55);
        local_9e0 = vmovhps_avx(auVar109,*(undefined8 *)(auVar510._8_8_ + lVar50));
        auVar110._8_8_ = 0;
        auVar110._0_8_ = *(ulonglong *)(auVar483._16_8_ + lVar62);
        local_9f0 = vmovhps_avx(auVar110,*(undefined8 *)(auVar483._24_8_ + lVar63));
        auVar111._8_8_ = 0;
        auVar111._0_8_ = *(ulonglong *)(lVar14 + lVar65);
        local_9c0 = vmovhps_avx(auVar111,*(undefined8 *)(auVar291._8_8_ + unaff_R12));
        auVar354._8_8_ = 0;
        auVar354._0_8_ = *(ulonglong *)(auVar292._16_8_ + lVar68);
        local_990 = vmovhps_avx(auVar354,*(undefined8 *)(auVar292._24_8_ + lVar29));
        auVar355._8_8_ = 0;
        auVar355._0_8_ = *(ulonglong *)(lVar15 + lVar55);
        local_9a0 = vmovhps_avx(auVar355,*(undefined8 *)(auVar292._8_8_ + lVar50));
        auVar356._8_8_ = 0;
        auVar356._0_8_ = *(ulonglong *)(auVar291._16_8_ + lVar62);
        local_9b0 = vmovhps_avx(auVar356,*(undefined8 *)(auVar291._24_8_ + lVar63));
        auVar357._8_8_ = 0;
        auVar357._0_8_ = *(ulonglong *)(auVar508._0_8_ + lVar65);
        local_980 = vmovhps_avx(auVar357,*(undefined8 *)(auVar508._8_8_ + unaff_R12));
        auVar112._8_8_ = 0;
        auVar112._0_8_ = *(ulonglong *)(auVar287._16_8_ + lVar68);
        local_950 = vmovhps_avx(auVar112,*(undefined8 *)(auVar287._24_8_ + lVar29));
        auVar113._8_8_ = 0;
        auVar113._0_8_ = *(ulonglong *)(lVar16 + lVar55);
        local_960 = vmovhps_avx(auVar113,*(undefined8 *)(auVar287._8_8_ + lVar50));
        auVar114._8_8_ = 0;
        auVar114._0_8_ = *(ulonglong *)(auVar508._16_8_ + lVar62);
        local_970 = vmovhps_avx(auVar114,*(undefined8 *)(auVar508._24_8_ + lVar63));
        dVar17 = *param_4;
        lVar62 = 0xc0;
        dVar74 = param_4[8];
        dVar75 = param_4[0xc];
        dVar76 = param_4[1];
        dVar77 = param_4[5];
        dVar78 = param_4[9];
        dVar305 = param_4[0xd];
        dVar306 = param_4[2];
        dVar307 = param_4[6];
        dVar308 = param_4[10];
        dVar309 = param_4[0xe];
        dVar310 = param_4[3];
        dVar311 = param_4[7];
        dVar312 = param_4[0xb];
        dVar313 = param_4[0xf];
        do {
          dVar315 = *(double *)(local_e00 + lVar62);
          dVar316 = *(double *)(local_e00 + lVar62 + 8);
          dVar317 = *(double *)(local_df0 + lVar62);
          dVar318 = *(double *)(local_df0 + lVar62 + 8);
          dVar319 = *(double *)(local_de0 + lVar62);
          dVar487 = *(double *)(local_de0 + lVar62 + 8);
          dVar517 = *(double *)(local_dd0 + lVar62);
          dVar518 = *(double *)(local_dd0 + lVar62 + 8);
          dVar519 = *(double *)(local_dc0 + lVar62);
          dVar520 = *(double *)(local_dc0 + lVar62 + 8);
          dVar544 = *(double *)(local_db0 + lVar62);
          dVar545 = *(double *)(local_db0 + lVar62 + 8);
          dVar546 = *(double *)(local_da0 + lVar62);
          dVar573 = *(double *)(local_da0 + lVar62 + 8);
          dVar591 = *(double *)(local_d90 + lVar62);
          dVar592 = *(double *)(local_d90 + lVar62 + 8);
          dVar593 = *(double *)(local_d60 + lVar62);
          dVar594 = *(double *)(local_d60 + lVar62 + 8);
          dVar595 = *(double *)(local_d50 + lVar62);
          dVar610 = *(double *)(local_d50 + lVar62 + 8);
          dVar611 = *(double *)(local_d80 + lVar62);
          dVar612 = *(double *)(local_d80 + lVar62 + 8);
          dVar613 = *(double *)(local_d70 + lVar62);
          dVar614 = *(double *)(local_d70 + lVar62 + 8);
          dVar615 = *(double *)(local_d40 + lVar62);
          dVar639 = *(double *)(local_d40 + lVar62 + 8);
          dVar640 = *(double *)(local_d30 + lVar62);
          dVar657 = *(double *)(local_d30 + lVar62 + 8);
          dVar658 = *(double *)(local_d20 + lVar62);
          dVar659 = *(double *)(local_d20 + lVar62 + 8);
          dVar660 = *(double *)(local_d10 + lVar62);
          dVar661 = *(double *)(local_d10 + lVar62 + 8);
          dVar314 = param_4[4];
          *(double *)((longlong)local_1e80 + lVar62 + 0x20) =
               dVar658 * dVar75 + dVar593 * dVar74 + dVar546 * dVar314 + dVar319 * dVar17 + 0.0;
          *(double *)((longlong)local_1e80 + lVar62 + 0x28) =
               dVar659 * dVar75 + dVar594 * dVar74 + dVar573 * dVar314 + dVar487 * dVar17 + 0.0;
          *(double *)((longlong)local_1e80 + lVar62 + 0x30) =
               dVar660 * dVar75 + dVar595 * dVar74 + dVar591 * dVar314 + dVar517 * dVar17 + 0.0;
          *(double *)((longlong)local_1e80 + lVar62 + 0x38) =
               dVar661 * dVar75 + dVar610 * dVar74 + dVar592 * dVar314 + dVar518 * dVar17 + 0.0;
          *(double *)((longlong)local_1e80 + lVar62) =
               dVar315 * dVar17 + 0.0 + dVar519 * dVar314 + dVar611 * dVar74 + dVar615 * dVar75;
          *(double *)((longlong)local_1e80 + lVar62 + 8) =
               dVar316 * dVar17 + 0.0 + dVar520 * dVar314 + dVar612 * dVar74 + dVar639 * dVar75;
          *(double *)((longlong)local_1e80 + lVar62 + 0x10) =
               dVar317 * dVar17 + 0.0 + dVar544 * dVar314 + dVar613 * dVar74 + dVar640 * dVar75;
          *(double *)((longlong)local_1e80 + lVar62 + 0x18) =
               dVar318 * dVar17 + 0.0 + dVar545 * dVar314 + dVar614 * dVar74 + dVar657 * dVar75;
          *(double *)((longlong)local_1e80 + lVar62 + 0x60) =
               dVar319 * dVar76 + 0.0 + dVar546 * dVar77 + dVar593 * dVar78 + dVar658 * dVar305;
          *(double *)((longlong)local_1e80 + lVar62 + 0x68) =
               dVar487 * dVar76 + 0.0 + dVar573 * dVar77 + dVar594 * dVar78 + dVar659 * dVar305;
          *(double *)((longlong)local_1e80 + lVar62 + 0x70) =
               dVar517 * dVar76 + 0.0 + dVar591 * dVar77 + dVar595 * dVar78 + dVar660 * dVar305;
          *(double *)((longlong)local_1e80 + lVar62 + 0x78) =
               dVar518 * dVar76 + 0.0 + dVar592 * dVar77 + dVar610 * dVar78 + dVar661 * dVar305;
          *(double *)((longlong)local_1e80 + lVar62 + 0x40) =
               dVar615 * dVar305 + dVar611 * dVar78 + dVar519 * dVar77 + dVar315 * dVar76 + 0.0;
          *(double *)((longlong)local_1e80 + lVar62 + 0x48) =
               dVar639 * dVar305 + dVar612 * dVar78 + dVar520 * dVar77 + dVar316 * dVar76 + 0.0;
          *(double *)((longlong)local_1e80 + lVar62 + 0x50) =
               dVar640 * dVar305 + dVar613 * dVar78 + dVar544 * dVar77 + dVar317 * dVar76 + 0.0;
          *(double *)((longlong)local_1e80 + lVar62 + 0x58) =
               dVar657 * dVar305 + dVar614 * dVar78 + dVar545 * dVar77 + dVar318 * dVar76 + 0.0;
          *(double *)((longlong)local_1e80 + lVar62 + 0xa0) =
               dVar319 * dVar306 + 0.0 + dVar546 * dVar307 + dVar593 * dVar308 + dVar658 * dVar309;
          *(double *)((longlong)local_1e80 + lVar62 + 0xa8) =
               dVar487 * dVar306 + 0.0 + dVar573 * dVar307 + dVar594 * dVar308 + dVar659 * dVar309;
          *(double *)((longlong)local_1e80 + lVar62 + 0xb0) =
               dVar517 * dVar306 + 0.0 + dVar591 * dVar307 + dVar595 * dVar308 + dVar660 * dVar309;
          *(double *)(local_1dc0 + lVar62 + -8) =
               dVar518 * dVar306 + 0.0 + dVar592 * dVar307 + dVar610 * dVar308 + dVar661 * dVar309;
          *(double *)((longlong)local_1e80 + lVar62 + 0x80) =
               dVar615 * dVar309 + dVar611 * dVar308 + dVar519 * dVar307 + dVar315 * dVar306 + 0.0;
          *(double *)((longlong)local_1e80 + lVar62 + 0x88) =
               dVar639 * dVar309 + dVar612 * dVar308 + dVar520 * dVar307 + dVar316 * dVar306 + 0.0;
          *(double *)((longlong)local_1e80 + lVar62 + 0x90) =
               dVar640 * dVar309 + dVar613 * dVar308 + dVar544 * dVar307 + dVar317 * dVar306 + 0.0;
          *(double *)((longlong)local_1e80 + lVar62 + 0x98) =
               dVar657 * dVar309 + dVar614 * dVar308 + dVar545 * dVar307 + dVar318 * dVar306 + 0.0;
          *(double *)(local_1da0 + lVar62) =
               dVar319 * dVar310 + 0.0 + dVar546 * dVar311 + dVar312 * dVar593 + dVar658 * dVar313;
          *(double *)(local_1da0 + lVar62 + 8) =
               dVar487 * dVar310 + 0.0 + dVar573 * dVar311 + dVar312 * dVar594 + dVar659 * dVar313;
          *(double *)(local_1da0 + lVar62 + 0x10) =
               dVar517 * dVar310 + 0.0 + dVar591 * dVar311 + dVar312 * dVar595 + dVar660 * dVar313;
          *(double *)(local_1da0 + lVar62 + 0x18) =
               dVar518 * dVar310 + 0.0 + dVar592 * dVar311 + dVar312 * dVar610 + dVar661 * dVar313;
          *(double *)(local_1dc0 + lVar62) =
               dVar611 * dVar312 + dVar519 * dVar311 + dVar315 * dVar310 + 0.0 + dVar615 * dVar313;
          *(double *)(local_1dc0 + lVar62 + 8) =
               dVar612 * dVar312 + dVar520 * dVar311 + dVar316 * dVar310 + 0.0 + dVar639 * dVar313;
          *(double *)(local_1dc0 + lVar62 + 0x10) =
               dVar613 * dVar312 + dVar544 * dVar311 + dVar317 * dVar310 + 0.0 + dVar640 * dVar313;
          *(double *)(local_1dc0 + lVar62 + 0x18) =
               dVar614 * dVar312 + dVar545 * dVar311 + dVar318 * dVar310 + 0.0 + dVar657 * dVar313;
          lVar62 = lVar62 + 0x100;
        } while (lVar62 != 0x4c0);
        local_2020 = auVar464._0_8_;
        dStack_2018 = auVar464._8_8_;
        dStack_2010 = auVar465._0_8_;
        dStack_2008 = auVar465._8_8_;
        local_1ea0 = auVar188._0_8_;
        dStack_1e98 = auVar188._8_8_;
        dStack_1e90 = auVar468._0_8_;
        dStack_1e88 = auVar468._8_8_;
        local_1e80[0x14] = auVar467._0_8_;
        local_1e80[0x15] = auVar467._8_8_;
        local_1e80[0x16] = auVar189._0_8_;
        local_1e80[0x17] = auVar189._8_8_;
        local_1e80[0] = auVar568._0_8_;
        local_1e80[1] = auVar568._8_8_;
        local_1e80[2] = auVar499._0_8_;
        local_1e80[3] = auVar499._8_8_;
        dVar74 = (local_2020 + local_1ea0) * __real_3fe0000000000000;
        dVar305 = (dStack_2018 + dStack_1e98) * __real_3fe0000000000000;
        dVar310 = (dStack_2010 + dStack_1e90) * __real_3fe0000000000000;
        dVar315 = (dStack_2008 + dStack_1e88) * __real_3fe0000000000000;
        dVar520 = (local_1e80[0x14] + local_1e80[0]) * __real_3fe0000000000000;
        dVar544 = (local_1e80[0x15] + local_1e80[1]) * __real_3fe0000000000000;
        dVar545 = (local_1e80[0x16] + local_1e80[2]) * __real_3fe0000000000000;
        dVar546 = (local_1e80[0x17] + local_1e80[3]) * __real_3fe0000000000000;
        local_2100 = auVar461._0_8_;
        dStack_20f8 = auVar461._8_8_;
        dStack_20f0 = auVar321._0_8_;
        dStack_20e8 = auVar321._8_8_;
        dVar573 = (local_18c0._0_8_ + local_2100) * __real_3fe0000000000000;
        dVar591 = (local_18c0._8_8_ + dStack_20f8) * __real_3fe0000000000000;
        dVar592 = (local_18c0._16_8_ + dStack_20f0) * __real_3fe0000000000000;
        dVar593 = (local_18c0._24_8_ + dStack_20e8) * __real_3fe0000000000000;
        local_1e80[4] = auVar617._0_8_;
        local_1e80[5] = auVar617._8_8_;
        local_1e80[6] = auVar580._0_8_;
        local_1e80[7] = auVar580._8_8_;
        dVar594 = (local_18e0._0_8_ + local_1e80[4]) * __real_3fe0000000000000;
        dVar610 = (local_18e0._8_8_ + local_1e80[5]) * __real_3fe0000000000000;
        dVar612 = (local_18e0._16_8_ + local_1e80[6]) * __real_3fe0000000000000;
        dVar614 = (local_18e0._24_8_ + local_1e80[7]) * __real_3fe0000000000000;
        dVar17 = (double)CONCAT17(uStack_1c39,
                                  CONCAT16(uStack_1c3a,
                                           CONCAT15(uStack_1c3b,
                                                    CONCAT14(uStack_1c3c,
                                                             CONCAT13(uStack_1c3d,
                                                                      CONCAT12(uStack_1c3e,
                                                                               CONCAT11(uStack_1c3f,
                                                                                        local_1c40))
                                                                     )))));
        dVar487 = (local_1880._0_8_ + local_1900._0_8_) * __real_3fe0000000000000;
        dVar517 = (local_1880._8_8_ + local_1900._8_8_) * __real_3fe0000000000000;
        dVar518 = (local_1880._16_8_ + local_1900._16_8_) * __real_3fe0000000000000;
        dVar519 = (local_1880._24_8_ + local_1900._24_8_) * __real_3fe0000000000000;
        dVar595 = (local_18a0._0_8_ + local_19c0._0_8_) * __real_3fe0000000000000;
        dVar611 = (local_18a0._8_8_ + local_19c0._8_8_) * __real_3fe0000000000000;
        dVar613 = (local_18a0._16_8_ + local_19c0._16_8_) * __real_3fe0000000000000;
        dVar615 = (local_18a0._24_8_ + local_19c0._24_8_) * __real_3fe0000000000000;
        auVar442 = vsubpd_avx(auVar436,auVar474);
        auVar289 = vsubpd_avx(local_18c0,auVar435);
        auVar287 = vsubpd_avx(auVar437,auVar502);
        auVar651 = vsubpd_avx(local_18e0,auVar552);
        auVar539 = vsubpd_avx(local_1900,local_1880);
        auVar481 = vsubpd_avx(local_19c0,local_18a0);
        dVar75 = auVar442._0_8_ * __real_3fe0000000000000;
        dVar306 = auVar442._8_8_ * __real_3fe0000000000000;
        dVar311 = auVar442._16_8_ * __real_3fe0000000000000;
        dVar316 = auVar442._24_8_ * __real_3fe0000000000000;
        dVar76 = auVar289._0_8_ * __real_3fe0000000000000;
        dVar307 = auVar289._8_8_ * __real_3fe0000000000000;
        dVar312 = auVar289._16_8_ * __real_3fe0000000000000;
        dVar317 = auVar289._24_8_ * __real_3fe0000000000000;
        dVar77 = auVar287._0_8_ * __real_3fe0000000000000;
        dVar308 = auVar287._8_8_ * __real_3fe0000000000000;
        dVar313 = auVar287._16_8_ * __real_3fe0000000000000;
        dVar318 = auVar287._24_8_ * __real_3fe0000000000000;
        dVar78 = auVar651._0_8_ * __real_3fe0000000000000;
        dVar309 = auVar651._8_8_ * __real_3fe0000000000000;
        dVar314 = auVar651._16_8_ * __real_3fe0000000000000;
        dVar319 = auVar651._24_8_ * __real_3fe0000000000000;
        local_2020 = auVar539._0_8_;
        dStack_2018 = auVar539._8_8_;
        dStack_2010 = auVar539._16_8_;
        dStack_2008 = auVar539._24_8_;
        local_2020 = __real_3fe0000000000000 * local_2020;
        dStack_2018 = __real_3fe0000000000000 * dStack_2018;
        dStack_2010 = __real_3fe0000000000000 * dStack_2010;
        dStack_2008 = __real_3fe0000000000000 * dStack_2008;
        local_2100 = auVar481._0_8_;
        dStack_20f8 = auVar481._8_8_;
        dStack_20f0 = auVar481._16_8_;
        dStack_20e8 = auVar481._24_8_;
        local_2100 = __real_3fe0000000000000 * local_2100;
        dStack_20f8 = __real_3fe0000000000000 * dStack_20f8;
        dStack_20f0 = __real_3fe0000000000000 * dStack_20f0;
        dStack_20e8 = __real_3fe0000000000000 * dStack_20e8;
        auVar534._0_8_ =
             (double)((ulonglong)(local_2100 * local_1bc0) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar75 * (double)local_1dc0) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar77 * (double)local_1cc0._0_8_) & __real_7fffffffffffffff);
        auVar534._8_8_ =
             (double)((ulonglong)(dStack_20f8 * dStack_1bb8) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar306 * adStack_1db8[0]) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar308 * (double)local_1cc0._8_8_) & __real_7fffffffffffffff);
        auVar534._16_8_ =
             (double)((ulonglong)(dStack_20f0 * dStack_1bb0) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar311 * adStack_1db8[1]) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar313 * dStack_1cb0) & __real_7fffffffffffffff);
        auVar534._24_8_ =
             (double)((ulonglong)(dStack_20e8 * dStack_1ba8) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar316 * adStack_1db8[2]) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar318 * dStack_1ca8) & __real_7fffffffffffffff);
        auVar475._0_8_ =
             (double)((ulonglong)(local_2020 * local_1ba0) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar76 * (double)local_1da0) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar78 * (double)local_1ca0._0_8_) & __real_7fffffffffffffff);
        auVar475._8_8_ =
             (double)((ulonglong)(dStack_2018 * dStack_1b98) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar307 * adStack_1d98[0]) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar309 * (double)local_1ca0._8_8_) & __real_7fffffffffffffff);
        auVar475._16_8_ =
             (double)((ulonglong)(dStack_2010 * dStack_1b90) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar312 * adStack_1d98[1]) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar314 * dStack_1c90) & __real_7fffffffffffffff);
        auVar475._24_8_ =
             (double)((ulonglong)(dStack_2008 * dStack_1b88) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar317 * adStack_1d98[2]) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar319 * dStack_1c88) & __real_7fffffffffffffff);
        auVar583._0_8_ =
             dVar573 * (double)local_1da0 + dVar594 * (double)local_1ca0._0_8_ +
             dVar487 * local_1ba0 + local_1aa0;
        auVar583._8_8_ =
             dVar591 * adStack_1d98[0] + dVar610 * (double)local_1ca0._8_8_ + dVar517 * dStack_1b98
             + dStack_1a98;
        auVar583._16_8_ =
             dVar592 * adStack_1d98[1] + dVar612 * dStack_1c90 + dVar518 * dStack_1b90 + dStack_1a90
        ;
        auVar583._24_8_ =
             dVar593 * adStack_1d98[2] + dVar614 * dStack_1c88 + dVar519 * dStack_1b88 + dStack_1a88
        ;
        auVar600._0_8_ =
             dVar595 * local_1bc0 + dVar74 * (double)local_1dc0 + dVar520 * (double)local_1cc0._0_8_
             + local_1ac0;
        auVar600._8_8_ =
             dVar611 * dStack_1bb8 + dVar305 * adStack_1db8[0] + dVar544 * (double)local_1cc0._8_8_
             + dStack_1ab8;
        auVar600._16_8_ =
             dVar613 * dStack_1bb0 + dVar310 * adStack_1db8[1] + dVar545 * dStack_1cb0 + dStack_1ab0
        ;
        auVar600._24_8_ =
             dVar615 * dStack_1ba8 + dVar315 * adStack_1db8[2] + dVar546 * dStack_1ca8 + dStack_1aa8
        ;
        auVar626._0_8_ =
             dVar487 * local_1b60 +
             dVar573 * (double)local_1d60._0_8_ + dVar594 * (double)local_1c60._0_8_ + local_1a60;
        auVar626._8_8_ =
             dVar517 * dStack_1b58 +
             dVar591 * (double)local_1d60._8_8_ + dVar610 * (double)local_1c60._8_8_ + dStack_1a58;
        auVar626._16_8_ =
             dVar518 * dStack_1b50 + dVar592 * dStack_1d50 + dVar612 * dStack_1c50 + dStack_1a50;
        auVar626._24_8_ =
             dVar519 * dStack_1b48 + dVar593 * dStack_1d48 + dVar614 * dStack_1c48 + dStack_1a48;
        auVar644._0_8_ =
             dVar595 * local_1b80 +
             dVar74 * (double)local_1d80._0_8_ + dVar520 * (double)local_1c80._0_8_ + local_1a80;
        auVar644._8_8_ =
             dVar611 * dStack_1b78 +
             dVar305 * (double)local_1d80._8_8_ + dVar544 * (double)local_1c80._8_8_ + dStack_1a78;
        auVar644._16_8_ =
             dVar613 * dStack_1b70 + dVar310 * dStack_1d70 + dVar545 * dStack_1c70 + dStack_1a70;
        auVar644._24_8_ =
             dVar615 * dStack_1b68 + dVar315 * dStack_1d68 + dVar546 * dStack_1c68 + dStack_1a68;
        auVar663._0_8_ =
             dVar573 * (double)local_1d20._0_8_ + dVar594 * local_1c20 + dVar487 * local_1b20 +
             local_1a20;
        auVar663._8_8_ =
             dVar591 * (double)local_1d20._8_8_ + dVar610 * dStack_1c18 + dVar517 * dStack_1b18 +
             dStack_1a18;
        auVar663._16_8_ =
             dVar592 * dStack_1d10 + dVar612 * dStack_1c10 + dVar518 * dStack_1b10 + dStack_1a10;
        auVar663._24_8_ =
             dVar593 * dStack_1d08 + dVar614 * dStack_1c08 + dVar519 * dStack_1b08 + dStack_1a08;
        auVar674._0_8_ =
             (double)local_1d40._0_8_ * dVar74 + dVar520 * dVar17 + dVar595 * local_1b40 +
             local_1a40;
        auVar674._8_8_ =
             (double)local_1d40._8_8_ * dVar305 + dVar544 * dStack_1c38 + dVar611 * dStack_1b38 +
             dStack_1a38;
        auVar674._16_8_ =
             dStack_1d30 * dVar310 + dVar545 * dStack_1c30 + dVar613 * dStack_1b30 + dStack_1a30;
        auVar674._24_8_ =
             dStack_1d28 * dVar315 + dVar546 * dStack_1c28 + dVar615 * dStack_1b28 + dStack_1a28;
        auVar439._0_8_ =
             (double)((ulonglong)(local_2100 * local_1b80) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar75 * (double)local_1d80._0_8_) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar77 * (double)local_1c80._0_8_) & __real_7fffffffffffffff);
        auVar439._8_8_ =
             (double)((ulonglong)(dStack_20f8 * dStack_1b78) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar306 * (double)local_1d80._8_8_) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar308 * (double)local_1c80._8_8_) & __real_7fffffffffffffff);
        auVar439._16_8_ =
             (double)((ulonglong)(dStack_20f0 * dStack_1b70) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar311 * dStack_1d70) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar313 * dStack_1c70) & __real_7fffffffffffffff);
        auVar439._24_8_ =
             (double)((ulonglong)(dStack_20e8 * dStack_1b68) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar316 * dStack_1d68) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar318 * dStack_1c68) & __real_7fffffffffffffff);
        auVar620._0_8_ =
             (double)((ulonglong)(local_2020 * local_1b60) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar76 * (double)local_1d60._0_8_) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar78 * (double)local_1c60._0_8_) & __real_7fffffffffffffff);
        auVar620._8_8_ =
             (double)((ulonglong)(dStack_2018 * dStack_1b58) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar307 * (double)local_1d60._8_8_) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar309 * (double)local_1c60._8_8_) & __real_7fffffffffffffff);
        auVar620._16_8_ =
             (double)((ulonglong)(dStack_2010 * dStack_1b50) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar312 * dStack_1d50) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar314 * dStack_1c50) & __real_7fffffffffffffff);
        auVar620._24_8_ =
             (double)((ulonglong)(dStack_2008 * dStack_1b48) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar317 * dStack_1d48) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar319 * dStack_1c48) & __real_7fffffffffffffff);
        auVar555._0_8_ =
             (double)(__real_7fffffffffffffff & (ulonglong)((double)local_1d40._0_8_ * dVar75)) +
             (double)((ulonglong)(dVar77 * dVar17) & __real_7fffffffffffffff) +
             (double)((ulonglong)(local_2100 * local_1b40) & __real_7fffffffffffffff);
        auVar555._8_8_ =
             (double)(__real_7fffffffffffffff & (ulonglong)((double)local_1d40._8_8_ * dVar306)) +
             (double)((ulonglong)(dVar308 * dStack_1c38) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dStack_20f8 * dStack_1b38) & __real_7fffffffffffffff);
        auVar555._16_8_ =
             (double)(__real_7fffffffffffffff & (ulonglong)(dStack_1d30 * dVar311)) +
             (double)((ulonglong)(dVar313 * dStack_1c30) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dStack_20f0 * dStack_1b30) & __real_7fffffffffffffff);
        auVar555._24_8_ =
             (double)(__real_7fffffffffffffff & (ulonglong)(dStack_1d28 * dVar316)) +
             (double)((ulonglong)(dVar318 * dStack_1c28) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dStack_20e8 * dStack_1b28) & __real_7fffffffffffffff);
        auVar503._0_8_ =
             (double)((ulonglong)((double)local_1d20._0_8_ * dVar76) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar78 * local_1c20) & __real_7fffffffffffffff) +
             (double)((ulonglong)(local_2020 * local_1b20) & __real_7fffffffffffffff);
        auVar503._8_8_ =
             (double)((ulonglong)((double)local_1d20._8_8_ * dVar307) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar309 * dStack_1c18) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dStack_2018 * dStack_1b18) & __real_7fffffffffffffff);
        auVar503._16_8_ =
             (double)((ulonglong)(dStack_1d10 * dVar312) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar314 * dStack_1c10) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dStack_2010 * dStack_1b10) & __real_7fffffffffffffff);
        auVar503._24_8_ =
             (double)((ulonglong)(dStack_1d08 * dVar317) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar319 * dStack_1c08) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dStack_2008 * dStack_1b08) & __real_7fffffffffffffff);
        auVar442 = vsubpd_avx(auVar600,auVar534);
        auVar289 = vsubpd_avx(auVar583,auVar475);
        auVar287 = vsubpd_avx(auVar644,auVar439);
        auVar651 = vsubpd_avx(auVar626,auVar620);
        auVar601._0_8_ = auVar600._0_8_ + auVar534._0_8_;
        auVar601._8_8_ = auVar600._8_8_ + auVar534._8_8_;
        auVar601._16_8_ = auVar600._16_8_ + auVar534._16_8_;
        auVar601._24_8_ = auVar600._24_8_ + auVar534._24_8_;
        auVar539 = vsubpd_avx(auVar674,auVar555);
        auVar584._0_8_ = auVar583._0_8_ + auVar475._0_8_;
        auVar584._8_8_ = auVar583._8_8_ + auVar475._8_8_;
        auVar584._16_8_ = auVar583._16_8_ + auVar475._16_8_;
        auVar584._24_8_ = auVar583._24_8_ + auVar475._24_8_;
        auVar481 = vsubpd_avx(auVar663,auVar503);
        auVar645._0_8_ = auVar644._0_8_ + auVar439._0_8_;
        auVar645._8_8_ = auVar644._8_8_ + auVar439._8_8_;
        auVar645._16_8_ = auVar644._16_8_ + auVar439._16_8_;
        auVar645._24_8_ = auVar644._24_8_ + auVar439._24_8_;
        auVar621._0_8_ = auVar620._0_8_ + auVar626._0_8_;
        auVar621._8_8_ = auVar620._8_8_ + auVar626._8_8_;
        auVar621._16_8_ = auVar620._16_8_ + auVar626._16_8_;
        auVar621._24_8_ = auVar620._24_8_ + auVar626._24_8_;
        local_2460._8_8_ = auVar674._8_8_ + auVar555._8_8_;
        local_2460._0_8_ = auVar674._0_8_ + auVar555._0_8_;
        dStack_2450 = auVar674._16_8_ + auVar555._16_8_;
        dStack_2448 = auVar674._24_8_ + auVar555._24_8_;
        auVar556._0_8_ = auVar663._0_8_ + auVar503._0_8_;
        auVar556._8_8_ = auVar663._8_8_ + auVar503._8_8_;
        auVar556._16_8_ = auVar663._16_8_ + auVar503._16_8_;
        auVar556._24_8_ = auVar663._24_8_ + auVar503._24_8_;
        auVar624._8_8_ = 0;
        auVar624._0_8_ = local_1500;
        auVar321 = vpcmpeqb_avx(auVar624,ZEXT816(0) << 0x40);
        auVar461 = vpmovsxbd_avx(auVar321 ^ ___xmm_ffffffffffffffffffffffffffffffff);
        auVar465 = vpshufd_avx(auVar321 ^ ___xmm_ffffffffffffffffffffffffffffffff,0x55);
        auVar465 = vpmovsxbd_avx(auVar465);
        local_2000._0_4_ = auVar191._0_4_;
        local_2000._4_4_ = auVar191._4_4_;
        uStack_1ff8._0_4_ = auVar191._8_4_;
        uStack_1ff8._4_4_ = auVar191._12_4_;
        uStack_1ff0._0_4_ = auVar469._0_4_;
        uStack_1ff0._4_4_ = auVar469._4_4_;
        uStack_1fe8._0_4_ = auVar469._8_4_;
        uStack_1fe8._4_4_ = auVar469._12_4_;
        local_24a0._0_4_ = auVar461._0_4_ & (uint)local_2000;
        local_24a0._4_4_ = auVar461._4_4_ & local_2000._4_4_;
        local_24a0._8_4_ = auVar461._8_4_ & (uint)uStack_1ff8;
        local_24a0._12_4_ = auVar461._12_4_ & uStack_1ff8._4_4_;
        register0x00001210 = auVar465._0_4_ & (uint)uStack_1ff0;
        register0x00001214 = auVar465._4_4_ & uStack_1ff0._4_4_;
        register0x00001218 = auVar465._8_4_ & (uint)uStack_1fe8;
        register0x0000121c = auVar465._12_4_ & uStack_1fe8._4_4_;
        iVar25 = vmovmskps_avx(_local_24a0);
        if (iVar25 == 0) {
          _local_24a0 = ZEXT432(0) << 0x20;
LAB_140a66600:
          auVar461 = vpmovzxbw_avx(auVar321);
          auVar321 = vpand_avx(auVar461,local_1850);
          auVar321 = vpshufb_avx(auVar321,___xmm_00000000000000000e0c0a0806040200);
          if ((((((((SUB161(auVar321 >> 7,0) & 1) != 0 || (SUB161(auVar321 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar321 >> 0x17,0) & 1) != 0) || (SUB161(auVar321 >> 0x1f,0) & 1) != 0)
                || (SUB161(auVar321 >> 0x27,0) & 1) != 0) || (SUB161(auVar321 >> 0x2f,0) & 1) != 0)
              || (SUB161(auVar321 >> 0x37,0) & 1) != 0) || (SUB161(auVar321 >> 0x3f,0) & 1) != 0) {
            auVar321 = vpmovzxwd_avx(auVar461);
            auVar321 = vpslld_avx(auVar321,0x1f);
            auVar465 = vpsrad_avx(auVar321,0x1f);
            auVar321 = vpunpckhwd_avx(auVar461,auVar461);
            auVar321 = vpslld_avx(auVar321,0x1f);
            auVar321 = vpsrad_avx(auVar321,0x1f);
            auVar627._16_16_ = auVar321;
            auVar627._0_16_ = auVar465;
            auVar553 = auVar553 & auVar627;
            if ((((((((SUB321(auVar553 >> 0x1f,0) & 1) != 0 || (SUB321(auVar553 >> 0x3f,0) & 1) != 0
                     ) || (SUB321(auVar553 >> 0x5f,0) & 1) != 0) ||
                   SUB321(auVar553 >> 0x7f,0) != '\0') || (SUB321(auVar553 >> 0x9f,0) & 1) != 0) ||
                 SUB321(auVar553 >> 0xbf,0) != '\0') || (SUB321(auVar553 >> 0xdf,0) & 1) != 0) ||
                auVar553[0x1f] < '\0') {
              auVar464 = vpmovsxdq_avx(auVar465);
              auVar80 = vshufps_avx(auVar465,auVar465,0xfa);
              auVar279._16_16_ = auVar80;
              auVar279._0_16_ = auVar464;
              auVar464 = vpmovsxdq_avx(auVar321);
              auVar80 = vpshufd_avx(auVar321,0xfa);
              auVar476._16_16_ = auVar80;
              auVar476._0_16_ = auVar464;
              _local_1dc0 = vmaskmovpd_avx(auVar279,auVar442);
              _local_1da0 = vmaskmovpd_avx(auVar476,auVar289);
              _local_1d80 = vmaskmovpd_avx(auVar279,auVar287);
              _local_1d60 = vmaskmovpd_avx(auVar476,auVar651);
              _local_1d40 = vmaskmovpd_avx(auVar279,auVar539);
              _local_1d20 = vmaskmovpd_avx(auVar476,auVar481);
              local_1d00 = vmaskmovpd_avx(auVar279,auVar601);
              local_1ce0 = vmaskmovpd_avx(auVar476,auVar584);
              _local_1cc0 = vmaskmovpd_avx(auVar279,auVar645);
              _local_1ca0 = vmaskmovpd_avx(auVar476,auVar621);
              _local_1c80 = vmaskmovpd_avx(auVar279,_local_2460);
              _local_1c60 = vmaskmovpd_avx(auVar476,auVar556);
              auVar461 = vpsllw_avx(auVar461,0xf);
              auVar461 = vpacksswb_avx(auVar461,auVar461);
              if ((SUB161(auVar461 >> 7,0) & 1) != 0) {
                local_1c40 = 1;
              }
              if ((SUB161(auVar461 >> 0xf,0) & 1) != 0) {
                uStack_1c3f = 1;
              }
              if ((SUB161(auVar461 >> 0x17,0) & 1) != 0) {
                uStack_1c3e = 1;
              }
              if ((SUB161(auVar461 >> 0x1f,0) & 1) != 0) {
                uStack_1c3d = 1;
              }
              if ((SUB161(auVar461 >> 0x27,0) & 1) != 0) {
                uStack_1c3c = 1;
              }
              if ((SUB161(auVar461 >> 0x2f,0) & 1) != 0) {
                uStack_1c3b = 1;
              }
              if ((SUB161(auVar461 >> 0x37,0) & 1) != 0) {
                uStack_1c3a = 1;
              }
              if ((SUB161(auVar461 >> 0x3f,0) & 1) != 0) {
                uStack_1c39 = 1;
              }
              auVar280._0_4_ = auVar465._0_4_ & (uint)local_2000;
              auVar280._4_4_ = auVar465._4_4_ & local_2000._4_4_;
              auVar280._8_4_ = auVar465._8_4_ & (uint)uStack_1ff8;
              auVar280._12_4_ = auVar465._12_4_ & uStack_1ff8._4_4_;
              auVar280._16_4_ = auVar321._0_4_ & (uint)uStack_1ff0;
              auVar280._20_4_ = auVar321._4_4_ & uStack_1ff0._4_4_;
              auVar280._24_4_ = auVar321._8_4_ & (uint)uStack_1fe8;
              auVar280._28_4_ = auVar321._12_4_ & uStack_1fe8._4_4_;
              vmovmskps_avx(auVar280 | _local_24a0);
            }
          }
        }
        else {
          auVar288 = vminpd_avx(local_1680,auVar442);
          auVar464 = vshufps_avx(auVar461,auVar461,0x50);
          auVar461 = vshufps_avx(auVar461,auVar461,0xfa);
          auVar278._16_16_ = auVar461;
          auVar278._0_16_ = auVar464;
          _local_1dc0 = vmaskmovpd_avx(auVar278,auVar288);
          auVar461 = vshufps_avx(auVar465,auVar465,0x50);
          auVar465 = vshufps_avx(auVar465,auVar465,0xfa);
          auVar664._16_16_ = auVar465;
          auVar664._0_16_ = auVar461;
          auVar288 = vminpd_avx(local_1660,auVar289);
          _local_1da0 = vmaskmovpd_avx(auVar664,auVar288);
          auVar288 = vminpd_avx(local_1640,auVar287);
          _local_1d80 = vmaskmovpd_avx(auVar278,auVar288);
          auVar288 = vminpd_avx(local_1620,auVar651);
          _local_1d60 = vmaskmovpd_avx(auVar664,auVar288);
          auVar288 = vminpd_avx(local_1600,auVar539);
          _local_1d40 = vmaskmovpd_avx(auVar278,auVar288);
          auVar288 = vminpd_avx(local_15e0,auVar481);
          _local_1d20 = vmaskmovpd_avx(auVar664,auVar288);
          auVar288 = vmaxpd_avx(local_15c0,auVar601);
          local_1d00 = vmaskmovpd_avx(auVar278,auVar288);
          auVar288 = vmaxpd_avx(local_15a0,auVar584);
          local_1ce0 = vmaskmovpd_avx(auVar664,auVar288);
          auVar288 = vmaxpd_avx(local_1580,auVar645);
          _local_1cc0 = vmaskmovpd_avx(auVar278,auVar288);
          auVar288 = vmaxpd_avx(local_1560,auVar621);
          _local_1ca0 = vmaskmovpd_avx(auVar664,auVar288);
          auVar288 = vmaxpd_avx(local_1540,_local_2460);
          _local_1c80 = vmaskmovpd_avx(auVar278,auVar288);
          auVar288 = vmaxpd_avx(local_1520,auVar556);
          _local_1c60 = vmaskmovpd_avx(auVar664,auVar288);
          auVar461 = vpshufd_avx(auVar624,0x44);
          auVar461 = vpcmpeqb_avx(auVar461,___xmm_00000000000000000000000000000000);
          bVar27 = ~(SUB161(auVar461 >> 7,0) & 1 | (SUB161(auVar461 >> 0xf,0) & 1) << 1 |
                     (SUB161(auVar461 >> 0x17,0) & 1) << 2 | (SUB161(auVar461 >> 0x1f,0) & 1) << 3 |
                     (SUB161(auVar461 >> 0x27,0) & 1) << 4 | (SUB161(auVar461 >> 0x2f,0) & 1) << 5 |
                    (SUB161(auVar461 >> 0x37,0) & 1) << 6);
          if ((bVar27 & 1) != 0) {
            local_1c40 = (undefined1)local_1500;
          }
          if ((bVar27 & 2) != 0) {
            uStack_1c3f = (undefined1)(local_1500 >> 8);
          }
          if ((bVar27 & 4) != 0) {
            uStack_1c3e = (undefined1)(local_1500 >> 0x10);
          }
          if ((bVar27 & 8) != 0) {
            uStack_1c3d = (undefined1)(local_1500 >> 0x18);
          }
          if ((bVar27 & 0x10) != 0) {
            uStack_1c3c = (undefined1)(local_1500 >> 0x20);
          }
          if ((bVar27 & 0x20) != 0) {
            uStack_1c3b = (undefined1)(local_1500 >> 0x28);
          }
          if ((bVar27 & 0x40) != 0) {
            uStack_1c3a = (undefined1)(local_1500 >> 0x30);
          }
          if ((SUB161(auVar461 >> 0x3f,0) & 1) == 0) {
            uStack_1c39 = (undefined1)(local_1500 >> 0x38);
          }
          if (local_19a0[0] != (char)iVar25) goto LAB_140a66600;
        }
        in_ZMM4 = ZEXT3264(_local_1d40);
        in_ZMM7 = ZEXT3264(local_1d00);
        auVar321 = vshufps_avx(auVar191,auVar191,0x50);
        auVar461 = vshufps_avx(auVar191,auVar191,0xfa);
        auVar646._16_16_ = auVar461;
        auVar646._0_16_ = auVar321;
        auVar665._0_16_ = local_1940._0_16_;
        auVar665._16_16_ = local_1960._0_16_;
        local_1680 = vmaskmovpd_avx(auVar646,_local_1dc0);
        local_1660 = vmaskmovpd_avx(auVar665,_local_1da0);
        local_1640 = vmaskmovpd_avx(auVar646,_local_1d80);
        local_1620 = vmaskmovpd_avx(auVar665,_local_1d60);
        local_1600 = vmaskmovpd_avx(auVar646,_local_1d40);
        local_15e0 = vmaskmovpd_avx(auVar665,_local_1d20);
        local_15c0 = vmaskmovpd_avx(auVar646,local_1d00);
        local_15a0 = vmaskmovpd_avx(auVar665,local_1ce0);
        local_1580 = vmaskmovpd_avx(auVar646,_local_1cc0);
        local_1560 = vmaskmovpd_avx(auVar665,_local_1ca0);
        local_1540 = vmaskmovpd_avx(auVar646,_local_1c80);
        local_1520 = vmaskmovpd_avx(auVar665,_local_1c60);
        auVar656 = ZEXT864(0) << 0x40;
        uVar26 = local_1500;
        if ((local_19a0._0_4_ & 1) != 0) {
          local_1500 = CONCAT71(local_1500._1_7_,local_1c40);
          uVar26 = local_1500;
        }
        auVar633 = ZEXT864(0) << 0x40;
        if ((local_19a0._0_4_ & 2) != 0) {
          local_1500._2_6_ = (undefined6)(uVar26 >> 0x10);
          local_1500._0_1_ = (char)uVar26;
          local_1500._0_2_ = CONCAT11(uStack_1c3f,(char)local_1500);
          uVar26 = local_1500;
        }
        if ((local_19a0._0_4_ & 4) != 0) {
          local_1500._3_5_ = (undefined5)(uVar26 >> 0x18);
          local_1500._0_2_ = (undefined2)uVar26;
          local_1500._0_3_ = CONCAT12(uStack_1c3e,(undefined2)local_1500);
          uVar26 = local_1500;
        }
        if ((local_19a0._0_4_ & 8) != 0) {
          local_1500._4_4_ = (undefined4)(uVar26 >> 0x20);
          local_1500._0_3_ = (undefined3)uVar26;
          local_1500._0_4_ = CONCAT13(uStack_1c3d,(undefined3)local_1500);
          uVar26 = local_1500;
        }
        if ((local_19a0._0_4_ & 0x10) != 0) {
          local_1500._5_3_ = (undefined3)(uVar26 >> 0x28);
          local_1500._0_4_ = (undefined4)uVar26;
          local_1500._0_5_ = CONCAT14(uStack_1c3c,(undefined4)local_1500);
          uVar26 = local_1500;
        }
        if ((local_19a0._0_4_ & 0x20) != 0) {
          local_1500._6_2_ = (undefined2)(uVar26 >> 0x30);
          local_1500._0_5_ = (undefined5)uVar26;
          local_1500._0_6_ = CONCAT15(uStack_1c3b,(undefined5)local_1500);
          uVar26 = local_1500;
        }
        local_1500 = uVar26;
        if ((local_19a0._0_4_ & 0x40) != 0) {
          local_1500._7_1_ = (undefined1)(uVar26 >> 0x38);
          local_1500._0_6_ = (undefined6)uVar26;
          local_1500._0_7_ = CONCAT16(uStack_1c3a,(undefined6)local_1500);
        }
        if (local_19a0[0] < '\0') {
          local_1500 = CONCAT17(uStack_1c39,(undefined7)local_1500);
        }
      }
      uVar28 = (undefined4)((ulonglong)unaff_R12 >> 0x20);
      local_d8 = in_ZMM7._0_16_;
      uVar59 = uVar59 + 8;
    } while ((int)uVar59 < (int)uVar56);
  }
  auVar321 = ZEXT416(param_6);
  if ((int)param_6 <= (int)uVar59) goto LAB_140a6d3ac;
  auVar568 = vpshufd_avx(ZEXT416(uVar59),0);
  auVar647._16_16_ = auVar568;
  auVar647._0_16_ = auVar568;
  local_19a0 = auVar647 | ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
  auVar467 = vpshufd_avx(ZEXT416(param_6),0);
  auVar580 = vpcmpgtd_avx(auVar467,local_19a0._16_16_);
  auVar617 = vpcmpgtd_avx(auVar467,local_19a0._0_16_);
  auVar461 = vpslld_avx(auVar568,3);
  auVar465 = vpsubd_avx(auVar461,auVar568);
  auVar461 = vpand_avx(auVar617,auVar465);
  auVar477._16_16_ = auVar580;
  auVar477._0_16_ = auVar617;
  lVar62 = param_3 + (longlong)auVar461._0_4_ * 8;
  lVar30 = param_3 + (longlong)auVar461._4_4_ * 8;
  lVar51 = param_3 + (longlong)auVar461._8_4_ * 8;
  lVar54 = param_3 + (longlong)auVar461._12_4_ * 8;
  auVar465 = vpand_avx(auVar580,auVar465);
  lVar57 = param_3 + (longlong)auVar465._0_4_ * 8;
  auVar442 = vmaskmovps_avx(auVar477,*(undefined1 (*) [32])
                                      (local_1920._0_8_ + (longlong)(int)(uVar59 << 2)));
  lVar60 = param_3 + (longlong)auVar465._4_4_ * 8;
  lVar73 = param_3 + (longlong)auVar465._8_4_ * 8;
  uVar59 = auVar617._0_4_;
  uVar67 = auVar617._4_4_;
  uVar72 = auVar617._8_4_;
  uVar34 = auVar617._12_4_;
  uVar35 = auVar580._0_4_;
  uVar36 = auVar580._4_4_;
  uVar37 = auVar580._8_4_;
  uVar38 = auVar580._12_4_;
  lVar1 = param_3 + (longlong)auVar465._12_4_ * 8;
  auVar465 = vpinsrb_avx(ZEXT116(*(byte *)((ulonglong)
                                           (uVar59 & 
                                           ___ymm_000001b8000001800000014800000110000000d8000000a00000006800000030
                                           ) + lVar62)),
                         (uint)*(byte *)((ulonglong)(uVar67 & _UNK_1512875a4) + lVar30),1);
  auVar465 = vpinsrb_avx(auVar465,(uint)*(byte *)((ulonglong)(uVar72 & _UNK_1512875a8) + lVar51),2);
  auVar465 = vpinsrb_avx(auVar465,(uint)*(byte *)((ulonglong)(uVar34 & _UNK_1512875ac) + lVar54),3);
  auVar465 = vpinsrb_avx(auVar465,(uint)*(byte *)((ulonglong)(uVar35 & _UNK_1512875b0) + lVar57),4);
  auVar465 = vpinsrb_avx(auVar465,(uint)*(byte *)((ulonglong)(uVar36 & _UNK_1512875b4) + lVar60),5);
  auVar465 = vpinsrb_avx(auVar465,(uint)*(byte *)((ulonglong)(uVar37 & _UNK_1512875b8) + lVar73),6);
  auVar465 = vpinsrb_avx(auVar465,(uint)*(byte *)((ulonglong)(uVar38 & _UNK_1512875bc) + lVar1),7);
  auVar464 = vpcmpeqd_avx(local_d8,local_d8);
  auVar80 = vpcmpeqd_avx(auVar442._16_16_,auVar464);
  auVar192 = vpcmpeqd_avx(auVar442._0_16_,auVar464);
  auVar465 = vpcmpeqb_avx(ZEXT816(0),auVar465);
  auVar465 = auVar465 ^ auVar464;
  auVar464 = vpmovsxbd_avx(auVar465);
  auVar499 = vpshufd_avx(auVar465,0x55);
  auVar499 = vpmovsxbd_avx(auVar499);
  auVar281._0_4_ = ~auVar192._0_4_ & auVar464._0_4_ & uVar59;
  auVar281._4_4_ = ~auVar192._4_4_ & auVar464._4_4_ & uVar67;
  auVar281._8_4_ = ~auVar192._8_4_ & auVar464._8_4_ & uVar72;
  auVar281._12_4_ = ~auVar192._12_4_ & auVar464._12_4_ & uVar34;
  auVar281._16_4_ = ~auVar80._0_4_ & auVar499._0_4_ & uVar35;
  auVar281._20_4_ = ~auVar80._4_4_ & auVar499._4_4_ & uVar36;
  auVar281._24_4_ = ~auVar80._8_4_ & auVar499._8_4_ & uVar37;
  auVar281._28_4_ = ~auVar80._12_4_ & auVar499._12_4_ & uVar38;
  uVar56 = vmovmskps_avx(auVar281);
  if (uVar56 == 0) goto LAB_140a6d3ac;
  local_1940._0_16_ = local_19a0._16_16_;
  local_1920._0_16_ = ZEXT416(param_6);
  auVar115._0_4_ = uVar59 & ___ymm_000001880000015000000118000000e0000000a8000000700000003800000000;
  auVar115._4_4_ = uVar67 & _UNK_1512874e4;
  auVar115._8_4_ = uVar72 & _UNK_1512874e8;
  auVar115._12_4_ = uVar34 & _UNK_1512874ec;
  uVar70 = vextractps_avx(auVar115,1);
  uVar64 = vextractps_avx(auVar115,2);
  auVar575._8_8_ = 0;
  auVar575._0_8_ = *(ulonglong *)(param_3 + (longlong)auVar461._0_4_ * 8);
  uVar58 = vextractps_avx(auVar115,3);
  auVar468 = vmovhps_avx(auVar575,*(undefined8 *)((ulonglong)uVar70 + lVar30));
  auVar576._8_8_ = 0;
  auVar576._0_8_ = *(ulonglong *)(CONCAT44(uVar28,uVar64) + lVar51);
  auVar190 = vmovhps_avx(auVar576,*(undefined8 *)
                                   (CONCAT44((int)((ulonglong)param_3 >> 0x20),uVar58) + lVar54));
  auVar577._8_8_ = 0;
  auVar577._0_8_ = *(ulonglong *)((ulonglong)(uVar37 & _UNK_1512874f8) + lVar73);
  auVar189 = vmovhps_avx(auVar577,*(undefined8 *)((ulonglong)(uVar38 & _UNK_1512874fc) + lVar1));
  auVar116._8_8_ = 0;
  auVar116._0_8_ = *(ulonglong *)((ulonglong)(uVar35 & _UNK_1512874f0) + lVar57);
  auVar191 = vmovhps_avx(auVar116,*(undefined8 *)((ulonglong)(uVar36 & _UNK_1512874f4) + lVar60));
  auVar117._0_4_ = uVar59 & ___ymm_000001900000015800000120000000e8000000b0000000780000004000000008;
  auVar117._4_4_ = uVar67 & _UNK_151287504;
  auVar117._8_4_ = uVar72 & _UNK_151287508;
  auVar117._12_4_ = uVar34 & _UNK_15128750c;
  uVar70 = vextractps_avx(auVar117,1);
  uVar66 = vextractps_avx(auVar117,2);
  uVar71 = vextractps_avx(auVar117,3);
  auVar641._8_8_ = 0;
  auVar641._0_8_ = *(ulonglong *)((ulonglong)(uVar37 & _UNK_151287518) + lVar73);
  auVar321 = vmovhpd_avx(auVar641,*(undefined8 *)((ulonglong)(uVar38 & _UNK_15128751c) + lVar1));
  auVar642._8_8_ = 0;
  auVar642._0_8_ = *(ulonglong *)((ulonglong)(uVar35 & _UNK_151287510) + lVar57);
  auVar188 = vmovhps_avx(auVar642,*(undefined8 *)((ulonglong)(uVar36 & _UNK_151287514) + lVar60));
  auVar643._8_8_ = 0;
  auVar643._0_8_ = *(ulonglong *)((ulonglong)uVar66 + lVar51);
  auVar461 = vmovhpd_avx(auVar643,*(undefined8 *)((ulonglong)uVar71 + lVar54));
  auVar118._8_8_ = 0;
  auVar118._0_8_ = *(ulonglong *)((ulonglong)auVar117._0_4_ + lVar62);
  auVar469 = vmovhps_avx(auVar118,*(undefined8 *)((ulonglong)uVar70 + lVar30));
  auVar491._0_4_ = uVar59 & ___ymm_000001980000016000000128000000f0000000b8000000800000004800000010;
  auVar491._4_4_ = uVar67 & _UNK_151287524;
  auVar491._8_4_ = uVar72 & _UNK_151287528;
  auVar491._12_4_ = uVar34 & _UNK_15128752c;
  uVar70 = vextractps_avx(auVar491,1);
  uVar66 = vextractps_avx(auVar491,2);
  uVar71 = vextractps_avx(auVar491,3);
  auVar196 = vpackssdw_avx(auVar617,auVar580);
  auVar358._8_8_ = 0;
  auVar358._0_8_ = *(ulonglong *)((ulonglong)(uVar37 & _UNK_151287538) + lVar73);
  auVar327 = vmovhps_avx(auVar358,*(undefined8 *)((ulonglong)(uVar38 & _UNK_15128753c) + lVar1));
  auVar119._8_8_ = 0;
  auVar119._0_8_ = *(ulonglong *)((ulonglong)(uVar35 & _UNK_151287530) + lVar57);
  auVar193 = vmovhps_avx(auVar119,*(undefined8 *)((ulonglong)(uVar36 & _UNK_151287534) + lVar60));
  auVar535._16_16_ = auVar190;
  auVar535._0_16_ = auVar468;
  auVar524._8_8_ = 0;
  auVar524._0_8_ = *(ulonglong *)((ulonglong)uVar66 + lVar51);
  auVar194 = vmovhps_avx(auVar524,*(undefined8 *)((ulonglong)uVar71 + lVar54));
  auVar492._8_8_ = 0;
  auVar492._0_8_ = *(ulonglong *)((ulonglong)auVar491._0_4_ + lVar62);
  auVar464 = vmovhpd_avx(auVar492,*(undefined8 *)((ulonglong)uVar70 + lVar30));
  auVar493._0_4_ = uVar59 & ___ymm_000001a00000016800000130000000f8000000c0000000880000005000000018;
  auVar493._4_4_ = uVar67 & _UNK_151287544;
  auVar493._8_4_ = uVar72 & _UNK_151287548;
  auVar493._12_4_ = uVar34 & _UNK_15128754c;
  uVar70 = vextractps_avx(auVar493,1);
  uVar66 = vextractps_avx(auVar493,2);
  uVar71 = vextractps_avx(auVar493,3);
  auVar585._16_16_ = auVar189;
  auVar585._0_16_ = auVar191;
  auVar602._16_16_ = auVar321;
  auVar602._0_16_ = auVar188;
  auVar597._8_8_ = 0;
  auVar597._0_8_ = *(ulonglong *)((ulonglong)(uVar37 & _UNK_151287558) + lVar73);
  auVar580 = vmovhpd_avx(auVar597,*(undefined8 *)((ulonglong)(uVar38 & _UNK_15128755c) + lVar1));
  auVar578._8_8_ = 0;
  auVar578._0_8_ = *(ulonglong *)((ulonglong)(uVar35 & _UNK_151287550) + lVar57);
  auVar617 = vmovhpd_avx(auVar578,*(undefined8 *)((ulonglong)(uVar36 & _UNK_151287554) + lVar60));
  auVar586._16_16_ = auVar461;
  auVar586._0_16_ = auVar469;
  auVar579._8_8_ = 0;
  auVar579._0_8_ = *(ulonglong *)((ulonglong)uVar66 + lVar51);
  auVar195 = vmovhps_avx(auVar579,*(undefined8 *)((ulonglong)uVar71 + lVar54));
  auVar494._8_8_ = 0;
  auVar494._0_8_ = *(ulonglong *)((ulonglong)auVar493._0_4_ + lVar62);
  auVar499 = vmovhpd_avx(auVar494,*(undefined8 *)((ulonglong)uVar70 + lVar30));
  auVar495._0_4_ = uVar59 & ___ymm_000001a8000001700000013800000100000000c8000000900000005800000020;
  auVar495._4_4_ = uVar67 & _UNK_151287564;
  auVar495._8_4_ = uVar72 & _UNK_151287568;
  auVar495._12_4_ = uVar34 & _UNK_15128756c;
  uVar70 = vextractps_avx(auVar495,1);
  uVar66 = vextractps_avx(auVar495,2);
  uVar71 = vextractps_avx(auVar495,3);
  local_1960._16_16_ = auVar327;
  local_1960._0_16_ = auVar193;
  local_1880._16_16_ = auVar194;
  local_1880._0_16_ = auVar464;
  auVar120._8_8_ = 0;
  auVar120._0_8_ = *(ulonglong *)((ulonglong)(uVar37 & _UNK_151287578) + lVar73);
  auVar464 = vmovhps_avx(auVar120,*(undefined8 *)((ulonglong)(uVar38 & _UNK_15128757c) + lVar1));
  auVar359._8_8_ = 0;
  auVar359._0_8_ = *(ulonglong *)((ulonglong)(uVar35 & _UNK_151287570) + lVar57);
  auVar327 = vmovhps_avx(auVar359,*(undefined8 *)((ulonglong)(uVar36 & _UNK_151287574) + lVar60));
  local_18a0._16_16_ = auVar580;
  local_18a0._0_16_ = auVar617;
  auVar525._8_8_ = 0;
  auVar525._0_8_ = *(ulonglong *)((ulonglong)uVar66 + lVar51);
  auVar580 = vmovhps_avx(auVar525,*(undefined8 *)((ulonglong)uVar71 + lVar54));
  auVar496._8_8_ = 0;
  auVar496._0_8_ = *(ulonglong *)((ulonglong)auVar495._0_4_ + lVar62);
  auVar617 = vmovhps_avx(auVar496,*(undefined8 *)((ulonglong)uVar70 + lVar30));
  auVar462._0_4_ = uVar59 & ___ymm_000001b0000001780000014000000108000000d0000000980000006000000028;
  auVar462._4_4_ = uVar67 & _UNK_151287584;
  auVar462._8_4_ = uVar72 & _UNK_151287588;
  auVar462._12_4_ = uVar34 & _UNK_15128758c;
  uVar59 = vextractps_avx(auVar462,1);
  uVar67 = vextractps_avx(auVar462,2);
  uVar72 = vextractps_avx(auVar462,3);
  auVar587._16_16_ = auVar195;
  auVar587._0_16_ = auVar499;
  local_18c0._16_16_ = auVar464;
  local_18c0._0_16_ = auVar327;
  auVar121._8_8_ = 0;
  auVar121._0_8_ = *(ulonglong *)((ulonglong)(uVar37 & _UNK_151287598) + lVar73);
  auVar464 = vmovhps_avx(auVar121,*(undefined8 *)((ulonglong)(uVar38 & _UNK_15128759c) + lVar1));
  auVar360._8_8_ = 0;
  auVar360._0_8_ = *(ulonglong *)((ulonglong)(uVar35 & _UNK_151287590) + lVar57);
  auVar327 = vmovhps_avx(auVar360,*(undefined8 *)((ulonglong)(uVar36 & _UNK_151287594) + lVar60));
  auVar504._16_16_ = auVar580;
  auVar504._0_16_ = auVar617;
  auVar497._8_8_ = 0;
  auVar497._0_8_ = *(ulonglong *)((ulonglong)uVar67 + lVar51);
  auVar193 = vmovhps_avx(auVar497,*(undefined8 *)((ulonglong)uVar72 + lVar54));
  auVar463._8_8_ = 0;
  auVar463._0_8_ = *(ulonglong *)((ulonglong)auVar462._0_4_ + lVar62);
  auVar194 = vmovhps_avx(auVar463,*(undefined8 *)((ulonglong)uVar59 + lVar30));
  local_18e0._16_16_ = auVar464;
  local_18e0._0_16_ = auVar327;
  local_1900._16_16_ = auVar193;
  local_1900._0_16_ = auVar194;
  auVar464 = vpackssdw_avx(auVar192,auVar80);
  auVar465 = vpmovsxbw_avx(auVar465);
  local_1970 = vpandn_avx(auVar464,auVar465);
  auVar465 = vpand_avx(local_1970,auVar196);
  auVar80 = vpmovsxwd_avx(auVar465);
  auVar464 = vpslld_avx(auVar568,7);
  auVar464 = vpand_avx(auVar80,auVar464);
  auVar192 = vpunpckhwd_avx(auVar465,auVar465);
  auVar465 = vpslld_avx(auVar568,7);
  auVar505._16_16_ = auVar192;
  auVar505._0_16_ = auVar80;
  auVar465 = vpand_avx(auVar192,auVar465);
  uVar547 = auVar80._0_4_;
  auVar361._0_4_ = uVar547 & ___ymm_0000038000000300000002800000020000000180000001000000008000000000
  ;
  uVar560 = auVar80._4_4_;
  auVar361._4_4_ = uVar560 & _UNK_1512879c4;
  uVar561 = auVar80._8_4_;
  auVar361._8_4_ = uVar561 & _UNK_1512879c8;
  uVar562 = auVar80._12_4_;
  auVar361._12_4_ = uVar562 & _UNK_1512879cc;
  uVar563 = auVar192._0_4_;
  uVar564 = auVar192._4_4_;
  uVar565 = auVar192._8_4_;
  uVar566 = auVar192._12_4_;
  uVar53 = vextractps_avx(auVar361,1);
  uVar64 = (undefined4)((ulonglong)lVar62 >> 0x20);
  uVar28 = vextractps_avx(auVar361,2);
  uVar58 = vextractps_avx(auVar361,3);
  auVar122._0_4_ = uVar547 & ___ymm_0000039000000310000002900000021000000190000001100000009000000010
  ;
  auVar122._4_4_ = uVar560 & _UNK_151287a04;
  auVar122._8_4_ = uVar561 & _UNK_151287a08;
  auVar122._12_4_ = uVar562 & _UNK_151287a0c;
  uVar59 = vextractps_avx(auVar122,1);
  uVar67 = vextractps_avx(auVar122,2);
  auVar123._0_4_ = uVar547 & ___ymm_000003a000000320000002a000000220000001a000000120000000a000000020
  ;
  auVar123._4_4_ = uVar560 & _UNK_151287a44;
  auVar123._8_4_ = uVar561 & _UNK_151287a48;
  auVar123._12_4_ = uVar562 & _UNK_151287a4c;
  uVar72 = vextractps_avx(auVar123,1);
  uVar34 = vextractps_avx(auVar123,2);
  uVar35 = vextractps_avx(auVar123,3);
  auVar124._0_4_ = uVar547 & ___ymm_000003b000000330000002b000000230000001b000000130000000b000000030
  ;
  auVar124._4_4_ = uVar560 & _UNK_151287a84;
  auVar124._8_4_ = uVar561 & _UNK_151287a88;
  auVar124._12_4_ = uVar562 & _UNK_151287a8c;
  uVar36 = vextractps_avx(auVar124,1);
  uVar37 = vextractps_avx(auVar124,2);
  auVar125._0_4_ = uVar547 & ___ymm_000003c000000340000002c000000240000001c000000140000000c000000040
  ;
  auVar125._4_4_ = uVar560 & _UNK_151287ac4;
  auVar125._8_4_ = uVar561 & _UNK_151287ac8;
  auVar125._12_4_ = uVar562 & _UNK_151287acc;
  uVar38 = vextractps_avx(auVar125,1);
  uVar70 = vextractps_avx(auVar125,2);
  uVar66 = vextractps_avx(auVar125,3);
  auVar126._0_4_ = uVar547 & ___ymm_000003d000000350000002d000000250000001d000000150000000d000000050
  ;
  auVar126._4_4_ = uVar560 & _UNK_151287b04;
  auVar126._8_4_ = uVar561 & _UNK_151287b08;
  auVar126._12_4_ = uVar562 & _UNK_151287b0c;
  uVar71 = vextractps_avx(auVar126,1);
  uVar39 = vextractps_avx(auVar126,2);
  auVar127._0_4_ = uVar547 & ___ymm_000003e000000360000002e000000260000001e000000160000000e000000060
  ;
  auVar127._4_4_ = uVar560 & _UNK_151287b44;
  auVar127._8_4_ = uVar561 & _UNK_151287b48;
  auVar127._12_4_ = uVar562 & _UNK_151287b4c;
  uVar40 = vextractps_avx(auVar127,1);
  uVar41 = vextractps_avx(auVar127,2);
  uVar42 = vextractps_avx(auVar127,3);
  lVar73 = auVar464._4_4_ + param_2;
  auVar128._8_8_ = 0;
  auVar128._0_8_ = *(ulonglong *)(param_2 + auVar464._0_4_);
  local_1140 = vmovhps_avx(auVar128,*(undefined8 *)
                                     (CONCAT44((int)((ulonglong)lVar1 >> 0x20),uVar53) + lVar73));
  auVar362._0_4_ = uVar547 & ___ymm_000003f000000370000002f000000270000001f000000170000000f000000070
  ;
  auVar362._4_4_ = uVar560 & _UNK_151287b84;
  auVar362._8_4_ = uVar561 & _UNK_151287b88;
  auVar362._12_4_ = uVar562 & _UNK_151287b8c;
  uVar43 = vextractps_avx(auVar362,1);
  uVar44 = vextractps_avx(auVar362,2);
  uVar45 = vextractps_avx(auVar362,3);
  lVar54 = auVar465._8_4_ + param_2;
  lVar57 = auVar465._12_4_ + param_2;
  auVar363._8_8_ = 0;
  auVar363._0_8_ = *(ulonglong *)((ulonglong)(uVar565 & _UNK_1512879d8) + lVar54);
  local_1110 = vmovhps_avx(auVar363,*(undefined8 *)((ulonglong)(uVar566 & _UNK_1512879dc) + lVar57))
  ;
  lVar60 = auVar465._0_4_ + param_2;
  lVar51 = auVar465._4_4_ + param_2;
  auVar364._8_8_ = 0;
  auVar364._0_8_ = *(ulonglong *)((ulonglong)(uVar563 & _UNK_1512879d0) + lVar60);
  local_1120 = vmovhps_avx(auVar364,*(undefined8 *)((ulonglong)(uVar564 & _UNK_1512879d4) + lVar51))
  ;
  lVar30 = auVar464._8_4_ + param_2;
  lVar62 = auVar464._12_4_ + param_2;
  auVar365._8_8_ = 0;
  auVar365._0_8_ = *(ulonglong *)(CONCAT44(uVar64,uVar28) + lVar30);
  local_1130 = vmovhps_avx(auVar365,*(undefined8 *)(CONCAT44(uVar64,uVar58) + lVar62));
  auVar366._8_8_ = 0;
  auVar366._0_8_ = *(ulonglong *)((ulonglong)(uVar561 & _UNK_1512879e8) + lVar30);
  local_10f0 = vmovhps_avx(auVar366,*(undefined8 *)((ulonglong)(uVar562 & _UNK_1512879ec) + lVar62))
  ;
  auVar129._8_8_ = 0;
  auVar129._0_8_ = *(ulonglong *)((ulonglong)(uVar565 & _UNK_1512879f8) + lVar54);
  local_10d0 = vmovhps_avx(auVar129,*(undefined8 *)((ulonglong)(uVar566 & _UNK_1512879fc) + lVar57))
  ;
  auVar130._8_8_ = 0;
  auVar130._0_8_ = *(ulonglong *)((ulonglong)(uVar563 & _UNK_1512879f0) + lVar60);
  local_10e0 = vmovhps_avx(auVar130,*(undefined8 *)((ulonglong)(uVar564 & _UNK_1512879f4) + lVar51))
  ;
  param_2 = param_2 + auVar464._0_4_;
  auVar131._8_8_ = 0;
  auVar131._0_8_ =
       *(ulonglong *)
        ((ulonglong)
         (uVar547 & ___ymm_0000038800000308000002880000020800000188000001080000008800000008) +
        param_2);
  local_1100 = vmovhps_avx(auVar131,*(undefined8 *)((ulonglong)(uVar560 & _UNK_1512879e4) + lVar73))
  ;
  auVar132._8_8_ = 0;
  auVar132._0_8_ = *(ulonglong *)((ulonglong)(uVar565 & _UNK_151287a18) + lVar54);
  local_1090 = vmovhps_avx(auVar132,*(undefined8 *)((ulonglong)(uVar566 & _UNK_151287a1c) + lVar57))
  ;
  auVar133._8_8_ = 0;
  auVar133._0_8_ = *(ulonglong *)((ulonglong)(uVar563 & _UNK_151287a10) + lVar60);
  local_10a0 = vmovhps_avx(auVar133,*(undefined8 *)((ulonglong)(uVar564 & _UNK_151287a14) + lVar51))
  ;
  auVar134._8_8_ = 0;
  auVar134._0_8_ = *(ulonglong *)((ulonglong)uVar67 + lVar30);
  local_10b0 = vmovhps_avx(auVar134,*(undefined8 *)((ulonglong)auVar122._12_4_ + lVar62));
  auVar135._8_8_ = 0;
  auVar135._0_8_ = *(ulonglong *)((ulonglong)auVar122._0_4_ + param_2);
  local_10c0 = vmovhps_avx(auVar135,*(undefined8 *)((ulonglong)uVar59 + lVar73));
  auVar136._8_8_ = 0;
  auVar136._0_8_ = *(ulonglong *)((ulonglong)(uVar565 & _UNK_151287a38) + lVar54);
  local_1050 = vmovhps_avx(auVar136,*(undefined8 *)((ulonglong)(uVar566 & _UNK_151287a3c) + lVar57))
  ;
  auVar137._8_8_ = 0;
  auVar137._0_8_ = *(ulonglong *)((ulonglong)(uVar563 & _UNK_151287a30) + lVar60);
  local_1060 = vmovhps_avx(auVar137,*(undefined8 *)((ulonglong)(uVar564 & _UNK_151287a34) + lVar51))
  ;
  auVar138._8_8_ = 0;
  auVar138._0_8_ = *(ulonglong *)((ulonglong)(uVar561 & _UNK_151287a28) + lVar30);
  local_1070 = vmovhps_avx(auVar138,*(undefined8 *)((ulonglong)(uVar562 & _UNK_151287a2c) + lVar62))
  ;
  auVar139._8_8_ = 0;
  auVar139._0_8_ =
       *(ulonglong *)
        ((ulonglong)
         (uVar547 & ___ymm_0000039800000318000002980000021800000198000001180000009800000018) +
        param_2);
  local_1080 = vmovhps_avx(auVar139,*(undefined8 *)((ulonglong)(uVar560 & _UNK_151287a24) + lVar73))
  ;
  auVar140._8_8_ = 0;
  auVar140._0_8_ = *(ulonglong *)((ulonglong)(uVar565 & _UNK_151287a58) + lVar54);
  local_1010 = vmovhps_avx(auVar140,*(undefined8 *)((ulonglong)(uVar566 & _UNK_151287a5c) + lVar57))
  ;
  auVar141._8_8_ = 0;
  auVar141._0_8_ = *(ulonglong *)((ulonglong)(uVar563 & _UNK_151287a50) + lVar60);
  local_1020 = vmovhps_avx(auVar141,*(undefined8 *)((ulonglong)(uVar564 & _UNK_151287a54) + lVar51))
  ;
  auVar142._8_8_ = 0;
  auVar142._0_8_ = *(ulonglong *)((ulonglong)uVar34 + lVar30);
  local_1030 = vmovhps_avx(auVar142,*(undefined8 *)((ulonglong)uVar35 + lVar62));
  auVar143._8_8_ = 0;
  auVar143._0_8_ = *(ulonglong *)((ulonglong)auVar123._0_4_ + param_2);
  local_1040 = vmovhps_avx(auVar143,*(undefined8 *)((ulonglong)uVar72 + lVar73));
  auVar144._8_8_ = 0;
  auVar144._0_8_ = *(ulonglong *)((ulonglong)(uVar565 & _UNK_151287a78) + lVar54);
  local_fd0 = vmovhps_avx(auVar144,*(undefined8 *)((ulonglong)(uVar566 & _UNK_151287a7c) + lVar57));
  auVar145._8_8_ = 0;
  auVar145._0_8_ = *(ulonglong *)((ulonglong)(uVar563 & _UNK_151287a70) + lVar60);
  local_fe0 = vmovhps_avx(auVar145,*(undefined8 *)((ulonglong)(uVar564 & _UNK_151287a74) + lVar51));
  auVar146._8_8_ = 0;
  auVar146._0_8_ = *(ulonglong *)((ulonglong)(uVar561 & _UNK_151287a68) + lVar30);
  local_ff0 = vmovhps_avx(auVar146,*(undefined8 *)((ulonglong)(uVar562 & _UNK_151287a6c) + lVar62));
  auVar147._8_8_ = 0;
  auVar147._0_8_ =
       *(ulonglong *)
        ((ulonglong)
         (uVar547 & ___ymm_000003a800000328000002a800000228000001a800000128000000a800000028) +
        param_2);
  local_1000 = vmovhps_avx(auVar147,*(undefined8 *)((ulonglong)(uVar560 & _UNK_151287a64) + lVar73))
  ;
  auVar148._8_8_ = 0;
  auVar148._0_8_ = *(ulonglong *)((ulonglong)(uVar565 & _UNK_151287a98) + lVar54);
  local_f90 = vmovhps_avx(auVar148,*(undefined8 *)((ulonglong)(uVar566 & _UNK_151287a9c) + lVar57));
  auVar149._8_8_ = 0;
  auVar149._0_8_ = *(ulonglong *)((ulonglong)(uVar563 & _UNK_151287a90) + lVar60);
  local_fa0 = vmovhps_avx(auVar149,*(undefined8 *)((ulonglong)(uVar564 & _UNK_151287a94) + lVar51));
  auVar150._8_8_ = 0;
  auVar150._0_8_ = *(ulonglong *)((ulonglong)uVar37 + lVar30);
  local_fb0 = vmovhps_avx(auVar150,*(undefined8 *)((ulonglong)auVar124._12_4_ + lVar62));
  auVar151._8_8_ = 0;
  auVar151._0_8_ = *(ulonglong *)((ulonglong)auVar124._0_4_ + param_2);
  local_fc0 = vmovhps_avx(auVar151,*(undefined8 *)((ulonglong)uVar36 + lVar73));
  auVar152._8_8_ = 0;
  auVar152._0_8_ = *(ulonglong *)((ulonglong)(uVar565 & _UNK_151287ab8) + lVar54);
  local_f50 = vmovhps_avx(auVar152,*(undefined8 *)((ulonglong)(uVar566 & _UNK_151287abc) + lVar57));
  auVar153._8_8_ = 0;
  auVar153._0_8_ = *(ulonglong *)((ulonglong)(uVar563 & _UNK_151287ab0) + lVar60);
  local_f60 = vmovhps_avx(auVar153,*(undefined8 *)((ulonglong)(uVar564 & _UNK_151287ab4) + lVar51));
  auVar154._8_8_ = 0;
  auVar154._0_8_ = *(ulonglong *)((ulonglong)(uVar561 & _UNK_151287aa8) + lVar30);
  local_f70 = vmovhps_avx(auVar154,*(undefined8 *)((ulonglong)(uVar562 & _UNK_151287aac) + lVar62));
  auVar155._8_8_ = 0;
  auVar155._0_8_ =
       *(ulonglong *)
        ((ulonglong)
         (uVar547 & ___ymm_000003b800000338000002b800000238000001b800000138000000b800000038) +
        param_2);
  local_f80 = vmovhps_avx(auVar155,*(undefined8 *)((ulonglong)(uVar560 & _UNK_151287aa4) + lVar73));
  auVar156._8_8_ = 0;
  auVar156._0_8_ = *(ulonglong *)((ulonglong)(uVar565 & _UNK_151287ad8) + lVar54);
  local_f10 = vmovhps_avx(auVar156,*(undefined8 *)((ulonglong)(uVar566 & _UNK_151287adc) + lVar57));
  auVar157._8_8_ = 0;
  auVar157._0_8_ = *(ulonglong *)((ulonglong)(uVar563 & _UNK_151287ad0) + lVar60);
  local_f20 = vmovhps_avx(auVar157,*(undefined8 *)((ulonglong)(uVar564 & _UNK_151287ad4) + lVar51));
  auVar158._8_8_ = 0;
  auVar158._0_8_ = *(ulonglong *)((ulonglong)uVar70 + lVar30);
  local_f30 = vmovhps_avx(auVar158,*(undefined8 *)((ulonglong)uVar66 + lVar62));
  auVar159._8_8_ = 0;
  auVar159._0_8_ = *(ulonglong *)((ulonglong)auVar125._0_4_ + param_2);
  local_f40 = vmovhps_avx(auVar159,*(undefined8 *)((ulonglong)uVar38 + lVar73));
  auVar160._8_8_ = 0;
  auVar160._0_8_ = *(ulonglong *)((ulonglong)(uVar565 & _UNK_151287af8) + lVar54);
  local_ed0 = vmovhps_avx(auVar160,*(undefined8 *)((ulonglong)(uVar566 & _UNK_151287afc) + lVar57));
  auVar161._8_8_ = 0;
  auVar161._0_8_ = *(ulonglong *)((ulonglong)(uVar563 & _UNK_151287af0) + lVar60);
  local_ee0 = vmovhps_avx(auVar161,*(undefined8 *)((ulonglong)(uVar564 & _UNK_151287af4) + lVar51));
  auVar162._8_8_ = 0;
  auVar162._0_8_ = *(ulonglong *)((ulonglong)(uVar561 & _UNK_151287ae8) + lVar30);
  local_ef0 = vmovhps_avx(auVar162,*(undefined8 *)((ulonglong)(uVar562 & _UNK_151287aec) + lVar62));
  auVar163._8_8_ = 0;
  auVar163._0_8_ =
       *(ulonglong *)
        ((ulonglong)
         (uVar547 & ___ymm_000003c800000348000002c800000248000001c800000148000000c800000048) +
        param_2);
  local_f00 = vmovhps_avx(auVar163,*(undefined8 *)((ulonglong)(uVar560 & _UNK_151287ae4) + lVar73));
  auVar164._8_8_ = 0;
  auVar164._0_8_ = *(ulonglong *)((ulonglong)(uVar565 & _UNK_151287b18) + lVar54);
  local_e90 = vmovhps_avx(auVar164,*(undefined8 *)((ulonglong)(uVar566 & _UNK_151287b1c) + lVar57));
  auVar165._8_8_ = 0;
  auVar165._0_8_ = *(ulonglong *)((ulonglong)(uVar563 & _UNK_151287b10) + lVar60);
  local_ea0 = vmovhps_avx(auVar165,*(undefined8 *)((ulonglong)(uVar564 & _UNK_151287b14) + lVar51));
  auVar166._8_8_ = 0;
  auVar166._0_8_ = *(ulonglong *)((ulonglong)uVar39 + lVar30);
  local_eb0 = vmovhps_avx(auVar166,*(undefined8 *)((ulonglong)auVar126._12_4_ + lVar62));
  auVar167._8_8_ = 0;
  auVar167._0_8_ = *(ulonglong *)((ulonglong)auVar126._0_4_ + param_2);
  local_ec0 = vmovhps_avx(auVar167,*(undefined8 *)((ulonglong)uVar71 + lVar73));
  auVar168._8_8_ = 0;
  auVar168._0_8_ = *(ulonglong *)((ulonglong)(uVar565 & _UNK_151287b38) + lVar54);
  local_e50 = vmovhps_avx(auVar168,*(undefined8 *)((ulonglong)(uVar566 & _UNK_151287b3c) + lVar57));
  auVar169._8_8_ = 0;
  auVar169._0_8_ = *(ulonglong *)((ulonglong)(uVar563 & _UNK_151287b30) + lVar60);
  local_e60 = vmovhps_avx(auVar169,*(undefined8 *)((ulonglong)(uVar564 & _UNK_151287b34) + lVar51));
  auVar170._8_8_ = 0;
  auVar170._0_8_ = *(ulonglong *)((ulonglong)(uVar561 & _UNK_151287b28) + lVar30);
  local_e70 = vmovhps_avx(auVar170,*(undefined8 *)((ulonglong)(uVar562 & _UNK_151287b2c) + lVar62));
  auVar171._8_8_ = 0;
  auVar171._0_8_ =
       *(ulonglong *)
        ((ulonglong)
         (uVar547 & ___ymm_000003d800000358000002d800000258000001d800000158000000d800000058) +
        param_2);
  local_e80 = vmovhps_avx(auVar171,*(undefined8 *)((ulonglong)(uVar560 & _UNK_151287b24) + lVar73));
  auVar172._8_8_ = 0;
  auVar172._0_8_ = *(ulonglong *)((ulonglong)(uVar565 & _UNK_151287b58) + lVar54);
  local_e10 = vmovhps_avx(auVar172,*(undefined8 *)((ulonglong)(uVar566 & _UNK_151287b5c) + lVar57));
  auVar173._8_8_ = 0;
  auVar173._0_8_ = *(ulonglong *)((ulonglong)(uVar563 & _UNK_151287b50) + lVar60);
  local_e20 = vmovhps_avx(auVar173,*(undefined8 *)((ulonglong)(uVar564 & _UNK_151287b54) + lVar51));
  auVar174._8_8_ = 0;
  auVar174._0_8_ = *(ulonglong *)((ulonglong)uVar41 + lVar30);
  local_e30 = vmovhps_avx(auVar174,*(undefined8 *)((ulonglong)uVar42 + lVar62));
  auVar175._8_8_ = 0;
  auVar175._0_8_ = *(ulonglong *)((ulonglong)auVar127._0_4_ + param_2);
  local_e40 = vmovhps_avx(auVar175,*(undefined8 *)((ulonglong)uVar40 + lVar73));
  auVar176._8_8_ = 0;
  auVar176._0_8_ = *(ulonglong *)((ulonglong)(uVar565 & _UNK_151287b78) + lVar54);
  local_dd0 = vmovhps_avx(auVar176,*(undefined8 *)((ulonglong)(uVar566 & _UNK_151287b7c) + lVar57));
  auVar177._8_8_ = 0;
  auVar177._0_8_ = *(ulonglong *)((ulonglong)(uVar563 & _UNK_151287b70) + lVar60);
  local_de0 = vmovhps_avx(auVar177,*(undefined8 *)((ulonglong)(uVar564 & _UNK_151287b74) + lVar51));
  auVar178._8_8_ = 0;
  auVar178._0_8_ = *(ulonglong *)((ulonglong)(uVar561 & _UNK_151287b68) + lVar30);
  local_df0 = vmovhps_avx(auVar178,*(undefined8 *)((ulonglong)(uVar562 & _UNK_151287b6c) + lVar62));
  auVar179._8_8_ = 0;
  auVar179._0_8_ =
       *(ulonglong *)
        ((ulonglong)
         (uVar547 & ___ymm_000003e800000368000002e800000268000001e800000168000000e800000068) +
        param_2);
  local_e00 = vmovhps_avx(auVar179,*(undefined8 *)((ulonglong)(uVar560 & _UNK_151287b64) + lVar73));
  auVar180._8_8_ = 0;
  auVar180._0_8_ = *(ulonglong *)((ulonglong)(uVar565 & _UNK_151287b98) + lVar54);
  local_d90 = vmovhps_avx(auVar180,*(undefined8 *)((ulonglong)(uVar566 & _UNK_151287b9c) + lVar57));
  auVar181._8_8_ = 0;
  auVar181._0_8_ = *(ulonglong *)((ulonglong)(uVar563 & _UNK_151287b90) + lVar60);
  local_da0 = vmovhps_avx(auVar181,*(undefined8 *)((ulonglong)(uVar564 & _UNK_151287b94) + lVar51));
  auVar182._8_8_ = 0;
  auVar182._0_8_ = *(ulonglong *)((ulonglong)uVar44 + lVar30);
  local_db0 = vmovhps_avx(auVar182,*(undefined8 *)((ulonglong)uVar45 + lVar62));
  auVar183._8_8_ = 0;
  auVar183._0_8_ = *(ulonglong *)((ulonglong)auVar362._0_4_ + param_2);
  local_dc0 = vmovhps_avx(auVar183,*(undefined8 *)((ulonglong)uVar43 + lVar73));
  auVar184._8_8_ = 0;
  auVar184._0_8_ = *(ulonglong *)((ulonglong)(uVar565 & _UNK_151287bb8) + lVar54);
  local_d50 = vmovhps_avx(auVar184,*(undefined8 *)((ulonglong)(uVar566 & _UNK_151287bbc) + lVar57));
  auVar185._8_8_ = 0;
  auVar185._0_8_ = *(ulonglong *)((ulonglong)(uVar563 & _UNK_151287bb0) + lVar60);
  local_d60 = vmovhps_avx(auVar185,*(undefined8 *)((ulonglong)(uVar564 & _UNK_151287bb4) + lVar51));
  auVar186._8_8_ = 0;
  auVar186._0_8_ = *(ulonglong *)((ulonglong)(uVar561 & _UNK_151287ba8) + lVar30);
  local_d70 = vmovhps_avx(auVar186,*(undefined8 *)((ulonglong)(uVar562 & _UNK_151287bac) + lVar62));
  auVar187._8_8_ = 0;
  auVar187._0_8_ =
       *(ulonglong *)
        ((ulonglong)
         (uVar547 & ___ymm_000003f800000378000002f800000278000001f800000178000000f800000078) +
        param_2);
  local_d80 = vmovhps_avx(auVar187,*(undefined8 *)((ulonglong)(uVar560 & _UNK_151287ba4) + lVar73));
  local_2480 = auVar467._0_8_;
  uStack_2478 = auVar467._8_8_;
  dVar17 = *param_4;
  lVar62 = 0xc0;
  dVar74 = param_4[8];
  dVar75 = param_4[0xc];
  dVar76 = param_4[1];
  dVar77 = param_4[5];
  dVar78 = param_4[9];
  dVar305 = param_4[0xd];
  dVar306 = param_4[2];
  dVar307 = param_4[6];
  dVar308 = param_4[10];
  dVar309 = param_4[0xe];
  dVar310 = param_4[3];
  dVar311 = param_4[7];
  dVar312 = param_4[0xb];
  dVar313 = param_4[0xf];
  do {
    dVar316 = *(double *)(local_1208 + lVar62 + 8);
    dVar317 = *(double *)(local_11f0 + lVar62 + -8);
    dVar318 = *(double *)(local_11f0 + lVar62);
    dVar319 = *(double *)(local_11e8 + lVar62);
    dVar487 = *(double *)(local_11e8 + lVar62 + 8);
    dVar517 = *(double *)(local_11d0 + lVar62 + -8);
    dVar518 = *(double *)(local_11d0 + lVar62);
    dVar519 = *(double *)(local_11d0 + lVar62 + 8);
    dVar520 = *(double *)(local_11b8 + lVar62 + -8);
    dVar544 = *(double *)(local_11b8 + lVar62);
    dVar545 = *(double *)(local_11b0 + lVar62);
    dVar546 = *(double *)(local_11b0 + lVar62 + 8);
    dVar573 = *(double *)(local_1198 + lVar62 + -8);
    dVar591 = *(double *)(local_1198 + lVar62);
    dVar592 = *(double *)(local_1198 + lVar62 + 8);
    dVar593 = *(double *)(local_1180 + lVar62 + -8);
    dVar594 = *(double *)(local_1160 + lVar62);
    dVar595 = *(double *)(local_1160 + lVar62 + 8);
    dVar610 = *(double *)(local_1148 + lVar62 + -8);
    dVar611 = *(double *)(local_1148 + lVar62);
    dVar612 = *(double *)(local_1180 + lVar62);
    dVar613 = *(double *)(local_1178 + lVar62);
    dVar614 = *(double *)(local_1178 + lVar62 + 8);
    dVar615 = *(double *)(local_1160 + lVar62 + -8);
    dVar639 = *(double *)(local_1140 + lVar62);
    dVar640 = *(double *)(local_1140 + lVar62 + 8);
    dVar657 = *(double *)(local_1130 + lVar62);
    dVar658 = *(double *)(local_1130 + lVar62 + 8);
    dVar659 = *(double *)(local_1120 + lVar62);
    dVar660 = *(double *)(local_1120 + lVar62 + 8);
    dVar661 = *(double *)(local_1110 + lVar62);
    dVar662 = *(double *)(local_1110 + lVar62 + 8);
    dVar315 = SUB168(ZEXT816(0),4);
    dVar314 = param_4[4];
    *(double *)((longlong)local_1e80 + lVar62 + 0x20) =
         dVar487 * dVar17 + 0.0 + dVar573 * dVar314 + dVar74 * dVar594 + dVar75 * dVar659;
    *(double *)((longlong)local_1e80 + lVar62 + 0x28) =
         dVar517 * dVar17 + dVar315 + dVar591 * dVar314 + dVar74 * dVar595 + dVar75 * dVar660;
    *(double *)((longlong)local_1e80 + lVar62 + 0x30) =
         dVar518 * dVar17 + 0.0 + dVar592 * dVar314 + dVar74 * dVar610 + dVar75 * dVar661;
    *(double *)((longlong)local_1e80 + lVar62 + 0x38) =
         dVar519 * dVar17 + 0.0 + dVar593 * dVar314 + dVar74 * dVar611 + dVar75 * dVar662;
    *(double *)((longlong)local_1e80 + lVar62) =
         dVar17 * dVar316 + 0.0 + dVar314 * dVar520 + dVar612 * dVar74 + dVar75 * dVar639;
    *(double *)((longlong)local_1e80 + lVar62 + 8) =
         dVar17 * dVar317 + dVar315 + dVar314 * dVar544 + dVar613 * dVar74 + dVar75 * dVar640;
    *(double *)((longlong)local_1e80 + lVar62 + 0x10) =
         dVar17 * dVar318 + 0.0 + dVar314 * dVar545 + dVar614 * dVar74 + dVar75 * dVar657;
    *(double *)((longlong)local_1e80 + lVar62 + 0x18) =
         dVar17 * dVar319 + 0.0 + dVar314 * dVar546 + dVar615 * dVar74 + dVar75 * dVar658;
    *(double *)((longlong)local_1e80 + lVar62 + 0x60) =
         dVar487 * dVar76 + 0.0 + dVar573 * dVar77 + dVar78 * dVar594 + dVar305 * dVar659;
    *(double *)((longlong)local_1e80 + lVar62 + 0x68) =
         dVar517 * dVar76 + dVar315 + dVar591 * dVar77 + dVar78 * dVar595 + dVar305 * dVar660;
    *(double *)((longlong)local_1e80 + lVar62 + 0x70) =
         dVar518 * dVar76 + 0.0 + dVar592 * dVar77 + dVar78 * dVar610 + dVar305 * dVar661;
    *(double *)((longlong)local_1e80 + lVar62 + 0x78) =
         dVar519 * dVar76 + 0.0 + dVar593 * dVar77 + dVar78 * dVar611 + dVar305 * dVar662;
    *(double *)((longlong)local_1e80 + lVar62 + 0x40) =
         dVar76 * dVar316 + 0.0 + dVar77 * dVar520 + dVar612 * dVar78 + dVar305 * dVar639;
    *(double *)((longlong)local_1e80 + lVar62 + 0x48) =
         dVar76 * dVar317 + dVar315 + dVar77 * dVar544 + dVar613 * dVar78 + dVar305 * dVar640;
    *(double *)((longlong)local_1e80 + lVar62 + 0x50) =
         dVar76 * dVar318 + 0.0 + dVar77 * dVar545 + dVar614 * dVar78 + dVar305 * dVar657;
    *(double *)((longlong)local_1e80 + lVar62 + 0x58) =
         dVar76 * dVar319 + 0.0 + dVar77 * dVar546 + dVar615 * dVar78 + dVar305 * dVar658;
    *(double *)((longlong)local_1e80 + lVar62 + 0xa0) =
         dVar487 * dVar306 + 0.0 + dVar573 * dVar307 + dVar308 * dVar594 + dVar309 * dVar659;
    *(double *)((longlong)local_1e80 + lVar62 + 0xa8) =
         dVar517 * dVar306 + dVar315 + dVar591 * dVar307 + dVar308 * dVar595 + dVar309 * dVar660;
    *(double *)((longlong)local_1e80 + lVar62 + 0xb0) =
         dVar518 * dVar306 + 0.0 + dVar592 * dVar307 + dVar308 * dVar610 + dVar309 * dVar661;
    *(double *)(local_1dc0 + lVar62 + -8) =
         dVar519 * dVar306 + 0.0 + dVar593 * dVar307 + dVar308 * dVar611 + dVar309 * dVar662;
    *(double *)((longlong)local_1e80 + lVar62 + 0x80) =
         dVar306 * dVar316 + 0.0 + dVar307 * dVar520 + dVar612 * dVar308 + dVar309 * dVar639;
    *(double *)((longlong)local_1e80 + lVar62 + 0x88) =
         dVar306 * dVar317 + dVar315 + dVar307 * dVar544 + dVar613 * dVar308 + dVar309 * dVar640;
    *(double *)((longlong)local_1e80 + lVar62 + 0x90) =
         dVar306 * dVar318 + 0.0 + dVar307 * dVar545 + dVar614 * dVar308 + dVar309 * dVar657;
    *(double *)((longlong)local_1e80 + lVar62 + 0x98) =
         dVar306 * dVar319 + 0.0 + dVar307 * dVar546 + dVar615 * dVar308 + dVar309 * dVar658;
    *(double *)(local_1da0 + lVar62) =
         dVar487 * dVar310 + 0.0 + dVar573 * dVar311 + dVar594 * dVar312 + dVar659 * dVar313;
    *(double *)(local_1da0 + lVar62 + 8) =
         dVar517 * dVar310 + dVar315 + dVar591 * dVar311 + dVar595 * dVar312 + dVar660 * dVar313;
    *(double *)(local_1da0 + lVar62 + 0x10) =
         dVar518 * dVar310 + 0.0 + dVar592 * dVar311 + dVar610 * dVar312 + dVar661 * dVar313;
    *(double *)(local_1da0 + lVar62 + 0x18) =
         dVar519 * dVar310 + 0.0 + dVar593 * dVar311 + dVar611 * dVar312 + dVar662 * dVar313;
    *(double *)(local_1dc0 + lVar62) =
         dVar310 * dVar316 + 0.0 + dVar311 * dVar520 + dVar612 * dVar312 + dVar639 * dVar313;
    *(double *)(local_1dc0 + lVar62 + 8) =
         dVar310 * dVar317 + dVar315 + dVar311 * dVar544 + dVar613 * dVar312 + dVar640 * dVar313;
    *(double *)(local_1dc0 + lVar62 + 0x10) =
         dVar310 * dVar318 + 0.0 + dVar311 * dVar545 + dVar614 * dVar312 + dVar657 * dVar313;
    *(double *)(local_1dc0 + lVar62 + 0x18) =
         dVar310 * dVar319 + 0.0 + dVar311 * dVar546 + dVar615 * dVar312 + dVar658 * dVar313;
    lVar62 = lVar62 + 0x100;
  } while (lVar62 != 0x4c0);
  local_2100 = auVar468._0_8_;
  dStack_20f8 = auVar468._8_8_;
  dStack_20f0 = auVar190._0_8_;
  dStack_20e8 = auVar190._8_8_;
  local_1ea0 = auVar499._0_8_;
  dStack_1e98 = auVar499._8_8_;
  dStack_1e90 = auVar195._0_8_;
  dStack_1e88 = auVar195._8_8_;
  local_1e80[0] = auVar469._0_8_;
  local_1e80[1] = auVar469._8_8_;
  local_1e80[2] = auVar461._0_8_;
  local_1e80[3] = auVar461._8_8_;
  local_1e80[0x14] = auVar617._0_8_;
  local_1e80[0x15] = auVar617._8_8_;
  local_1e80[0x16] = auVar580._0_8_;
  local_1e80[0x17] = auVar580._8_8_;
  dVar78 = (local_2100 + local_1ea0) * __real_3fe0000000000000;
  dVar305 = (dStack_20f8 + dStack_1e98) * __real_3fe0000000000000;
  dVar306 = (dStack_20f0 + dStack_1e90) * __real_3fe0000000000000;
  dVar307 = (dStack_20e8 + dStack_1e88) * __real_3fe0000000000000;
  dVar312 = (local_1e80[0] + local_1e80[0x14]) * __real_3fe0000000000000;
  dVar313 = (local_1e80[1] + local_1e80[0x15]) * __real_3fe0000000000000;
  dVar314 = (local_1e80[2] + local_1e80[0x16]) * __real_3fe0000000000000;
  dVar315 = (local_1e80[3] + local_1e80[0x17]) * __real_3fe0000000000000;
  local_2020 = auVar191._0_8_;
  dStack_2018 = auVar191._8_8_;
  dStack_2010 = auVar189._0_8_;
  dStack_2008 = auVar189._8_8_;
  dVar487 = (local_18a0._0_8_ + local_2020) * __real_3fe0000000000000;
  dVar517 = (local_18a0._8_8_ + dStack_2018) * __real_3fe0000000000000;
  dVar518 = (local_18a0._16_8_ + dStack_2010) * __real_3fe0000000000000;
  dVar519 = (local_18a0._24_8_ + dStack_2008) * __real_3fe0000000000000;
  local_1e80[4] = auVar188._0_8_;
  local_1e80[5] = auVar188._8_8_;
  local_1e80[6] = auVar321._0_8_;
  local_1e80[7] = auVar321._8_8_;
  dVar520 = (local_18c0._0_8_ + local_1e80[4]) * __real_3fe0000000000000;
  dVar546 = (local_18c0._8_8_ + local_1e80[5]) * __real_3fe0000000000000;
  dVar592 = (local_18c0._16_8_ + local_1e80[6]) * __real_3fe0000000000000;
  dVar595 = (local_18c0._24_8_ + local_1e80[7]) * __real_3fe0000000000000;
  dVar17 = (double)CONCAT17(uStack_1c39,
                            CONCAT16(uStack_1c3a,
                                     CONCAT15(uStack_1c3b,
                                              CONCAT14(uStack_1c3c,
                                                       CONCAT13(uStack_1c3d,
                                                                CONCAT12(uStack_1c3e,
                                                                         CONCAT11(uStack_1c3f,
                                                                                  local_1c40)))))));
  dVar544 = (local_1960._0_8_ + local_18e0._0_8_) * __real_3fe0000000000000;
  dVar573 = (local_1960._8_8_ + local_18e0._8_8_) * __real_3fe0000000000000;
  dVar593 = (local_1960._16_8_ + local_18e0._16_8_) * __real_3fe0000000000000;
  dVar610 = (local_1960._24_8_ + local_18e0._24_8_) * __real_3fe0000000000000;
  dVar639 = (local_1880._0_8_ + local_1900._0_8_) * __real_3fe0000000000000;
  dVar657 = (local_1880._8_8_ + local_1900._8_8_) * __real_3fe0000000000000;
  dVar659 = (local_1880._16_8_ + local_1900._16_8_) * __real_3fe0000000000000;
  dVar661 = (local_1880._24_8_ + local_1900._24_8_) * __real_3fe0000000000000;
  auVar442 = vsubpd_avx(auVar587,auVar535);
  auVar289 = vsubpd_avx(local_18a0,auVar585);
  auVar287 = vsubpd_avx(auVar504,auVar586);
  auVar651 = vsubpd_avx(local_18c0,auVar602);
  auVar539 = vsubpd_avx(local_18e0,local_1960);
  auVar481 = vsubpd_avx(local_1900,local_1880);
  dVar545 = auVar289._0_8_ * __real_3fe0000000000000;
  dVar591 = auVar289._8_8_ * __real_3fe0000000000000;
  dVar594 = auVar289._16_8_ * __real_3fe0000000000000;
  dVar611 = auVar289._24_8_ * __real_3fe0000000000000;
  dVar74 = auVar442._0_8_ * __real_3fe0000000000000;
  dVar75 = auVar442._8_8_ * __real_3fe0000000000000;
  dVar76 = auVar442._16_8_ * __real_3fe0000000000000;
  dVar77 = auVar442._24_8_ * __real_3fe0000000000000;
  dVar640 = auVar651._0_8_ * __real_3fe0000000000000;
  dVar658 = auVar651._8_8_ * __real_3fe0000000000000;
  dVar660 = auVar651._16_8_ * __real_3fe0000000000000;
  dVar662 = auVar651._24_8_ * __real_3fe0000000000000;
  dVar612 = auVar287._0_8_ * __real_3fe0000000000000;
  dVar613 = auVar287._8_8_ * __real_3fe0000000000000;
  dVar614 = auVar287._16_8_ * __real_3fe0000000000000;
  dVar615 = auVar287._24_8_ * __real_3fe0000000000000;
  dVar308 = auVar481._0_8_ * __real_3fe0000000000000;
  dVar309 = auVar481._8_8_ * __real_3fe0000000000000;
  dVar310 = auVar481._16_8_ * __real_3fe0000000000000;
  dVar311 = auVar481._24_8_ * __real_3fe0000000000000;
  dVar316 = auVar539._0_8_ * __real_3fe0000000000000;
  dVar317 = auVar539._8_8_ * __real_3fe0000000000000;
  dVar318 = auVar539._16_8_ * __real_3fe0000000000000;
  dVar319 = auVar539._24_8_ * __real_3fe0000000000000;
  auVar506._0_8_ =
       (double)((ulonglong)(dVar308 * local_1bc0) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar612 * (double)local_1cc0._0_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar74 * (double)local_1dc0) & __real_7fffffffffffffff);
  auVar506._8_8_ =
       (double)((ulonglong)(dVar309 * dStack_1bb8) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar613 * (double)local_1cc0._8_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar75 * adStack_1db8[0]) & __real_7fffffffffffffff);
  auVar506._16_8_ =
       (double)((ulonglong)(dVar310 * dStack_1bb0) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar614 * dStack_1cb0) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar76 * adStack_1db8[1]) & __real_7fffffffffffffff);
  auVar506._24_8_ =
       (double)((ulonglong)(dVar311 * dStack_1ba8) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar615 * dStack_1ca8) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar77 * adStack_1db8[2]) & __real_7fffffffffffffff);
  auVar571._0_8_ =
       (double)((ulonglong)(dVar316 * local_1ba0) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar640 * (double)local_1ca0._0_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar545 * (double)local_1da0) & __real_7fffffffffffffff);
  auVar571._8_8_ =
       (double)((ulonglong)(dVar317 * dStack_1b98) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar658 * (double)local_1ca0._8_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar591 * adStack_1d98[0]) & __real_7fffffffffffffff);
  auVar571._16_8_ =
       (double)((ulonglong)(dVar318 * dStack_1b90) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar660 * dStack_1c90) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar594 * adStack_1d98[1]) & __real_7fffffffffffffff);
  auVar571._24_8_ =
       (double)((ulonglong)(dVar319 * dStack_1b88) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar662 * dStack_1c88) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar611 * adStack_1d98[2]) & __real_7fffffffffffffff);
  auVar466._0_8_ =
       (double)((ulonglong)(dVar308 * local_1b80) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar74 * (double)local_1d80._0_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar612 * (double)local_1c80._0_8_) & __real_7fffffffffffffff);
  auVar466._8_8_ =
       (double)((ulonglong)(dVar309 * dStack_1b78) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar75 * (double)local_1d80._8_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar613 * (double)local_1c80._8_8_) & __real_7fffffffffffffff);
  auVar478._16_8_ =
       (double)((ulonglong)(dVar310 * dStack_1b70) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar76 * dStack_1d70) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar614 * dStack_1c70) & __real_7fffffffffffffff);
  auVar478._0_16_ = auVar466;
  auVar478._24_8_ =
       (double)((ulonglong)(dVar311 * dStack_1b68) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar77 * dStack_1d68) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar615 * dStack_1c68) & __real_7fffffffffffffff);
  auVar603._0_8_ =
       dVar487 * (double)local_1da0 + dVar520 * (double)local_1ca0._0_8_ + dVar544 * local_1ba0 +
       local_1aa0;
  auVar603._8_8_ =
       dVar517 * adStack_1d98[0] + dVar546 * (double)local_1ca0._8_8_ + dVar573 * dStack_1b98 +
       dStack_1a98;
  auVar603._16_8_ =
       dVar518 * adStack_1d98[1] + dVar592 * dStack_1c90 + dVar593 * dStack_1b90 + dStack_1a90;
  auVar603._24_8_ =
       dVar519 * adStack_1d98[2] + dVar595 * dStack_1c88 + dVar610 * dStack_1b88 + dStack_1a88;
  auVar628._0_8_ =
       dVar639 * local_1bc0 + dVar78 * (double)local_1dc0 + dVar312 * (double)local_1cc0._0_8_ +
       local_1ac0;
  auVar628._8_8_ =
       dVar657 * dStack_1bb8 + dVar305 * adStack_1db8[0] + dVar313 * (double)local_1cc0._8_8_ +
       dStack_1ab8;
  auVar628._16_8_ =
       dVar659 * dStack_1bb0 + dVar306 * adStack_1db8[1] + dVar314 * dStack_1cb0 + dStack_1ab0;
  auVar628._24_8_ =
       dVar661 * dStack_1ba8 + dVar307 * adStack_1db8[2] + dVar315 * dStack_1ca8 + dStack_1aa8;
  auVar635._0_8_ =
       dVar487 * (double)local_1d60._0_8_ + dVar520 * (double)local_1c60._0_8_ +
       dVar544 * local_1b60 + local_1a60;
  auVar635._8_8_ =
       dVar517 * (double)local_1d60._8_8_ + dVar546 * (double)local_1c60._8_8_ +
       dVar573 * dStack_1b58 + dStack_1a58;
  auVar635._16_8_ =
       dVar518 * dStack_1d50 + dVar592 * dStack_1c50 + dVar593 * dStack_1b50 + dStack_1a50;
  auVar635._24_8_ =
       dVar519 * dStack_1d48 + dVar595 * dStack_1c48 + dVar610 * dStack_1b48 + dStack_1a48;
  auVar648._0_8_ =
       dVar639 * local_1b80 + dVar78 * (double)local_1d80._0_8_ + dVar312 * (double)local_1c80._0_8_
       + local_1a80;
  auVar648._8_8_ =
       dVar657 * dStack_1b78 +
       dVar305 * (double)local_1d80._8_8_ + dVar313 * (double)local_1c80._8_8_ + dStack_1a78;
  auVar648._16_8_ =
       dVar659 * dStack_1b70 + dVar306 * dStack_1d70 + dVar314 * dStack_1c70 + dStack_1a70;
  auVar648._24_8_ =
       dVar661 * dStack_1b68 + dVar307 * dStack_1d68 + dVar315 * dStack_1c68 + dStack_1a68;
  auVar666._0_8_ =
       dVar487 * (double)local_1d20._0_8_ + dVar520 * local_1c20 + dVar544 * local_1b20 + local_1a20
  ;
  auVar666._8_8_ =
       dVar517 * (double)local_1d20._8_8_ + dVar546 * dStack_1c18 + dVar573 * dStack_1b18 +
       dStack_1a18;
  auVar666._16_8_ =
       dVar518 * dStack_1d10 + dVar592 * dStack_1c10 + dVar593 * dStack_1b10 + dStack_1a10;
  auVar666._24_8_ =
       dVar519 * dStack_1d08 + dVar595 * dStack_1c08 + dVar610 * dStack_1b08 + dStack_1a08;
  auVar675._0_8_ =
       dVar639 * local_1b40 + dVar78 * (double)local_1d40._0_8_ + dVar312 * dVar17 + local_1a40;
  auVar675._8_8_ =
       dVar657 * dStack_1b38 + dVar305 * (double)local_1d40._8_8_ + dVar313 * dStack_1c38 +
       dStack_1a38;
  auVar675._16_8_ =
       dVar659 * dStack_1b30 + dVar306 * dStack_1d30 + dVar314 * dStack_1c30 + dStack_1a30;
  auVar675._24_8_ =
       dVar661 * dStack_1b28 + dVar307 * dStack_1d28 + dVar315 * dStack_1c28 + dStack_1a28;
  auVar282._0_8_ =
       (double)((ulonglong)(dVar316 * local_1b60) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar545 * (double)local_1d60._0_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar640 * (double)local_1c60._0_8_) & __real_7fffffffffffffff);
  auVar282._8_8_ =
       (double)((ulonglong)(dVar317 * dStack_1b58) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar591 * (double)local_1d60._8_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar658 * (double)local_1c60._8_8_) & __real_7fffffffffffffff);
  auVar282._16_8_ =
       (double)((ulonglong)(dVar318 * dStack_1b50) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar594 * dStack_1d50) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar660 * dStack_1c50) & __real_7fffffffffffffff);
  auVar282._24_8_ =
       (double)((ulonglong)(dVar319 * dStack_1b48) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar611 * dStack_1d48) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar662 * dStack_1c48) & __real_7fffffffffffffff);
  auVar536._0_8_ =
       (double)(__real_7fffffffffffffff & (ulonglong)(dVar74 * (double)local_1d40._0_8_)) +
       (double)((ulonglong)(dVar612 * dVar17) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar308 * local_1b40) & __real_7fffffffffffffff);
  auVar536._8_8_ =
       (double)(__real_7fffffffffffffff & (ulonglong)(dVar75 * (double)local_1d40._8_8_)) +
       (double)((ulonglong)(dVar613 * dStack_1c38) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar309 * dStack_1b38) & __real_7fffffffffffffff);
  auVar536._16_8_ =
       (double)(__real_7fffffffffffffff & (ulonglong)(dVar76 * dStack_1d30)) +
       (double)((ulonglong)(dVar614 * dStack_1c30) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar310 * dStack_1b30) & __real_7fffffffffffffff);
  auVar536._24_8_ =
       (double)(__real_7fffffffffffffff & (ulonglong)(dVar77 * dStack_1d28)) +
       (double)((ulonglong)(dVar615 * dStack_1c28) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar311 * dStack_1b28) & __real_7fffffffffffffff);
  auVar557._0_8_ =
       (double)((ulonglong)(dVar640 * local_1c20) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar545 * (double)local_1d20._0_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar316 * local_1b20) & __real_7fffffffffffffff);
  auVar557._8_8_ =
       (double)((ulonglong)(dVar658 * dStack_1c18) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar591 * (double)local_1d20._8_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar317 * dStack_1b18) & __real_7fffffffffffffff);
  auVar557._16_8_ =
       (double)((ulonglong)(dVar660 * dStack_1c10) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar594 * dStack_1d10) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar318 * dStack_1b10) & __real_7fffffffffffffff);
  auVar557._24_8_ =
       (double)((ulonglong)(dVar662 * dStack_1c08) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar611 * dStack_1d08) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar319 * dStack_1b08) & __real_7fffffffffffffff);
  auVar442 = vsubpd_avx(auVar628,auVar506);
  auVar289 = vsubpd_avx(auVar603,auVar571);
  auVar287 = vsubpd_avx(auVar648,auVar478);
  auVar651 = vsubpd_avx(auVar635,auVar282);
  local_2500._8_8_ = auVar628._8_8_ + auVar506._8_8_;
  local_2500._0_8_ = auVar628._0_8_ + auVar506._0_8_;
  dStack_24f0 = auVar628._16_8_ + auVar506._16_8_;
  dStack_24e8 = auVar628._24_8_ + auVar506._24_8_;
  auVar539 = vsubpd_avx(auVar675,auVar536);
  local_2460._8_8_ = auVar603._8_8_ + auVar571._8_8_;
  local_2460._0_8_ = auVar603._0_8_ + auVar571._0_8_;
  dStack_2450 = auVar603._16_8_ + auVar571._16_8_;
  dStack_2448 = auVar603._24_8_ + auVar571._24_8_;
  auVar481 = vsubpd_avx(auVar666,auVar557);
  auVar604._0_8_ = auVar648._0_8_ + auVar466._0_8_;
  auVar604._8_8_ = auVar648._8_8_ + auVar466._8_8_;
  auVar604._16_8_ = auVar648._16_8_ + auVar478._16_8_;
  auVar604._24_8_ = auVar648._24_8_ + auVar478._24_8_;
  local_24a0._8_8_ = auVar635._8_8_ + auVar282._8_8_;
  local_24a0._0_8_ = auVar635._0_8_ + auVar282._0_8_;
  dStack_2490 = auVar635._16_8_ + auVar282._16_8_;
  dStack_2488 = auVar635._24_8_ + auVar282._24_8_;
  auVar283._0_8_ = auVar675._0_8_ + auVar536._0_8_;
  auVar283._8_8_ = auVar675._8_8_ + auVar536._8_8_;
  auVar283._16_8_ = auVar675._16_8_ + auVar536._16_8_;
  auVar283._24_8_ = auVar675._24_8_ + auVar536._24_8_;
  auVar636._0_8_ = auVar666._0_8_ + auVar557._0_8_;
  auVar636._8_8_ = auVar666._8_8_ + auVar557._8_8_;
  auVar636._16_8_ = auVar666._16_8_ + auVar557._16_8_;
  auVar636._24_8_ = auVar666._24_8_ + auVar557._24_8_;
  auVar498._8_8_ = 0;
  auVar498._0_8_ = local_1500;
  auVar321 = vpcmpeqb_avx(auVar498,ZEXT816(0) << 0x40);
  auVar461 = vpcmpeqd_avx(auVar466,auVar466);
  auVar465 = vpmovsxbd_avx(auVar321 ^ auVar461);
  auVar461 = vpshufd_avx(auVar321 ^ auVar461,0x55);
  auVar461 = vpmovsxbd_avx(auVar461);
  auVar440._0_4_ = auVar465._0_4_ & uVar547;
  auVar440._4_4_ = auVar465._4_4_ & uVar560;
  auVar440._8_4_ = auVar465._8_4_ & uVar561;
  auVar440._12_4_ = auVar465._12_4_ & uVar562;
  auVar440._16_4_ = auVar461._0_4_ & uVar563;
  auVar440._20_4_ = auVar461._4_4_ & uVar564;
  auVar440._24_4_ = auVar461._8_4_ & uVar565;
  auVar440._28_4_ = auVar461._12_4_ & uVar566;
  iVar25 = vmovmskps_avx(auVar440);
  if (iVar25 == 0) {
    auVar440 = ZEXT832(0) << 0x20;
LAB_140a6d099:
    auVar461 = vpmovsxbw_avx(auVar321);
    auVar461 = vpand_avx(auVar461,local_1970);
    auVar465 = vpmovsxwd_avx(auVar461);
    auVar461 = vpunpckhwd_avx(auVar461,auVar461);
    auVar512._16_16_ = auVar461;
    auVar512._0_16_ = auVar465;
    auVar23._16_8_ = local_2480;
    auVar23._0_16_ = auVar467;
    auVar23._24_8_ = uStack_2478;
    auVar461 = vpcmpgtd_avx(auVar23._16_16_,local_1940._0_16_);
    auVar465 = vpcmpgtd_avx(auVar467,local_19a0._0_16_);
    auVar541._16_16_ = auVar461;
    auVar541._0_16_ = auVar465;
    auVar541 = auVar541 & auVar512;
    if ((((((((SUB321(auVar541 >> 0x1f,0) & 1) != 0 || (SUB321(auVar541 >> 0x3f,0) & 1) != 0) ||
            (SUB321(auVar541 >> 0x5f,0) & 1) != 0) || SUB321(auVar541 >> 0x7f,0) != '\0') ||
          (SUB321(auVar541 >> 0x9f,0) & 1) != 0) || SUB321(auVar541 >> 0xbf,0) != '\0') ||
        (SUB321(auVar541 >> 0xdf,0) & 1) != 0) || auVar541[0x1f] < '\0') {
      auVar321 = vpmovzxbw_avx(auVar321);
      auVar461 = vpmovzxwd_avx(auVar321);
      auVar461 = vpslld_avx(auVar461,0x1f);
      auVar296._0_16_ = vpsrad_avx(auVar461,0x1f);
      auVar461 = vpunpckhwd_avx(auVar321,auVar321);
      auVar461 = vpslld_avx(auVar461,0x1f);
      auVar461 = vpsrad_avx(auVar461,0x1f);
      auVar296._16_16_ = auVar461;
      auVar505 = auVar505 & auVar296;
      if ((((((((SUB321(auVar505 >> 0x1f,0) & 1) != 0 || (SUB321(auVar505 >> 0x3f,0) & 1) != 0) ||
              (SUB321(auVar505 >> 0x5f,0) & 1) != 0) || SUB321(auVar505 >> 0x7f,0) != '\0') ||
            (SUB321(auVar505 >> 0x9f,0) & 1) != 0) || SUB321(auVar505 >> 0xbf,0) != '\0') ||
          (SUB321(auVar505 >> 0xdf,0) & 1) != 0) || auVar505[0x1f] < '\0') {
        auVar465 = vpmovsxdq_avx(auVar296._0_16_);
        auVar464 = vshufps_avx(auVar296._0_16_,auVar296._0_16_,0xfa);
        auVar449._16_16_ = auVar464;
        auVar449._0_16_ = auVar465;
        auVar465 = vpmovsxdq_avx(auVar461);
        auVar464 = vpshufd_avx(auVar461,0xfa);
        auVar485._16_16_ = auVar464;
        auVar485._0_16_ = auVar465;
        _local_1dc0 = vmaskmovpd_avx(auVar449,auVar442);
        _local_1da0 = vmaskmovpd_avx(auVar485,auVar289);
        _local_1d80 = vmaskmovpd_avx(auVar449,auVar287);
        _local_1d60 = vmaskmovpd_avx(auVar485,auVar651);
        _local_1d40 = vmaskmovpd_avx(auVar449,auVar539);
        _local_1d20 = vmaskmovpd_avx(auVar485,auVar481);
        local_1d00 = vmaskmovpd_avx(auVar449,_local_2500);
        local_1ce0 = vmaskmovpd_avx(auVar485,_local_2460);
        _local_1cc0 = vmaskmovpd_avx(auVar449,auVar604);
        _local_1ca0 = vmaskmovpd_avx(auVar485,_local_24a0);
        _local_1c80 = vmaskmovpd_avx(auVar449,auVar283);
        _local_1c60 = vmaskmovpd_avx(auVar485,auVar636);
        auVar321 = vpsllw_avx(auVar321,0xf);
        auVar321 = vpacksswb_avx(auVar321,auVar321);
        bVar27 = SUB161(auVar321 >> 0xf,0) & 1;
        bVar18 = SUB161(auVar321 >> 0x17,0) & 1;
        bVar19 = SUB161(auVar321 >> 0x1f,0) & 1;
        bVar20 = SUB161(auVar321 >> 0x27,0) & 1;
        bVar21 = SUB161(auVar321 >> 0x2f,0) & 1;
        bVar22 = SUB161(auVar321 >> 0x37,0) & 1;
        if ((SUB161(auVar321 >> 7,0) & 1) == 0) {
          if (bVar27 != 0) goto LAB_140a6e615;
LAB_140a6d201:
          if (bVar18 != 0) goto LAB_140a6e625;
LAB_140a6d209:
          if (bVar19 != 0) goto LAB_140a6e635;
LAB_140a6d211:
          if (bVar20 != 0) goto LAB_140a6e645;
LAB_140a6d219:
          if (bVar21 != 0) goto LAB_140a6e655;
LAB_140a6d221:
          if (bVar22 != 0) goto LAB_140a6e665;
LAB_140a6d229:
          auVar297._0_4_ = auVar296._0_4_ & uVar547;
          auVar297._4_4_ = auVar296._4_4_ & uVar560;
          auVar297._8_4_ = auVar296._8_4_ & uVar561;
          auVar297._12_4_ = auVar296._12_4_ & uVar562;
          auVar297._16_4_ = auVar461._0_4_ & uVar563;
          auVar297._20_4_ = auVar461._4_4_ & uVar564;
          auVar297._24_4_ = auVar461._8_4_ & uVar565;
          auVar297._28_4_ = auVar461._12_4_ & uVar566;
        }
        else {
          local_1c40 = 1;
          if (bVar27 == 0) goto LAB_140a6d201;
LAB_140a6e615:
          uStack_1c3f = 1;
          if (bVar18 == 0) goto LAB_140a6d209;
LAB_140a6e625:
          uStack_1c3e = 1;
          if (bVar19 == 0) goto LAB_140a6d211;
LAB_140a6e635:
          uStack_1c3d = 1;
          if (bVar20 == 0) goto LAB_140a6d219;
LAB_140a6e645:
          uStack_1c3c = 1;
          if (bVar21 == 0) goto LAB_140a6d221;
LAB_140a6e655:
          uStack_1c3b = 1;
          if (bVar22 == 0) goto LAB_140a6d229;
LAB_140a6e665:
          uStack_1c3a = 1;
          auVar297._0_4_ = auVar296._0_4_ & uVar547;
          auVar297._4_4_ = auVar296._4_4_ & uVar560;
          auVar297._8_4_ = auVar296._8_4_ & uVar561;
          auVar297._12_4_ = auVar296._12_4_ & uVar562;
          auVar297._16_4_ = auVar461._0_4_ & uVar563;
          auVar297._20_4_ = auVar461._4_4_ & uVar564;
          auVar297._24_4_ = auVar461._8_4_ & uVar565;
          auVar297._28_4_ = auVar461._12_4_ & uVar566;
        }
        if ((SUB161(auVar321 >> 0x3f,0) & 1) != 0) {
          uStack_1c39 = 1;
        }
        vmovmskps_avx(auVar440 | auVar297);
      }
    }
  }
  else {
    auVar288 = vminpd_avx(local_1680,auVar442);
    auVar464 = vshufps_avx(auVar465,auVar465,0x50);
    auVar465 = vshufps_avx(auVar465,auVar465,0xfa);
    auVar479._16_16_ = auVar465;
    auVar479._0_16_ = auVar464;
    _local_1dc0 = vmaskmovpd_avx(auVar479,auVar288);
    auVar465 = vshufps_avx(auVar461,auVar461,0x50);
    auVar461 = vshufps_avx(auVar461,auVar461,0xfa);
    auVar441._16_16_ = auVar461;
    auVar441._0_16_ = auVar465;
    auVar288 = vminpd_avx(local_1660,auVar289);
    _local_1da0 = vmaskmovpd_avx(auVar441,auVar288);
    auVar288 = vminpd_avx(local_1640,auVar287);
    _local_1d80 = vmaskmovpd_avx(auVar479,auVar288);
    auVar288 = vminpd_avx(local_1620,auVar651);
    _local_1d60 = vmaskmovpd_avx(auVar441,auVar288);
    auVar288 = vminpd_avx(local_1600,auVar539);
    _local_1d40 = vmaskmovpd_avx(auVar479,auVar288);
    auVar288 = vminpd_avx(local_15e0,auVar481);
    _local_1d20 = vmaskmovpd_avx(auVar441,auVar288);
    auVar288 = vmaxpd_avx(local_15c0,_local_2500);
    local_1d00 = vmaskmovpd_avx(auVar479,auVar288);
    auVar288 = vmaxpd_avx(local_15a0,_local_2460);
    local_1ce0 = vmaskmovpd_avx(auVar441,auVar288);
    auVar288 = vmaxpd_avx(local_1580,auVar604);
    _local_1cc0 = vmaskmovpd_avx(auVar479,auVar288);
    auVar288 = vmaxpd_avx(local_1560,_local_24a0);
    _local_1ca0 = vmaskmovpd_avx(auVar441,auVar288);
    auVar288 = vmaxpd_avx(local_1540,auVar283);
    _local_1c80 = vmaskmovpd_avx(auVar479,auVar288);
    auVar288 = vmaxpd_avx(local_1520,auVar636);
    _local_1c60 = vmaskmovpd_avx(auVar441,auVar288);
    auVar461 = vpshufd_avx(auVar498,0x44);
    auVar461 = vpcmpeqb_avx(auVar461,___xmm_00000000000000000000000000000000);
    bVar27 = ~(SUB161(auVar461 >> 7,0) & 1 | (SUB161(auVar461 >> 0xf,0) & 1) << 1 |
               (SUB161(auVar461 >> 0x17,0) & 1) << 2 | (SUB161(auVar461 >> 0x1f,0) & 1) << 3 |
               (SUB161(auVar461 >> 0x27,0) & 1) << 4 | (SUB161(auVar461 >> 0x2f,0) & 1) << 5 |
              (SUB161(auVar461 >> 0x37,0) & 1) << 6);
    if ((bVar27 & 1) != 0) {
      local_1c40 = (undefined1)local_1500;
    }
    if ((bVar27 & 2) != 0) {
      uStack_1c3f = (undefined1)(local_1500 >> 8);
    }
    if ((bVar27 & 4) != 0) {
      uStack_1c3e = (undefined1)(local_1500 >> 0x10);
    }
    if ((bVar27 & 8) != 0) {
      uStack_1c3d = (undefined1)(local_1500 >> 0x18);
    }
    if ((bVar27 & 0x10) != 0) {
      uStack_1c3c = (undefined1)(local_1500 >> 0x20);
    }
    if ((bVar27 & 0x20) != 0) {
      uStack_1c3b = (undefined1)(local_1500 >> 0x28);
    }
    if ((bVar27 & 0x40) != 0) {
      uStack_1c3a = (undefined1)(local_1500 >> 0x30);
    }
    if ((SUB161(auVar461 >> 0x3f,0) & 1) == 0) {
      uStack_1c39 = (undefined1)(local_1500 >> 0x38);
    }
    if ((char)uVar56 != (char)iVar25) goto LAB_140a6d099;
  }
  auVar321 = vshufps_avx(auVar80,auVar80,0x50);
  auVar461 = vshufps_avx(auVar80,auVar80,0xfa);
  auVar654._16_16_ = auVar461;
  auVar654._0_16_ = auVar321;
  auVar321 = vshufps_avx(auVar192,auVar192,0x50);
  auVar461 = vshufps_avx(auVar192,auVar192,0xfa);
  auVar672._16_16_ = auVar461;
  auVar672._0_16_ = auVar321;
  local_1680 = vmaskmovpd_avx(auVar654,_local_1dc0);
  local_1660 = vmaskmovpd_avx(auVar672,_local_1da0);
  local_1640 = vmaskmovpd_avx(auVar654,_local_1d80);
  local_1620 = vmaskmovpd_avx(auVar672,_local_1d60);
  local_1600 = vmaskmovpd_avx(auVar654,_local_1d40);
  local_15e0 = vmaskmovpd_avx(auVar672,_local_1d20);
  local_15c0 = vmaskmovpd_avx(auVar654,local_1d00);
  local_15a0 = vmaskmovpd_avx(auVar672,local_1ce0);
  local_1580 = vmaskmovpd_avx(auVar654,_local_1cc0);
  local_1560 = vmaskmovpd_avx(auVar672,_local_1ca0);
  local_1540 = vmaskmovpd_avx(auVar654,_local_1c80);
  local_1520 = vmaskmovpd_avx(auVar672,_local_1c60);
  uVar26 = local_1500;
  if ((uVar56 & 1) != 0) {
    local_1500 = CONCAT71(local_1500._1_7_,local_1c40);
    uVar26 = local_1500;
  }
  if ((uVar56 & 2) != 0) {
    local_1500._2_6_ = (undefined6)(uVar26 >> 0x10);
    local_1500._0_1_ = (char)uVar26;
    local_1500._0_2_ = CONCAT11(uStack_1c3f,(char)local_1500);
    uVar26 = local_1500;
  }
  if ((uVar56 & 4) != 0) {
    local_1500._3_5_ = (undefined5)(uVar26 >> 0x18);
    local_1500._0_2_ = (undefined2)uVar26;
    local_1500._0_3_ = CONCAT12(uStack_1c3e,(undefined2)local_1500);
    uVar26 = local_1500;
  }
  if ((uVar56 & 8) != 0) {
    local_1500._4_4_ = (undefined4)(uVar26 >> 0x20);
    local_1500._0_3_ = (undefined3)uVar26;
    local_1500._0_4_ = CONCAT13(uStack_1c3d,(undefined3)local_1500);
    uVar26 = local_1500;
  }
  if ((uVar56 & 0x10) != 0) {
    local_1500._5_3_ = (undefined3)(uVar26 >> 0x28);
    local_1500._0_4_ = (undefined4)uVar26;
    local_1500._0_5_ = CONCAT14(uStack_1c3c,(undefined4)local_1500);
    uVar26 = local_1500;
  }
  if ((uVar56 & 0x20) != 0) {
    local_1500._6_2_ = (undefined2)(uVar26 >> 0x30);
    local_1500._0_5_ = (undefined5)uVar26;
    local_1500._0_6_ = CONCAT15(uStack_1c3b,(undefined5)local_1500);
    uVar26 = local_1500;
  }
  local_1500 = uVar26;
  if ((uVar56 & 0x40) != 0) {
    local_1500._7_1_ = (undefined1)(uVar26 >> 0x38);
    local_1500._0_6_ = (undefined6)uVar26;
    local_1500._0_7_ = CONCAT16(uStack_1c3a,(undefined6)local_1500);
  }
  auVar321 = local_1920._0_16_;
  if ((char)uVar56 < '\0') {
    local_1500 = CONCAT17(uStack_1c39,(undefined7)local_1500);
  }
LAB_140a6d3ac:
  uVar56 = vmovmskps_avx(local_120);
  cVar24 = (char)uVar56;
  if ((uVar56 & 1) != 0) {
    local_14c0 = vmovlps_avx(local_1680._0_16_);
  }
  if ((uVar56 & 2) != 0) {
    local_1488 = vmovhps_avx(local_1680._0_16_);
  }
  if ((uVar56 & 4) != 0) {
    local_1450 = vmovlps_avx(local_1680._16_16_);
  }
  if ((uVar56 & 8) != 0) {
    local_1418 = vmovhps_avx(local_1680._16_16_);
  }
  if ((uVar56 & 0x10) != 0) {
    local_13e0 = vmovlps_avx(local_1660._0_16_);
  }
  if ((uVar56 & 0x20) != 0) {
    local_13a8 = vmovhps_avx(local_1660._0_16_);
  }
  if ((uVar56 & 0x40) != 0) {
    local_1370 = local_1660._16_8_;
  }
  if (cVar24 < '\0') {
    local_1338 = vmovhps_avx(local_1660._16_16_);
  }
  if ((uVar56 & 1) != 0) {
    local_14b8[0] = vmovlps_avx(local_1640._0_16_);
  }
  if ((uVar56 & 2) != 0) {
    local_1480 = vmovhps_avx(local_1640._0_16_);
  }
  if ((uVar56 & 4) != 0) {
    local_1448 = vmovlps_avx(local_1640._16_16_);
  }
  if ((uVar56 & 8) != 0) {
    local_1410 = vmovhps_avx(local_1640._16_16_);
  }
  if ((uVar56 & 0x10) != 0) {
    local_13d8 = vmovlps_avx(local_1620._0_16_);
  }
  if ((uVar56 & 0x20) != 0) {
    local_13a0 = vmovhps_avx(local_1620._0_16_);
  }
  if ((uVar56 & 0x40) != 0) {
    local_1368 = local_1620._16_8_;
  }
  if (cVar24 < '\0') {
    local_1330 = vmovhps_avx(local_1620._16_16_);
  }
  if ((uVar56 & 1) != 0) {
    local_14b8[1] = vmovlps_avx(local_1600._0_16_);
  }
  if ((uVar56 & 2) != 0) {
    local_1478 = vmovhps_avx(local_1600._0_16_);
  }
  if ((uVar56 & 4) != 0) {
    local_1440 = vmovlps_avx(local_1600._16_16_);
  }
  if ((uVar56 & 8) != 0) {
    local_1408 = vmovhps_avx(local_1600._16_16_);
  }
  if ((uVar56 & 0x10) != 0) {
    local_13d0 = vmovlps_avx(local_15e0._0_16_);
  }
  if ((uVar56 & 0x20) != 0) {
    local_1398 = vmovhps_avx(local_15e0._0_16_);
  }
  if ((uVar56 & 0x40) != 0) {
    local_1360 = local_15e0._16_8_;
  }
  if (cVar24 < '\0') {
    local_1328 = vmovhps_avx(local_15e0._16_16_);
  }
  if ((uVar56 & 1) != 0) {
    local_14a8[0] = vmovlps_avx(local_15c0._0_16_);
  }
  if ((uVar56 & 2) != 0) {
    local_1470 = vmovhps_avx(local_15c0._0_16_);
  }
  if ((uVar56 & 4) != 0) {
    local_1438 = vmovlps_avx(local_15c0._16_16_);
  }
  if ((uVar56 & 8) != 0) {
    local_1400 = vmovhps_avx(local_15c0._16_16_);
  }
  if ((uVar56 & 0x10) != 0) {
    local_13c8 = vmovlps_avx(local_15a0._0_16_);
  }
  if ((uVar56 & 0x20) != 0) {
    local_1390 = vmovhps_avx(local_15a0._0_16_);
  }
  if ((uVar56 & 0x40) != 0) {
    local_1358 = local_15a0._16_8_;
  }
  if (cVar24 < '\0') {
    local_1320 = vmovhps_avx(local_15a0._16_16_);
  }
  if ((uVar56 & 1) != 0) {
    local_14a8[1] = vmovlps_avx(local_1580._0_16_);
  }
  if ((uVar56 & 2) != 0) {
    local_1468 = vmovhps_avx(local_1580._0_16_);
  }
  if ((uVar56 & 4) != 0) {
    local_1430 = vmovlps_avx(local_1580._16_16_);
  }
  if ((uVar56 & 8) != 0) {
    local_13f8 = vmovhps_avx(local_1580._16_16_);
  }
  if ((uVar56 & 0x10) != 0) {
    local_13c0 = vmovlps_avx(local_1560._0_16_);
  }
  if ((uVar56 & 0x20) != 0) {
    local_1388 = vmovhps_avx(local_1560._0_16_);
  }
  if ((uVar56 & 0x40) != 0) {
    local_1350 = local_1560._16_8_;
  }
  if (cVar24 < '\0') {
    local_1318 = vmovhps_avx(local_1560._16_16_);
  }
  if ((uVar56 & 1) != 0) {
    local_1498 = vmovlps_avx(local_1540._0_16_);
  }
  if ((uVar56 & 2) != 0) {
    local_1460 = vmovhps_avx(local_1540._0_16_);
  }
  if ((uVar56 & 4) != 0) {
    local_1428 = vmovlps_avx(local_1540._16_16_);
  }
  if ((uVar56 & 8) != 0) {
    local_13f0 = vmovhps_avx(local_1540._16_16_);
  }
  if ((uVar56 & 0x10) != 0) {
    local_13b8 = vmovlps_avx(local_1520._0_16_);
  }
  if ((uVar56 & 0x20) != 0) {
    local_1380 = vmovhps_avx(local_1520._0_16_);
  }
  if ((uVar56 & 0x40) != 0) {
    local_1348 = local_1520._16_8_;
  }
  if (cVar24 < '\0') {
    local_1310 = vmovhps_avx(local_1520._16_16_);
  }
  if ((uVar56 & 1) != 0) {
    local_1490[0] = (char)local_1500;
  }
  if ((uVar56 & 2) != 0) {
    local_1458 = local_1500._1_1_;
  }
  if ((uVar56 & 4) != 0) {
    local_1420 = local_1500._2_1_;
  }
  if ((uVar56 & 8) != 0) {
    local_13e8 = local_1500._3_1_;
  }
  if ((uVar56 & 0x10) != 0) {
    local_13b0 = local_1500._4_1_;
  }
  if ((uVar56 & 0x20) != 0) {
    local_1378 = local_1500._5_1_;
  }
  if ((uVar56 & 0x40) != 0) {
    local_1340 = local_1500._6_1_;
  }
  if (cVar24 < '\0') {
    local_1308 = local_1500._7_1_;
  }
  auVar461 = vpshufd_avx(auVar321,0);
  auVar321 = vpcmpgtd_avx(auVar461,___xmm_00000003000000020000000100000000);
  auVar461 = vpcmpgtd_avx(auVar461,___xmm_00000007000000060000000500000004);
  auVar298._0_4_ = auVar321._0_4_ & local_120._0_4_;
  auVar298._4_4_ = auVar321._4_4_ & local_120._4_4_;
  auVar298._8_4_ = auVar321._8_4_ & local_120._8_4_;
  auVar298._12_4_ = auVar321._12_4_ & local_120._12_4_;
  auVar298._16_4_ = auVar461._0_4_ & local_120._16_4_;
  auVar298._20_4_ = auVar461._4_4_ & local_120._20_4_;
  auVar298._24_4_ = auVar461._8_4_ & local_120._24_4_;
  auVar298._28_4_ = auVar461._12_4_ & local_120._28_4_;
  uVar56 = vmovmskps_avx(auVar298);
  if (uVar56 != 0) {
    uVar26 = (ulonglong)(uVar56 & 0xff);
    do {
      if (uVar26 == 0) {
        uVar31 = 0x40;
      }
      else {
        uVar31 = 0;
        for (uVar49 = uVar26; (uVar49 & 1) == 0; uVar49 = uVar49 >> 1 | 0x8000000000000000) {
          uVar31 = uVar31 + 1;
        }
      }
      lVar62 = uVar31 * 0x38;
      cVar33 = param_5[2][0];
      cVar24 = local_1490[lVar62];
      if ((cVar33 == '\0') || (cVar24 == '\0')) {
        if (cVar24 == '\0') {
          cVar33 = param_5[2][0];
          uVar548 = *(undefined8 *)(param_5[1] + 0x10);
          uVar521 = *(undefined8 *)(param_5[1] + 8);
          uVar488 = *(undefined8 *)param_5[1];
          uVar452 = *(undefined8 *)(*param_5 + 0x10);
          uVar79 = *(undefined8 *)*param_5;
          uVar320 = *(undefined8 *)(*param_5 + 8);
        }
        else {
          uVar79 = *(undefined8 *)*(undefined1 (*) [24])(&local_14c0 + uVar31 * 7);
          uVar320 = local_14b8[uVar31 * 7];
          uVar452 = local_14b8[uVar31 * 7 + 1];
          uVar488 = local_14a8[uVar31 * 7];
          uVar521 = local_14a8[uVar31 * 7 + 1];
          uVar548 = *(undefined8 *)(local_1490 + lVar62 + -8);
          cVar33 = cVar24;
        }
      }
      else {
        auVar299._24_8_ = 0;
        auVar299._0_24_ = *param_5;
        auVar450._24_8_ = 0;
        auVar450._0_24_ = *(undefined1 (*) [24])(&local_14c0 + uVar31 * 7);
        auVar442 = vminpd_avx(auVar299,auVar450);
        uVar79 = auVar442._0_8_;
        auVar321 = vshufpd_avx(auVar442._0_16_,auVar442._0_16_,1);
        uVar320 = auVar321._0_8_;
        uVar452 = auVar442._16_8_;
        auVar513._24_8_ = 0;
        auVar513._0_24_ = param_5[1];
        auVar542._16_8_ = *(undefined8 *)(local_1490 + lVar62 + -8);
        auVar542._0_16_ = *(undefined1 (*) [16])(local_14a8 + uVar31 * 7);
        auVar542._24_8_ = 0;
        auVar442 = vmaxpd_avx(auVar513,auVar542);
        uVar488 = auVar442._0_8_;
        auVar321 = vshufpd_avx(auVar442._0_16_,auVar442._0_16_,1);
        uVar521 = auVar321._0_8_;
        uVar548 = auVar442._16_8_;
      }
      uVar26 = uVar26 & ~(1L << (uVar31 & 0x3f));
      *(undefined8 *)*param_5 = uVar79;
      *(undefined8 *)(*param_5 + 8) = uVar320;
      *(undefined8 *)(*param_5 + 0x10) = uVar452;
      *(undefined8 *)param_5[1] = uVar488;
      *(undefined8 *)(param_5[1] + 8) = uVar521;
      *(undefined8 *)(param_5[1] + 0x10) = uVar548;
      param_5[2][0] = cVar33;
    } while (uVar26 != 0);
  }
  return;
}

// BoxCalcBoundsFromGeometryGroup_avx @ 140a6e710

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BoxCalcBoundsFromGeometryGroup_avx
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,double *param_5,
               undefined1 (*param_6) [24],uint param_7)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  undefined1 auVar9 [16];
  char cVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  ulonglong uVar17;
  byte bVar18;
  uint uVar19;
  undefined4 uVar20;
  longlong lVar21;
  byte bVar22;
  byte bVar23;
  undefined4 uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  ulonglong uVar28;
  int iVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  ulonglong uVar35;
  char cVar36;
  uint uVar37;
  uint uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  uint uVar41;
  double dVar42;
  undefined8 uVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar179;
  undefined1 auVar161 [32];
  undefined1 auVar162 [32];
  double dVar174;
  double dVar175;
  double dVar176;
  double dVar177;
  double dVar178;
  double dVar180;
  double dVar181;
  double dVar182;
  double dVar183;
  double dVar184;
  double dVar185;
  double dVar186;
  double dVar187;
  double dVar188;
  undefined1 auVar163 [32];
  undefined1 auVar164 [32];
  undefined1 auVar165 [32];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar166 [32];
  undefined1 auVar167 [32];
  undefined1 auVar168 [32];
  undefined1 auVar169 [32];
  undefined1 auVar170 [32];
  undefined1 auVar171 [32];
  undefined1 auVar172 [32];
  undefined1 auVar173 [32];
  undefined8 uVar189;
  undefined1 auVar190 [16];
  undefined1 auVar191 [16];
  undefined1 auVar192 [16];
  undefined1 auVar193 [16];
  undefined1 auVar194 [16];
  undefined1 auVar195 [16];
  undefined1 auVar196 [16];
  undefined1 auVar197 [16];
  undefined1 auVar198 [16];
  undefined1 auVar199 [16];
  undefined1 auVar200 [16];
  undefined1 auVar201 [16];
  undefined1 auVar202 [16];
  undefined1 auVar203 [16];
  undefined1 auVar204 [16];
  undefined1 auVar205 [16];
  undefined1 auVar206 [16];
  undefined1 auVar207 [16];
  undefined1 auVar208 [16];
  undefined1 auVar209 [16];
  undefined1 auVar210 [16];
  undefined1 auVar211 [16];
  undefined1 auVar212 [16];
  undefined1 auVar213 [16];
  undefined1 auVar214 [16];
  undefined1 auVar215 [16];
  undefined1 auVar216 [16];
  undefined1 auVar217 [16];
  undefined1 auVar218 [16];
  undefined1 auVar219 [16];
  undefined1 auVar220 [16];
  undefined1 auVar221 [16];
  undefined1 auVar222 [16];
  undefined1 auVar223 [16];
  undefined1 auVar224 [16];
  undefined1 auVar225 [16];
  undefined1 auVar226 [16];
  undefined1 auVar227 [16];
  undefined1 auVar228 [16];
  undefined1 auVar229 [16];
  undefined1 auVar230 [16];
  undefined1 auVar231 [16];
  undefined1 auVar232 [16];
  undefined1 auVar233 [16];
  undefined1 auVar234 [16];
  undefined1 auVar235 [16];
  undefined1 auVar236 [16];
  undefined1 auVar237 [16];
  undefined1 auVar238 [32];
  undefined1 auVar239 [32];
  undefined1 auVar240 [32];
  undefined1 auVar241 [32];
  undefined1 auVar242 [32];
  undefined1 auVar243 [32];
  uint uVar244;
  undefined8 uVar245;
  uint uVar262;
  undefined1 auVar246 [16];
  undefined1 auVar247 [16];
  undefined1 auVar248 [16];
  undefined1 auVar249 [16];
  undefined1 auVar250 [16];
  undefined1 auVar251 [16];
  undefined1 auVar252 [16];
  uint uVar261;
  uint uVar263;
  undefined1 auVar253 [16];
  uint uVar264;
  uint uVar265;
  uint uVar266;
  undefined1 auVar254 [32];
  undefined1 auVar255 [32];
  undefined1 auVar256 [32];
  undefined1 auVar257 [32];
  undefined1 auVar258 [32];
  uint uVar267;
  undefined1 auVar260 [32];
  double dVar268;
  undefined8 uVar269;
  undefined1 auVar270 [16];
  undefined1 auVar271 [16];
  undefined1 auVar272 [16];
  double dVar278;
  double dVar279;
  double dVar280;
  undefined1 auVar273 [32];
  undefined1 auVar274 [32];
  undefined1 auVar275 [32];
  undefined1 auVar276 [32];
  undefined1 auVar277 [32];
  double dVar281;
  undefined8 uVar282;
  undefined1 auVar283 [16];
  undefined1 auVar284 [16];
  undefined1 auVar285 [16];
  undefined1 auVar286 [16];
  undefined1 auVar287 [16];
  undefined1 auVar288 [16];
  double dVar293;
  double dVar294;
  double dVar295;
  undefined1 auVar289 [32];
  undefined1 auVar290 [32];
  undefined1 auVar291 [32];
  undefined1 auVar292 [32];
  undefined8 uVar296;
  undefined1 auVar297 [16];
  undefined1 auVar298 [16];
  undefined1 auVar299 [32];
  undefined1 in_ZMM5 [64];
  undefined1 auVar300 [16];
  undefined1 auVar301 [16];
  undefined1 auVar302 [16];
  undefined1 auVar303 [32];
  undefined1 auVar304 [32];
  undefined1 auVar305 [64];
  undefined1 auVar306 [16];
  undefined1 auVar307 [16];
  undefined1 auVar308 [16];
  undefined1 auVar309 [32];
  undefined1 in_ZMM7 [64];
  double dVar310;
  undefined1 auVar311 [16];
  undefined1 auVar312 [16];
  undefined1 auVar313 [16];
  undefined1 auVar314 [16];
  double dVar320;
  double dVar322;
  undefined1 auVar315 [32];
  undefined1 auVar316 [32];
  undefined1 auVar317 [32];
  undefined1 auVar318 [32];
  undefined1 auVar319 [32];
  double dVar321;
  undefined1 in_ZMM8 [64];
  double dVar323;
  double dVar324;
  undefined1 auVar325 [16];
  undefined1 auVar326 [16];
  undefined1 auVar327 [16];
  undefined1 auVar328 [16];
  double dVar333;
  double dVar334;
  double dVar336;
  double dVar337;
  double dVar338;
  undefined1 auVar329 [32];
  undefined1 auVar330 [32];
  undefined1 auVar331 [32];
  undefined1 auVar332 [32];
  double dVar335;
  undefined1 in_ZMM9 [64];
  undefined1 auVar339 [16];
  undefined1 auVar340 [16];
  undefined1 auVar341 [16];
  undefined1 auVar342 [16];
  undefined1 auVar343 [32];
  undefined1 auVar344 [32];
  undefined1 in_ZMM10 [64];
  undefined1 auVar345 [16];
  undefined1 auVar346 [32];
  undefined1 auVar347 [32];
  undefined1 auVar348 [32];
  undefined1 auVar349 [32];
  undefined1 auVar350 [32];
  undefined1 auVar351 [16];
  undefined1 auVar352 [32];
  undefined1 auVar353 [32];
  undefined1 auVar354 [32];
  undefined1 in_ZMM12 [64];
  undefined1 auVar357 [16];
  undefined1 auVar358 [16];
  double dVar355;
  double dVar356;
  undefined1 auVar359 [32];
  undefined1 auVar360 [32];
  undefined1 auVar361 [32];
  double dVar365;
  double dVar366;
  double dVar368;
  double dVar369;
  double dVar370;
  undefined1 auVar362 [32];
  undefined1 auVar363 [32];
  undefined1 auVar364 [32];
  double dVar367;
  undefined1 in_ZMM13 [64];
  undefined1 auVar371 [16];
  undefined1 auVar372 [32];
  undefined1 auVar373 [32];
  undefined1 auVar374 [32];
  undefined1 auVar375 [32];
  undefined1 auVar376 [32];
  undefined1 in_ZMM14 [64];
  undefined1 auVar377 [16];
  undefined1 auVar378 [16];
  undefined1 auVar379 [32];
  undefined1 auVar380 [32];
  undefined1 in_ZMM15 [64];
  undefined1 local_17e0 [16];
  double dStack_17d0;
  double dStack_17c8;
  undefined1 local_17a0 [16];
  double dStack_1790;
  double dStack_1788;
  undefined1 local_1740 [16];
  double dStack_1730;
  double dStack_1728;
  ulonglong local_1700;
  double local_1640;
  double dStack_1638;
  double dStack_1630;
  double dStack_1628;
  double local_1620;
  double dStack_1618;
  double dStack_1610;
  double dStack_1608;
  double local_15e0;
  double dStack_15d8;
  double dStack_15d0;
  double dStack_15c8;
  double local_15a0;
  double dStack_1598;
  double dStack_1590;
  double dStack_1588;
  double local_1580;
  double dStack_1578;
  double dStack_1570;
  double dStack_1568;
  undefined1 local_1340 [32];
  undefined1 local_1320 [32];
  undefined1 local_1300 [32];
  undefined1 local_12e0 [32];
  undefined1 local_12c0 [32];
  undefined1 local_12a0 [32];
  undefined1 local_1280 [32];
  undefined1 local_1260 [32];
  undefined1 local_1240 [32];
  undefined1 local_1220 [32];
  undefined1 local_1200 [8];
  double adStack_11f8 [3];
  undefined1 local_11e0 [8];
  double adStack_11d8 [3];
  undefined8 local_11c0;
  double adStack_11b8 [15];
  undefined1 local_1140 [8];
  double adStack_1138 [3];
  undefined1 local_1120 [8];
  double adStack_1118 [3];
  undefined1 local_1100 [16];
  double dStack_10f0;
  double dStack_10e8;
  undefined1 local_10e0 [16];
  double dStack_10d0;
  double dStack_10c8;
  undefined1 local_10c0 [16];
  double dStack_10b0;
  double dStack_10a8;
  undefined1 local_10a0 [16];
  double dStack_1090;
  double dStack_1088;
  undefined1 local_1080 [32];
  undefined1 local_1060 [32];
  undefined1 local_1040 [16];
  double dStack_1030;
  double dStack_1028;
  undefined1 local_1020 [16];
  double dStack_1010;
  double dStack_1008;
  undefined1 local_1000 [16];
  double dStack_ff0;
  double dStack_fe8;
  undefined1 local_fe0 [16];
  double dStack_fd0;
  double dStack_fc8;
  undefined1 local_fc0;
  undefined1 uStack_fbf;
  undefined1 uStack_fbe;
  undefined1 uStack_fbd;
  undefined1 uStack_fbc;
  undefined1 uStack_fbb;
  undefined1 uStack_fba;
  undefined1 uStack_fb9;
  double dStack_fb8;
  double dStack_fb0;
  double dStack_fa8;
  double local_fa0;
  double dStack_f98;
  double dStack_f90;
  double dStack_f88;
  double local_f40;
  double dStack_f38;
  double dStack_f30;
  double dStack_f28;
  double local_f20;
  double dStack_f18;
  double dStack_f10;
  double dStack_f08;
  double local_f00;
  double dStack_ef8;
  double dStack_ef0;
  double dStack_ee8;
  double local_ee0;
  double dStack_ed8;
  double dStack_ed0;
  double dStack_ec8;
  double local_ec0;
  double dStack_eb8;
  double dStack_eb0;
  double dStack_ea8;
  double local_ea0;
  double dStack_e98;
  double dStack_e90;
  double dStack_e88;
  double local_e40;
  double dStack_e38;
  double dStack_e30;
  double dStack_e28;
  double local_e20;
  double dStack_e18;
  double dStack_e10;
  double dStack_e08;
  double local_e00;
  double dStack_df8;
  double dStack_df0;
  double dStack_de8;
  double local_de0;
  double dStack_dd8;
  double dStack_dd0;
  double dStack_dc8;
  double local_dc0;
  double dStack_db8;
  double dStack_db0;
  double dStack_da8;
  double local_da0;
  double dStack_d98;
  double dStack_d90;
  double dStack_d88;
  undefined1 local_c20 [32];
  undefined1 local_c00 [32];
  undefined1 local_be0 [16];
  double dStack_bd0;
  double dStack_bc8;
  undefined1 local_bc0 [32];
  undefined1 local_ba0 [32];
  undefined1 local_b80 [32];
  undefined1 local_b60 [32];
  undefined1 local_b40 [32];
  undefined1 local_b20 [32];
  undefined1 local_b00 [32];
  undefined1 local_ad0 [16];
  undefined1 local_ac0 [16];
  undefined8 local_ab0;
  undefined1 local_aa8 [16];
  undefined8 local_a98;
  char local_a90 [8];
  undefined1 local_a88 [16];
  undefined8 local_a78;
  undefined1 local_a70 [16];
  undefined8 local_a60;
  undefined1 local_a58;
  undefined1 local_a50 [16];
  undefined8 local_a40;
  undefined1 local_a38 [16];
  undefined8 local_a28;
  undefined1 local_a20;
  undefined1 local_a18 [16];
  undefined8 local_a08;
  undefined1 local_a00 [16];
  undefined8 local_9f0;
  undefined1 local_9e8;
  undefined1 local_9e0 [16];
  undefined8 local_9d0;
  undefined1 local_9c8 [16];
  double local_9b8;
  undefined1 local_9b0 [8];
  undefined1 local_9a8 [16];
  double local_998;
  undefined1 local_990 [16];
  double local_980;
  undefined1 local_978 [8];
  undefined1 local_970 [16];
  double local_960;
  undefined1 local_958 [16];
  double local_948;
  undefined1 local_940 [8];
  undefined1 local_938 [16];
  double local_928;
  undefined1 local_920 [16];
  double local_910;
  undefined1 local_908 [8];
  undefined1 local_900 [16];
  undefined1 local_8f0 [16];
  undefined1 local_8e0 [16];
  undefined1 local_8d0 [16];
  undefined1 local_8c0 [16];
  undefined1 local_8b0 [16];
  undefined1 local_8a0 [16];
  undefined1 local_890 [16];
  undefined1 local_880 [16];
  undefined1 local_870 [16];
  undefined1 local_860 [16];
  undefined1 local_850 [16];
  undefined1 local_840 [16];
  undefined1 local_830 [16];
  undefined1 local_820 [16];
  undefined1 local_810 [16];
  undefined1 local_800 [16];
  undefined1 local_7f0 [16];
  undefined1 local_7e0 [16];
  undefined1 local_7d0 [16];
  undefined1 local_7c0 [16];
  undefined1 local_7b0 [16];
  undefined1 local_7a0 [16];
  undefined1 local_790 [16];
  undefined1 local_780 [16];
  undefined1 local_770 [16];
  undefined1 local_760 [16];
  undefined1 local_750 [16];
  undefined1 local_740 [16];
  undefined1 local_730 [16];
  undefined1 local_720 [16];
  undefined1 local_710 [16];
  undefined1 local_700 [16];
  undefined1 local_6f0 [16];
  undefined1 local_6e0 [16];
  undefined1 local_6d0 [16];
  undefined1 local_6c0 [16];
  undefined1 local_6b0 [16];
  undefined1 local_6a0 [16];
  undefined1 local_690 [16];
  undefined1 local_680 [16];
  undefined1 local_670 [16];
  undefined1 local_660 [16];
  undefined1 local_650 [16];
  undefined1 local_640 [16];
  undefined1 local_630 [16];
  undefined1 local_620 [16];
  undefined1 local_610 [16];
  undefined1 local_600 [16];
  undefined1 local_5f0 [16];
  undefined1 local_5e0 [16];
  undefined1 local_5d0 [16];
  undefined1 local_5c0 [16];
  undefined1 local_5b0 [16];
  undefined1 local_5a0 [16];
  undefined1 local_590 [16];
  undefined1 local_580 [16];
  undefined1 local_570 [16];
  undefined1 local_560 [16];
  undefined1 local_550 [16];
  undefined1 local_540 [16];
  undefined1 local_530 [16];
  undefined1 local_520 [16];
  undefined1 local_510 [16];
  undefined1 local_500 [16];
  undefined1 local_4f0 [16];
  undefined1 local_4e0 [16];
  undefined1 local_4d0 [16];
  undefined1 local_4c0 [16];
  undefined1 local_4b0 [16];
  undefined1 local_4a0 [16];
  undefined1 local_490 [16];
  undefined1 local_480 [16];
  undefined1 local_470 [16];
  undefined1 local_460 [16];
  undefined1 local_450 [16];
  undefined1 local_440 [16];
  undefined1 local_430 [16];
  undefined1 local_420 [16];
  undefined1 local_410 [16];
  undefined1 local_400 [16];
  undefined1 local_3f0 [16];
  undefined1 local_3e0 [16];
  undefined1 local_3d0 [16];
  undefined1 local_3c0 [16];
  undefined1 local_3b0 [16];
  undefined1 local_3a0 [16];
  undefined1 local_390 [16];
  undefined1 local_380 [16];
  undefined1 local_370 [16];
  undefined1 local_360 [16];
  undefined1 local_350 [16];
  undefined1 local_340 [16];
  undefined1 local_330 [16];
  undefined1 local_320 [16];
  undefined1 local_310 [16];
  undefined1 local_300 [16];
  undefined1 local_2f0 [16];
  undefined1 local_2e0 [16];
  undefined1 local_2d0 [16];
  undefined1 local_2c0 [16];
  undefined1 local_2b0 [16];
  undefined1 local_2a0 [16];
  undefined1 local_290 [16];
  undefined1 local_280 [16];
  undefined1 local_270 [16];
  undefined1 local_260 [16];
  undefined1 local_250 [16];
  undefined1 local_240 [16];
  undefined1 local_230 [16];
  undefined1 local_220 [16];
  undefined1 local_210 [16];
  undefined1 local_200 [16];
  undefined1 local_1f0 [16];
  undefined1 local_1e0 [16];
  undefined1 local_1d0 [16];
  undefined1 local_1c0 [16];
  undefined1 local_1b0 [16];
  undefined1 local_1a0 [16];
  undefined1 local_190 [16];
  undefined1 local_180 [16];
  undefined1 local_170 [16];
  undefined1 local_160 [16];
  undefined1 local_150 [16];
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  undefined1 local_120 [16];
  undefined1 local_110 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 uStack_48;
  undefined1 auVar259 [32];
  
  uStack_48 = 0x140a6e726;
  local_58 = in_ZMM15._0_16_;
  local_68 = in_ZMM14._0_16_;
  local_78 = in_ZMM13._0_16_;
  local_88 = in_ZMM12._0_16_;
  local_a8 = in_ZMM10._0_16_;
  local_b8 = in_ZMM9._0_16_;
  local_c8 = in_ZMM8._0_16_;
  local_d8 = in_ZMM7._0_16_;
  uVar26 = param_7 + 7;
  if (-1 < (int)param_7) {
    uVar26 = param_7;
  }
  _local_11e0 = ZEXT1632(ZEXT816(0));
  _local_1200 = ZEXT1632(ZEXT816(0));
  local_1220._0_16_ = ZEXT816(0);
  local_1220 = ZEXT1632(local_1220._0_16_);
  local_1240._0_16_ = ZEXT816(0);
  local_1240 = ZEXT1632(local_1240._0_16_);
  local_1260._0_16_ = ZEXT816(0);
  local_1260 = ZEXT1632(local_1260._0_16_);
  local_1280._0_16_ = ZEXT816(0);
  local_1280 = ZEXT1632(local_1280._0_16_);
  local_12a0 = ZEXT1632(ZEXT816(0));
  local_12c0 = ZEXT1632(ZEXT816(0));
  local_12e0._0_16_ = ZEXT816(0);
  local_12e0 = ZEXT1632(local_12e0._0_16_);
  local_1300._0_16_ = ZEXT816(0);
  local_1300 = ZEXT1632(local_1300._0_16_);
  local_1320._0_16_ = ZEXT816(0);
  local_1320 = ZEXT1632(local_1320._0_16_);
  local_1340._0_16_ = ZEXT816(0);
  local_1340 = ZEXT1632(local_1340._0_16_);
  local_11c0 = 0;
  if ((int)(uVar26 & 0xfffffff8) < 1) {
    lVar21 = 0;
  }
  else {
    lVar21 = 0;
    auVar305 = ZEXT1664((undefined1  [16])0x0);
    do {
      uVar35 = (ulonglong)((int)lVar21 * 4 & 0xffffffe0);
      auVar249 = *(undefined1 (*) [16])(param_2 + uVar35);
      uVar28 = (ulonglong)(uint)((int)lVar21 * 7);
      auVar250 = vpinsrb_avx(ZEXT116(*(byte *)(param_4 + 0x30 + uVar28 * 8)),
                             (uint)*(byte *)(param_4 + 0x68 + uVar28 * 8),1);
      auVar250 = vpinsrb_avx(auVar250,(uint)*(byte *)(param_4 + 0xa0 + uVar28 * 8),2);
      auVar250 = vpinsrb_avx(auVar250,(uint)*(byte *)(param_4 + 0xd8 + uVar28 * 8),3);
      auVar250 = vpinsrb_avx(auVar250,(uint)*(byte *)(param_4 + 0x110 + uVar28 * 8),4);
      auVar250 = vpinsrb_avx(auVar250,(uint)*(byte *)(param_4 + 0x148 + uVar28 * 8),5);
      auVar250 = vpinsrb_avx(auVar250,(uint)*(byte *)(param_4 + 0x180 + uVar28 * 8),6);
      auVar48 = vpinsrb_avx(auVar250,(uint)*(byte *)(param_4 + 0x1b8 + uVar28 * 8),7);
      auVar250 = *(undefined1 (*) [16])(param_2 + 0x10 + uVar35);
      auVar270 = vpslld_avx(auVar250,2);
      auVar283 = vpslld_avx(auVar249,2);
      auVar308 = vpcmpeqd_avx(in_ZMM5._0_16_,in_ZMM5._0_16_);
      in_ZMM5 = ZEXT1664(auVar308);
      auVar270 = vpcmpeqd_avx(ZEXT416(*(uint *)(param_1 + auVar270._0_4_)),auVar308);
      auVar283 = vpcmpeqd_avx(ZEXT416(*(uint *)(param_1 + auVar283._0_4_)),auVar308);
      auVar270 = vpackssdw_avx(auVar283,auVar270);
      auVar283 = vpcmpeqb_avx(auVar48,auVar305._0_16_);
      auVar283 = vpmovsxbw_avx(auVar283 ^ auVar308);
      auVar270 = vpandn_avx(auVar270,auVar283);
      if ((((((((((((((((SUB161(auVar270 >> 7,0) & 1) != 0 || (SUB161(auVar270 >> 0xf,0) & 1) != 0)
                      || (SUB161(auVar270 >> 0x17,0) & 1) != 0) ||
                     (SUB161(auVar270 >> 0x1f,0) & 1) != 0) || (SUB161(auVar270 >> 0x27,0) & 1) != 0
                    ) || (SUB161(auVar270 >> 0x2f,0) & 1) != 0) ||
                  (SUB161(auVar270 >> 0x37,0) & 1) != 0) || (SUB161(auVar270 >> 0x3f,0) & 1) != 0)
                || (SUB161(auVar270 >> 0x47,0) & 1) != 0) || (SUB161(auVar270 >> 0x4f,0) & 1) != 0)
              || (SUB161(auVar270 >> 0x57,0) & 1) != 0) || (SUB161(auVar270 >> 0x5f,0) & 1) != 0) ||
            (SUB161(auVar270 >> 0x67,0) & 1) != 0) || (SUB161(auVar270 >> 0x6f,0) & 1) != 0) ||
          (SUB161(auVar270 >> 0x77,0) & 1) != 0) || auVar270[0xf] < '\0') {
        local_c00._0_8_ = lVar21;
        auVar283._8_8_ = 0;
        auVar283._0_8_ = *(ulonglong *)(param_4 + 0x150 + uVar28 * 8);
        auVar283 = vmovhps_avx(auVar283,*(undefined8 *)(param_4 + 0x188 + uVar28 * 8));
        auVar308._8_8_ = 0;
        auVar308._0_8_ = *(ulonglong *)(param_4 + 0xe0 + uVar28 * 8);
        auVar308 = vmovhps_avx(auVar308,*(undefined8 *)(param_4 + 0x118 + uVar28 * 8));
        auVar161._16_16_ = auVar283;
        auVar161._0_16_ = auVar308;
        auVar48._8_8_ = 0;
        auVar48._0_8_ = *(ulonglong *)(param_4 + 0x70 + uVar28 * 8);
        auVar48 = vmovhps_avx(auVar48,*(undefined8 *)(param_4 + 0xa8 + uVar28 * 8));
        auVar49._8_8_ = 0;
        auVar49._0_8_ = *(ulonglong *)(param_4 + uVar28 * 8);
        auVar246._8_8_ = 0;
        auVar246._0_8_ = *(ulonglong *)(param_4 + 8 + uVar28 * 8);
        auVar284._8_8_ = 0;
        auVar284._0_8_ = *(ulonglong *)(param_4 + 0x10 + uVar28 * 8);
        auVar49 = vmovhps_avx(auVar49,*(undefined8 *)(param_4 + 0x38 + uVar28 * 8));
        auVar50._8_8_ = 0;
        auVar50._0_8_ = *(ulonglong *)(param_4 + 0x18 + uVar28 * 8);
        auVar300._8_8_ = 0;
        auVar300._0_8_ = *(ulonglong *)(param_4 + 0x158 + uVar28 * 8);
        auVar300 = vmovhps_avx(auVar300,*(undefined8 *)(param_4 + 400 + uVar28 * 8));
        auVar306._8_8_ = 0;
        auVar306._0_8_ = *(ulonglong *)(param_4 + 0xe8 + uVar28 * 8);
        auVar306 = vmovhps_avx(auVar306,*(undefined8 *)(param_4 + 0x120 + uVar28 * 8));
        auVar311._8_8_ = 0;
        auVar311._0_8_ = *(ulonglong *)(param_4 + 0x78 + uVar28 * 8);
        auVar311 = vmovhps_avx(auVar311,*(undefined8 *)(param_4 + 0xb0 + uVar28 * 8));
        auVar246 = vmovhps_avx(auVar246,*(undefined8 *)(param_4 + 0x40 + uVar28 * 8));
        auVar238._16_16_ = auVar48;
        auVar238._0_16_ = auVar49;
        auVar190._8_8_ = 0;
        auVar190._0_8_ = *(ulonglong *)(param_4 + 0x160 + uVar28 * 8);
        auVar52 = vmovhps_avx(auVar190,*(undefined8 *)(param_4 + 0x198 + uVar28 * 8));
        auVar297._8_8_ = 0;
        auVar297._0_8_ = *(ulonglong *)(param_4 + 0xf0 + uVar28 * 8);
        auVar190 = vmovhps_avx(auVar297,*(undefined8 *)(param_4 + 0x128 + uVar28 * 8));
        auVar325._8_8_ = 0;
        auVar325._0_8_ = *(ulonglong *)(param_4 + 0x80 + uVar28 * 8);
        auVar53 = vmovhps_avx(auVar325,*(undefined8 *)(param_4 + 0xb8 + uVar28 * 8));
        auVar51 = vmovhps_avx(auVar284,*(undefined8 *)(param_4 + 0x48 + uVar28 * 8));
        auVar303._16_16_ = auVar300;
        auVar303._0_16_ = auVar306;
        auVar301._8_8_ = 0;
        auVar301._0_8_ = *(ulonglong *)(param_4 + 0x168 + uVar28 * 8);
        auVar54 = vmovhps_avx(auVar301,*(undefined8 *)(param_4 + 0x1a0 + uVar28 * 8));
        auVar307._8_8_ = 0;
        auVar307._0_8_ = *(ulonglong *)(param_4 + 0xf8 + uVar28 * 8);
        auVar55 = vmovhps_avx(auVar307,*(undefined8 *)(param_4 + 0x130 + uVar28 * 8));
        auVar339._8_8_ = 0;
        auVar339._0_8_ = *(ulonglong *)(param_4 + 0x88 + uVar28 * 8);
        auVar284 = vmovhps_avx(auVar339,*(undefined8 *)(param_4 + 0xc0 + uVar28 * 8));
        auVar50 = vmovhps_avx(auVar50,*(undefined8 *)(param_4 + 0x50 + uVar28 * 8));
        auVar254._16_16_ = auVar311;
        auVar254._0_16_ = auVar246;
        auVar247._8_8_ = 0;
        auVar247._0_8_ = *(ulonglong *)(param_4 + 0x170 + uVar28 * 8);
        auVar56 = vmovhps_avx(auVar247,*(undefined8 *)(param_4 + 0x1a8 + uVar28 * 8));
        local_bc0._16_16_ = auVar52;
        local_bc0._0_16_ = auVar190;
        auVar191._8_8_ = 0;
        auVar191._0_8_ = *(ulonglong *)(param_4 + 0x100 + uVar28 * 8);
        auVar52 = vmovhps_avx(auVar191,*(undefined8 *)(param_4 + 0x138 + uVar28 * 8));
        local_b00._16_16_ = auVar53;
        local_b00._0_16_ = auVar51;
        auVar285._8_8_ = 0;
        auVar285._0_8_ = *(ulonglong *)(param_4 + 0x90 + uVar28 * 8);
        auVar190 = vmovhps_avx(auVar285,*(undefined8 *)(param_4 + 200 + uVar28 * 8));
        local_b20._16_16_ = auVar54;
        local_b20._0_16_ = auVar55;
        auVar298._8_8_ = 0;
        auVar298._0_8_ = *(ulonglong *)(param_4 + 0x20 + uVar28 * 8);
        auVar53 = vmovhps_avx(auVar298,*(undefined8 *)(param_4 + 0x58 + uVar28 * 8));
        auVar162._16_16_ = auVar284;
        auVar162._0_16_ = auVar50;
        auVar51._8_8_ = 0;
        auVar51._0_8_ = *(ulonglong *)(param_4 + 0x178 + uVar28 * 8);
        auVar51 = vmovhps_avx(auVar51,*(undefined8 *)(param_4 + 0x1b0 + uVar28 * 8));
        local_b40._16_16_ = auVar56;
        local_b40._0_16_ = auVar52;
        auVar192._8_8_ = 0;
        auVar192._0_8_ = *(ulonglong *)(param_4 + 0x108 + uVar28 * 8);
        auVar52 = vmovhps_avx(auVar192,*(undefined8 *)(param_4 + 0x140 + uVar28 * 8));
        register0x00001290 = auVar190;
        local_be0 = auVar53;
        auVar248._8_8_ = 0;
        auVar248._0_8_ = *(ulonglong *)(param_4 + 0x98 + uVar28 * 8);
        auVar190 = vmovhps_avx(auVar248,*(undefined8 *)(param_4 + 0xd0 + uVar28 * 8));
        local_b60._16_16_ = auVar51;
        local_b60._0_16_ = auVar52;
        auVar52._8_8_ = 0;
        auVar52._0_8_ = *(ulonglong *)(param_4 + 0x28 + uVar28 * 8);
        auVar52 = vmovhps_avx(auVar52,*(undefined8 *)(param_4 + 0x60 + uVar28 * 8));
        local_b80._16_16_ = auVar190;
        local_b80._0_16_ = auVar52;
        auVar52 = vpmovsxwd_avx(auVar270);
        auVar190 = vpunpckhwd_avx(auVar270,auVar270);
        local_c20._0_16_ = auVar270;
        auVar270 = vpacksswb_avx(auVar270,auVar270);
        bVar23 = SUB161(auVar270 >> 7,0) & 1;
        bVar11 = SUB161(auVar270 >> 0xf,0) & 1;
        bVar12 = SUB161(auVar270 >> 0x17,0) & 1;
        bVar13 = SUB161(auVar270 >> 0x1f,0) & 1;
        bVar14 = SUB161(auVar270 >> 0x27,0) & 1;
        bVar15 = SUB161(auVar270 >> 0x2f,0) & 1;
        bVar16 = SUB161(auVar270 >> 0x37,0) & 1;
        bVar18 = SUB161(auVar270 >> 0x3f,0) << 7;
        auVar249 = vpslld_avx(auVar249,7);
        auVar249 = vpand_avx(auVar52,auVar249);
        auVar255._16_16_ = auVar190;
        auVar255._0_16_ = auVar52;
        auVar250 = vpslld_avx(auVar250,7);
        lVar21 = param_3 + auVar249._0_4_;
        lVar1 = param_3 + auVar249._4_4_;
        auVar250 = vpand_avx(auVar190,auVar250);
        iVar29 = auVar250._4_4_;
        lVar2 = param_3 + auVar250._8_4_;
        auVar270._8_8_ = 0;
        auVar270._0_8_ = *(ulonglong *)(param_3 + auVar249._0_4_);
        local_500 = vmovhps_avx(auVar270,*(undefined8 *)(param_3 + auVar249._4_4_));
        auVar53._8_8_ = 0;
        auVar53._0_8_ = *(ulonglong *)(param_3 + auVar250._8_4_);
        local_4d0 = vmovhps_avx(auVar53,*(undefined8 *)(param_3 + auVar250._12_4_));
        auVar54._8_8_ = 0;
        auVar54._0_8_ = *(ulonglong *)(param_3 + auVar250._0_4_);
        local_4e0 = vmovhps_avx(auVar54,*(undefined8 *)(param_3 + iVar29));
        auVar55._8_8_ = 0;
        auVar55._0_8_ = *(ulonglong *)(param_3 + auVar249._8_4_);
        local_4f0 = vmovhps_avx(auVar55,*(undefined8 *)(param_3 + auVar249._12_4_));
        uVar30 = auVar52._0_4_;
        uVar31 = auVar52._4_4_;
        uVar32 = auVar52._8_4_;
        uVar33 = auVar52._12_4_;
        uVar34 = auVar190._0_4_;
        uVar27 = auVar190._4_4_;
        uVar37 = auVar190._8_4_;
        uVar38 = auVar190._12_4_;
        auVar193._8_8_ = 0;
        auVar193._0_8_ =
             *(ulonglong *)
              ((ulonglong)
               (uVar30 & ___ymm_0000000800000008000000080000000800000008000000080000000800000008) +
              lVar21);
        local_4c0 = vmovhps_avx(auVar193,*(undefined8 *)
                                          ((ulonglong)(uVar31 & _UNK_150b50d64) + lVar1));
        auVar56._8_8_ = 0;
        auVar56._0_8_ = *(ulonglong *)((ulonglong)(uVar37 & _UNK_150b50d78) + lVar2);
        lVar3 = param_3 + auVar250._12_4_;
        local_490 = vmovhps_avx(auVar56,*(undefined8 *)
                                         ((ulonglong)(uVar38 & _UNK_150b50d7c) + lVar3));
        lVar4 = param_3 + auVar249._8_4_;
        lVar5 = param_3 + auVar249._12_4_;
        lVar6 = param_3 + auVar250._0_4_;
        lVar7 = param_3 + iVar29;
        auVar249._8_8_ = 0;
        auVar249._0_8_ = *(ulonglong *)((ulonglong)(uVar34 & _UNK_150b50d70) + lVar6);
        local_4a0 = vmovhps_avx(auVar249,*(undefined8 *)
                                          ((ulonglong)(uVar27 & _UNK_150b50d74) + lVar7));
        auVar250._8_8_ = 0;
        auVar250._0_8_ = *(ulonglong *)((ulonglong)(uVar32 & _UNK_150b50d68) + lVar4);
        local_4b0 = vmovhps_avx(auVar250,*(undefined8 *)
                                          ((ulonglong)(uVar33 & _UNK_150b50d6c) + lVar5));
        auVar57._0_4_ =
             uVar30 & ___ymm_0000001000000010000000100000001000000010000000100000001000000010;
        auVar57._4_4_ = uVar31 & _UNK_150b51424;
        auVar57._8_4_ = uVar32 & _UNK_150b51428;
        auVar57._12_4_ = uVar33 & _UNK_150b5142c;
        uVar20 = (undefined4)((ulonglong)lVar5 >> 0x20);
        uVar24 = vextractps_avx(auVar57,1);
        uVar40 = vextractps_avx(auVar57,2);
        uVar39 = vextractps_avx(auVar57,3);
        auVar194._8_8_ = 0;
        auVar194._0_8_ = *(ulonglong *)((ulonglong)auVar57._0_4_ + lVar21);
        local_480 = vmovhps_avx(auVar194,*(undefined8 *)(CONCAT44(uVar20,uVar24) + lVar1));
        auVar58._8_8_ = 0;
        auVar58._0_8_ = *(ulonglong *)((ulonglong)(uVar37 & _UNK_150b51438) + lVar2);
        local_450 = vmovhps_avx(auVar58,*(undefined8 *)
                                         ((ulonglong)(uVar38 & _UNK_150b5143c) + lVar3));
        auVar59._8_8_ = 0;
        auVar59._0_8_ = *(ulonglong *)((ulonglong)(uVar34 & _UNK_150b51430) + lVar6);
        local_460 = vmovhps_avx(auVar59,*(undefined8 *)
                                         ((ulonglong)(uVar27 & _UNK_150b51434) + lVar7));
        auVar60._8_8_ = 0;
        auVar60._0_8_ = *(ulonglong *)(CONCAT44((int)((ulonglong)param_3 >> 0x20),uVar40) + lVar4);
        local_470 = vmovhps_avx(auVar60,*(undefined8 *)(CONCAT44(iVar29 >> 0x1f,uVar39) + lVar5));
        auVar61._0_4_ =
             uVar30 & ___ymm_0000001800000018000000180000001800000018000000180000001800000018;
        auVar61._4_4_ = uVar31 & _UNK_151287344;
        auVar61._8_4_ = uVar32 & _UNK_151287348;
        auVar61._12_4_ = uVar33 & _UNK_15128734c;
        uVar19 = vextractps_avx(auVar61,1);
        uVar25 = vextractps_avx(auVar61,2);
        uVar24 = vextractps_avx(auVar61,3);
        auVar195._8_8_ = 0;
        auVar195._0_8_ = *(ulonglong *)((ulonglong)auVar61._0_4_ + lVar21);
        local_440 = vmovhps_avx(auVar195,*(undefined8 *)((ulonglong)uVar19 + lVar1));
        auVar62._8_8_ = 0;
        auVar62._0_8_ = *(ulonglong *)((ulonglong)(uVar37 & _UNK_151287358) + lVar2);
        local_410 = vmovhps_avx(auVar62,*(undefined8 *)
                                         ((ulonglong)(uVar38 & _UNK_15128735c) + lVar3));
        auVar63._8_8_ = 0;
        auVar63._0_8_ = *(ulonglong *)((ulonglong)(uVar34 & _UNK_151287350) + lVar6);
        local_420 = vmovhps_avx(auVar63,*(undefined8 *)
                                         ((ulonglong)(uVar27 & _UNK_151287354) + lVar7));
        auVar64._8_8_ = 0;
        auVar64._0_8_ = *(ulonglong *)((ulonglong)uVar25 + lVar4);
        local_430 = vmovhps_avx(auVar64,*(undefined8 *)(CONCAT44(uVar20,uVar24) + lVar5));
        auVar65._0_4_ =
             uVar30 & ___ymm_0000002000000020000000200000002000000020000000200000002000000020;
        auVar65._4_4_ = uVar31 & _UNK_151287364;
        auVar65._8_4_ = uVar32 & _UNK_151287368;
        auVar65._12_4_ = uVar33 & _UNK_15128736c;
        uVar19 = vextractps_avx(auVar65,1);
        uVar25 = vextractps_avx(auVar65,2);
        uVar24 = vextractps_avx(auVar65,3);
        auVar196._8_8_ = 0;
        auVar196._0_8_ = *(ulonglong *)((ulonglong)auVar65._0_4_ + lVar21);
        local_400 = vmovhps_avx(auVar196,*(undefined8 *)((ulonglong)uVar19 + lVar1));
        auVar66._8_8_ = 0;
        auVar66._0_8_ = *(ulonglong *)((ulonglong)(uVar37 & _UNK_151287378) + lVar2);
        local_3d0 = vmovhps_avx(auVar66,*(undefined8 *)
                                         ((ulonglong)(uVar38 & _UNK_15128737c) + lVar3));
        auVar67._8_8_ = 0;
        auVar67._0_8_ = *(ulonglong *)((ulonglong)(uVar34 & _UNK_151287370) + lVar6);
        local_3e0 = vmovhps_avx(auVar67,*(undefined8 *)
                                         ((ulonglong)(uVar27 & _UNK_151287374) + lVar7));
        auVar68._8_8_ = 0;
        auVar68._0_8_ = *(ulonglong *)((ulonglong)uVar25 + lVar4);
        local_3f0 = vmovhps_avx(auVar68,*(undefined8 *)(CONCAT44(uVar20,uVar24) + lVar5));
        auVar69._0_4_ =
             uVar30 & ___ymm_0000002800000028000000280000002800000028000000280000002800000028;
        auVar69._4_4_ = uVar31 & _UNK_151287384;
        auVar69._8_4_ = uVar32 & _UNK_151287388;
        auVar69._12_4_ = uVar33 & _UNK_15128738c;
        uVar19 = vextractps_avx(auVar69,1);
        uVar25 = vextractps_avx(auVar69,2);
        uVar24 = vextractps_avx(auVar69,3);
        auVar197._8_8_ = 0;
        auVar197._0_8_ = *(ulonglong *)((ulonglong)auVar69._0_4_ + lVar21);
        local_3c0 = vmovhps_avx(auVar197,*(undefined8 *)((ulonglong)uVar19 + lVar1));
        auVar70._8_8_ = 0;
        auVar70._0_8_ = *(ulonglong *)((ulonglong)(uVar37 & _UNK_151287398) + lVar2);
        local_390 = vmovhps_avx(auVar70,*(undefined8 *)
                                         ((ulonglong)(uVar38 & _UNK_15128739c) + lVar3));
        auVar71._8_8_ = 0;
        auVar71._0_8_ = *(ulonglong *)((ulonglong)(uVar34 & _UNK_151287390) + lVar6);
        local_3a0 = vmovhps_avx(auVar71,*(undefined8 *)
                                         ((ulonglong)(uVar27 & _UNK_151287394) + lVar7));
        auVar72._8_8_ = 0;
        auVar72._0_8_ = *(ulonglong *)((ulonglong)uVar25 + lVar4);
        local_3b0 = vmovhps_avx(auVar72,*(undefined8 *)(CONCAT44(uVar20,uVar24) + lVar5));
        auVar73._0_4_ =
             uVar30 & ___ymm_0000003000000030000000300000003000000030000000300000003000000030;
        auVar73._4_4_ = uVar31 & _UNK_1512873a4;
        auVar73._8_4_ = uVar32 & _UNK_1512873a8;
        auVar73._12_4_ = uVar33 & _UNK_1512873ac;
        uVar19 = vextractps_avx(auVar73,1);
        uVar25 = vextractps_avx(auVar73,2);
        uVar24 = vextractps_avx(auVar73,3);
        auVar198._8_8_ = 0;
        auVar198._0_8_ = *(ulonglong *)((ulonglong)auVar73._0_4_ + lVar21);
        local_380 = vmovhps_avx(auVar198,*(undefined8 *)((ulonglong)uVar19 + lVar1));
        auVar74._8_8_ = 0;
        auVar74._0_8_ = *(ulonglong *)((ulonglong)(uVar37 & _UNK_1512873b8) + lVar2);
        local_350 = vmovhps_avx(auVar74,*(undefined8 *)
                                         ((ulonglong)(uVar38 & _UNK_1512873bc) + lVar3));
        auVar75._8_8_ = 0;
        auVar75._0_8_ = *(ulonglong *)((ulonglong)(uVar34 & _UNK_1512873b0) + lVar6);
        local_360 = vmovhps_avx(auVar75,*(undefined8 *)
                                         ((ulonglong)(uVar27 & _UNK_1512873b4) + lVar7));
        auVar76._8_8_ = 0;
        auVar76._0_8_ = *(ulonglong *)((ulonglong)uVar25 + lVar4);
        local_370 = vmovhps_avx(auVar76,*(undefined8 *)(CONCAT44(uVar20,uVar24) + lVar5));
        auVar77._0_4_ =
             uVar30 & ___ymm_0000003800000038000000380000003800000038000000380000003800000038;
        auVar77._4_4_ = uVar31 & _UNK_1512873c4;
        auVar77._8_4_ = uVar32 & _UNK_1512873c8;
        auVar77._12_4_ = uVar33 & _UNK_1512873cc;
        uVar19 = vextractps_avx(auVar77,1);
        uVar25 = vextractps_avx(auVar77,2);
        uVar24 = vextractps_avx(auVar77,3);
        auVar199._8_8_ = 0;
        auVar199._0_8_ = *(ulonglong *)((ulonglong)auVar77._0_4_ + lVar21);
        local_340 = vmovhps_avx(auVar199,*(undefined8 *)((ulonglong)uVar19 + lVar1));
        auVar78._8_8_ = 0;
        auVar78._0_8_ = *(ulonglong *)((ulonglong)(uVar37 & _UNK_1512873d8) + lVar2);
        local_310 = vmovhps_avx(auVar78,*(undefined8 *)
                                         ((ulonglong)(uVar38 & _UNK_1512873dc) + lVar3));
        auVar79._8_8_ = 0;
        auVar79._0_8_ = *(ulonglong *)((ulonglong)(uVar34 & _UNK_1512873d0) + lVar6);
        local_320 = vmovhps_avx(auVar79,*(undefined8 *)
                                         ((ulonglong)(uVar27 & _UNK_1512873d4) + lVar7));
        auVar80._8_8_ = 0;
        auVar80._0_8_ = *(ulonglong *)((ulonglong)uVar25 + lVar4);
        local_330 = vmovhps_avx(auVar80,*(undefined8 *)(CONCAT44(uVar20,uVar24) + lVar5));
        auVar81._0_4_ =
             uVar30 & ___ymm_0000004000000040000000400000004000000040000000400000004000000040;
        auVar81._4_4_ = uVar31 & _UNK_1512873e4;
        auVar81._8_4_ = uVar32 & _UNK_1512873e8;
        auVar81._12_4_ = uVar33 & _UNK_1512873ec;
        uVar19 = vextractps_avx(auVar81,1);
        uVar25 = vextractps_avx(auVar81,2);
        uVar24 = vextractps_avx(auVar81,3);
        auVar200._8_8_ = 0;
        auVar200._0_8_ = *(ulonglong *)((ulonglong)auVar81._0_4_ + lVar21);
        local_300 = vmovhps_avx(auVar200,*(undefined8 *)((ulonglong)uVar19 + lVar1));
        auVar82._8_8_ = 0;
        auVar82._0_8_ = *(ulonglong *)((ulonglong)(uVar37 & _UNK_1512873f8) + lVar2);
        local_2d0 = vmovhps_avx(auVar82,*(undefined8 *)
                                         ((ulonglong)(uVar38 & _UNK_1512873fc) + lVar3));
        auVar83._8_8_ = 0;
        auVar83._0_8_ = *(ulonglong *)((ulonglong)(uVar34 & _UNK_1512873f0) + lVar6);
        local_2e0 = vmovhps_avx(auVar83,*(undefined8 *)
                                         ((ulonglong)(uVar27 & _UNK_1512873f4) + lVar7));
        auVar84._8_8_ = 0;
        auVar84._0_8_ = *(ulonglong *)((ulonglong)uVar25 + lVar4);
        local_2f0 = vmovhps_avx(auVar84,*(undefined8 *)(CONCAT44(uVar20,uVar24) + lVar5));
        auVar85._0_4_ =
             uVar30 & ___ymm_0000004800000048000000480000004800000048000000480000004800000048;
        auVar85._4_4_ = uVar31 & _UNK_151287404;
        auVar85._8_4_ = uVar32 & _UNK_151287408;
        auVar85._12_4_ = uVar33 & _UNK_15128740c;
        uVar19 = vextractps_avx(auVar85,1);
        uVar25 = vextractps_avx(auVar85,2);
        uVar24 = vextractps_avx(auVar85,3);
        auVar201._8_8_ = 0;
        auVar201._0_8_ = *(ulonglong *)((ulonglong)auVar85._0_4_ + lVar21);
        local_2c0 = vmovhps_avx(auVar201,*(undefined8 *)((ulonglong)uVar19 + lVar1));
        auVar86._8_8_ = 0;
        auVar86._0_8_ = *(ulonglong *)((ulonglong)(uVar37 & _UNK_151287418) + lVar2);
        local_290 = vmovhps_avx(auVar86,*(undefined8 *)
                                         ((ulonglong)(uVar38 & _UNK_15128741c) + lVar3));
        auVar87._8_8_ = 0;
        auVar87._0_8_ = *(ulonglong *)((ulonglong)(uVar34 & _UNK_151287410) + lVar6);
        local_2a0 = vmovhps_avx(auVar87,*(undefined8 *)
                                         ((ulonglong)(uVar27 & _UNK_151287414) + lVar7));
        auVar88._8_8_ = 0;
        auVar88._0_8_ = *(ulonglong *)((ulonglong)uVar25 + lVar4);
        local_2b0 = vmovhps_avx(auVar88,*(undefined8 *)(CONCAT44(uVar20,uVar24) + lVar5));
        auVar89._0_4_ =
             uVar30 & ___ymm_0000005000000050000000500000005000000050000000500000005000000050;
        auVar89._4_4_ = uVar31 & _UNK_151287424;
        auVar89._8_4_ = uVar32 & _UNK_151287428;
        auVar89._12_4_ = uVar33 & _UNK_15128742c;
        uVar19 = vextractps_avx(auVar89,1);
        uVar25 = vextractps_avx(auVar89,2);
        uVar24 = vextractps_avx(auVar89,3);
        auVar202._8_8_ = 0;
        auVar202._0_8_ = *(ulonglong *)((ulonglong)auVar89._0_4_ + lVar21);
        local_280 = vmovhps_avx(auVar202,*(undefined8 *)((ulonglong)uVar19 + lVar1));
        auVar90._8_8_ = 0;
        auVar90._0_8_ = *(ulonglong *)((ulonglong)(uVar37 & _UNK_151287438) + lVar2);
        local_250 = vmovhps_avx(auVar90,*(undefined8 *)
                                         ((ulonglong)(uVar38 & _UNK_15128743c) + lVar3));
        auVar91._8_8_ = 0;
        auVar91._0_8_ = *(ulonglong *)((ulonglong)(uVar34 & _UNK_151287430) + lVar6);
        local_260 = vmovhps_avx(auVar91,*(undefined8 *)
                                         ((ulonglong)(uVar27 & _UNK_151287434) + lVar7));
        auVar92._8_8_ = 0;
        auVar92._0_8_ = *(ulonglong *)((ulonglong)uVar25 + lVar4);
        local_270 = vmovhps_avx(auVar92,*(undefined8 *)(CONCAT44(uVar20,uVar24) + lVar5));
        auVar93._0_4_ =
             uVar30 & ___ymm_0000005800000058000000580000005800000058000000580000005800000058;
        auVar93._4_4_ = uVar31 & _UNK_151287444;
        auVar93._8_4_ = uVar32 & _UNK_151287448;
        auVar93._12_4_ = uVar33 & _UNK_15128744c;
        uVar19 = vextractps_avx(auVar93,1);
        uVar25 = vextractps_avx(auVar93,2);
        uVar24 = vextractps_avx(auVar93,3);
        auVar203._8_8_ = 0;
        auVar203._0_8_ = *(ulonglong *)((ulonglong)auVar93._0_4_ + lVar21);
        local_240 = vmovhps_avx(auVar203,*(undefined8 *)((ulonglong)uVar19 + lVar1));
        auVar94._8_8_ = 0;
        auVar94._0_8_ = *(ulonglong *)((ulonglong)(uVar37 & _UNK_151287458) + lVar2);
        local_210 = vmovhps_avx(auVar94,*(undefined8 *)
                                         ((ulonglong)(uVar38 & _UNK_15128745c) + lVar3));
        auVar95._8_8_ = 0;
        auVar95._0_8_ = *(ulonglong *)((ulonglong)(uVar34 & _UNK_151287450) + lVar6);
        local_220 = vmovhps_avx(auVar95,*(undefined8 *)
                                         ((ulonglong)(uVar27 & _UNK_151287454) + lVar7));
        auVar96._8_8_ = 0;
        auVar96._0_8_ = *(ulonglong *)((ulonglong)uVar25 + lVar4);
        local_230 = vmovhps_avx(auVar96,*(undefined8 *)(CONCAT44(uVar20,uVar24) + lVar5));
        auVar97._0_4_ =
             uVar30 & ___ymm_0000006000000060000000600000006000000060000000600000006000000060;
        auVar97._4_4_ = uVar31 & _UNK_151287464;
        auVar97._8_4_ = uVar32 & _UNK_151287468;
        auVar97._12_4_ = uVar33 & _UNK_15128746c;
        uVar19 = vextractps_avx(auVar97,1);
        uVar25 = vextractps_avx(auVar97,2);
        uVar24 = vextractps_avx(auVar97,3);
        auVar204._8_8_ = 0;
        auVar204._0_8_ = *(ulonglong *)((ulonglong)auVar97._0_4_ + lVar21);
        local_200 = vmovhps_avx(auVar204,*(undefined8 *)((ulonglong)uVar19 + lVar1));
        auVar98._8_8_ = 0;
        auVar98._0_8_ = *(ulonglong *)((ulonglong)(uVar37 & _UNK_151287478) + lVar2);
        local_1d0 = vmovhps_avx(auVar98,*(undefined8 *)
                                         ((ulonglong)(uVar38 & _UNK_15128747c) + lVar3));
        auVar99._8_8_ = 0;
        auVar99._0_8_ = *(ulonglong *)((ulonglong)(uVar34 & _UNK_151287470) + lVar6);
        local_1e0 = vmovhps_avx(auVar99,*(undefined8 *)
                                         ((ulonglong)(uVar27 & _UNK_151287474) + lVar7));
        auVar100._8_8_ = 0;
        auVar100._0_8_ = *(ulonglong *)((ulonglong)uVar25 + lVar4);
        local_1f0 = vmovhps_avx(auVar100,*(undefined8 *)(CONCAT44(uVar20,uVar24) + lVar5));
        auVar101._0_4_ =
             uVar30 & ___ymm_0000006800000068000000680000006800000068000000680000006800000068;
        auVar101._4_4_ = uVar31 & _UNK_151287484;
        auVar101._8_4_ = uVar32 & _UNK_151287488;
        auVar101._12_4_ = uVar33 & _UNK_15128748c;
        uVar19 = vextractps_avx(auVar101,1);
        uVar25 = vextractps_avx(auVar101,2);
        uVar24 = vextractps_avx(auVar101,3);
        auVar205._8_8_ = 0;
        auVar205._0_8_ = *(ulonglong *)((ulonglong)auVar101._0_4_ + lVar21);
        local_1c0 = vmovhps_avx(auVar205,*(undefined8 *)((ulonglong)uVar19 + lVar1));
        auVar102._8_8_ = 0;
        auVar102._0_8_ = *(ulonglong *)((ulonglong)(uVar37 & _UNK_151287498) + lVar2);
        local_190 = vmovhps_avx(auVar102,*(undefined8 *)
                                          ((ulonglong)(uVar38 & _UNK_15128749c) + lVar3));
        auVar103._8_8_ = 0;
        auVar103._0_8_ = *(ulonglong *)((ulonglong)(uVar34 & _UNK_151287490) + lVar6);
        local_1a0 = vmovhps_avx(auVar103,*(undefined8 *)
                                          ((ulonglong)(uVar27 & _UNK_151287494) + lVar7));
        auVar104._8_8_ = 0;
        auVar104._0_8_ = *(ulonglong *)((ulonglong)uVar25 + lVar4);
        local_1b0 = vmovhps_avx(auVar104,*(undefined8 *)(CONCAT44(uVar20,uVar24) + lVar5));
        auVar105._0_4_ =
             uVar30 & ___ymm_0000007000000070000000700000007000000070000000700000007000000070;
        auVar105._4_4_ = uVar31 & _UNK_1512874a4;
        auVar105._8_4_ = uVar32 & _UNK_1512874a8;
        auVar105._12_4_ = uVar33 & _UNK_1512874ac;
        uVar19 = vextractps_avx(auVar105,1);
        uVar41 = vextractps_avx(auVar105,2);
        uVar25 = vextractps_avx(auVar105,3);
        auVar206._8_8_ = 0;
        auVar206._0_8_ = *(ulonglong *)((ulonglong)auVar105._0_4_ + lVar21);
        local_180 = vmovhps_avx(auVar206,*(undefined8 *)((ulonglong)uVar19 + lVar1));
        auVar106._8_8_ = 0;
        auVar106._0_8_ = *(ulonglong *)((ulonglong)(uVar37 & _UNK_1512874b8) + lVar2);
        local_150 = vmovhps_avx(auVar106,*(undefined8 *)
                                          ((ulonglong)(uVar38 & _UNK_1512874bc) + lVar3));
        auVar107._8_8_ = 0;
        auVar107._0_8_ = *(ulonglong *)((ulonglong)(uVar34 & _UNK_1512874b0) + lVar6);
        local_160 = vmovhps_avx(auVar107,*(undefined8 *)
                                          ((ulonglong)(uVar27 & _UNK_1512874b4) + lVar7));
        auVar108._8_8_ = 0;
        auVar108._0_8_ =
             *(ulonglong *)
              ((ulonglong)
               (uVar30 & ___ymm_0000007800000078000000780000007800000078000000780000007800000078) +
              lVar21);
        local_140 = vmovhps_avx(auVar108,*(undefined8 *)
                                          ((ulonglong)(uVar31 & _UNK_1512874c4) + lVar1));
        auVar251._8_8_ = 0;
        auVar251._0_8_ = *(ulonglong *)((ulonglong)uVar41 + lVar4);
        local_170 = vmovhps_avx(auVar251,*(undefined8 *)((ulonglong)uVar25 + lVar5));
        auVar252._8_8_ = 0;
        auVar252._0_8_ = *(ulonglong *)((ulonglong)(uVar32 & _UNK_1512874c8) + lVar4);
        local_130 = vmovhps_avx(auVar252,*(undefined8 *)
                                          ((ulonglong)(uVar33 & _UNK_1512874cc) + lVar5));
        auVar207._8_8_ = 0;
        auVar207._0_8_ = *(ulonglong *)((ulonglong)(uVar37 & _UNK_1512874d8) + lVar2);
        local_110 = vmovhps_avx(auVar207,*(undefined8 *)
                                          ((ulonglong)(uVar38 & _UNK_1512874dc) + lVar3));
        auVar208._8_8_ = 0;
        auVar208._0_8_ = *(ulonglong *)((ulonglong)(uVar34 & _UNK_1512874d0) + lVar6);
        local_120 = vmovhps_avx(auVar208,*(undefined8 *)
                                          ((ulonglong)(uVar27 & _UNK_1512874d4) + lVar7));
        dVar8 = param_5[8];
        dVar42 = param_5[0xc];
        dVar43 = *param_5;
        lVar21 = 0xc0;
        dVar44 = param_5[1];
        dVar45 = param_5[5];
        dVar46 = param_5[9];
        dVar174 = param_5[0xd];
        dVar175 = param_5[2];
        dVar176 = param_5[6];
        dVar177 = param_5[10];
        dVar178 = param_5[0xe];
        dVar179 = param_5[3];
        dVar180 = param_5[7];
        dVar181 = param_5[0xb];
        dVar182 = param_5[0xf];
        do {
          dVar184 = *(double *)(local_5c0 + lVar21);
          dVar185 = *(double *)(local_5c0 + lVar21 + 8);
          dVar186 = *(double *)(local_5b0 + lVar21);
          dVar187 = *(double *)(local_5b0 + lVar21 + 8);
          dVar188 = *(double *)(local_5a0 + lVar21);
          dVar268 = *(double *)(local_5a0 + lVar21 + 8);
          dVar278 = *(double *)(local_590 + lVar21);
          dVar279 = *(double *)(local_590 + lVar21 + 8);
          dVar280 = *(double *)(local_580 + lVar21);
          dVar281 = *(double *)(local_580 + lVar21 + 8);
          dVar293 = *(double *)(local_570 + lVar21);
          dVar294 = *(double *)(local_570 + lVar21 + 8);
          dVar295 = *(double *)(local_560 + lVar21);
          dVar310 = *(double *)(local_560 + lVar21 + 8);
          dVar320 = *(double *)(local_550 + lVar21);
          dVar321 = *(double *)(local_550 + lVar21 + 8);
          dVar322 = *(double *)(local_520 + lVar21);
          dVar323 = *(double *)(local_520 + lVar21 + 8);
          dVar324 = *(double *)(local_510 + lVar21);
          dVar333 = *(double *)(local_510 + lVar21 + 8);
          dVar334 = *(double *)(local_540 + lVar21);
          dVar335 = *(double *)(local_540 + lVar21 + 8);
          dVar336 = *(double *)(local_530 + lVar21);
          dVar337 = *(double *)(local_530 + lVar21 + 8);
          dVar338 = *(double *)(local_500 + lVar21);
          dVar355 = *(double *)(local_500 + lVar21 + 8);
          dVar356 = *(double *)(local_4f0 + lVar21);
          dVar365 = *(double *)(local_4f0 + lVar21 + 8);
          dVar366 = *(double *)(local_4e0 + lVar21);
          dVar367 = *(double *)(local_4e0 + lVar21 + 8);
          dVar368 = *(double *)(local_4d0 + lVar21);
          dVar369 = *(double *)(local_4d0 + lVar21 + 8);
          dVar183 = param_5[4];
          *(double *)(local_11e0 + lVar21) =
               dVar188 * dVar43 + 0.0 + dVar295 * dVar183 + dVar322 * dVar8 + dVar366 * dVar42;
          *(double *)(local_11e0 + lVar21 + 8) =
               dVar268 * dVar43 + 0.0 + dVar310 * dVar183 + dVar323 * dVar8 + dVar367 * dVar42;
          *(double *)(local_11e0 + lVar21 + 0x10) =
               dVar278 * dVar43 + 0.0 + dVar320 * dVar183 + dVar324 * dVar8 + dVar368 * dVar42;
          *(double *)(local_11e0 + lVar21 + 0x18) =
               dVar279 * dVar43 + 0.0 + dVar321 * dVar183 + dVar333 * dVar8 + dVar369 * dVar42;
          *(double *)(local_1200 + lVar21) =
               dVar184 * dVar43 + 0.0 + dVar280 * dVar183 + dVar334 * dVar8 + dVar338 * dVar42;
          *(double *)(local_1200 + lVar21 + 8) =
               dVar185 * dVar43 + 0.0 + dVar281 * dVar183 + dVar335 * dVar8 + dVar355 * dVar42;
          *(double *)(local_1200 + lVar21 + 0x10) =
               dVar186 * dVar43 + 0.0 + dVar293 * dVar183 + dVar336 * dVar8 + dVar356 * dVar42;
          *(double *)(local_1200 + lVar21 + 0x18) =
               dVar187 * dVar43 + 0.0 + dVar294 * dVar183 + dVar337 * dVar8 + dVar365 * dVar42;
          *(double *)((longlong)adStack_11b8 + lVar21 + 0x18) =
               dVar188 * dVar44 + 0.0 + dVar295 * dVar45 + dVar322 * dVar46 + dVar366 * dVar174;
          *(double *)((longlong)adStack_11b8 + lVar21 + 0x20) =
               dVar268 * dVar44 + 0.0 + dVar310 * dVar45 + dVar323 * dVar46 + dVar367 * dVar174;
          *(double *)((longlong)adStack_11b8 + lVar21 + 0x28) =
               dVar278 * dVar44 + 0.0 + dVar320 * dVar45 + dVar324 * dVar46 + dVar368 * dVar174;
          *(double *)((longlong)adStack_11b8 + lVar21 + 0x30) =
               dVar279 * dVar44 + 0.0 + dVar321 * dVar45 + dVar333 * dVar46 + dVar369 * dVar174;
          *(double *)((longlong)adStack_11b8 + lVar21 + -8) =
               dVar184 * dVar44 + 0.0 + dVar280 * dVar45 + dVar334 * dVar46 + dVar338 * dVar174;
          *(double *)((longlong)adStack_11b8 + lVar21) =
               dVar185 * dVar44 + 0.0 + dVar281 * dVar45 + dVar335 * dVar46 + dVar355 * dVar174;
          *(double *)((longlong)adStack_11b8 + lVar21 + 8) =
               dVar186 * dVar44 + 0.0 + dVar293 * dVar45 + dVar336 * dVar46 + dVar356 * dVar174;
          *(double *)((longlong)adStack_11b8 + lVar21 + 0x10) =
               dVar187 * dVar44 + 0.0 + dVar294 * dVar45 + dVar337 * dVar46 + dVar365 * dVar174;
          *(double *)((longlong)adStack_11b8 + lVar21 + 0x58) =
               dVar188 * dVar175 + 0.0 + dVar295 * dVar176 + dVar322 * dVar177 + dVar366 * dVar178;
          *(double *)((longlong)adStack_11b8 + lVar21 + 0x60) =
               dVar268 * dVar175 + 0.0 + dVar310 * dVar176 + dVar323 * dVar177 + dVar367 * dVar178;
          *(double *)((longlong)adStack_11b8 + lVar21 + 0x68) =
               dVar278 * dVar175 + 0.0 + dVar320 * dVar176 + dVar324 * dVar177 + dVar368 * dVar178;
          *(double *)((longlong)adStack_11b8 + lVar21 + 0x70) =
               dVar279 * dVar175 + 0.0 + dVar321 * dVar176 + dVar333 * dVar177 + dVar369 * dVar178;
          *(double *)((longlong)adStack_11b8 + lVar21 + 0x38) =
               dVar184 * dVar175 + 0.0 + dVar280 * dVar176 + dVar334 * dVar177 + dVar338 * dVar178;
          *(double *)((longlong)adStack_11b8 + lVar21 + 0x40) =
               dVar185 * dVar175 + 0.0 + dVar281 * dVar176 + dVar335 * dVar177 + dVar355 * dVar178;
          *(double *)((longlong)adStack_11b8 + lVar21 + 0x48) =
               dVar186 * dVar175 + 0.0 + dVar293 * dVar176 + dVar336 * dVar177 + dVar356 * dVar178;
          *(double *)((longlong)adStack_11b8 + lVar21 + 0x50) =
               dVar187 * dVar175 + 0.0 + dVar294 * dVar176 + dVar337 * dVar177 + dVar365 * dVar178;
          *(double *)(local_1120 + lVar21) =
               dVar188 * dVar179 + 0.0 + dVar295 * dVar180 + dVar322 * dVar181 + dVar182 * dVar366;
          *(double *)(local_1120 + lVar21 + 8) =
               dVar268 * dVar179 + 0.0 + dVar310 * dVar180 + dVar323 * dVar181 + dVar182 * dVar367;
          *(double *)(local_1120 + lVar21 + 0x10) =
               dVar278 * dVar179 + 0.0 + dVar320 * dVar180 + dVar324 * dVar181 + dVar182 * dVar368;
          *(double *)(local_1120 + lVar21 + 0x18) =
               dVar279 * dVar179 + 0.0 + dVar321 * dVar180 + dVar333 * dVar181 + dVar182 * dVar369;
          *(double *)(local_1140 + lVar21) =
               dVar184 * dVar179 + 0.0 + dVar280 * dVar180 + dVar334 * dVar181 + dVar182 * dVar338;
          *(double *)(local_1140 + lVar21 + 8) =
               dVar185 * dVar179 + 0.0 + dVar281 * dVar180 + dVar335 * dVar181 + dVar182 * dVar355;
          *(double *)(local_1140 + lVar21 + 0x10) =
               dVar186 * dVar179 + 0.0 + dVar293 * dVar180 + dVar336 * dVar181 + dVar182 * dVar356;
          *(double *)(local_1140 + lVar21 + 0x18) =
               dVar187 * dVar179 + 0.0 + dVar294 * dVar180 + dVar337 * dVar181 + dVar182 * dVar365;
          lVar21 = lVar21 + 0x100;
        } while (lVar21 != 0x4c0);
        local_1640 = auVar49._0_8_;
        dStack_1638 = auVar49._8_8_;
        dStack_1630 = auVar48._0_8_;
        dStack_1628 = auVar48._8_8_;
        local_15a0 = auVar50._0_8_;
        dStack_1598 = auVar50._8_8_;
        dStack_1590 = auVar284._0_8_;
        dStack_1588 = auVar284._8_8_;
        local_1580 = auVar246._0_8_;
        dStack_1578 = auVar246._8_8_;
        dStack_1570 = auVar311._0_8_;
        dStack_1568 = auVar311._8_8_;
        dVar42 = (local_1640 + local_15a0) * __real_3fe0000000000000;
        dVar174 = (dStack_1638 + dStack_1598) * __real_3fe0000000000000;
        dVar179 = (dStack_1630 + dStack_1590) * __real_3fe0000000000000;
        dVar184 = (dStack_1628 + dStack_1588) * __real_3fe0000000000000;
        dVar281 = ((double)local_be0._0_8_ + local_1580) * __real_3fe0000000000000;
        dVar293 = ((double)local_be0._8_8_ + dStack_1578) * __real_3fe0000000000000;
        dVar294 = (dStack_bd0 + dStack_1570) * __real_3fe0000000000000;
        dVar295 = (dStack_bc8 + dStack_1568) * __real_3fe0000000000000;
        local_1620 = auVar308._0_8_;
        dStack_1618 = auVar308._8_8_;
        dStack_1610 = auVar283._0_8_;
        dStack_1608 = auVar283._8_8_;
        dVar310 = (local_b20._0_8_ + local_1620) * __real_3fe0000000000000;
        dVar320 = (local_b20._8_8_ + dStack_1618) * __real_3fe0000000000000;
        dVar321 = (local_b20._16_8_ + dStack_1610) * __real_3fe0000000000000;
        dVar322 = (local_b20._24_8_ + dStack_1608) * __real_3fe0000000000000;
        local_15e0 = auVar306._0_8_;
        dStack_15d8 = auVar306._8_8_;
        dStack_15d0 = auVar300._0_8_;
        dStack_15c8 = auVar300._8_8_;
        dVar323 = (local_b40._0_8_ + local_15e0) * __real_3fe0000000000000;
        dVar333 = (local_b40._8_8_ + dStack_15d8) * __real_3fe0000000000000;
        dVar335 = (local_b40._16_8_ + dStack_15d0) * __real_3fe0000000000000;
        dVar337 = (local_b40._24_8_ + dStack_15c8) * __real_3fe0000000000000;
        dVar8 = (double)CONCAT17(uStack_fb9,
                                 CONCAT16(uStack_fba,
                                          CONCAT15(uStack_fbb,
                                                   CONCAT14(uStack_fbc,
                                                            CONCAT13(uStack_fbd,
                                                                     CONCAT12(uStack_fbe,
                                                                              CONCAT11(uStack_fbf,
                                                                                       local_fc0))))
                                                  )));
        dVar268 = (local_bc0._0_8_ + local_b60._0_8_) * __real_3fe0000000000000;
        dVar278 = (local_bc0._8_8_ + local_b60._8_8_) * __real_3fe0000000000000;
        dVar279 = (local_bc0._16_8_ + local_b60._16_8_) * __real_3fe0000000000000;
        dVar280 = (local_bc0._24_8_ + local_b60._24_8_) * __real_3fe0000000000000;
        dVar324 = (local_b00._0_8_ + local_b80._0_8_) * __real_3fe0000000000000;
        dVar334 = (local_b00._8_8_ + local_b80._8_8_) * __real_3fe0000000000000;
        dVar336 = (local_b00._16_8_ + local_b80._16_8_) * __real_3fe0000000000000;
        dVar338 = (local_b00._24_8_ + local_b80._24_8_) * __real_3fe0000000000000;
        auVar162 = vsubpd_avx(auVar162,auVar238);
        auVar161 = vsubpd_avx(local_b20,auVar161);
        auVar238 = vsubpd_avx(_local_be0,auVar254);
        auVar254 = vsubpd_avx(local_b40,auVar303);
        auVar303 = vsubpd_avx(local_b60,local_bc0);
        auVar256 = vsubpd_avx(local_b80,local_b00);
        dVar43 = auVar162._0_8_ * __real_3fe0000000000000;
        dVar175 = auVar162._8_8_ * __real_3fe0000000000000;
        dVar180 = auVar162._16_8_ * __real_3fe0000000000000;
        dVar185 = auVar162._24_8_ * __real_3fe0000000000000;
        dVar44 = auVar161._0_8_ * __real_3fe0000000000000;
        dVar176 = auVar161._8_8_ * __real_3fe0000000000000;
        dVar181 = auVar161._16_8_ * __real_3fe0000000000000;
        dVar186 = auVar161._24_8_ * __real_3fe0000000000000;
        dVar45 = auVar238._0_8_ * __real_3fe0000000000000;
        dVar177 = auVar238._8_8_ * __real_3fe0000000000000;
        dVar182 = auVar238._16_8_ * __real_3fe0000000000000;
        dVar187 = auVar238._24_8_ * __real_3fe0000000000000;
        dVar46 = auVar254._0_8_ * __real_3fe0000000000000;
        dVar178 = auVar254._8_8_ * __real_3fe0000000000000;
        dVar183 = auVar254._16_8_ * __real_3fe0000000000000;
        dVar188 = auVar254._24_8_ * __real_3fe0000000000000;
        local_1640 = auVar303._0_8_;
        dStack_1638 = auVar303._8_8_;
        dStack_1630 = auVar303._16_8_;
        dStack_1628 = auVar303._24_8_;
        local_1640 = __real_3fe0000000000000 * local_1640;
        dStack_1638 = __real_3fe0000000000000 * dStack_1638;
        dStack_1630 = __real_3fe0000000000000 * dStack_1630;
        dStack_1628 = __real_3fe0000000000000 * dStack_1628;
        local_1620 = auVar256._0_8_;
        dStack_1618 = auVar256._8_8_;
        dStack_1610 = auVar256._16_8_;
        dStack_1608 = auVar256._24_8_;
        local_1620 = __real_3fe0000000000000 * local_1620;
        dStack_1618 = __real_3fe0000000000000 * dStack_1618;
        dStack_1610 = __real_3fe0000000000000 * dStack_1610;
        dStack_1608 = __real_3fe0000000000000 * dStack_1608;
        auVar289._0_8_ =
             (double)((ulonglong)(local_1620 * local_f40) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar43 * (double)local_1140) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar45 * (double)local_1040._0_8_) & __real_7fffffffffffffff);
        auVar289._8_8_ =
             (double)((ulonglong)(dStack_1618 * dStack_f38) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar175 * adStack_1138[0]) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar177 * (double)local_1040._8_8_) & __real_7fffffffffffffff);
        auVar289._16_8_ =
             (double)((ulonglong)(dStack_1610 * dStack_f30) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar180 * adStack_1138[1]) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar182 * dStack_1030) & __real_7fffffffffffffff);
        auVar289._24_8_ =
             (double)((ulonglong)(dStack_1608 * dStack_f28) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar185 * adStack_1138[2]) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar187 * dStack_1028) & __real_7fffffffffffffff);
        auVar256._0_8_ =
             (double)((ulonglong)(local_1640 * local_f20) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar44 * (double)local_1120) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar46 * (double)local_1020._0_8_) & __real_7fffffffffffffff);
        auVar256._8_8_ =
             (double)((ulonglong)(dStack_1638 * dStack_f18) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar176 * adStack_1118[0]) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar178 * (double)local_1020._8_8_) & __real_7fffffffffffffff);
        auVar256._16_8_ =
             (double)((ulonglong)(dStack_1630 * dStack_f10) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar181 * adStack_1118[1]) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar183 * dStack_1010) & __real_7fffffffffffffff);
        auVar256._24_8_ =
             (double)((ulonglong)(dStack_1628 * dStack_f08) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar186 * adStack_1118[2]) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar188 * dStack_1008) & __real_7fffffffffffffff);
        auVar315._0_8_ =
             dVar310 * (double)local_1120 + dVar323 * (double)local_1020._0_8_ + dVar268 * local_f20
             + local_e20;
        auVar315._8_8_ =
             dVar320 * adStack_1118[0] + dVar333 * (double)local_1020._8_8_ + dVar278 * dStack_f18 +
             dStack_e18;
        auVar315._16_8_ =
             dVar321 * adStack_1118[1] + dVar335 * dStack_1010 + dVar279 * dStack_f10 + dStack_e10;
        auVar315._24_8_ =
             dVar322 * adStack_1118[2] + dVar337 * dStack_1008 + dVar280 * dStack_f08 + dStack_e08;
        auVar329._0_8_ =
             dVar324 * local_f40 + dVar42 * (double)local_1140 + dVar281 * (double)local_1040._0_8_
             + local_e40;
        auVar329._8_8_ =
             dVar334 * dStack_f38 + dVar174 * adStack_1138[0] + dVar293 * (double)local_1040._8_8_ +
             dStack_e38;
        auVar329._16_8_ =
             dVar336 * dStack_f30 + dVar179 * adStack_1138[1] + dVar294 * dStack_1030 + dStack_e30;
        auVar329._24_8_ =
             dVar338 * dStack_f28 + dVar184 * adStack_1138[2] + dVar295 * dStack_1028 + dStack_e28;
        auVar346._0_8_ =
             dVar268 * local_ee0 +
             dVar310 * (double)local_10e0._0_8_ + dVar323 * (double)local_fe0._0_8_ + local_de0;
        auVar346._8_8_ =
             dVar278 * dStack_ed8 +
             dVar320 * (double)local_10e0._8_8_ + dVar333 * (double)local_fe0._8_8_ + dStack_dd8;
        auVar346._16_8_ =
             dVar279 * dStack_ed0 + dVar321 * dStack_10d0 + dVar335 * dStack_fd0 + dStack_dd0;
        auVar346._24_8_ =
             dVar280 * dStack_ec8 + dVar322 * dStack_10c8 + dVar337 * dStack_fc8 + dStack_dc8;
        auVar359._0_8_ =
             dVar324 * local_f00 +
             dVar42 * (double)local_1100._0_8_ + dVar281 * (double)local_1000._0_8_ + local_e00;
        auVar359._8_8_ =
             dVar334 * dStack_ef8 +
             dVar174 * (double)local_1100._8_8_ + dVar293 * (double)local_1000._8_8_ + dStack_df8;
        auVar359._16_8_ =
             dVar336 * dStack_ef0 + dVar179 * dStack_10f0 + dVar294 * dStack_ff0 + dStack_df0;
        auVar359._24_8_ =
             dVar338 * dStack_ee8 + dVar184 * dStack_10e8 + dVar295 * dStack_fe8 + dStack_de8;
        auVar372._0_8_ =
             dVar310 * (double)local_10a0._0_8_ + dVar323 * local_fa0 + dVar268 * local_ea0 +
             local_da0;
        auVar372._8_8_ =
             dVar320 * (double)local_10a0._8_8_ + dVar333 * dStack_f98 + dVar278 * dStack_e98 +
             dStack_d98;
        auVar372._16_8_ =
             dVar321 * dStack_1090 + dVar335 * dStack_f90 + dVar279 * dStack_e90 + dStack_d90;
        auVar372._24_8_ =
             dVar322 * dStack_1088 + dVar337 * dStack_f88 + dVar280 * dStack_e88 + dStack_d88;
        auVar379._0_8_ =
             (double)local_10c0._0_8_ * dVar42 + dVar281 * dVar8 + dVar324 * local_ec0 + local_dc0;
        auVar379._8_8_ =
             (double)local_10c0._8_8_ * dVar174 + dVar293 * dStack_fb8 + dVar334 * dStack_eb8 +
             dStack_db8;
        auVar379._16_8_ =
             dStack_10b0 * dVar179 + dVar294 * dStack_fb0 + dVar336 * dStack_eb0 + dStack_db0;
        auVar379._24_8_ =
             dStack_10a8 * dVar184 + dVar295 * dStack_fa8 + dVar338 * dStack_ea8 + dStack_da8;
        auVar239._0_8_ =
             (double)((ulonglong)(local_1620 * local_f00) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar43 * (double)local_1100._0_8_) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar45 * (double)local_1000._0_8_) & __real_7fffffffffffffff);
        auVar239._8_8_ =
             (double)((ulonglong)(dStack_1618 * dStack_ef8) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar175 * (double)local_1100._8_8_) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar177 * (double)local_1000._8_8_) & __real_7fffffffffffffff);
        auVar239._16_8_ =
             (double)((ulonglong)(dStack_1610 * dStack_ef0) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar180 * dStack_10f0) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar182 * dStack_ff0) & __real_7fffffffffffffff);
        auVar239._24_8_ =
             (double)((ulonglong)(dStack_1608 * dStack_ee8) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar185 * dStack_10e8) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar187 * dStack_fe8) & __real_7fffffffffffffff);
        auVar352._0_8_ =
             (double)((ulonglong)(local_1640 * local_ee0) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar44 * (double)local_10e0._0_8_) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar46 * (double)local_fe0._0_8_) & __real_7fffffffffffffff);
        auVar352._8_8_ =
             (double)((ulonglong)(dStack_1638 * dStack_ed8) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar176 * (double)local_10e0._8_8_) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar178 * (double)local_fe0._8_8_) & __real_7fffffffffffffff);
        auVar352._16_8_ =
             (double)((ulonglong)(dStack_1630 * dStack_ed0) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar181 * dStack_10d0) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar183 * dStack_fd0) & __real_7fffffffffffffff);
        auVar352._24_8_ =
             (double)((ulonglong)(dStack_1628 * dStack_ec8) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar186 * dStack_10c8) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar188 * dStack_fc8) & __real_7fffffffffffffff);
        auVar343._0_8_ =
             (double)(__real_7fffffffffffffff & (ulonglong)((double)local_10c0._0_8_ * dVar43)) +
             (double)((ulonglong)(dVar45 * dVar8) & __real_7fffffffffffffff) +
             (double)((ulonglong)(local_1620 * local_ec0) & __real_7fffffffffffffff);
        auVar343._8_8_ =
             (double)(__real_7fffffffffffffff & (ulonglong)((double)local_10c0._8_8_ * dVar175)) +
             (double)((ulonglong)(dVar177 * dStack_fb8) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dStack_1618 * dStack_eb8) & __real_7fffffffffffffff);
        auVar343._16_8_ =
             (double)(__real_7fffffffffffffff & (ulonglong)(dStack_10b0 * dVar180)) +
             (double)((ulonglong)(dVar182 * dStack_fb0) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dStack_1610 * dStack_eb0) & __real_7fffffffffffffff);
        auVar343._24_8_ =
             (double)(__real_7fffffffffffffff & (ulonglong)(dStack_10a8 * dVar185)) +
             (double)((ulonglong)(dVar187 * dStack_fa8) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dStack_1608 * dStack_ea8) & __real_7fffffffffffffff);
        auVar273._0_8_ =
             (double)((ulonglong)((double)local_10a0._0_8_ * dVar44) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar46 * local_fa0) & __real_7fffffffffffffff) +
             (double)((ulonglong)(local_1640 * local_ea0) & __real_7fffffffffffffff);
        auVar273._8_8_ =
             (double)((ulonglong)((double)local_10a0._8_8_ * dVar176) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar178 * dStack_f98) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dStack_1638 * dStack_e98) & __real_7fffffffffffffff);
        auVar273._16_8_ =
             (double)((ulonglong)(dStack_1090 * dVar181) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar183 * dStack_f90) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dStack_1630 * dStack_e90) & __real_7fffffffffffffff);
        auVar273._24_8_ =
             (double)((ulonglong)(dStack_1088 * dVar186) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar188 * dStack_f88) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dStack_1628 * dStack_e88) & __real_7fffffffffffffff);
        auVar161 = vsubpd_avx(auVar329,auVar289);
        auVar162 = vsubpd_avx(auVar315,auVar256);
        auVar238 = vsubpd_avx(auVar359,auVar239);
        auVar254 = vsubpd_avx(auVar346,auVar352);
        local_17a0._8_8_ = auVar329._8_8_ + auVar289._8_8_;
        local_17a0._0_8_ = auVar329._0_8_ + auVar289._0_8_;
        dStack_1790 = auVar329._16_8_ + auVar289._16_8_;
        dStack_1788 = auVar329._24_8_ + auVar289._24_8_;
        auVar303 = vsubpd_avx(auVar379,auVar343);
        local_17e0._8_8_ = auVar315._8_8_ + auVar256._8_8_;
        local_17e0._0_8_ = auVar315._0_8_ + auVar256._0_8_;
        dStack_17d0 = auVar315._16_8_ + auVar256._16_8_;
        dStack_17c8 = auVar315._24_8_ + auVar256._24_8_;
        auVar256 = vsubpd_avx(auVar372,auVar273);
        auVar330._0_8_ = auVar359._0_8_ + auVar239._0_8_;
        auVar330._8_8_ = auVar359._8_8_ + auVar239._8_8_;
        auVar330._16_8_ = auVar359._16_8_ + auVar239._16_8_;
        auVar330._24_8_ = auVar359._24_8_ + auVar239._24_8_;
        auVar360._0_8_ = auVar352._0_8_ + auVar346._0_8_;
        auVar360._8_8_ = auVar352._8_8_ + auVar346._8_8_;
        auVar360._16_8_ = auVar352._16_8_ + auVar346._16_8_;
        auVar360._24_8_ = auVar352._24_8_ + auVar346._24_8_;
        auVar316._0_8_ = auVar343._0_8_ + auVar379._0_8_;
        auVar316._8_8_ = auVar343._8_8_ + auVar379._8_8_;
        auVar316._16_8_ = auVar343._16_8_ + auVar379._16_8_;
        auVar316._24_8_ = auVar343._24_8_ + auVar379._24_8_;
        auVar347._0_8_ = auVar372._0_8_ + auVar273._0_8_;
        auVar347._8_8_ = auVar372._8_8_ + auVar273._8_8_;
        auVar347._16_8_ = auVar372._16_8_ + auVar273._16_8_;
        auVar347._24_8_ = auVar372._24_8_ + auVar273._24_8_;
        auVar302._8_8_ = 0;
        auVar302._0_8_ = local_11c0;
        auVar249 = vpcmpeqb_avx(auVar302,ZEXT816(0) << 0x40);
        auVar250 = vpmovsxbd_avx(auVar249 ^ ___xmm_ffffffffffffffffffffffffffffffff);
        auVar270 = vpshufd_avx(auVar249 ^ ___xmm_ffffffffffffffffffffffffffffffff,0x55);
        auVar270 = vpmovsxbd_avx(auVar270);
        auVar163._0_4_ = auVar250._0_4_ & uVar30;
        auVar163._4_4_ = auVar250._4_4_ & uVar31;
        auVar163._8_4_ = auVar250._8_4_ & uVar32;
        auVar163._12_4_ = auVar250._12_4_ & uVar33;
        auVar163._16_4_ = auVar270._0_4_ & uVar34;
        auVar163._20_4_ = auVar270._4_4_ & uVar27;
        auVar163._24_4_ = auVar270._8_4_ & uVar37;
        auVar163._28_4_ = auVar270._12_4_ & uVar38;
        iVar29 = vmovmskps_avx(auVar163);
        if (iVar29 == 0) {
          auVar163 = ZEXT432(0) << 0x20;
LAB_140a70240:
          local_1700 = auVar249._0_8_;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = local_1700;
          auVar250 = vpmovzxbw_avx(auVar9);
          auVar249 = vpand_avx(local_c20._0_16_,auVar250);
          auVar249 = vpshufb_avx(auVar249,___xmm_00000000000000000e0c0a0806040200);
          if ((((((((SUB161(auVar249 >> 7,0) & 1) != 0 || (SUB161(auVar249 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar249 >> 0x17,0) & 1) != 0) || (SUB161(auVar249 >> 0x1f,0) & 1) != 0)
                || (SUB161(auVar249 >> 0x27,0) & 1) != 0) || (SUB161(auVar249 >> 0x2f,0) & 1) != 0)
              || (SUB161(auVar249 >> 0x37,0) & 1) != 0) || (SUB161(auVar249 >> 0x3f,0) & 1) != 0) {
            auVar249 = vpmovzxwd_avx(auVar250);
            auVar249 = vpslld_avx(auVar249,0x1f);
            auVar270 = vpsrad_avx(auVar249,0x1f);
            auVar249 = vpunpckhwd_avx(auVar250,auVar250);
            auVar249 = vpslld_avx(auVar249,0x1f);
            auVar249 = vpsrad_avx(auVar249,0x1f);
            auVar304._16_16_ = auVar249;
            auVar304._0_16_ = auVar270;
            auVar255 = auVar255 & auVar304;
            if ((((((((SUB321(auVar255 >> 0x1f,0) & 1) != 0 || (SUB321(auVar255 >> 0x3f,0) & 1) != 0
                     ) || (SUB321(auVar255 >> 0x5f,0) & 1) != 0) ||
                   SUB321(auVar255 >> 0x7f,0) != '\0') || (SUB321(auVar255 >> 0x9f,0) & 1) != 0) ||
                 SUB321(auVar255 >> 0xbf,0) != '\0') || (SUB321(auVar255 >> 0xdf,0) & 1) != 0) ||
                auVar255[0x1f] < '\0') {
              auVar283 = vpmovsxdq_avx(auVar270);
              auVar308 = vshufps_avx(auVar270,auVar270,0xfa);
              auVar241._16_16_ = auVar308;
              auVar241._0_16_ = auVar283;
              auVar283 = vpmovsxdq_avx(auVar249);
              auVar308 = vpshufd_avx(auVar249,0xfa);
              auVar257._16_16_ = auVar308;
              auVar257._0_16_ = auVar283;
              _local_1140 = vmaskmovpd_avx(auVar241,auVar161);
              _local_1120 = vmaskmovpd_avx(auVar257,auVar162);
              _local_1100 = vmaskmovpd_avx(auVar241,auVar238);
              _local_10e0 = vmaskmovpd_avx(auVar257,auVar254);
              _local_10c0 = vmaskmovpd_avx(auVar241,auVar303);
              _local_10a0 = vmaskmovpd_avx(auVar257,auVar256);
              local_1080 = vmaskmovpd_avx(auVar241,_local_17a0);
              local_1060 = vmaskmovpd_avx(auVar257,_local_17e0);
              _local_1040 = vmaskmovpd_avx(auVar241,auVar330);
              _local_1020 = vmaskmovpd_avx(auVar257,auVar360);
              _local_1000 = vmaskmovpd_avx(auVar241,auVar316);
              _local_fe0 = vmaskmovpd_avx(auVar257,auVar347);
              auVar250 = vpsllw_avx(auVar250,0xf);
              auVar250 = vpacksswb_avx(auVar250,auVar250);
              if ((SUB161(auVar250 >> 7,0) & 1) != 0) {
                local_fc0 = 1;
              }
              if ((SUB161(auVar250 >> 0xf,0) & 1) != 0) {
                uStack_fbf = 1;
              }
              if ((SUB161(auVar250 >> 0x17,0) & 1) != 0) {
                uStack_fbe = 1;
              }
              if ((SUB161(auVar250 >> 0x1f,0) & 1) != 0) {
                uStack_fbd = 1;
              }
              if ((SUB161(auVar250 >> 0x27,0) & 1) != 0) {
                uStack_fbc = 1;
              }
              if ((SUB161(auVar250 >> 0x2f,0) & 1) != 0) {
                uStack_fbb = 1;
              }
              if ((SUB161(auVar250 >> 0x37,0) & 1) != 0) {
                uStack_fba = 1;
              }
              if ((SUB161(auVar250 >> 0x3f,0) & 1) != 0) {
                uStack_fb9 = 1;
              }
              auVar164._0_4_ = auVar270._0_4_ & uVar30;
              auVar164._4_4_ = auVar270._4_4_ & uVar31;
              auVar164._8_4_ = auVar270._8_4_ & uVar32;
              auVar164._12_4_ = auVar270._12_4_ & uVar33;
              auVar164._16_4_ = auVar249._0_4_ & uVar34;
              auVar164._20_4_ = auVar249._4_4_ & uVar27;
              auVar164._24_4_ = auVar249._8_4_ & uVar37;
              auVar164._28_4_ = auVar249._12_4_ & uVar38;
              vmovmskps_avx(auVar164 | auVar163);
            }
          }
        }
        else {
          auVar239 = vminpd_avx(local_1340,auVar161);
          auVar283 = vshufps_avx(auVar250,auVar250,0x50);
          auVar250 = vshufps_avx(auVar250,auVar250,0xfa);
          auVar240._16_16_ = auVar250;
          auVar240._0_16_ = auVar283;
          _local_1140 = vmaskmovpd_avx(auVar240,auVar239);
          auVar250 = vshufps_avx(auVar270,auVar270,0x50);
          auVar270 = vshufps_avx(auVar270,auVar270,0xfa);
          auVar299._16_16_ = auVar270;
          auVar299._0_16_ = auVar250;
          auVar239 = vminpd_avx(local_1320,auVar162);
          _local_1120 = vmaskmovpd_avx(auVar299,auVar239);
          auVar239 = vminpd_avx(local_1300,auVar238);
          _local_1100 = vmaskmovpd_avx(auVar240,auVar239);
          auVar239 = vminpd_avx(local_12e0,auVar254);
          _local_10e0 = vmaskmovpd_avx(auVar299,auVar239);
          auVar239 = vminpd_avx(local_12c0,auVar303);
          _local_10c0 = vmaskmovpd_avx(auVar240,auVar239);
          auVar239 = vminpd_avx(local_12a0,auVar256);
          _local_10a0 = vmaskmovpd_avx(auVar299,auVar239);
          auVar239 = vmaxpd_avx(local_1280,_local_17a0);
          local_1080 = vmaskmovpd_avx(auVar240,auVar239);
          auVar239 = vmaxpd_avx(local_1260,_local_17e0);
          local_1060 = vmaskmovpd_avx(auVar299,auVar239);
          auVar239 = vmaxpd_avx(local_1240,auVar330);
          _local_1040 = vmaskmovpd_avx(auVar240,auVar239);
          auVar239 = vmaxpd_avx(local_1220,auVar360);
          _local_1020 = vmaskmovpd_avx(auVar299,auVar239);
          auVar239 = vmaxpd_avx(_local_1200,auVar316);
          _local_1000 = vmaskmovpd_avx(auVar240,auVar239);
          auVar239 = vmaxpd_avx(_local_11e0,auVar347);
          _local_fe0 = vmaskmovpd_avx(auVar299,auVar239);
          auVar250 = vpshufd_avx(auVar302,0x44);
          auVar250 = vpcmpeqb_avx(auVar250,___xmm_00000000000000000000000000000000);
          bVar22 = ~(SUB161(auVar250 >> 7,0) & 1 | (SUB161(auVar250 >> 0xf,0) & 1) << 1 |
                     (SUB161(auVar250 >> 0x17,0) & 1) << 2 | (SUB161(auVar250 >> 0x1f,0) & 1) << 3 |
                     (SUB161(auVar250 >> 0x27,0) & 1) << 4 | (SUB161(auVar250 >> 0x2f,0) & 1) << 5 |
                    (SUB161(auVar250 >> 0x37,0) & 1) << 6);
          if ((bVar22 & 1) != 0) {
            local_fc0 = (undefined1)local_11c0;
          }
          if ((bVar22 & 2) != 0) {
            uStack_fbf = (undefined1)(local_11c0 >> 8);
          }
          if ((bVar22 & 4) != 0) {
            uStack_fbe = (undefined1)(local_11c0 >> 0x10);
          }
          if ((bVar22 & 8) != 0) {
            uStack_fbd = (undefined1)(local_11c0 >> 0x18);
          }
          if ((bVar22 & 0x10) != 0) {
            uStack_fbc = (undefined1)(local_11c0 >> 0x20);
          }
          if ((bVar22 & 0x20) != 0) {
            uStack_fbb = (undefined1)(local_11c0 >> 0x28);
          }
          if ((bVar22 & 0x40) != 0) {
            uStack_fba = (undefined1)(local_11c0 >> 0x30);
          }
          if ((SUB161(auVar250 >> 0x3f,0) & 1) == 0) {
            uStack_fb9 = (undefined1)(local_11c0 >> 0x38);
          }
          if ((byte)(bVar23 | bVar11 << 1 | bVar12 << 2 | bVar13 << 3 | bVar14 << 4 | bVar15 << 5 |
                     bVar16 << 6 | bVar18) != (byte)iVar29) goto LAB_140a70240;
        }
        in_ZMM5 = ZEXT3264(_local_10a0);
        auVar249 = vshufps_avx(auVar52,auVar52,0x50);
        auVar250 = vshufps_avx(auVar52,auVar52,0xfa);
        auVar361._16_16_ = auVar250;
        auVar361._0_16_ = auVar249;
        auVar249 = vshufps_avx(auVar190,auVar190,0x50);
        auVar250 = vshufps_avx(auVar190,auVar190,0xfa);
        auVar373._16_16_ = auVar250;
        auVar373._0_16_ = auVar249;
        local_1340 = vmaskmovpd_avx(auVar361,_local_1140);
        local_1320 = vmaskmovpd_avx(auVar373,_local_1120);
        local_1300 = vmaskmovpd_avx(auVar361,_local_1100);
        local_12e0 = vmaskmovpd_avx(auVar373,_local_10e0);
        local_12c0 = vmaskmovpd_avx(auVar361,_local_10c0);
        local_12a0 = vmaskmovpd_avx(auVar373,_local_10a0);
        local_1280 = vmaskmovpd_avx(auVar361,local_1080);
        local_1260 = vmaskmovpd_avx(auVar373,local_1060);
        local_1240 = vmaskmovpd_avx(auVar361,_local_1040);
        local_1220 = vmaskmovpd_avx(auVar373,_local_1020);
        _local_1200 = vmaskmovpd_avx(auVar361,_local_1000);
        _local_11e0 = vmaskmovpd_avx(auVar373,_local_fe0);
        uVar28 = local_11c0;
        if (bVar23 != 0) {
          local_11c0 = CONCAT71(local_11c0._1_7_,local_fc0);
          uVar28 = local_11c0;
        }
        auVar305 = ZEXT864(0) << 0x40;
        if (bVar11 != 0) {
          local_11c0._2_6_ = (undefined6)(uVar28 >> 0x10);
          local_11c0._0_1_ = (undefined1)uVar28;
          local_11c0._0_2_ = CONCAT11(uStack_fbf,(undefined1)local_11c0);
          uVar28 = local_11c0;
        }
        if (bVar12 != 0) {
          local_11c0._3_5_ = (undefined5)(uVar28 >> 0x18);
          local_11c0._0_2_ = (undefined2)uVar28;
          local_11c0._0_3_ = CONCAT12(uStack_fbe,(undefined2)local_11c0);
          uVar28 = local_11c0;
        }
        if (bVar13 != 0) {
          local_11c0._4_4_ = (undefined4)(uVar28 >> 0x20);
          local_11c0._0_3_ = (undefined3)uVar28;
          local_11c0._0_4_ = CONCAT13(uStack_fbd,(undefined3)local_11c0);
          uVar28 = local_11c0;
        }
        if (bVar14 != 0) {
          local_11c0._5_3_ = (undefined3)(uVar28 >> 0x28);
          local_11c0._0_4_ = (undefined4)uVar28;
          local_11c0._0_5_ = CONCAT14(uStack_fbc,(undefined4)local_11c0);
          uVar28 = local_11c0;
        }
        if (bVar15 != 0) {
          local_11c0._6_2_ = (undefined2)(uVar28 >> 0x30);
          local_11c0._0_5_ = (undefined5)uVar28;
          local_11c0._0_6_ = CONCAT15(uStack_fbb,(undefined5)local_11c0);
          uVar28 = local_11c0;
        }
        local_11c0 = uVar28;
        if (bVar16 != 0) {
          local_11c0._7_1_ = (undefined1)(uVar28 >> 0x38);
          local_11c0._0_6_ = (undefined6)uVar28;
          local_11c0._0_7_ = CONCAT16(uStack_fba,(undefined6)local_11c0);
        }
        lVar21 = local_c00._0_8_;
        if (bVar18 != 0) {
          local_11c0 = CONCAT17(uStack_fb9,(undefined7)local_11c0);
        }
      }
      lVar21 = lVar21 + 8;
    } while ((int)lVar21 < (int)(uVar26 & 0xfffffff8));
  }
  uVar26 = (uint)lVar21;
  if ((int)param_7 <= (int)uVar26) {
    auVar249 = vpshufd_avx(ZEXT416(param_7),0);
    goto LAB_140a7299f;
  }
  auVar250 = vpshufd_avx(ZEXT416(uVar26),0);
  auVar258._16_16_ = auVar250;
  auVar258._0_16_ = auVar250;
  local_c20 = auVar258 | ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
  auVar249 = vpshufd_avx(ZEXT416(param_7),0);
  auVar49 = vpcmpgtd_avx(auVar249,local_c20._16_16_);
  auVar300 = vpcmpgtd_avx(auVar249,local_c20._0_16_);
  auVar290._16_16_ = auVar49;
  auVar290._0_16_ = auVar300;
  auVar255 = vmaskmovps_avx(auVar290,*(undefined1 (*) [32])(param_2 + (int)(uVar26 << 2)));
  auVar270 = vpslld_avx(auVar250,3);
  auVar270 = vpsubd_avx(auVar270,auVar250);
  auVar250 = vpand_avx(auVar300,auVar270);
  lVar21 = param_4 + (longlong)auVar250._0_4_ * 8;
  lVar1 = param_4 + (longlong)auVar250._4_4_ * 8;
  lVar2 = param_4 + (longlong)auVar250._8_4_ * 8;
  lVar3 = param_4 + (longlong)auVar250._12_4_ * 8;
  auVar270 = vpand_avx(auVar49,auVar270);
  lVar4 = param_4 + (longlong)auVar270._0_4_ * 8;
  auVar283 = vpslld_avx(auVar255._16_16_,2);
  auVar283 = vpand_avx(auVar49,auVar283);
  auVar308 = vpslld_avx(auVar255._0_16_,2);
  auVar308 = vpand_avx(auVar300,auVar308);
  lVar5 = param_4 + (longlong)auVar270._4_4_ * 8;
  lVar6 = param_4 + (longlong)auVar270._8_4_ * 8;
  uVar19 = auVar300._0_4_;
  uVar25 = auVar300._4_4_;
  uVar41 = auVar300._8_4_;
  uVar30 = auVar300._12_4_;
  uVar31 = auVar49._0_4_;
  uVar32 = auVar49._4_4_;
  uVar33 = auVar49._8_4_;
  uVar34 = auVar49._12_4_;
  lVar7 = param_4 + (longlong)auVar270._12_4_ * 8;
  auVar270 = vpinsrb_avx(ZEXT116(*(byte *)((ulonglong)
                                           (uVar19 & 
                                           ___ymm_000001b8000001800000014800000110000000d8000000a00000006800000030
                                           ) + lVar21)),
                         (uint)*(byte *)((ulonglong)(uVar25 & _UNK_1512875a4) + lVar1),1);
  auVar270 = vpinsrb_avx(auVar270,(uint)*(byte *)((ulonglong)(uVar41 & _UNK_1512875a8) + lVar2),2);
  auVar270 = vpinsrb_avx(auVar270,(uint)*(byte *)((ulonglong)(uVar30 & _UNK_1512875ac) + lVar3),3);
  auVar270 = vpinsrb_avx(auVar270,(uint)*(byte *)((ulonglong)(uVar31 & _UNK_1512875b0) + lVar4),4);
  auVar270 = vpinsrb_avx(auVar270,(uint)*(byte *)((ulonglong)(uVar32 & _UNK_1512875b4) + lVar5),5);
  auVar270 = vpinsrb_avx(auVar270,(uint)*(byte *)((ulonglong)(uVar33 & _UNK_1512875b8) + lVar6),6);
  auVar270 = vpinsrb_avx(auVar270,(uint)*(byte *)((ulonglong)(uVar34 & _UNK_1512875bc) + lVar7),7);
  auVar48 = vpcmpeqd_avx(auVar249,auVar249);
  auVar283 = vpcmpeqd_avx(ZEXT416(*(uint *)(param_1 + auVar283._0_4_)),auVar48);
  auVar308 = vpcmpeqd_avx(ZEXT416(*(uint *)(param_1 + auVar308._0_4_)),auVar48);
  auVar270 = vpcmpeqb_avx(auVar270,(undefined1  [16])0x0);
  auVar270 = auVar270 ^ auVar48;
  auVar48 = vpmovsxbd_avx(auVar270);
  auVar306 = vpshufd_avx(auVar270,0x55);
  auVar306 = vpmovsxbd_avx(auVar306);
  auVar165._0_4_ = ~auVar308._0_4_ & auVar48._0_4_ & uVar19;
  auVar165._4_4_ = ~auVar308._4_4_ & auVar48._4_4_ & uVar25;
  auVar165._8_4_ = ~auVar308._8_4_ & auVar48._8_4_ & uVar41;
  auVar165._12_4_ = ~auVar308._12_4_ & auVar48._12_4_ & uVar30;
  auVar165._16_4_ = ~auVar283._0_4_ & auVar306._0_4_ & uVar31;
  auVar165._20_4_ = ~auVar283._4_4_ & auVar306._4_4_ & uVar32;
  auVar165._24_4_ = ~auVar283._8_4_ & auVar306._8_4_ & uVar33;
  auVar165._28_4_ = ~auVar283._12_4_ & auVar306._12_4_ & uVar34;
  uVar26 = vmovmskps_avx(auVar165);
  if (uVar26 == 0) goto LAB_140a7299f;
  local_bc0._0_16_ = local_c20._16_16_;
  auVar109._0_4_ = uVar19 & ___ymm_000001880000015000000118000000e0000000a8000000700000003800000000;
  auVar109._4_4_ = uVar25 & _UNK_1512874e4;
  auVar109._8_4_ = uVar41 & _UNK_1512874e8;
  auVar109._12_4_ = uVar30 & _UNK_1512874ec;
  uVar27 = vextractps_avx(auVar109,1);
  uVar37 = vextractps_avx(auVar109,2);
  auVar209._8_8_ = 0;
  auVar209._0_8_ = *(ulonglong *)(param_4 + (longlong)auVar250._0_4_ * 8);
  uVar20 = (undefined4)((ulonglong)param_4 >> 0x20);
  uVar24 = vextractps_avx(auVar109,3);
  auVar306 = vmovhps_avx(auVar209,*(undefined8 *)((ulonglong)uVar27 + lVar1));
  auVar110._8_8_ = 0;
  auVar110._0_8_ = *(ulonglong *)((ulonglong)uVar37 + lVar2);
  auVar311 = vmovhps_avx(auVar110,*(undefined8 *)(CONCAT44(uVar20,uVar24) + lVar3));
  auVar111._8_8_ = 0;
  auVar111._0_8_ = *(ulonglong *)((ulonglong)(uVar33 & _UNK_1512874f8) + lVar6);
  auVar246 = vmovhps_avx(auVar111,*(undefined8 *)((ulonglong)(uVar34 & _UNK_1512874fc) + lVar7));
  auVar210._8_8_ = 0;
  auVar210._0_8_ = *(ulonglong *)((ulonglong)(uVar31 & _UNK_1512874f0) + lVar4);
  auVar52 = vmovhps_avx(auVar210,*(undefined8 *)((ulonglong)(uVar32 & _UNK_1512874f4) + lVar5));
  auVar377._0_4_ = uVar19 & ___ymm_000001900000015800000120000000e8000000b0000000780000004000000008;
  auVar377._4_4_ = uVar25 & _UNK_151287504;
  auVar377._8_4_ = uVar41 & _UNK_151287508;
  auVar377._12_4_ = uVar30 & _UNK_15128750c;
  uVar37 = vextractps_avx(auVar377,1);
  uVar27 = vextractps_avx(auVar377,2);
  uVar24 = vextractps_avx(auVar377,3);
  auVar357._8_8_ = 0;
  auVar357._0_8_ = *(ulonglong *)((ulonglong)(uVar33 & _UNK_151287518) + lVar6);
  auVar190 = vmovhps_avx(auVar357,*(undefined8 *)((ulonglong)(uVar34 & _UNK_15128751c) + lVar7));
  auVar371._8_8_ = 0;
  auVar371._0_8_ = *(ulonglong *)((ulonglong)(uVar31 & _UNK_151287510) + lVar4);
  auVar53 = vmovhps_avx(auVar371,*(undefined8 *)((ulonglong)(uVar32 & _UNK_151287514) + lVar5));
  auVar284 = vpackssdw_avx(auVar300,auVar49);
  auVar312._8_8_ = 0;
  auVar312._0_8_ = *(ulonglong *)((ulonglong)uVar27 + lVar2);
  auVar300 = vmovhps_avx(auVar312,*(undefined8 *)(CONCAT44(uVar20,uVar24) + lVar3));
  auVar326._8_8_ = 0;
  auVar326._0_8_ = *(ulonglong *)((ulonglong)auVar377._0_4_ + lVar21);
  auVar51 = vmovhps_avx(auVar326,*(undefined8 *)((ulonglong)uVar37 + lVar1));
  auVar378._0_4_ = uVar19 & ___ymm_000001980000016000000128000000f0000000b8000000800000004800000010;
  auVar378._4_4_ = uVar25 & _UNK_151287524;
  auVar378._8_4_ = uVar41 & _UNK_151287528;
  auVar378._12_4_ = uVar30 & _UNK_15128752c;
  uVar37 = vextractps_avx(auVar378,1);
  auVar348._16_16_ = auVar311;
  auVar348._0_16_ = auVar306;
  uVar27 = vextractps_avx(auVar378,2);
  auVar166._16_16_ = auVar246;
  auVar166._0_16_ = auVar52;
  auVar112._8_8_ = 0;
  auVar112._0_8_ = *(ulonglong *)((ulonglong)(uVar33 & _UNK_151287538) + lVar6);
  auVar48 = vmovhps_avx(auVar112,*(undefined8 *)((ulonglong)(uVar34 & _UNK_15128753c) + lVar7));
  auVar340._8_8_ = 0;
  auVar340._0_8_ = *(ulonglong *)((ulonglong)(uVar31 & _UNK_151287530) + lVar4);
  uVar38 = vextractps_avx(auVar378,3);
  auVar49 = vmovhps_avx(auVar340,*(undefined8 *)((ulonglong)(uVar32 & _UNK_151287534) + lVar5));
  auVar344._16_16_ = auVar190;
  auVar344._0_16_ = auVar53;
  auVar341._8_8_ = 0;
  auVar341._0_8_ = *(ulonglong *)((ulonglong)uVar27 + lVar2);
  auVar54 = vmovhps_avx(auVar341,*(undefined8 *)((ulonglong)uVar38 + lVar3));
  auVar351._8_8_ = 0;
  auVar351._0_8_ = *(ulonglong *)((ulonglong)auVar378._0_4_ + lVar21);
  auVar250 = vmovhpd_avx(auVar351,*(undefined8 *)((ulonglong)uVar37 + lVar1));
  auVar358._0_4_ = uVar19 & ___ymm_000001a00000016800000130000000f8000000c0000000880000005000000018;
  auVar358._4_4_ = uVar25 & _UNK_151287544;
  auVar358._8_4_ = uVar41 & _UNK_151287548;
  auVar358._12_4_ = uVar30 & _UNK_15128754c;
  uVar37 = vextractps_avx(auVar358,1);
  uVar27 = vextractps_avx(auVar358,2);
  uVar38 = vextractps_avx(auVar358,3);
  auVar317._16_16_ = auVar300;
  auVar317._0_16_ = auVar51;
  local_b00._16_16_ = auVar48;
  local_b00._0_16_ = auVar49;
  auVar113._8_8_ = 0;
  auVar113._0_8_ = *(ulonglong *)((ulonglong)(uVar33 & _UNK_151287558) + lVar6);
  auVar48 = vmovhps_avx(auVar113,*(undefined8 *)((ulonglong)(uVar34 & _UNK_15128755c) + lVar7));
  auVar313._8_8_ = 0;
  auVar313._0_8_ = *(ulonglong *)((ulonglong)(uVar31 & _UNK_151287550) + lVar4);
  auVar49 = vmovhps_avx(auVar313,*(undefined8 *)((ulonglong)(uVar32 & _UNK_151287554) + lVar5));
  local_b20._16_16_ = auVar54;
  local_b20._0_16_ = auVar250;
  auVar327._8_8_ = 0;
  auVar327._0_8_ = *(ulonglong *)((ulonglong)uVar27 + lVar2);
  auVar54 = vmovhps_avx(auVar327,*(undefined8 *)((ulonglong)uVar38 + lVar3));
  auVar342._8_8_ = 0;
  auVar342._0_8_ = *(ulonglong *)((ulonglong)auVar358._0_4_ + lVar21);
  auVar250 = vmovhpd_avx(auVar342,*(undefined8 *)((ulonglong)uVar37 + lVar1));
  auVar345._0_4_ = uVar19 & ___ymm_000001a8000001700000013800000100000000c8000000900000005800000020;
  auVar345._4_4_ = uVar25 & _UNK_151287564;
  auVar345._8_4_ = uVar41 & _UNK_151287568;
  auVar345._12_4_ = uVar30 & _UNK_15128756c;
  uVar37 = vextractps_avx(auVar345,1);
  uVar27 = vextractps_avx(auVar345,2);
  uVar38 = vextractps_avx(auVar345,3);
  local_b40._16_16_ = auVar48;
  local_b40._0_16_ = auVar49;
  auVar318._16_16_ = auVar54;
  auVar318._0_16_ = auVar250;
  auVar314._8_8_ = 0;
  auVar314._0_8_ = *(ulonglong *)((ulonglong)(uVar33 & _UNK_151287578) + lVar6);
  auVar48 = vmovhpd_avx(auVar314,*(undefined8 *)((ulonglong)(uVar34 & _UNK_15128757c) + lVar7));
  auVar114._8_8_ = 0;
  auVar114._0_8_ = *(ulonglong *)((ulonglong)(uVar31 & _UNK_151287570) + lVar4);
  auVar55 = vmovhps_avx(auVar114,*(undefined8 *)((ulonglong)(uVar32 & _UNK_151287574) + lVar5));
  auVar328._8_8_ = 0;
  auVar328._0_8_ = *(ulonglong *)((ulonglong)uVar27 + lVar2);
  auVar49 = vmovhpd_avx(auVar328,*(undefined8 *)((ulonglong)uVar38 + lVar3));
  local_b60._16_16_ = auVar48;
  local_b60._0_16_ = auVar55;
  auVar115._8_8_ = 0;
  auVar115._0_8_ = *(ulonglong *)((ulonglong)auVar345._0_4_ + lVar21);
  auVar48 = vmovhps_avx(auVar115,*(undefined8 *)((ulonglong)uVar37 + lVar1));
  auVar286._0_4_ = uVar19 & ___ymm_000001b0000001780000014000000108000000d0000000980000006000000028;
  auVar286._4_4_ = uVar25 & _UNK_151287584;
  auVar286._8_4_ = uVar41 & _UNK_151287588;
  auVar286._12_4_ = uVar30 & _UNK_15128758c;
  uVar19 = vextractps_avx(auVar286,1);
  uVar25 = vextractps_avx(auVar286,2);
  uVar41 = vextractps_avx(auVar286,3);
  register0x00001210 = auVar49;
  local_be0 = auVar48;
  auVar287._8_8_ = 0;
  auVar287._0_8_ = *(ulonglong *)((ulonglong)(uVar33 & _UNK_151287598) + lVar6);
  auVar48 = vmovhps_avx(auVar287,*(undefined8 *)((ulonglong)(uVar34 & _UNK_15128759c) + lVar7));
  auVar116._8_8_ = 0;
  auVar116._0_8_ = *(ulonglong *)((ulonglong)(uVar31 & _UNK_151287590) + lVar4);
  auVar49 = vmovhps_avx(auVar116,*(undefined8 *)((ulonglong)(uVar32 & _UNK_151287594) + lVar5));
  local_b80._16_16_ = auVar48;
  local_b80._0_16_ = auVar49;
  auVar117._8_8_ = 0;
  auVar117._0_8_ = *(ulonglong *)((ulonglong)uVar25 + lVar2);
  auVar48 = vmovhps_avx(auVar117,*(undefined8 *)((ulonglong)uVar41 + lVar3));
  auVar288._8_8_ = 0;
  auVar288._0_8_ = *(ulonglong *)((ulonglong)auVar286._0_4_ + lVar21);
  auVar49 = vmovhps_avx(auVar288,*(undefined8 *)((ulonglong)uVar19 + lVar1));
  local_ba0._16_16_ = auVar48;
  local_ba0._0_16_ = auVar49;
  auVar283 = vpackssdw_avx(auVar308,auVar283);
  auVar270 = vpmovsxbw_avx(auVar270);
  local_ad0 = vpandn_avx(auVar283,auVar270);
  auVar270 = vpand_avx(local_ad0,auVar284);
  auVar283 = vpslld_avx(auVar255._0_16_,7);
  auVar308 = vpmovsxwd_avx(auVar270);
  auVar283 = vpand_avx(auVar308,auVar283);
  auVar48 = vpunpckhwd_avx(auVar270,auVar270);
  auVar270 = vpslld_avx(auVar255._16_16_,7);
  local_c00._16_16_ = auVar48;
  local_c00._0_16_ = auVar308;
  auVar270 = vpand_avx(auVar48,auVar270);
  lVar21 = param_3 + auVar270._8_4_;
  iVar29 = auVar270._12_4_;
  auVar118._8_8_ = 0;
  auVar118._0_8_ = *(ulonglong *)(param_3 + auVar270._8_4_);
  local_8d0 = vmovhpd_avx(auVar118,*(undefined8 *)(param_3 + iVar29));
  auVar119._8_8_ = 0;
  auVar119._0_8_ = *(ulonglong *)(param_3 + auVar270._0_4_);
  local_8e0 = vmovhps_avx(auVar119,*(undefined8 *)(param_3 + auVar270._4_4_));
  auVar120._8_8_ = 0;
  auVar120._0_8_ = *(ulonglong *)(param_3 + auVar283._8_4_);
  local_8f0 = vmovhps_avx(auVar120,*(undefined8 *)(param_3 + auVar283._12_4_));
  lVar1 = param_3 + iVar29;
  uVar244 = auVar308._0_4_;
  auVar121._0_4_ = uVar244 & ___ymm_0000000800000008000000080000000800000008000000080000000800000008
  ;
  uVar261 = auVar308._4_4_;
  auVar121._4_4_ = uVar261 & _UNK_150b50d64;
  uVar262 = auVar308._8_4_;
  auVar121._8_4_ = uVar262 & _UNK_150b50d68;
  uVar263 = auVar308._12_4_;
  auVar121._12_4_ = uVar263 & _UNK_150b50d6c;
  uVar264 = auVar48._0_4_;
  uVar265 = auVar48._4_4_;
  uVar266 = auVar48._8_4_;
  uVar267 = auVar48._12_4_;
  uVar24 = vextractps_avx(auVar121,1);
  uVar20 = vextractps_avx(auVar121,2);
  auVar211._8_8_ = 0;
  auVar211._0_8_ = *(ulonglong *)((ulonglong)(uVar266 & _UNK_150b50d78) + lVar21);
  local_890 = vmovhps_avx(auVar211,*(undefined8 *)((ulonglong)(uVar267 & _UNK_150b50d7c) + lVar1));
  auVar271._8_8_ = 0;
  auVar271._0_8_ = *(ulonglong *)(param_3 + auVar283._0_4_);
  local_900 = vmovhpd_avx(auVar271,*(undefined8 *)(param_3 + auVar283._4_4_));
  lVar2 = param_3 + auVar270._0_4_;
  auVar122._0_4_ = uVar244 & ___ymm_0000002000000020000000200000002000000020000000200000002000000020
  ;
  auVar122._4_4_ = uVar261 & _UNK_151287364;
  auVar122._8_4_ = uVar262 & _UNK_151287368;
  auVar122._12_4_ = uVar263 & _UNK_15128736c;
  uVar27 = vextractps_avx(auVar122,1);
  uVar37 = vextractps_avx(auVar122,2);
  uVar38 = vextractps_avx(auVar122,3);
  auVar123._8_8_ = 0;
  auVar123._0_8_ = *(ulonglong *)((ulonglong)(uVar264 & _UNK_150b50d70) + lVar2);
  lVar3 = param_3 + auVar270._4_4_;
  local_8a0 = vmovhps_avx(auVar123,*(undefined8 *)((ulonglong)(uVar265 & _UNK_150b50d74) + lVar3));
  auVar124._0_4_ = uVar244 & ___ymm_0000003800000038000000380000003800000038000000380000003800000038
  ;
  auVar124._4_4_ = uVar261 & _UNK_1512873c4;
  auVar124._8_4_ = uVar262 & _UNK_1512873c8;
  auVar124._12_4_ = uVar263 & _UNK_1512873cc;
  uVar19 = vextractps_avx(auVar124,1);
  uVar25 = vextractps_avx(auVar124,2);
  uVar41 = vextractps_avx(auVar124,3);
  lVar4 = param_3 + auVar283._0_4_;
  auVar125._0_4_ = uVar244 & ___ymm_0000005000000050000000500000005000000050000000500000005000000050
  ;
  auVar125._4_4_ = uVar261 & _UNK_151287424;
  auVar125._8_4_ = uVar262 & _UNK_151287428;
  auVar125._12_4_ = uVar263 & _UNK_15128742c;
  uVar30 = vextractps_avx(auVar125,1);
  uVar31 = vextractps_avx(auVar125,2);
  uVar32 = vextractps_avx(auVar125,3);
  auVar126._0_4_ = uVar244 & ___ymm_0000006000000060000000600000006000000060000000600000006000000060
  ;
  auVar126._4_4_ = uVar261 & _UNK_151287464;
  auVar126._8_4_ = uVar262 & _UNK_151287468;
  auVar126._12_4_ = uVar263 & _UNK_15128746c;
  uVar33 = vextractps_avx(auVar126,1);
  uVar34 = vextractps_avx(auVar126,2);
  auVar127._8_8_ = 0;
  auVar127._0_8_ = *(ulonglong *)((ulonglong)auVar121._0_4_ + lVar4);
  lVar5 = param_3 + auVar283._4_4_;
  local_8c0 = vmovhps_avx(auVar127,*(undefined8 *)(CONCAT44(iVar29 >> 0x1f,uVar24) + lVar5));
  lVar6 = param_3 + auVar283._8_4_;
  param_3 = param_3 + auVar283._12_4_;
  auVar212._8_8_ = 0;
  auVar212._0_8_ = *(ulonglong *)(CONCAT44(iVar29 >> 0x1f,uVar20) + lVar6);
  local_8b0 = vmovhps_avx(auVar212,*(undefined8 *)((ulonglong)auVar121._12_4_ + param_3));
  auVar213._8_8_ = 0;
  auVar213._0_8_ =
       *(ulonglong *)
        ((ulonglong)
         (uVar244 & ___ymm_0000001000000010000000100000001000000010000000100000001000000010) + lVar4
        );
  local_880 = vmovhps_avx(auVar213,*(undefined8 *)((ulonglong)(uVar261 & _UNK_150b51424) + lVar5));
  auVar128._8_8_ = 0;
  auVar128._0_8_ = *(ulonglong *)((ulonglong)(uVar266 & _UNK_150b51438) + lVar21);
  local_850 = vmovhps_avx(auVar128,*(undefined8 *)((ulonglong)(uVar267 & _UNK_150b5143c) + lVar1));
  auVar129._8_8_ = 0;
  auVar129._0_8_ = *(ulonglong *)((ulonglong)(uVar264 & _UNK_150b51430) + lVar2);
  local_860 = vmovhps_avx(auVar129,*(undefined8 *)((ulonglong)(uVar265 & _UNK_150b51434) + lVar3));
  auVar130._8_8_ = 0;
  auVar130._0_8_ = *(ulonglong *)((ulonglong)(uVar262 & _UNK_150b51428) + lVar6);
  local_870 = vmovhps_avx(auVar130,*(undefined8 *)((ulonglong)(uVar263 & _UNK_150b5142c) + param_3))
  ;
  auVar131._8_8_ = 0;
  auVar131._0_8_ =
       *(ulonglong *)
        ((ulonglong)
         (uVar244 & ___ymm_0000001800000018000000180000001800000018000000180000001800000018) + lVar4
        );
  local_840 = vmovhps_avx(auVar131,*(undefined8 *)((ulonglong)(uVar261 & _UNK_151287344) + lVar5));
  auVar214._8_8_ = 0;
  auVar214._0_8_ = *(ulonglong *)((ulonglong)(uVar266 & _UNK_151287358) + lVar21);
  local_810 = vmovhps_avx(auVar214,*(undefined8 *)((ulonglong)(uVar267 & _UNK_15128735c) + lVar1));
  auVar215._8_8_ = 0;
  auVar215._0_8_ = *(ulonglong *)((ulonglong)(uVar264 & _UNK_151287350) + lVar2);
  local_820 = vmovhps_avx(auVar215,*(undefined8 *)((ulonglong)(uVar265 & _UNK_151287354) + lVar3));
  auVar216._8_8_ = 0;
  auVar216._0_8_ = *(ulonglong *)((ulonglong)(uVar262 & _UNK_151287348) + lVar6);
  local_830 = vmovhps_avx(auVar216,*(undefined8 *)((ulonglong)(uVar263 & _UNK_15128734c) + param_3))
  ;
  auVar217._8_8_ = 0;
  auVar217._0_8_ = *(ulonglong *)((ulonglong)auVar122._0_4_ + lVar4);
  local_800 = vmovhps_avx(auVar217,*(undefined8 *)((ulonglong)uVar27 + lVar5));
  auVar132._8_8_ = 0;
  auVar132._0_8_ = *(ulonglong *)((ulonglong)(uVar266 & _UNK_151287378) + lVar21);
  local_7d0 = vmovhps_avx(auVar132,*(undefined8 *)((ulonglong)(uVar267 & _UNK_15128737c) + lVar1));
  auVar133._8_8_ = 0;
  auVar133._0_8_ = *(ulonglong *)((ulonglong)(uVar264 & _UNK_151287370) + lVar2);
  local_7e0 = vmovhps_avx(auVar133,*(undefined8 *)((ulonglong)(uVar265 & _UNK_151287374) + lVar3));
  auVar134._8_8_ = 0;
  auVar134._0_8_ = *(ulonglong *)((ulonglong)uVar37 + lVar6);
  local_7f0 = vmovhps_avx(auVar134,*(undefined8 *)((ulonglong)uVar38 + param_3));
  auVar135._8_8_ = 0;
  auVar135._0_8_ =
       *(ulonglong *)
        ((ulonglong)
         (uVar244 & ___ymm_0000002800000028000000280000002800000028000000280000002800000028) + lVar4
        );
  local_7c0 = vmovhps_avx(auVar135,*(undefined8 *)((ulonglong)(uVar261 & _UNK_151287384) + lVar5));
  auVar218._8_8_ = 0;
  auVar218._0_8_ = *(ulonglong *)((ulonglong)(uVar266 & _UNK_151287398) + lVar21);
  local_790 = vmovhps_avx(auVar218,*(undefined8 *)((ulonglong)(uVar267 & _UNK_15128739c) + lVar1));
  auVar219._8_8_ = 0;
  auVar219._0_8_ = *(ulonglong *)((ulonglong)(uVar264 & _UNK_151287390) + lVar2);
  local_7a0 = vmovhps_avx(auVar219,*(undefined8 *)((ulonglong)(uVar265 & _UNK_151287394) + lVar3));
  auVar220._8_8_ = 0;
  auVar220._0_8_ = *(ulonglong *)((ulonglong)(uVar262 & _UNK_151287388) + lVar6);
  local_7b0 = vmovhps_avx(auVar220,*(undefined8 *)((ulonglong)(uVar263 & _UNK_15128738c) + param_3))
  ;
  auVar221._8_8_ = 0;
  auVar221._0_8_ =
       *(ulonglong *)
        ((ulonglong)
         (uVar244 & ___ymm_0000003000000030000000300000003000000030000000300000003000000030) + lVar4
        );
  local_780 = vmovhps_avx(auVar221,*(undefined8 *)((ulonglong)(uVar261 & _UNK_1512873a4) + lVar5));
  auVar136._8_8_ = 0;
  auVar136._0_8_ = *(ulonglong *)((ulonglong)(uVar266 & _UNK_1512873b8) + lVar21);
  local_750 = vmovhps_avx(auVar136,*(undefined8 *)((ulonglong)(uVar267 & _UNK_1512873bc) + lVar1));
  auVar137._8_8_ = 0;
  auVar137._0_8_ = *(ulonglong *)((ulonglong)(uVar264 & _UNK_1512873b0) + lVar2);
  local_760 = vmovhps_avx(auVar137,*(undefined8 *)((ulonglong)(uVar265 & _UNK_1512873b4) + lVar3));
  auVar138._8_8_ = 0;
  auVar138._0_8_ = *(ulonglong *)((ulonglong)(uVar262 & _UNK_1512873a8) + lVar6);
  local_770 = vmovhps_avx(auVar138,*(undefined8 *)((ulonglong)(uVar263 & _UNK_1512873ac) + param_3))
  ;
  auVar139._8_8_ = 0;
  auVar139._0_8_ = *(ulonglong *)((ulonglong)auVar124._0_4_ + lVar4);
  local_740 = vmovhps_avx(auVar139,*(undefined8 *)((ulonglong)uVar19 + lVar5));
  auVar222._8_8_ = 0;
  auVar222._0_8_ = *(ulonglong *)((ulonglong)(uVar266 & _UNK_1512873d8) + lVar21);
  local_710 = vmovhps_avx(auVar222,*(undefined8 *)((ulonglong)(uVar267 & _UNK_1512873dc) + lVar1));
  auVar223._8_8_ = 0;
  auVar223._0_8_ = *(ulonglong *)((ulonglong)(uVar264 & _UNK_1512873d0) + lVar2);
  local_720 = vmovhps_avx(auVar223,*(undefined8 *)((ulonglong)(uVar265 & _UNK_1512873d4) + lVar3));
  auVar224._8_8_ = 0;
  auVar224._0_8_ = *(ulonglong *)((ulonglong)uVar25 + lVar6);
  local_730 = vmovhps_avx(auVar224,*(undefined8 *)((ulonglong)uVar41 + param_3));
  auVar225._8_8_ = 0;
  auVar225._0_8_ =
       *(ulonglong *)
        ((ulonglong)
         (uVar244 & ___ymm_0000004000000040000000400000004000000040000000400000004000000040) + lVar4
        );
  local_700 = vmovhps_avx(auVar225,*(undefined8 *)((ulonglong)(uVar261 & _UNK_1512873e4) + lVar5));
  auVar140._8_8_ = 0;
  auVar140._0_8_ = *(ulonglong *)((ulonglong)(uVar266 & _UNK_1512873f8) + lVar21);
  local_6d0 = vmovhps_avx(auVar140,*(undefined8 *)((ulonglong)(uVar267 & _UNK_1512873fc) + lVar1));
  auVar141._8_8_ = 0;
  auVar141._0_8_ = *(ulonglong *)((ulonglong)(uVar264 & _UNK_1512873f0) + lVar2);
  local_6e0 = vmovhps_avx(auVar141,*(undefined8 *)((ulonglong)(uVar265 & _UNK_1512873f4) + lVar3));
  auVar142._8_8_ = 0;
  auVar142._0_8_ = *(ulonglong *)((ulonglong)(uVar262 & _UNK_1512873e8) + lVar6);
  local_6f0 = vmovhps_avx(auVar142,*(undefined8 *)((ulonglong)(uVar263 & _UNK_1512873ec) + param_3))
  ;
  auVar143._8_8_ = 0;
  auVar143._0_8_ =
       *(ulonglong *)
        ((ulonglong)
         (uVar244 & ___ymm_0000004800000048000000480000004800000048000000480000004800000048) + lVar4
        );
  local_6c0 = vmovhps_avx(auVar143,*(undefined8 *)((ulonglong)(uVar261 & _UNK_151287404) + lVar5));
  auVar226._8_8_ = 0;
  auVar226._0_8_ = *(ulonglong *)((ulonglong)(uVar266 & _UNK_151287418) + lVar21);
  local_690 = vmovhps_avx(auVar226,*(undefined8 *)((ulonglong)(uVar267 & _UNK_15128741c) + lVar1));
  auVar227._8_8_ = 0;
  auVar227._0_8_ = *(ulonglong *)((ulonglong)(uVar264 & _UNK_151287410) + lVar2);
  local_6a0 = vmovhps_avx(auVar227,*(undefined8 *)((ulonglong)(uVar265 & _UNK_151287414) + lVar3));
  auVar228._8_8_ = 0;
  auVar228._0_8_ = *(ulonglong *)((ulonglong)(uVar262 & _UNK_151287408) + lVar6);
  local_6b0 = vmovhps_avx(auVar228,*(undefined8 *)((ulonglong)(uVar263 & _UNK_15128740c) + param_3))
  ;
  auVar229._8_8_ = 0;
  auVar229._0_8_ = *(ulonglong *)((ulonglong)auVar125._0_4_ + lVar4);
  local_680 = vmovhps_avx(auVar229,*(undefined8 *)((ulonglong)uVar30 + lVar5));
  auVar144._8_8_ = 0;
  auVar144._0_8_ = *(ulonglong *)((ulonglong)(uVar266 & _UNK_151287438) + lVar21);
  local_650 = vmovhps_avx(auVar144,*(undefined8 *)((ulonglong)(uVar267 & _UNK_15128743c) + lVar1));
  auVar145._8_8_ = 0;
  auVar145._0_8_ = *(ulonglong *)((ulonglong)(uVar264 & _UNK_151287430) + lVar2);
  local_660 = vmovhps_avx(auVar145,*(undefined8 *)((ulonglong)(uVar265 & _UNK_151287434) + lVar3));
  auVar146._8_8_ = 0;
  auVar146._0_8_ = *(ulonglong *)((ulonglong)uVar31 + lVar6);
  local_670 = vmovhps_avx(auVar146,*(undefined8 *)((ulonglong)uVar32 + param_3));
  auVar147._8_8_ = 0;
  auVar147._0_8_ =
       *(ulonglong *)
        ((ulonglong)
         (uVar244 & ___ymm_0000005800000058000000580000005800000058000000580000005800000058) + lVar4
        );
  local_640 = vmovhps_avx(auVar147,*(undefined8 *)((ulonglong)(uVar261 & _UNK_151287444) + lVar5));
  auVar230._8_8_ = 0;
  auVar230._0_8_ = *(ulonglong *)((ulonglong)(uVar266 & _UNK_151287458) + lVar21);
  local_610 = vmovhps_avx(auVar230,*(undefined8 *)((ulonglong)(uVar267 & _UNK_15128745c) + lVar1));
  auVar231._8_8_ = 0;
  auVar231._0_8_ = *(ulonglong *)((ulonglong)(uVar264 & _UNK_151287450) + lVar2);
  local_620 = vmovhps_avx(auVar231,*(undefined8 *)((ulonglong)(uVar265 & _UNK_151287454) + lVar3));
  auVar232._8_8_ = 0;
  auVar232._0_8_ = *(ulonglong *)((ulonglong)(uVar262 & _UNK_151287448) + lVar6);
  local_630 = vmovhps_avx(auVar232,*(undefined8 *)((ulonglong)(uVar263 & _UNK_15128744c) + param_3))
  ;
  auVar233._8_8_ = 0;
  auVar233._0_8_ = *(ulonglong *)((ulonglong)auVar126._0_4_ + lVar4);
  local_600 = vmovhps_avx(auVar233,*(undefined8 *)((ulonglong)uVar33 + lVar5));
  auVar148._8_8_ = 0;
  auVar148._0_8_ = *(ulonglong *)((ulonglong)(uVar266 & _UNK_151287478) + lVar21);
  local_5d0 = vmovhps_avx(auVar148,*(undefined8 *)((ulonglong)(uVar267 & _UNK_15128747c) + lVar1));
  auVar149._8_8_ = 0;
  auVar149._0_8_ = *(ulonglong *)((ulonglong)(uVar264 & _UNK_151287470) + lVar2);
  local_5e0 = vmovhps_avx(auVar149,*(undefined8 *)((ulonglong)(uVar265 & _UNK_151287474) + lVar3));
  auVar150._8_8_ = 0;
  auVar150._0_8_ = *(ulonglong *)((ulonglong)uVar34 + lVar6);
  local_5f0 = vmovhps_avx(auVar150,*(undefined8 *)((ulonglong)auVar126._12_4_ + param_3));
  auVar151._0_4_ = uVar244 & ___ymm_0000006800000068000000680000006800000068000000680000006800000068
  ;
  auVar151._4_4_ = uVar261 & _UNK_151287484;
  auVar151._8_4_ = uVar262 & _UNK_151287488;
  auVar151._12_4_ = uVar263 & _UNK_15128748c;
  uVar20 = (undefined4)((ulonglong)lVar2 >> 0x20);
  uVar24 = vextractps_avx(auVar151,1);
  uVar19 = vextractps_avx(auVar151,2);
  auVar234._8_8_ = 0;
  auVar234._0_8_ = *(ulonglong *)((ulonglong)(uVar266 & _UNK_151287498) + lVar21);
  local_590 = vmovhps_avx(auVar234,*(undefined8 *)((ulonglong)(uVar267 & _UNK_15128749c) + lVar1));
  auVar152._8_8_ = 0;
  auVar152._0_8_ = *(ulonglong *)((ulonglong)(uVar264 & _UNK_151287490) + lVar2);
  local_5a0 = vmovhps_avx(auVar152,*(undefined8 *)((ulonglong)(uVar265 & _UNK_151287494) + lVar3));
  auVar153._8_8_ = 0;
  auVar153._0_8_ = *(ulonglong *)((ulonglong)uVar19 + lVar6);
  local_5b0 = vmovhps_avx(auVar153,*(undefined8 *)((ulonglong)auVar151._12_4_ + param_3));
  auVar154._8_8_ = 0;
  auVar154._0_8_ = *(ulonglong *)((ulonglong)auVar151._0_4_ + lVar4);
  local_5c0 = vmovhps_avx(auVar154,*(undefined8 *)(CONCAT44(uVar20,uVar24) + lVar5));
  auVar235._0_4_ = uVar244 & ___ymm_0000007000000070000000700000007000000070000000700000007000000070
  ;
  auVar235._4_4_ = uVar261 & _UNK_1512874a4;
  auVar235._8_4_ = uVar262 & _UNK_1512874a8;
  auVar235._12_4_ = uVar263 & _UNK_1512874ac;
  uVar24 = vextractps_avx(auVar235,1);
  uVar19 = vextractps_avx(auVar235,2);
  auVar155._8_8_ = 0;
  auVar155._0_8_ = *(ulonglong *)((ulonglong)(uVar266 & _UNK_1512874b8) + lVar21);
  local_550 = vmovhps_avx(auVar155,*(undefined8 *)((ulonglong)(uVar267 & _UNK_1512874bc) + lVar1));
  auVar156._8_8_ = 0;
  auVar156._0_8_ = *(ulonglong *)((ulonglong)(uVar264 & _UNK_1512874b0) + lVar2);
  local_560 = vmovhps_avx(auVar156,*(undefined8 *)((ulonglong)(uVar265 & _UNK_1512874b4) + lVar3));
  auVar157._8_8_ = 0;
  auVar157._0_8_ = *(ulonglong *)((ulonglong)auVar235._0_4_ + lVar4);
  local_580 = vmovhps_avx(auVar157,*(undefined8 *)(CONCAT44(uVar20,uVar24) + lVar5));
  auVar236._8_8_ = 0;
  auVar236._0_8_ = *(ulonglong *)((ulonglong)uVar19 + lVar6);
  local_570 = vmovhps_avx(auVar236,*(undefined8 *)((ulonglong)auVar235._12_4_ + param_3));
  auVar237._8_8_ = 0;
  auVar237._0_8_ =
       *(ulonglong *)
        ((ulonglong)
         (uVar244 & ___ymm_0000007800000078000000780000007800000078000000780000007800000078) + lVar4
        );
  local_540 = vmovhps_avx(auVar237,*(undefined8 *)((ulonglong)(uVar261 & _UNK_1512874c4) + lVar5));
  auVar158._8_8_ = 0;
  auVar158._0_8_ = *(ulonglong *)((ulonglong)(uVar266 & _UNK_1512874d8) + lVar21);
  local_510 = vmovhps_avx(auVar158,*(undefined8 *)((ulonglong)(uVar267 & _UNK_1512874dc) + lVar1));
  auVar159._8_8_ = 0;
  auVar159._0_8_ = *(ulonglong *)((ulonglong)(uVar264 & _UNK_1512874d0) + lVar2);
  local_520 = vmovhps_avx(auVar159,*(undefined8 *)((ulonglong)(uVar265 & _UNK_1512874d4) + lVar3));
  auVar160._8_8_ = 0;
  auVar160._0_8_ = *(ulonglong *)((ulonglong)(uVar262 & _UNK_1512874c8) + lVar6);
  local_530 = vmovhps_avx(auVar160,*(undefined8 *)((ulonglong)(uVar263 & _UNK_1512874cc) + param_3))
  ;
  dVar8 = param_5[8];
  dVar42 = *param_5;
  lVar21 = 0xc0;
  dVar43 = param_5[0xc];
  dVar44 = param_5[1];
  dVar45 = param_5[5];
  dVar46 = param_5[9];
  dVar174 = param_5[0xd];
  dVar175 = param_5[2];
  dVar176 = param_5[6];
  dVar177 = param_5[10];
  dVar178 = param_5[0xe];
  dVar179 = param_5[3];
  dVar180 = param_5[7];
  dVar181 = param_5[0xb];
  dVar182 = param_5[0xf];
  do {
    dVar184 = *(double *)(local_9c8 + lVar21 + 8);
    dVar185 = *(double *)(local_9b0 + lVar21 + -8);
    dVar186 = *(double *)(local_9b0 + lVar21);
    dVar187 = *(double *)(local_9a8 + lVar21);
    dVar188 = *(double *)(local_9a8 + lVar21 + 8);
    dVar268 = *(double *)(local_990 + lVar21 + -8);
    dVar278 = *(double *)(local_990 + lVar21);
    dVar279 = *(double *)(local_990 + lVar21 + 8);
    dVar280 = *(double *)(local_978 + lVar21 + -8);
    dVar281 = *(double *)(local_978 + lVar21);
    dVar293 = *(double *)(local_970 + lVar21);
    dVar294 = *(double *)(local_970 + lVar21 + 8);
    dVar295 = *(double *)(local_958 + lVar21 + -8);
    dVar310 = *(double *)(local_958 + lVar21);
    dVar320 = *(double *)(local_958 + lVar21 + 8);
    dVar321 = *(double *)(local_940 + lVar21 + -8);
    dVar322 = *(double *)(local_920 + lVar21);
    dVar323 = *(double *)(local_920 + lVar21 + 8);
    dVar324 = *(double *)(local_908 + lVar21 + -8);
    dVar333 = *(double *)(local_908 + lVar21);
    dVar334 = *(double *)(local_940 + lVar21);
    dVar335 = *(double *)(local_938 + lVar21);
    dVar336 = *(double *)(local_938 + lVar21 + 8);
    dVar337 = *(double *)(local_920 + lVar21 + -8);
    dVar338 = *(double *)(local_900 + lVar21);
    dVar355 = *(double *)(local_900 + lVar21 + 8);
    dVar356 = *(double *)(local_8f0 + lVar21);
    dVar365 = *(double *)(local_8f0 + lVar21 + 8);
    dVar366 = *(double *)(local_8e0 + lVar21);
    dVar367 = *(double *)(local_8e0 + lVar21 + 8);
    dVar368 = *(double *)(local_8d0 + lVar21);
    dVar369 = *(double *)(local_8d0 + lVar21 + 8);
    dVar183 = param_5[4];
    *(double *)(local_11e0 + lVar21) =
         dVar188 * dVar42 + 0.0 + dVar295 * dVar183 + dVar8 * dVar322 + dVar43 * dVar366;
    *(double *)(local_11e0 + lVar21 + 8) =
         dVar268 * dVar42 + 0.0 + dVar310 * dVar183 + dVar8 * dVar323 + dVar43 * dVar367;
    *(double *)(local_11e0 + lVar21 + 0x10) =
         dVar278 * dVar42 + 0.0 + dVar320 * dVar183 + dVar8 * dVar324 + dVar43 * dVar368;
    *(double *)(local_11e0 + lVar21 + 0x18) =
         dVar279 * dVar42 + 0.0 + dVar321 * dVar183 + dVar8 * dVar333 + dVar43 * dVar369;
    *(double *)(local_1200 + lVar21) =
         dVar42 * dVar184 + 0.0 + dVar183 * dVar280 + dVar8 * dVar334 + dVar43 * dVar338;
    *(double *)(local_1200 + lVar21 + 8) =
         dVar42 * dVar185 + 0.0 + dVar183 * dVar281 + dVar8 * dVar335 + dVar43 * dVar355;
    *(double *)(local_1200 + lVar21 + 0x10) =
         dVar42 * dVar186 + 0.0 + dVar183 * dVar293 + dVar8 * dVar336 + dVar43 * dVar356;
    *(double *)(local_1200 + lVar21 + 0x18) =
         dVar42 * dVar187 + 0.0 + dVar183 * dVar294 + dVar8 * dVar337 + dVar43 * dVar365;
    *(double *)((longlong)adStack_11b8 + lVar21 + 0x18) =
         dVar188 * dVar44 + 0.0 + dVar295 * dVar45 + dVar46 * dVar322 + dVar174 * dVar366;
    *(double *)((longlong)adStack_11b8 + lVar21 + 0x20) =
         dVar268 * dVar44 + 0.0 + dVar310 * dVar45 + dVar46 * dVar323 + dVar174 * dVar367;
    *(double *)((longlong)adStack_11b8 + lVar21 + 0x28) =
         dVar278 * dVar44 + 0.0 + dVar320 * dVar45 + dVar46 * dVar324 + dVar174 * dVar368;
    *(double *)((longlong)adStack_11b8 + lVar21 + 0x30) =
         dVar279 * dVar44 + 0.0 + dVar321 * dVar45 + dVar46 * dVar333 + dVar174 * dVar369;
    *(double *)((longlong)adStack_11b8 + lVar21 + -8) =
         dVar44 * dVar184 + 0.0 + dVar45 * dVar280 + dVar46 * dVar334 + dVar174 * dVar338;
    *(double *)((longlong)adStack_11b8 + lVar21) =
         dVar44 * dVar185 + 0.0 + dVar45 * dVar281 + dVar46 * dVar335 + dVar174 * dVar355;
    *(double *)((longlong)adStack_11b8 + lVar21 + 8) =
         dVar44 * dVar186 + 0.0 + dVar45 * dVar293 + dVar46 * dVar336 + dVar174 * dVar356;
    *(double *)((longlong)adStack_11b8 + lVar21 + 0x10) =
         dVar44 * dVar187 + 0.0 + dVar45 * dVar294 + dVar46 * dVar337 + dVar174 * dVar365;
    *(double *)((longlong)adStack_11b8 + lVar21 + 0x58) =
         dVar188 * dVar175 + 0.0 + dVar295 * dVar176 + dVar177 * dVar322 + dVar178 * dVar366;
    *(double *)((longlong)adStack_11b8 + lVar21 + 0x60) =
         dVar268 * dVar175 + 0.0 + dVar310 * dVar176 + dVar177 * dVar323 + dVar178 * dVar367;
    *(double *)((longlong)adStack_11b8 + lVar21 + 0x68) =
         dVar278 * dVar175 + 0.0 + dVar320 * dVar176 + dVar177 * dVar324 + dVar178 * dVar368;
    *(double *)((longlong)adStack_11b8 + lVar21 + 0x70) =
         dVar279 * dVar175 + 0.0 + dVar321 * dVar176 + dVar177 * dVar333 + dVar178 * dVar369;
    *(double *)((longlong)adStack_11b8 + lVar21 + 0x38) =
         dVar175 * dVar184 + 0.0 + dVar176 * dVar280 + dVar177 * dVar334 + dVar178 * dVar338;
    *(double *)((longlong)adStack_11b8 + lVar21 + 0x40) =
         dVar175 * dVar185 + 0.0 + dVar176 * dVar281 + dVar177 * dVar335 + dVar178 * dVar355;
    *(double *)((longlong)adStack_11b8 + lVar21 + 0x48) =
         dVar175 * dVar186 + 0.0 + dVar176 * dVar293 + dVar177 * dVar336 + dVar178 * dVar356;
    *(double *)((longlong)adStack_11b8 + lVar21 + 0x50) =
         dVar175 * dVar187 + 0.0 + dVar176 * dVar294 + dVar177 * dVar337 + dVar178 * dVar365;
    *(double *)(local_1120 + lVar21) =
         dVar188 * dVar179 + 0.0 + dVar295 * dVar180 + dVar181 * dVar322 + dVar366 * dVar182;
    *(double *)(local_1120 + lVar21 + 8) =
         dVar268 * dVar179 + 0.0 + dVar310 * dVar180 + dVar181 * dVar323 + dVar367 * dVar182;
    *(double *)(local_1120 + lVar21 + 0x10) =
         dVar278 * dVar179 + 0.0 + dVar320 * dVar180 + dVar181 * dVar324 + dVar368 * dVar182;
    *(double *)(local_1120 + lVar21 + 0x18) =
         dVar279 * dVar179 + 0.0 + dVar321 * dVar180 + dVar181 * dVar333 + dVar369 * dVar182;
    *(double *)(local_1140 + lVar21) =
         dVar179 * dVar184 + 0.0 + dVar180 * dVar280 + dVar181 * dVar334 + dVar338 * dVar182;
    *(double *)(local_1140 + lVar21 + 8) =
         dVar179 * dVar185 + 0.0 + dVar180 * dVar281 + dVar181 * dVar335 + dVar355 * dVar182;
    *(double *)(local_1140 + lVar21 + 0x10) =
         dVar179 * dVar186 + 0.0 + dVar180 * dVar293 + dVar181 * dVar336 + dVar356 * dVar182;
    *(double *)(local_1140 + lVar21 + 0x18) =
         dVar179 * dVar187 + 0.0 + dVar180 * dVar294 + dVar181 * dVar337 + dVar365 * dVar182;
    lVar21 = lVar21 + 0x100;
  } while (lVar21 != 0x4c0);
  local_1620 = auVar306._0_8_;
  dStack_1618 = auVar306._8_8_;
  dStack_1610 = auVar311._0_8_;
  dStack_1608 = auVar311._8_8_;
  local_15a0 = auVar250._0_8_;
  dStack_1598 = auVar250._8_8_;
  dStack_1590 = auVar54._0_8_;
  dStack_1588 = auVar54._8_8_;
  local_1580 = auVar51._0_8_;
  dStack_1578 = auVar51._8_8_;
  dStack_1570 = auVar300._0_8_;
  dStack_1568 = auVar300._8_8_;
  dVar46 = (local_1620 + local_15a0) * __real_3fe0000000000000;
  dVar174 = (dStack_1618 + dStack_1598) * __real_3fe0000000000000;
  dVar175 = (dStack_1610 + dStack_1590) * __real_3fe0000000000000;
  dVar176 = (dStack_1608 + dStack_1588) * __real_3fe0000000000000;
  dVar181 = (local_1580 + (double)local_be0._0_8_) * __real_3fe0000000000000;
  dVar182 = (dStack_1578 + (double)local_be0._8_8_) * __real_3fe0000000000000;
  dVar183 = (dStack_1570 + dStack_bd0) * __real_3fe0000000000000;
  dVar184 = (dStack_1568 + dStack_bc8) * __real_3fe0000000000000;
  local_1640 = auVar52._0_8_;
  dStack_1638 = auVar52._8_8_;
  dStack_1630 = auVar246._0_8_;
  dStack_1628 = auVar246._8_8_;
  dVar268 = (local_b40._0_8_ + local_1640) * __real_3fe0000000000000;
  dVar278 = (local_b40._8_8_ + dStack_1638) * __real_3fe0000000000000;
  dVar279 = (local_b40._16_8_ + dStack_1630) * __real_3fe0000000000000;
  dVar280 = (local_b40._24_8_ + dStack_1628) * __real_3fe0000000000000;
  local_15e0 = auVar53._0_8_;
  dStack_15d8 = auVar53._8_8_;
  dStack_15d0 = auVar190._0_8_;
  dStack_15c8 = auVar190._8_8_;
  dVar281 = (local_b60._0_8_ + local_15e0) * __real_3fe0000000000000;
  dVar295 = (local_b60._8_8_ + dStack_15d8) * __real_3fe0000000000000;
  dVar321 = (local_b60._16_8_ + dStack_15d0) * __real_3fe0000000000000;
  dVar324 = (local_b60._24_8_ + dStack_15c8) * __real_3fe0000000000000;
  dVar8 = (double)CONCAT17(uStack_fb9,
                           CONCAT16(uStack_fba,
                                    CONCAT15(uStack_fbb,
                                             CONCAT14(uStack_fbc,
                                                      CONCAT13(uStack_fbd,
                                                               CONCAT12(uStack_fbe,
                                                                        CONCAT11(uStack_fbf,
                                                                                 local_fc0)))))));
  dVar293 = (local_b00._0_8_ + local_b80._0_8_) * __real_3fe0000000000000;
  dVar310 = (local_b00._8_8_ + local_b80._8_8_) * __real_3fe0000000000000;
  dVar322 = (local_b00._16_8_ + local_b80._16_8_) * __real_3fe0000000000000;
  dVar333 = (local_b00._24_8_ + local_b80._24_8_) * __real_3fe0000000000000;
  dVar355 = (local_b20._0_8_ + local_ba0._0_8_) * __real_3fe0000000000000;
  dVar365 = (local_b20._8_8_ + local_ba0._8_8_) * __real_3fe0000000000000;
  dVar367 = (local_b20._16_8_ + local_ba0._16_8_) * __real_3fe0000000000000;
  dVar369 = (local_b20._24_8_ + local_ba0._24_8_) * __real_3fe0000000000000;
  auVar255 = vsubpd_avx(auVar318,auVar348);
  auVar161 = vsubpd_avx(local_b40,auVar166);
  auVar162 = vsubpd_avx(_local_be0,auVar317);
  auVar238 = vsubpd_avx(local_b60,auVar344);
  auVar254 = vsubpd_avx(local_b80,local_b00);
  auVar303 = vsubpd_avx(local_ba0,local_b20);
  dVar294 = auVar161._0_8_ * __real_3fe0000000000000;
  dVar320 = auVar161._8_8_ * __real_3fe0000000000000;
  dVar323 = auVar161._16_8_ * __real_3fe0000000000000;
  dVar334 = auVar161._24_8_ * __real_3fe0000000000000;
  dVar42 = auVar255._0_8_ * __real_3fe0000000000000;
  dVar43 = auVar255._8_8_ * __real_3fe0000000000000;
  dVar44 = auVar255._16_8_ * __real_3fe0000000000000;
  dVar45 = auVar255._24_8_ * __real_3fe0000000000000;
  dVar356 = auVar238._0_8_ * __real_3fe0000000000000;
  dVar366 = auVar238._8_8_ * __real_3fe0000000000000;
  dVar368 = auVar238._16_8_ * __real_3fe0000000000000;
  dVar370 = auVar238._24_8_ * __real_3fe0000000000000;
  dVar335 = auVar162._0_8_ * __real_3fe0000000000000;
  dVar336 = auVar162._8_8_ * __real_3fe0000000000000;
  dVar337 = auVar162._16_8_ * __real_3fe0000000000000;
  dVar338 = auVar162._24_8_ * __real_3fe0000000000000;
  dVar177 = auVar303._0_8_ * __real_3fe0000000000000;
  dVar178 = auVar303._8_8_ * __real_3fe0000000000000;
  dVar179 = auVar303._16_8_ * __real_3fe0000000000000;
  dVar180 = auVar303._24_8_ * __real_3fe0000000000000;
  dVar185 = auVar254._0_8_ * __real_3fe0000000000000;
  dVar186 = auVar254._8_8_ * __real_3fe0000000000000;
  dVar187 = auVar254._16_8_ * __real_3fe0000000000000;
  dVar188 = auVar254._24_8_ * __real_3fe0000000000000;
  auVar274._0_8_ =
       (double)((ulonglong)(dVar177 * local_f40) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar335 * (double)local_1040._0_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar42 * (double)local_1140) & __real_7fffffffffffffff);
  auVar274._8_8_ =
       (double)((ulonglong)(dVar178 * dStack_f38) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar336 * (double)local_1040._8_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar43 * adStack_1138[0]) & __real_7fffffffffffffff);
  auVar274._16_8_ =
       (double)((ulonglong)(dVar179 * dStack_f30) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar337 * dStack_1030) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar44 * adStack_1138[1]) & __real_7fffffffffffffff);
  auVar274._24_8_ =
       (double)((ulonglong)(dVar180 * dStack_f28) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar338 * dStack_1028) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar45 * adStack_1138[2]) & __real_7fffffffffffffff);
  auVar309._0_8_ =
       (double)((ulonglong)(dVar185 * local_f20) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar356 * (double)local_1020._0_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar294 * (double)local_1120) & __real_7fffffffffffffff);
  auVar309._8_8_ =
       (double)((ulonglong)(dVar186 * dStack_f18) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar366 * (double)local_1020._8_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar320 * adStack_1118[0]) & __real_7fffffffffffffff);
  auVar309._16_8_ =
       (double)((ulonglong)(dVar187 * dStack_f10) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar368 * dStack_1010) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar323 * adStack_1118[1]) & __real_7fffffffffffffff);
  auVar309._24_8_ =
       (double)((ulonglong)(dVar188 * dStack_f08) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar370 * dStack_1008) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar334 * adStack_1118[2]) & __real_7fffffffffffffff);
  auVar253._0_8_ =
       (double)((ulonglong)(dVar177 * local_f00) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar42 * (double)local_1100._0_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar335 * (double)local_1000._0_8_) & __real_7fffffffffffffff);
  auVar253._8_8_ =
       (double)((ulonglong)(dVar178 * dStack_ef8) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar43 * (double)local_1100._8_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar336 * (double)local_1000._8_8_) & __real_7fffffffffffffff);
  auVar259._16_8_ =
       (double)((ulonglong)(dVar179 * dStack_ef0) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar44 * dStack_10f0) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar337 * dStack_ff0) & __real_7fffffffffffffff);
  auVar259._0_16_ = auVar253;
  auVar259._24_8_ =
       (double)((ulonglong)(dVar180 * dStack_ee8) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar45 * dStack_10e8) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar338 * dStack_fe8) & __real_7fffffffffffffff);
  auVar331._0_8_ =
       dVar268 * (double)local_1120 + dVar281 * (double)local_1020._0_8_ + dVar293 * local_f20 +
       local_e20;
  auVar331._8_8_ =
       dVar278 * adStack_1118[0] + dVar295 * (double)local_1020._8_8_ + dVar310 * dStack_f18 +
       dStack_e18;
  auVar331._16_8_ =
       dVar279 * adStack_1118[1] + dVar321 * dStack_1010 + dVar322 * dStack_f10 + dStack_e10;
  auVar331._24_8_ =
       dVar280 * adStack_1118[2] + dVar324 * dStack_1008 + dVar333 * dStack_f08 + dStack_e08;
  auVar349._0_8_ =
       dVar355 * local_f40 + dVar46 * (double)local_1140 + dVar181 * (double)local_1040._0_8_ +
       local_e40;
  auVar349._8_8_ =
       dVar365 * dStack_f38 + dVar174 * adStack_1138[0] + dVar182 * (double)local_1040._8_8_ +
       dStack_e38;
  auVar349._16_8_ =
       dVar367 * dStack_f30 + dVar175 * adStack_1138[1] + dVar183 * dStack_1030 + dStack_e30;
  auVar349._24_8_ =
       dVar369 * dStack_f28 + dVar176 * adStack_1138[2] + dVar184 * dStack_1028 + dStack_e28;
  auVar353._0_8_ =
       dVar268 * (double)local_10e0._0_8_ + dVar281 * (double)local_fe0._0_8_ + dVar293 * local_ee0
       + local_de0;
  auVar353._8_8_ =
       dVar278 * (double)local_10e0._8_8_ + dVar295 * (double)local_fe0._8_8_ + dVar310 * dStack_ed8
       + dStack_dd8;
  auVar353._16_8_ = dVar279 * dStack_10d0 + dVar321 * dStack_fd0 + dVar322 * dStack_ed0 + dStack_dd0
  ;
  auVar353._24_8_ = dVar280 * dStack_10c8 + dVar324 * dStack_fc8 + dVar333 * dStack_ec8 + dStack_dc8
  ;
  auVar362._0_8_ =
       dVar355 * local_f00 + dVar46 * (double)local_1100._0_8_ + dVar181 * (double)local_1000._0_8_
       + local_e00;
  auVar362._8_8_ =
       dVar365 * dStack_ef8 +
       dVar174 * (double)local_1100._8_8_ + dVar182 * (double)local_1000._8_8_ + dStack_df8;
  auVar362._16_8_ = dVar367 * dStack_ef0 + dVar175 * dStack_10f0 + dVar183 * dStack_ff0 + dStack_df0
  ;
  auVar362._24_8_ = dVar369 * dStack_ee8 + dVar176 * dStack_10e8 + dVar184 * dStack_fe8 + dStack_de8
  ;
  auVar374._0_8_ =
       dVar268 * (double)local_10a0._0_8_ + dVar281 * local_fa0 + dVar293 * local_ea0 + local_da0;
  auVar374._8_8_ =
       dVar278 * (double)local_10a0._8_8_ + dVar295 * dStack_f98 + dVar310 * dStack_e98 + dStack_d98
  ;
  auVar374._16_8_ = dVar279 * dStack_1090 + dVar321 * dStack_f90 + dVar322 * dStack_e90 + dStack_d90
  ;
  auVar374._24_8_ = dVar280 * dStack_1088 + dVar324 * dStack_f88 + dVar333 * dStack_e88 + dStack_d88
  ;
  auVar380._0_8_ =
       dVar355 * local_ec0 + dVar46 * (double)local_10c0._0_8_ + dVar181 * dVar8 + local_dc0;
  auVar380._8_8_ =
       dVar365 * dStack_eb8 + dVar174 * (double)local_10c0._8_8_ + dVar182 * dStack_fb8 + dStack_db8
  ;
  auVar380._16_8_ = dVar367 * dStack_eb0 + dVar175 * dStack_10b0 + dVar183 * dStack_fb0 + dStack_db0
  ;
  auVar380._24_8_ = dVar369 * dStack_ea8 + dVar176 * dStack_10a8 + dVar184 * dStack_fa8 + dStack_da8
  ;
  auVar167._0_8_ =
       (double)((ulonglong)(dVar185 * local_ee0) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar294 * (double)local_10e0._0_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar356 * (double)local_fe0._0_8_) & __real_7fffffffffffffff);
  auVar167._8_8_ =
       (double)((ulonglong)(dVar186 * dStack_ed8) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar320 * (double)local_10e0._8_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar366 * (double)local_fe0._8_8_) & __real_7fffffffffffffff);
  auVar167._16_8_ =
       (double)((ulonglong)(dVar187 * dStack_ed0) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar323 * dStack_10d0) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar368 * dStack_fd0) & __real_7fffffffffffffff);
  auVar167._24_8_ =
       (double)((ulonglong)(dVar188 * dStack_ec8) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar334 * dStack_10c8) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar370 * dStack_fc8) & __real_7fffffffffffffff);
  auVar291._0_8_ =
       (double)(__real_7fffffffffffffff & (ulonglong)(dVar42 * (double)local_10c0._0_8_)) +
       (double)((ulonglong)(dVar335 * dVar8) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar177 * local_ec0) & __real_7fffffffffffffff);
  auVar291._8_8_ =
       (double)(__real_7fffffffffffffff & (ulonglong)(dVar43 * (double)local_10c0._8_8_)) +
       (double)((ulonglong)(dVar336 * dStack_fb8) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar178 * dStack_eb8) & __real_7fffffffffffffff);
  auVar291._16_8_ =
       (double)(__real_7fffffffffffffff & (ulonglong)(dVar44 * dStack_10b0)) +
       (double)((ulonglong)(dVar337 * dStack_fb0) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar179 * dStack_eb0) & __real_7fffffffffffffff);
  auVar291._24_8_ =
       (double)(__real_7fffffffffffffff & (ulonglong)(dVar45 * dStack_10a8)) +
       (double)((ulonglong)(dVar338 * dStack_fa8) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar180 * dStack_ea8) & __real_7fffffffffffffff);
  auVar242._0_8_ =
       (double)((ulonglong)(dVar356 * local_fa0) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar294 * (double)local_10a0._0_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar185 * local_ea0) & __real_7fffffffffffffff);
  auVar242._8_8_ =
       (double)((ulonglong)(dVar366 * dStack_f98) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar320 * (double)local_10a0._8_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar186 * dStack_e98) & __real_7fffffffffffffff);
  auVar242._16_8_ =
       (double)((ulonglong)(dVar368 * dStack_f90) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar323 * dStack_1090) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar187 * dStack_e90) & __real_7fffffffffffffff);
  auVar242._24_8_ =
       (double)((ulonglong)(dVar370 * dStack_f88) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar334 * dStack_1088) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar188 * dStack_e88) & __real_7fffffffffffffff);
  auVar255 = vsubpd_avx(auVar349,auVar274);
  auVar161 = vsubpd_avx(auVar331,auVar309);
  auVar162 = vsubpd_avx(auVar362,auVar259);
  auVar238 = vsubpd_avx(auVar353,auVar167);
  local_1740._8_8_ = auVar349._8_8_ + auVar274._8_8_;
  local_1740._0_8_ = auVar349._0_8_ + auVar274._0_8_;
  dStack_1730 = auVar349._16_8_ + auVar274._16_8_;
  dStack_1728 = auVar349._24_8_ + auVar274._24_8_;
  auVar254 = vsubpd_avx(auVar380,auVar291);
  auVar332._0_8_ = auVar331._0_8_ + auVar309._0_8_;
  auVar332._8_8_ = auVar331._8_8_ + auVar309._8_8_;
  auVar332._16_8_ = auVar331._16_8_ + auVar309._16_8_;
  auVar332._24_8_ = auVar331._24_8_ + auVar309._24_8_;
  auVar303 = vsubpd_avx(auVar374,auVar242);
  auVar363._0_8_ = auVar362._0_8_ + auVar253._0_8_;
  auVar363._8_8_ = auVar362._8_8_ + auVar253._8_8_;
  auVar363._16_8_ = auVar362._16_8_ + auVar259._16_8_;
  auVar363._24_8_ = auVar362._24_8_ + auVar259._24_8_;
  auVar354._0_8_ = auVar353._0_8_ + auVar167._0_8_;
  auVar354._8_8_ = auVar353._8_8_ + auVar167._8_8_;
  auVar354._16_8_ = auVar353._16_8_ + auVar167._16_8_;
  auVar354._24_8_ = auVar353._24_8_ + auVar167._24_8_;
  auVar319._0_8_ = auVar380._0_8_ + auVar291._0_8_;
  auVar319._8_8_ = auVar380._8_8_ + auVar291._8_8_;
  auVar319._16_8_ = auVar380._16_8_ + auVar291._16_8_;
  auVar319._24_8_ = auVar380._24_8_ + auVar291._24_8_;
  auVar350._0_8_ = auVar374._0_8_ + auVar242._0_8_;
  auVar350._8_8_ = auVar374._8_8_ + auVar242._8_8_;
  auVar350._16_8_ = auVar374._16_8_ + auVar242._16_8_;
  auVar350._24_8_ = auVar374._24_8_ + auVar242._24_8_;
  auVar272._8_8_ = 0;
  auVar272._0_8_ = local_11c0;
  auVar250 = vpcmpeqb_avx(auVar272,ZEXT816(0) << 0x40);
  auVar270 = vpcmpeqd_avx(auVar253,auVar253);
  auVar283 = vpmovsxbd_avx(auVar250 ^ auVar270);
  auVar270 = vpshufd_avx(auVar250 ^ auVar270,0x55);
  auVar270 = vpmovsxbd_avx(auVar270);
  uVar19 = local_c00._0_4_;
  local_17a0._0_4_ = auVar283._0_4_ & uVar19;
  uVar25 = local_c00._4_4_;
  local_17a0._4_4_ = auVar283._4_4_ & uVar25;
  uVar41 = local_c00._8_4_;
  local_17a0._8_4_ = auVar283._8_4_ & uVar41;
  uVar30 = local_c00._12_4_;
  local_17a0._12_4_ = auVar283._12_4_ & uVar30;
  uVar31 = local_c00._16_4_;
  register0x00001210 = auVar270._0_4_ & uVar31;
  uVar32 = local_c00._20_4_;
  register0x00001214 = auVar270._4_4_ & uVar32;
  uVar33 = local_c00._24_4_;
  register0x00001218 = auVar270._8_4_ & uVar33;
  uVar34 = local_c00._28_4_;
  register0x0000121c = auVar270._12_4_ & uVar34;
  iVar29 = vmovmskps_avx(_local_17a0);
  if (iVar29 == 0) {
    _local_17a0 = ZEXT432(0) << 0x20;
LAB_140a726bb:
    auVar270 = vpmovsxbw_avx(auVar250);
    auVar270 = vpand_avx(auVar270,local_ad0);
    auVar283 = vpmovsxwd_avx(auVar270);
    auVar270 = vpunpckhwd_avx(auVar270,auVar270);
    auVar169._16_16_ = auVar270;
    auVar169._0_16_ = auVar283;
    auVar270 = vpcmpgtd_avx(auVar249,local_bc0._0_16_);
    auVar283 = vpcmpgtd_avx(auVar249,local_c20._0_16_);
    auVar275._16_16_ = auVar270;
    auVar275._0_16_ = auVar283;
    auVar275 = auVar275 & auVar169;
    if ((((((((SUB321(auVar275 >> 0x1f,0) & 1) != 0 || (SUB321(auVar275 >> 0x3f,0) & 1) != 0) ||
            (SUB321(auVar275 >> 0x5f,0) & 1) != 0) || SUB321(auVar275 >> 0x7f,0) != '\0') ||
          (SUB321(auVar275 >> 0x9f,0) & 1) != 0) || SUB321(auVar275 >> 0xbf,0) != '\0') ||
        (SUB321(auVar275 >> 0xdf,0) & 1) != 0) || auVar275[0x1f] < '\0') {
      auVar250 = vpmovzxbw_avx(auVar250);
      auVar270 = vpmovzxwd_avx(auVar250);
      auVar270 = vpslld_avx(auVar270,0x1f);
      auVar170._0_16_ = vpsrad_avx(auVar270,0x1f);
      auVar270 = vpunpckhwd_avx(auVar250,auVar250);
      auVar270 = vpslld_avx(auVar270,0x1f);
      auVar270 = vpsrad_avx(auVar270,0x1f);
      auVar170._16_16_ = auVar270;
      auVar256 = local_c00 & auVar170;
      if ((((((((SUB321(auVar256 >> 0x1f,0) & 1) != 0 || (SUB321(auVar256 >> 0x3f,0) & 1) != 0) ||
              (SUB321(auVar256 >> 0x5f,0) & 1) != 0) || SUB321(auVar256 >> 0x7f,0) != '\0') ||
            (SUB321(auVar256 >> 0x9f,0) & 1) != 0) || SUB321(auVar256 >> 0xbf,0) != '\0') ||
          (SUB321(auVar256 >> 0xdf,0) & 1) != 0) || auVar256[0x1f] < '\0') {
        auVar283 = vpmovsxdq_avx(auVar170._0_16_);
        auVar308 = vshufps_avx(auVar170._0_16_,auVar170._0_16_,0xfa);
        auVar260._16_16_ = auVar308;
        auVar260._0_16_ = auVar283;
        auVar283 = vpmovsxdq_avx(auVar270);
        auVar308 = vpshufd_avx(auVar270,0xfa);
        auVar276._16_16_ = auVar308;
        auVar276._0_16_ = auVar283;
        _local_1140 = vmaskmovpd_avx(auVar260,auVar255);
        _local_1120 = vmaskmovpd_avx(auVar276,auVar161);
        _local_1100 = vmaskmovpd_avx(auVar260,auVar162);
        _local_10e0 = vmaskmovpd_avx(auVar276,auVar238);
        _local_10c0 = vmaskmovpd_avx(auVar260,auVar254);
        _local_10a0 = vmaskmovpd_avx(auVar276,auVar303);
        local_1080 = vmaskmovpd_avx(auVar260,_local_1740);
        local_1060 = vmaskmovpd_avx(auVar276,auVar332);
        _local_1040 = vmaskmovpd_avx(auVar260,auVar363);
        _local_1020 = vmaskmovpd_avx(auVar276,auVar354);
        _local_1000 = vmaskmovpd_avx(auVar260,auVar319);
        _local_fe0 = vmaskmovpd_avx(auVar276,auVar350);
        auVar250 = vpsllw_avx(auVar250,0xf);
        auVar250 = vpacksswb_avx(auVar250,auVar250);
        bVar23 = SUB161(auVar250 >> 0xf,0) & 1;
        bVar11 = SUB161(auVar250 >> 0x17,0) & 1;
        bVar12 = SUB161(auVar250 >> 0x1f,0) & 1;
        bVar13 = SUB161(auVar250 >> 0x27,0) & 1;
        bVar14 = SUB161(auVar250 >> 0x2f,0) & 1;
        bVar15 = SUB161(auVar250 >> 0x37,0) & 1;
        if ((SUB161(auVar250 >> 7,0) & 1) == 0) {
          if (bVar23 == 0) goto LAB_140a727fd;
LAB_140a72f20:
          uStack_fbf = 1;
          if (bVar11 != 0) goto LAB_140a72f30;
LAB_140a72805:
          if (bVar12 == 0) goto LAB_140a7280d;
LAB_140a72f40:
          uStack_fbd = 1;
          if (bVar13 != 0) goto LAB_140a72f50;
LAB_140a72815:
          if (bVar14 == 0) goto LAB_140a7281d;
LAB_140a72f60:
          uStack_fbb = 1;
          if (bVar15 != 0) goto LAB_140a72f70;
LAB_140a72825:
          auVar171._0_4_ = uVar19 & auVar170._0_4_;
          auVar171._4_4_ = uVar25 & auVar170._4_4_;
          auVar171._8_4_ = uVar41 & auVar170._8_4_;
          auVar171._12_4_ = uVar30 & auVar170._12_4_;
          auVar171._16_4_ = uVar31 & auVar270._0_4_;
          auVar171._20_4_ = uVar32 & auVar270._4_4_;
          auVar171._24_4_ = uVar33 & auVar270._8_4_;
          auVar171._28_4_ = uVar34 & auVar270._12_4_;
        }
        else {
          local_fc0 = 1;
          if (bVar23 != 0) goto LAB_140a72f20;
LAB_140a727fd:
          if (bVar11 == 0) goto LAB_140a72805;
LAB_140a72f30:
          uStack_fbe = 1;
          if (bVar12 != 0) goto LAB_140a72f40;
LAB_140a7280d:
          if (bVar13 == 0) goto LAB_140a72815;
LAB_140a72f50:
          uStack_fbc = 1;
          if (bVar14 != 0) goto LAB_140a72f60;
LAB_140a7281d:
          if (bVar15 == 0) goto LAB_140a72825;
LAB_140a72f70:
          uStack_fba = 1;
          auVar171._0_4_ = uVar19 & auVar170._0_4_;
          auVar171._4_4_ = uVar25 & auVar170._4_4_;
          auVar171._8_4_ = uVar41 & auVar170._8_4_;
          auVar171._12_4_ = uVar30 & auVar170._12_4_;
          auVar171._16_4_ = uVar31 & auVar270._0_4_;
          auVar171._20_4_ = uVar32 & auVar270._4_4_;
          auVar171._24_4_ = uVar33 & auVar270._8_4_;
          auVar171._28_4_ = uVar34 & auVar270._12_4_;
        }
        if ((SUB161(auVar250 >> 0x3f,0) & 1) != 0) {
          uStack_fb9 = 1;
        }
        vmovmskps_avx(auVar171 | _local_17a0);
      }
    }
  }
  else {
    auVar256 = vminpd_avx(local_1340,auVar255);
    auVar308 = vshufps_avx(auVar283,auVar283,0x50);
    auVar283 = vshufps_avx(auVar283,auVar283,0xfa);
    auVar168._16_16_ = auVar283;
    auVar168._0_16_ = auVar308;
    _local_1140 = vmaskmovpd_avx(auVar168,auVar256);
    auVar283 = vshufps_avx(auVar270,auVar270,0x50);
    auVar270 = vshufps_avx(auVar270,auVar270,0xfa);
    auVar375._16_16_ = auVar270;
    auVar375._0_16_ = auVar283;
    auVar256 = vminpd_avx(local_1320,auVar161);
    _local_1120 = vmaskmovpd_avx(auVar375,auVar256);
    auVar256 = vminpd_avx(local_1300,auVar162);
    _local_1100 = vmaskmovpd_avx(auVar168,auVar256);
    auVar256 = vminpd_avx(local_12e0,auVar238);
    _local_10e0 = vmaskmovpd_avx(auVar375,auVar256);
    auVar256 = vminpd_avx(local_12c0,auVar254);
    _local_10c0 = vmaskmovpd_avx(auVar168,auVar256);
    auVar256 = vminpd_avx(local_12a0,auVar303);
    _local_10a0 = vmaskmovpd_avx(auVar375,auVar256);
    auVar256 = vmaxpd_avx(local_1280,_local_1740);
    local_1080 = vmaskmovpd_avx(auVar168,auVar256);
    auVar256 = vmaxpd_avx(local_1260,auVar332);
    local_1060 = vmaskmovpd_avx(auVar375,auVar256);
    auVar256 = vmaxpd_avx(local_1240,auVar363);
    _local_1040 = vmaskmovpd_avx(auVar168,auVar256);
    auVar256 = vmaxpd_avx(local_1220,auVar354);
    _local_1020 = vmaskmovpd_avx(auVar375,auVar256);
    auVar256 = vmaxpd_avx(_local_1200,auVar319);
    _local_1000 = vmaskmovpd_avx(auVar168,auVar256);
    auVar256 = vmaxpd_avx(_local_11e0,auVar350);
    _local_fe0 = vmaskmovpd_avx(auVar375,auVar256);
    auVar270 = vpshufd_avx(auVar272,0x44);
    auVar270 = vpcmpeqb_avx(auVar270,___xmm_00000000000000000000000000000000);
    bVar23 = ~(SUB161(auVar270 >> 7,0) & 1 | (SUB161(auVar270 >> 0xf,0) & 1) << 1 |
               (SUB161(auVar270 >> 0x17,0) & 1) << 2 | (SUB161(auVar270 >> 0x1f,0) & 1) << 3 |
               (SUB161(auVar270 >> 0x27,0) & 1) << 4 | (SUB161(auVar270 >> 0x2f,0) & 1) << 5 |
              (SUB161(auVar270 >> 0x37,0) & 1) << 6);
    if ((bVar23 & 1) != 0) {
      local_fc0 = (undefined1)local_11c0;
    }
    if ((bVar23 & 2) != 0) {
      uStack_fbf = (undefined1)(local_11c0 >> 8);
    }
    if ((bVar23 & 4) != 0) {
      uStack_fbe = (undefined1)(local_11c0 >> 0x10);
    }
    if ((bVar23 & 8) != 0) {
      uStack_fbd = (undefined1)(local_11c0 >> 0x18);
    }
    if ((bVar23 & 0x10) != 0) {
      uStack_fbc = (undefined1)(local_11c0 >> 0x20);
    }
    if ((bVar23 & 0x20) != 0) {
      uStack_fbb = (undefined1)(local_11c0 >> 0x28);
    }
    if ((bVar23 & 0x40) != 0) {
      uStack_fba = (undefined1)(local_11c0 >> 0x30);
    }
    if ((SUB161(auVar270 >> 0x3f,0) & 1) == 0) {
      uStack_fb9 = (undefined1)(local_11c0 >> 0x38);
    }
    if ((char)uVar26 != (char)iVar29) goto LAB_140a726bb;
  }
  auVar270 = local_c00._0_16_;
  auVar250 = vshufps_avx(auVar270,auVar270,0x50);
  auVar270 = vshufps_avx(auVar270,auVar270,0xfa);
  auVar364._16_16_ = auVar270;
  auVar364._0_16_ = auVar250;
  auVar270 = local_c00._16_16_;
  auVar250 = vshufps_avx(auVar270,auVar270,0x50);
  auVar270 = vshufps_avx(auVar270,auVar270,0xfa);
  auVar376._16_16_ = auVar270;
  auVar376._0_16_ = auVar250;
  local_1340 = vmaskmovpd_avx(auVar364,_local_1140);
  local_1320 = vmaskmovpd_avx(auVar376,_local_1120);
  local_1300 = vmaskmovpd_avx(auVar364,_local_1100);
  local_12e0 = vmaskmovpd_avx(auVar376,_local_10e0);
  local_12c0 = vmaskmovpd_avx(auVar364,_local_10c0);
  local_12a0 = vmaskmovpd_avx(auVar376,_local_10a0);
  local_1280 = vmaskmovpd_avx(auVar364,local_1080);
  local_1260 = vmaskmovpd_avx(auVar376,local_1060);
  local_1240 = vmaskmovpd_avx(auVar364,_local_1040);
  local_1220 = vmaskmovpd_avx(auVar376,_local_1020);
  _local_1200 = vmaskmovpd_avx(auVar364,_local_1000);
  _local_11e0 = vmaskmovpd_avx(auVar376,_local_fe0);
  uVar28 = local_11c0;
  if ((uVar26 & 1) != 0) {
    local_11c0 = CONCAT71(local_11c0._1_7_,local_fc0);
    uVar28 = local_11c0;
  }
  if ((uVar26 & 2) != 0) {
    local_11c0._2_6_ = (undefined6)(uVar28 >> 0x10);
    local_11c0._0_1_ = (undefined1)uVar28;
    local_11c0._0_2_ = CONCAT11(uStack_fbf,(undefined1)local_11c0);
    uVar28 = local_11c0;
  }
  if ((uVar26 & 4) != 0) {
    local_11c0._3_5_ = (undefined5)(uVar28 >> 0x18);
    local_11c0._0_2_ = (undefined2)uVar28;
    local_11c0._0_3_ = CONCAT12(uStack_fbe,(undefined2)local_11c0);
    uVar28 = local_11c0;
  }
  if ((uVar26 & 8) != 0) {
    local_11c0._4_4_ = (undefined4)(uVar28 >> 0x20);
    local_11c0._0_3_ = (undefined3)uVar28;
    local_11c0._0_4_ = CONCAT13(uStack_fbd,(undefined3)local_11c0);
    uVar28 = local_11c0;
  }
  if ((uVar26 & 0x10) != 0) {
    local_11c0._5_3_ = (undefined3)(uVar28 >> 0x28);
    local_11c0._0_4_ = (undefined4)uVar28;
    local_11c0._0_5_ = CONCAT14(uStack_fbc,(undefined4)local_11c0);
    uVar28 = local_11c0;
  }
  if ((uVar26 & 0x20) != 0) {
    local_11c0._6_2_ = (undefined2)(uVar28 >> 0x30);
    local_11c0._0_5_ = (undefined5)uVar28;
    local_11c0._0_6_ = CONCAT15(uStack_fbb,(undefined5)local_11c0);
    uVar28 = local_11c0;
  }
  local_11c0 = uVar28;
  if ((uVar26 & 0x40) != 0) {
    local_11c0._7_1_ = (undefined1)(uVar28 >> 0x38);
    local_11c0._0_6_ = (undefined6)uVar28;
    local_11c0._0_7_ = CONCAT16(uStack_fba,(undefined6)local_11c0);
  }
  if ((char)uVar26 < '\0') {
    local_11c0 = CONCAT17(uStack_fb9,(undefined7)local_11c0);
  }
LAB_140a7299f:
  local_ac0 = vmovlhps_avx(local_1340._0_16_,local_1300._0_16_);
  local_a88 = vunpckhpd_avx(local_1340._0_16_,local_1300._0_16_);
  local_a50 = vmovlhps_avx(local_1340._16_16_,local_1300._16_16_);
  local_a18 = vunpckhpd_avx(local_1340._16_16_,local_1300._16_16_);
  local_9e0 = vmovlhps_avx(local_1320._0_16_,local_12e0._0_16_);
  local_9a8 = vunpckhpd_avx(local_1320._0_16_,local_12e0._0_16_);
  local_970 = vmovlhps_avx(local_1320._16_16_,local_12e0._16_16_);
  local_938 = vunpckhpd_avx(local_1320._16_16_,local_12e0._16_16_);
  local_ab0 = local_12c0._0_8_;
  local_a78 = local_12c0._8_8_;
  local_a40 = local_12c0._16_8_;
  local_a08 = local_12c0._24_8_;
  local_9d0 = local_12a0._0_8_;
  local_998 = (double)local_12a0._8_8_;
  local_960 = (double)local_12a0._16_8_;
  local_928 = (double)local_12a0._24_8_;
  local_aa8 = vmovlhps_avx(local_1280._0_16_,local_1240._0_16_);
  local_a70 = vunpckhpd_avx(local_1280._0_16_,local_1240._0_16_);
  local_a38 = vmovlhps_avx(local_1280._16_16_,local_1240._16_16_);
  local_a00 = vunpckhpd_avx(local_1280._16_16_,local_1240._16_16_);
  local_9c8 = vmovlhps_avx(local_1260._0_16_,local_1220._0_16_);
  local_990 = vunpckhpd_avx(local_1260._0_16_,local_1220._0_16_);
  local_958 = vmovlhps_avx(local_1260._16_16_,local_1220._16_16_);
  local_920 = vunpckhpd_avx(local_1260._16_16_,local_1220._16_16_);
  local_a98 = local_1200;
  local_a60 = adStack_11f8[0];
  local_a28 = adStack_11f8[1];
  local_9f0 = adStack_11f8[2];
  local_9b8 = (double)local_11e0;
  local_980 = adStack_11d8[0];
  local_948 = adStack_11d8[1];
  auVar250 = vpcmpgtd_avx(auVar249,___xmm_00000003000000020000000100000000);
  auVar249 = vpcmpgtd_avx(auVar249,___xmm_00000007000000060000000500000004);
  local_910 = adStack_11d8[2];
  auVar172._16_16_ = auVar249;
  auVar172._0_16_ = auVar250;
  uVar26 = vmovmskps_avx(auVar172);
  local_a90[0] = (char)local_11c0;
  local_a58 = (char)(local_11c0 >> 8);
  local_a20 = (char)(local_11c0 >> 0x10);
  local_9e8 = (char)(local_11c0 >> 0x18);
  local_9b0[0] = (char)(local_11c0 >> 0x20);
  local_978[0] = (char)(local_11c0 >> 0x28);
  local_940[0] = (char)(local_11c0 >> 0x30);
  local_908[0] = (char)(local_11c0 >> 0x38);
  if (uVar26 != 0) {
    uVar28 = (ulonglong)(uVar26 & 0xff);
    do {
      if (uVar28 == 0) {
        uVar35 = 0x40;
      }
      else {
        uVar35 = 0;
        for (uVar17 = uVar28; (uVar17 & 1) == 0; uVar17 = uVar17 >> 1 | 0x8000000000000000) {
          uVar35 = uVar35 + 1;
        }
      }
      lVar21 = uVar35 * 0x38;
      cVar36 = param_6[2][0];
      cVar10 = local_a90[lVar21];
      if ((cVar36 == '\0') || (cVar10 == '\0')) {
        if (cVar10 == '\0') {
          cVar36 = param_6[2][0];
          uVar296 = *(undefined8 *)(param_6[1] + 0x10);
          uVar282 = *(undefined8 *)(param_6[1] + 8);
          uVar269 = *(undefined8 *)param_6[1];
          uVar245 = *(undefined8 *)(*param_6 + 0x10);
          uVar47 = *(undefined8 *)*param_6;
          uVar189 = *(undefined8 *)(*param_6 + 8);
        }
        else {
          uVar47 = *(undefined8 *)*(undefined1 (*) [24])(local_ac0 + lVar21);
          uVar189 = *(undefined8 *)(local_ac0 + lVar21 + 8);
          uVar245 = *(undefined8 *)(local_aa8 + lVar21 + -8);
          uVar269 = *(undefined8 *)(local_aa8 + lVar21);
          uVar282 = *(undefined8 *)(local_aa8 + lVar21 + 8);
          uVar296 = *(undefined8 *)(local_a90 + lVar21 + -8);
          cVar36 = cVar10;
        }
      }
      else {
        auVar173._24_8_ = 0;
        auVar173._0_24_ = *param_6;
        auVar243._24_8_ = 0;
        auVar243._0_24_ = *(undefined1 (*) [24])(local_ac0 + lVar21);
        auVar255 = vminpd_avx(auVar173,auVar243);
        uVar47 = auVar255._0_8_;
        auVar249 = vshufpd_avx(auVar255._0_16_,auVar255._0_16_,1);
        uVar189 = auVar249._0_8_;
        uVar245 = auVar255._16_8_;
        auVar277._24_8_ = 0;
        auVar277._0_24_ = param_6[1];
        auVar292._16_8_ = *(undefined8 *)(local_a90 + lVar21 + -8);
        auVar292._0_16_ = *(undefined1 (*) [16])(local_aa8 + lVar21);
        auVar292._24_8_ = 0;
        auVar255 = vmaxpd_avx(auVar277,auVar292);
        uVar269 = auVar255._0_8_;
        auVar249 = vshufpd_avx(auVar255._0_16_,auVar255._0_16_,1);
        uVar282 = auVar249._0_8_;
        uVar296 = auVar255._16_8_;
      }
      uVar28 = uVar28 & ~(1L << (uVar35 & 0x3f));
      *(undefined8 *)*param_6 = uVar47;
      *(undefined8 *)(*param_6 + 8) = uVar189;
      *(undefined8 *)(*param_6 + 0x10) = uVar245;
      *(undefined8 *)param_6[1] = uVar269;
      *(undefined8 *)(param_6[1] + 8) = uVar282;
      *(undefined8 *)(param_6[1] + 0x10) = uVar296;
      param_6[2][0] = cVar36;
    } while (uVar28 != 0);
  }
  return;
}

// BoxCalcBoundsFromTransformGroup_avx @ 140a72fa0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BoxCalcBoundsFromTransformGroup_avx
               (longlong param_1,longlong param_2,longlong param_3,double *param_4,
               undefined1 (*param_5) [24],uint param_6)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  double dVar17;
  char cVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  byte bVar29;
  byte bVar30;
  undefined4 uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  undefined4 uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  longlong lVar42;
  longlong lVar43;
  longlong lVar44;
  undefined4 uVar47;
  longlong lVar45;
  ulonglong uVar46;
  ulonglong uVar48;
  ulonglong uVar49;
  longlong lVar50;
  longlong lVar51;
  longlong lVar52;
  uint uVar53;
  uint uVar54;
  longlong lVar55;
  char cVar56;
  uint uVar57;
  ulonglong uVar58;
  ulonglong uVar59;
  longlong lVar60;
  longlong lVar61;
  undefined4 uVar62;
  longlong lVar63;
  longlong lVar64;
  longlong lVar65;
  longlong lVar66;
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  double dVar67;
  undefined8 uVar72;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  double dVar68;
  double dVar69;
  double dVar70;
  double dVar71;
  double dVar185;
  undefined1 auVar164 [32];
  undefined1 auVar165 [32];
  undefined1 auVar166 [32];
  undefined1 auVar167 [32];
  double dVar180;
  double dVar181;
  double dVar182;
  double dVar183;
  double dVar184;
  double dVar186;
  double dVar187;
  double dVar188;
  double dVar189;
  double dVar190;
  double dVar191;
  double dVar192;
  double dVar193;
  double dVar194;
  undefined1 auVar168 [32];
  undefined1 auVar169 [32];
  undefined1 auVar110 [16];
  undefined1 auVar170 [32];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar171 [32];
  undefined1 auVar172 [32];
  undefined1 auVar173 [32];
  undefined1 auVar174 [32];
  undefined1 auVar175 [32];
  undefined1 auVar176 [32];
  undefined1 auVar177 [32];
  undefined1 auVar178 [32];
  undefined1 auVar179 [32];
  undefined8 uVar195;
  undefined1 auVar196 [16];
  undefined1 auVar197 [16];
  undefined1 auVar198 [16];
  undefined1 auVar199 [16];
  undefined1 auVar200 [16];
  undefined1 auVar201 [16];
  undefined1 auVar202 [16];
  undefined1 auVar203 [16];
  undefined1 auVar204 [16];
  undefined1 auVar205 [16];
  undefined1 auVar206 [16];
  undefined1 auVar207 [16];
  undefined1 auVar208 [16];
  undefined1 auVar209 [16];
  undefined1 auVar210 [16];
  undefined1 auVar211 [16];
  undefined1 auVar212 [16];
  undefined1 auVar213 [16];
  undefined1 auVar214 [16];
  undefined1 auVar215 [16];
  undefined1 auVar216 [16];
  undefined1 auVar217 [16];
  undefined1 auVar218 [16];
  undefined1 auVar219 [16];
  undefined1 auVar220 [16];
  undefined1 auVar221 [16];
  undefined1 auVar222 [16];
  undefined1 auVar223 [16];
  undefined1 auVar224 [16];
  undefined1 auVar225 [16];
  undefined1 auVar226 [16];
  undefined1 auVar227 [16];
  undefined1 auVar228 [16];
  undefined1 auVar229 [16];
  undefined1 auVar230 [16];
  undefined1 auVar231 [16];
  undefined1 auVar232 [16];
  undefined1 auVar233 [16];
  undefined1 auVar234 [16];
  undefined1 auVar235 [16];
  undefined1 auVar236 [16];
  undefined1 auVar237 [16];
  undefined1 auVar238 [16];
  undefined1 auVar239 [16];
  undefined1 auVar240 [16];
  undefined1 auVar241 [16];
  undefined1 auVar242 [16];
  undefined1 auVar243 [16];
  undefined1 auVar244 [16];
  undefined1 auVar245 [16];
  undefined1 auVar246 [16];
  undefined1 auVar247 [16];
  undefined1 auVar248 [16];
  undefined1 auVar249 [16];
  undefined1 auVar250 [16];
  undefined1 auVar251 [16];
  undefined1 auVar252 [16];
  undefined1 auVar253 [16];
  undefined1 auVar254 [16];
  undefined1 auVar255 [16];
  undefined1 auVar256 [16];
  undefined1 auVar257 [16];
  undefined1 auVar258 [16];
  undefined1 auVar259 [16];
  undefined1 auVar260 [16];
  undefined1 auVar261 [16];
  undefined1 auVar262 [16];
  undefined1 auVar263 [16];
  undefined1 auVar264 [16];
  undefined1 auVar265 [32];
  undefined1 auVar266 [32];
  undefined1 auVar267 [32];
  undefined1 auVar268 [32];
  undefined1 auVar269 [32];
  undefined1 auVar270 [32];
  undefined1 auVar271 [32];
  undefined1 auVar272 [32];
  uint uVar273;
  undefined8 uVar274;
  uint uVar290;
  undefined1 auVar275 [16];
  undefined1 auVar276 [16];
  undefined1 auVar277 [16];
  undefined1 auVar278 [16];
  undefined1 auVar279 [16];
  undefined1 auVar280 [16];
  undefined1 auVar281 [16];
  undefined1 auVar282 [16];
  uint uVar289;
  uint uVar291;
  undefined1 auVar283 [16];
  uint uVar292;
  uint uVar293;
  uint uVar294;
  undefined1 auVar284 [32];
  undefined1 auVar285 [32];
  undefined1 auVar286 [32];
  uint uVar295;
  undefined1 auVar288 [32];
  double dVar296;
  undefined8 uVar297;
  undefined1 auVar298 [16];
  undefined1 auVar299 [16];
  undefined1 auVar300 [16];
  undefined1 auVar301 [16];
  double dVar311;
  undefined1 auVar302 [32];
  undefined1 auVar303 [32];
  double dVar310;
  double dVar312;
  undefined1 auVar304 [32];
  undefined1 auVar305 [32];
  undefined1 auVar306 [32];
  undefined1 auVar307 [32];
  undefined1 auVar308 [32];
  undefined1 auVar309 [32];
  double dVar313;
  undefined8 uVar314;
  undefined1 auVar315 [16];
  undefined1 auVar316 [16];
  undefined1 auVar317 [16];
  undefined1 auVar318 [16];
  undefined1 auVar319 [16];
  undefined1 auVar320 [16];
  undefined1 auVar321 [16];
  undefined1 auVar322 [32];
  double dVar326;
  double dVar328;
  undefined1 auVar323 [32];
  undefined1 auVar324 [32];
  undefined1 auVar325 [32];
  double dVar327;
  undefined1 in_ZMM4 [64];
  undefined8 uVar329;
  undefined1 auVar330 [16];
  undefined1 auVar331 [16];
  undefined1 auVar332 [32];
  undefined1 auVar333 [32];
  undefined1 auVar334 [16];
  undefined1 in_ZMM6 [64];
  undefined1 auVar335 [16];
  undefined1 auVar336 [32];
  undefined1 in_ZMM7 [64];
  double dVar337;
  undefined1 auVar338 [16];
  undefined1 auVar339 [16];
  undefined1 auVar340 [16];
  double dVar344;
  double dVar346;
  undefined1 auVar341 [32];
  undefined1 auVar342 [32];
  undefined1 auVar343 [32];
  double dVar345;
  undefined1 in_ZMM8 [64];
  double dVar347;
  double dVar348;
  undefined1 auVar349 [16];
  undefined1 auVar350 [16];
  double dVar356;
  double dVar357;
  double dVar359;
  double dVar360;
  double dVar361;
  undefined1 auVar351 [32];
  undefined1 auVar352 [32];
  undefined1 auVar353 [32];
  undefined1 auVar354 [32];
  undefined1 auVar355 [32];
  double dVar358;
  undefined1 in_ZMM9 [64];
  undefined1 auVar362 [16];
  undefined1 auVar363 [16];
  undefined1 auVar364 [16];
  undefined1 auVar365 [32];
  undefined1 auVar366 [32];
  undefined1 in_ZMM10 [64];
  undefined1 auVar367 [16];
  undefined1 auVar368 [32];
  undefined1 auVar369 [32];
  undefined1 auVar370 [32];
  undefined1 auVar371 [32];
  undefined1 auVar372 [64];
  undefined1 auVar373 [16];
  undefined1 auVar374 [32];
  undefined1 auVar375 [32];
  double dVar376;
  double dVar377;
  undefined1 auVar378 [32];
  undefined1 auVar379 [32];
  undefined1 auVar380 [32];
  double dVar385;
  double dVar387;
  double dVar388;
  double dVar389;
  undefined1 auVar381 [32];
  undefined1 auVar382 [32];
  undefined1 auVar383 [32];
  double dVar384;
  double dVar386;
  undefined1 in_ZMM13 [64];
  undefined1 auVar390 [32];
  undefined1 auVar391 [32];
  undefined1 auVar392 [32];
  undefined1 auVar393 [32];
  undefined1 auVar394 [32];
  undefined1 auVar395 [32];
  undefined1 in_ZMM14 [64];
  undefined1 auVar396 [16];
  undefined1 auVar397 [32];
  undefined1 auVar398 [32];
  undefined1 auVar399 [64];
  undefined1 local_18e0 [16];
  double dStack_18d0;
  double dStack_18c8;
  undefined1 local_1860 [16];
  double dStack_1850;
  double dStack_1848;
  undefined1 local_1820 [16];
  double dStack_1810;
  double dStack_1808;
  double local_1500;
  double dStack_14f8;
  double dStack_14f0;
  double dStack_14e8;
  double local_14c0;
  double dStack_14b8;
  double dStack_14b0;
  double dStack_14a8;
  double local_1480;
  double dStack_1478;
  double dStack_1470;
  double dStack_1468;
  double local_1320;
  double dStack_1318;
  double dStack_1310;
  double dStack_1308;
  double local_1300;
  double dStack_12f8;
  double dStack_12f0;
  double dStack_12e8;
  double local_12e0;
  double dStack_12d8;
  double dStack_12d0;
  double dStack_12c8;
  undefined1 local_11c0 [32];
  undefined1 local_11a0 [32];
  undefined1 local_1180 [32];
  undefined1 local_1160 [32];
  undefined1 local_1140 [32];
  undefined1 local_1120 [32];
  undefined1 local_1100 [32];
  undefined1 local_10e0 [32];
  undefined1 local_10c0 [16];
  undefined1 auStack_10b0 [16];
  undefined1 local_10a0 [16];
  undefined1 auStack_1090 [16];
  undefined1 local_1080 [8];
  double adStack_1078 [3];
  undefined1 local_1060 [8];
  double adStack_1058 [3];
  undefined8 local_1040;
  double adStack_1038 [7];
  undefined1 local_1000 [8];
  double adStack_ff8 [3];
  undefined1 local_fe0 [8];
  double adStack_fd8 [3];
  undefined1 local_fc0 [16];
  double dStack_fb0;
  double dStack_fa8;
  undefined1 local_fa0 [16];
  double dStack_f90;
  double dStack_f88;
  undefined1 local_f80 [16];
  double dStack_f70;
  double dStack_f68;
  undefined1 local_f60 [16];
  double dStack_f50;
  double dStack_f48;
  undefined1 local_f40 [32];
  undefined1 local_f20 [32];
  undefined1 local_f00 [16];
  double dStack_ef0;
  double dStack_ee8;
  undefined1 local_ee0 [16];
  double dStack_ed0;
  double dStack_ec8;
  undefined1 local_ec0 [16];
  double dStack_eb0;
  double dStack_ea8;
  undefined1 local_ea0 [16];
  double dStack_e90;
  double dStack_e88;
  undefined1 local_e80;
  undefined1 uStack_e7f;
  undefined1 uStack_e7e;
  undefined1 uStack_e7d;
  undefined1 uStack_e7c;
  undefined1 uStack_e7b;
  undefined1 uStack_e7a;
  undefined1 uStack_e79;
  double dStack_e78;
  double dStack_e70;
  double dStack_e68;
  double local_e60;
  double dStack_e58;
  double dStack_e50;
  double dStack_e48;
  double local_e00;
  double dStack_df8;
  double dStack_df0;
  double dStack_de8;
  double local_de0;
  double dStack_dd8;
  double dStack_dd0;
  double dStack_dc8;
  double local_dc0;
  double dStack_db8;
  double dStack_db0;
  double dStack_da8;
  double local_da0;
  double dStack_d98;
  double dStack_d90;
  double dStack_d88;
  double local_d80;
  double dStack_d78;
  double dStack_d70;
  double dStack_d68;
  double local_d60;
  double dStack_d58;
  double dStack_d50;
  double dStack_d48;
  double local_d00;
  double dStack_cf8;
  double dStack_cf0;
  double dStack_ce8;
  double local_ce0;
  double dStack_cd8;
  double dStack_cd0;
  double dStack_cc8;
  double local_cc0;
  double dStack_cb8;
  double dStack_cb0;
  double dStack_ca8;
  double local_ca0;
  double dStack_c98;
  double dStack_c90;
  double dStack_c88;
  double local_c80;
  double dStack_c78;
  double dStack_c70;
  double dStack_c68;
  double local_c60;
  double dStack_c58;
  double dStack_c50;
  double dStack_c48;
  undefined1 local_c00 [32];
  undefined1 local_be0 [16];
  double dStack_bd0;
  double dStack_bc8;
  undefined1 local_bc0 [32];
  undefined1 local_ba0 [32];
  undefined1 local_b80 [32];
  undefined1 local_b60 [32];
  undefined1 local_b40 [32];
  undefined1 local_b20 [32];
  undefined1 local_b00 [32];
  undefined1 local_ad0 [16];
  undefined1 local_ac0 [16];
  undefined8 local_ab0;
  undefined1 local_aa8 [16];
  undefined8 local_a98;
  char local_a90 [8];
  undefined1 local_a88 [16];
  undefined8 local_a78;
  undefined1 local_a70 [16];
  undefined8 local_a60;
  undefined1 local_a58;
  undefined1 local_a50 [16];
  undefined8 local_a40;
  undefined1 local_a38 [16];
  undefined8 local_a28;
  undefined1 local_a20;
  undefined1 local_a18 [16];
  undefined8 local_a08;
  undefined1 local_a00 [16];
  undefined8 local_9f0;
  undefined1 local_9e8;
  undefined1 local_9e0 [16];
  undefined8 local_9d0;
  undefined1 local_9c8 [16];
  double local_9b8;
  undefined1 local_9b0 [8];
  undefined1 local_9a8 [16];
  double local_998;
  undefined1 local_990 [16];
  double local_980;
  undefined1 local_978 [8];
  undefined1 local_970 [16];
  double local_960;
  undefined1 local_958 [16];
  double local_948;
  undefined1 local_940 [8];
  undefined1 local_938 [16];
  double local_928;
  undefined1 local_920 [16];
  double local_910;
  undefined1 local_908 [8];
  undefined1 local_900 [16];
  undefined1 local_8f0 [16];
  undefined1 local_8e0 [16];
  undefined1 local_8d0 [16];
  undefined1 local_8c0 [16];
  undefined1 local_8b0 [16];
  undefined1 local_8a0 [16];
  undefined1 local_890 [16];
  undefined1 local_880 [16];
  undefined1 local_870 [16];
  undefined1 local_860 [16];
  undefined1 local_850 [16];
  undefined1 local_840 [16];
  undefined1 local_830 [16];
  undefined1 local_820 [16];
  undefined1 local_810 [16];
  undefined1 local_800 [16];
  undefined1 local_7f0 [16];
  undefined1 local_7e0 [16];
  undefined1 local_7d0 [16];
  undefined1 local_7c0 [16];
  undefined1 local_7b0 [16];
  undefined1 local_7a0 [16];
  undefined1 local_790 [16];
  undefined1 local_780 [16];
  undefined1 local_770 [16];
  undefined1 local_760 [16];
  undefined1 local_750 [16];
  undefined1 local_740 [16];
  undefined1 local_730 [16];
  undefined1 local_720 [16];
  undefined1 local_710 [16];
  undefined1 local_700 [16];
  undefined1 local_6f0 [16];
  undefined1 local_6e0 [16];
  undefined1 local_6d0 [16];
  undefined1 local_6c0 [16];
  undefined1 local_6b0 [16];
  undefined1 local_6a0 [16];
  undefined1 local_690 [16];
  undefined1 local_680 [16];
  undefined1 local_670 [16];
  undefined1 local_660 [16];
  undefined1 local_650 [16];
  undefined1 local_640 [16];
  undefined1 local_630 [16];
  undefined1 local_620 [16];
  undefined1 local_610 [16];
  undefined1 local_600 [16];
  undefined1 local_5f0 [16];
  undefined1 local_5e0 [16];
  undefined1 local_5d0 [16];
  undefined1 local_5c0 [16];
  undefined1 local_5b0 [16];
  undefined1 local_5a0 [16];
  undefined1 local_590 [16];
  undefined1 local_580 [16];
  undefined1 local_570 [16];
  undefined1 local_560 [16];
  undefined1 local_550 [16];
  undefined1 local_540 [16];
  undefined1 local_530 [16];
  undefined1 local_520 [16];
  undefined1 local_510 [16];
  undefined1 local_500 [16];
  undefined1 local_4f0 [16];
  undefined1 local_4e0 [16];
  undefined1 local_4d0 [16];
  undefined1 local_4c0 [16];
  undefined1 local_4b0 [16];
  undefined1 local_4a0 [16];
  undefined1 local_490 [16];
  undefined1 local_480 [16];
  undefined1 local_470 [16];
  undefined1 local_460 [16];
  undefined1 local_450 [16];
  undefined1 local_440 [16];
  undefined1 local_430 [16];
  undefined1 local_420 [16];
  undefined1 local_410 [16];
  undefined1 local_400 [16];
  undefined1 local_3f0 [16];
  undefined1 local_3e0 [16];
  undefined1 local_3d0 [16];
  undefined1 local_3c0 [16];
  undefined1 local_3b0 [16];
  undefined1 local_3a0 [16];
  undefined1 local_390 [16];
  undefined1 local_380 [16];
  undefined1 local_370 [16];
  undefined1 local_360 [16];
  undefined1 local_350 [16];
  undefined1 local_340 [16];
  undefined1 local_330 [16];
  undefined1 local_320 [16];
  undefined1 local_310 [16];
  undefined1 local_300 [16];
  undefined1 local_2f0 [16];
  undefined1 local_2e0 [16];
  undefined1 local_2d0 [16];
  undefined1 local_2c0 [16];
  undefined1 local_2b0 [16];
  undefined1 local_2a0 [16];
  undefined1 local_290 [16];
  undefined1 local_280 [16];
  undefined1 local_270 [16];
  undefined1 local_260 [16];
  undefined1 local_250 [16];
  undefined1 local_240 [16];
  undefined1 local_230 [16];
  undefined1 local_220 [16];
  undefined1 local_210 [16];
  undefined1 local_200 [16];
  undefined1 local_1f0 [16];
  undefined1 local_1e0 [16];
  undefined1 local_1d0 [16];
  undefined1 local_1c0 [16];
  undefined1 local_1b0 [16];
  undefined1 local_1a0 [16];
  undefined1 local_190 [16];
  undefined1 local_180 [16];
  undefined1 local_170 [16];
  undefined1 local_160 [16];
  undefined1 local_150 [16];
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  undefined1 local_120 [16];
  undefined1 local_110 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined8 uStack_48;
  undefined1 auVar287 [32];
  
  local_d8 = in_ZMM7._0_16_;
  uStack_48 = 0x140a72fb6;
  local_68 = in_ZMM14._0_16_;
  local_78 = in_ZMM13._0_16_;
  local_a8 = in_ZMM10._0_16_;
  local_b8 = in_ZMM9._0_16_;
  local_c8 = in_ZMM8._0_16_;
  local_e8 = in_ZMM6._0_16_;
  uVar27 = param_6 + 7;
  if (-1 < (int)param_6) {
    uVar27 = param_6;
  }
  auVar196._0_12_ = ZEXT812(0);
  auVar196._12_4_ = 0;
  auVar372 = ZEXT1664(auVar196);
  _local_1080 = ZEXT1632(auVar196);
  local_1100 = ZEXT1632(auVar196);
  local_11c0 = ZEXT1632(auVar196);
  local_1040 = 0;
  local_11a0 = local_11c0;
  local_1180 = local_11c0;
  local_1160 = local_11c0;
  local_1140 = local_11c0;
  local_1120 = local_11c0;
  local_10e0 = local_1100;
  _local_10c0 = local_1100;
  _local_10a0 = local_1100;
  _local_1060 = _local_1080;
  if ((int)(uVar27 & 0xfffffff8) < 1) {
    lVar60 = 0;
  }
  else {
    lVar60 = 0;
    auVar399 = ZEXT1664((undefined1  [16])0x0);
    do {
      auVar77 = vpshufd_avx(ZEXT416((uint)lVar60),0);
      auVar196 = vpslld_avx(auVar77,3);
      auVar196 = vpsubd_avx(auVar196,auVar77);
      uVar46 = (ulonglong)auVar196._0_4_;
      uVar49 = (ulonglong)auVar196._4_4_;
      uVar48 = (ulonglong)auVar196._8_4_;
      uVar58 = (ulonglong)auVar196._12_4_;
      auVar196 = vpinsrb_avx(ZEXT116(*(byte *)(param_3 + 0x30 + uVar46 * 8)),
                             (uint)*(byte *)(param_3 + 0x68 + uVar49 * 8),1);
      auVar196 = vpinsrb_avx(auVar196,(uint)*(byte *)(param_3 + 0xa0 + uVar48 * 8),2);
      auVar196 = vpinsrb_avx(auVar196,(uint)*(byte *)(param_3 + 0xd8 + uVar58 * 8),3);
      auVar196 = vpinsrb_avx(auVar196,(uint)*(byte *)(param_3 + 0x110 + uVar46 * 8),4);
      auVar196 = vpinsrb_avx(auVar196,(uint)*(byte *)(param_3 + 0x148 + uVar49 * 8),5);
      auVar196 = vpinsrb_avx(auVar196,(uint)*(byte *)(param_3 + 0x180 + uVar48 * 8),6);
      auVar275 = vpinsrb_avx(auVar196,(uint)*(byte *)(param_3 + 0x1b8 + uVar58 * 8),7);
      uVar59 = (ulonglong)((uint)lVar60 * 4 & 0xffffffe0);
      auVar300 = vpcmpeqd_avx(in_ZMM4._0_16_,in_ZMM4._0_16_);
      in_ZMM4 = ZEXT1664(auVar300);
      auVar196 = vpcmpeqd_avx(auVar300,*(undefined1 (*) [16])(param_1 + 0x10 + uVar59));
      auVar110 = vpcmpeqd_avx(auVar300,*(undefined1 (*) [16])(param_1 + uVar59));
      auVar196 = vpackssdw_avx(auVar110,auVar196);
      auVar396 = auVar399._0_16_;
      auVar110 = vpcmpeqb_avx(auVar396,auVar275);
      auVar110 = vpmovsxbw_avx(auVar110 ^ auVar300);
      local_ad0 = vpandn_avx(auVar196,auVar110);
      if ((((((((((((((((SUB161(local_ad0 >> 7,0) & 1) != 0 || (SUB161(local_ad0 >> 0xf,0) & 1) != 0
                       ) || (SUB161(local_ad0 >> 0x17,0) & 1) != 0) ||
                     (SUB161(local_ad0 >> 0x1f,0) & 1) != 0) ||
                    (SUB161(local_ad0 >> 0x27,0) & 1) != 0) ||
                   (SUB161(local_ad0 >> 0x2f,0) & 1) != 0) || (SUB161(local_ad0 >> 0x37,0) & 1) != 0
                  ) || (SUB161(local_ad0 >> 0x3f,0) & 1) != 0) ||
                (SUB161(local_ad0 >> 0x47,0) & 1) != 0) || (SUB161(local_ad0 >> 0x4f,0) & 1) != 0)
              || (SUB161(local_ad0 >> 0x57,0) & 1) != 0) || (SUB161(local_ad0 >> 0x5f,0) & 1) != 0)
            || (SUB161(local_ad0 >> 0x67,0) & 1) != 0) || (SUB161(local_ad0 >> 0x6f,0) & 1) != 0) ||
          (SUB161(local_ad0 >> 0x77,0) & 1) != 0) || local_ad0[0xf] < '\0') {
        local_c00._0_8_ = lVar60;
        auVar110._8_8_ = 0;
        auVar110._0_8_ = *(ulonglong *)(param_3 + 0x150 + uVar48 * 8);
        auVar196 = vmovhps_avx(auVar110,*(undefined8 *)(param_3 + 0x188 + uVar58 * 8));
        auVar300._8_8_ = 0;
        auVar300._0_8_ = *(ulonglong *)(param_3 + 0xe0 + uVar46 * 8);
        auVar110 = vmovhps_avx(auVar300,*(undefined8 *)(param_3 + 0x118 + uVar49 * 8));
        auVar164._16_16_ = auVar196;
        auVar164._0_16_ = auVar110;
        auVar275._8_8_ = 0;
        auVar275._0_8_ = *(ulonglong *)(param_3 + 0x70 + uVar48 * 8);
        auVar298._8_8_ = 0;
        auVar298._0_8_ = *(ulonglong *)(param_3 + 0x78 + uVar48 * 8);
        auVar315._8_8_ = 0;
        auVar315._0_8_ = *(ulonglong *)(param_3 + 0x80 + uVar48 * 8);
        auVar73._8_8_ = 0;
        auVar73._0_8_ = *(ulonglong *)(param_3 + 0x88 + uVar48 * 8);
        auVar300 = vmovhps_avx(auVar275,*(undefined8 *)(param_3 + 0xa8 + uVar58 * 8));
        auVar330._8_8_ = 0;
        auVar330._0_8_ = *(ulonglong *)(param_3 + uVar46 * 8);
        auVar334._8_8_ = 0;
        auVar334._0_8_ = *(ulonglong *)(param_3 + 8 + uVar46 * 8);
        auVar275 = vmovhps_avx(auVar330,*(undefined8 *)(param_3 + 0x38 + uVar49 * 8));
        auVar335._8_8_ = 0;
        auVar335._0_8_ = *(ulonglong *)(param_3 + 0x10 + uVar46 * 8);
        auVar338._8_8_ = 0;
        auVar338._0_8_ = *(ulonglong *)(param_3 + 0x158 + uVar48 * 8);
        auVar330 = vmovhps_avx(auVar338,*(undefined8 *)(param_3 + 400 + uVar58 * 8));
        auVar349._8_8_ = 0;
        auVar349._0_8_ = *(ulonglong *)(param_3 + 0x18 + uVar46 * 8);
        auVar362._8_8_ = 0;
        auVar362._0_8_ = *(ulonglong *)(param_3 + 0xe8 + uVar46 * 8);
        auVar338 = vmovhps_avx(auVar362,*(undefined8 *)(param_3 + 0x120 + uVar49 * 8));
        auVar298 = vmovhps_avx(auVar298,*(undefined8 *)(param_3 + 0xb0 + uVar58 * 8));
        auVar334 = vmovhps_avx(auVar334,*(undefined8 *)(param_3 + 0x40 + uVar49 * 8));
        auVar284._16_16_ = auVar300;
        auVar284._0_16_ = auVar275;
        auVar276._8_8_ = 0;
        auVar276._0_8_ = *(ulonglong *)(param_3 + 0x160 + uVar48 * 8);
        auVar276 = vmovhps_avx(auVar276,*(undefined8 *)(param_3 + 0x198 + uVar58 * 8));
        auVar332._16_16_ = auVar330;
        auVar332._0_16_ = auVar338;
        auVar331._8_8_ = 0;
        auVar331._0_8_ = *(ulonglong *)(param_3 + 0xf0 + uVar46 * 8);
        auVar277 = vmovhps_avx(auVar331,*(undefined8 *)(param_3 + 0x128 + uVar49 * 8));
        auVar75 = vmovhps_avx(auVar315,*(undefined8 *)(param_3 + 0xb8 + uVar58 * 8));
        auVar74 = vmovhps_avx(auVar335,*(undefined8 *)(param_3 + 0x48 + uVar49 * 8));
        auVar302._16_16_ = auVar298;
        auVar302._0_16_ = auVar334;
        auVar299._8_8_ = 0;
        auVar299._0_8_ = *(ulonglong *)(param_3 + 0x168 + uVar48 * 8);
        auVar76 = vmovhps_avx(auVar299,*(undefined8 *)(param_3 + 0x1a0 + uVar58 * 8));
        local_b00._16_16_ = auVar276;
        local_b00._0_16_ = auVar277;
        auVar277._8_8_ = 0;
        auVar277._0_8_ = *(ulonglong *)(param_3 + 0xf8 + uVar46 * 8);
        auVar276 = vmovhps_avx(auVar277,*(undefined8 *)(param_3 + 0x130 + uVar49 * 8));
        auVar277 = vmovhps_avx(auVar73,*(undefined8 *)(param_3 + 0xc0 + uVar58 * 8));
        auVar73 = vmovhps_avx(auVar349,*(undefined8 *)(param_3 + 0x50 + uVar49 * 8));
        local_b20._16_16_ = auVar75;
        local_b20._0_16_ = auVar74;
        auVar316._8_8_ = 0;
        auVar316._0_8_ = *(ulonglong *)(param_3 + 0x170 + uVar48 * 8);
        auVar75 = vmovhps_avx(auVar316,*(undefined8 *)(param_3 + 0x1a8 + uVar58 * 8));
        local_b40._16_16_ = auVar76;
        local_b40._0_16_ = auVar276;
        auVar278._8_8_ = 0;
        auVar278._0_8_ = *(ulonglong *)(param_3 + 0x100 + uVar46 * 8);
        auVar276 = vmovhps_avx(auVar278,*(undefined8 *)(param_3 + 0x138 + uVar49 * 8));
        auVar165._16_16_ = auVar277;
        auVar165._0_16_ = auVar73;
        auVar74._8_8_ = 0;
        auVar74._0_8_ = *(ulonglong *)(param_3 + 0x90 + uVar48 * 8);
        auVar74 = vmovhps_avx(auVar74,*(undefined8 *)(param_3 + 200 + uVar58 * 8));
        local_b60._16_16_ = auVar75;
        local_b60._0_16_ = auVar276;
        auVar279._8_8_ = 0;
        auVar279._0_8_ = *(ulonglong *)(param_3 + 0x20 + uVar46 * 8);
        auVar276 = vmovhps_avx(auVar279,*(undefined8 *)(param_3 + 0x58 + uVar49 * 8));
        auVar166._16_16_ = auVar74;
        auVar166._0_16_ = auVar276;
        auVar75._8_8_ = 0;
        auVar75._0_8_ = *(ulonglong *)(param_3 + 0x178 + uVar48 * 8);
        auVar75 = vmovhps_avx(auVar75,*(undefined8 *)(param_3 + 0x1b0 + uVar58 * 8));
        auVar280._8_8_ = 0;
        auVar280._0_8_ = *(ulonglong *)(param_3 + 0x108 + uVar46 * 8);
        auVar76 = vmovhps_avx(auVar280,*(undefined8 *)(param_3 + 0x140 + uVar49 * 8));
        local_b80._16_16_ = auVar75;
        local_b80._0_16_ = auVar76;
        auVar76._8_8_ = 0;
        auVar76._0_8_ = *(ulonglong *)(param_3 + 0x98 + uVar48 * 8);
        auVar75 = vmovhps_avx(auVar76,*(undefined8 *)(param_3 + 0xd0 + uVar58 * 8));
        auVar281._8_8_ = 0;
        auVar281._0_8_ = *(ulonglong *)(param_3 + 0x28 + uVar46 * 8);
        auVar76 = vmovhps_avx(auVar281,*(undefined8 *)(param_3 + 0x60 + uVar49 * 8));
        local_ba0._16_16_ = auVar75;
        local_ba0._0_16_ = auVar76;
        auVar76 = vpmovsxwd_avx(local_ad0);
        auVar78 = vpunpckhwd_avx(local_ad0,local_ad0);
        register0x00001310 = auVar78;
        local_be0 = auVar76;
        auVar75 = vpacksswb_avx(local_ad0,local_ad0);
        bVar30 = SUB161(auVar75 >> 7,0) & 1;
        bVar19 = SUB161(auVar75 >> 0xf,0) & 1;
        bVar20 = SUB161(auVar75 >> 0x17,0) & 1;
        bVar21 = SUB161(auVar75 >> 0x1f,0) & 1;
        bVar22 = SUB161(auVar75 >> 0x27,0) & 1;
        bVar23 = SUB161(auVar75 >> 0x2f,0) & 1;
        bVar24 = SUB161(auVar75 >> 0x37,0) & 1;
        bVar25 = SUB161(auVar75 >> 0x3f,0) << 7;
        auVar282 = vpslld_avx(auVar77,7);
        auVar77 = vpslld_avx(auVar77,7);
        auVar75 = vpunpckhdq_avx(auVar77,auVar396);
        auVar77 = vpmovzxdq_avx(auVar77);
        auVar167._16_16_ = auVar75;
        auVar167._0_16_ = auVar77;
        auVar396 = vpunpckhdq_avx(auVar282,auVar396);
        auVar77 = vpmovzxdq_avx(auVar282);
        auVar265._16_16_ = auVar396;
        auVar265._0_16_ = auVar77;
        auVar77 = vshufps_avx(auVar76,auVar76,0x50);
        auVar396 = vshufps_avx(auVar76,auVar76,0xfa);
        auVar303._16_16_ = auVar396;
        auVar303._0_16_ = auVar77;
        auVar270 = auVar372._0_32_;
        auVar265 = vblendvps_avx(auVar270,auVar265,auVar303);
        auVar169 = vblendvps_avx(auVar270,
                                 ___ymm_0000000000000180000000000000010000000000000000800000000000000000
                                 ,auVar303);
        lVar60 = vmovlps_avx(auVar169._0_16_);
        auVar77 = vshufps_avx(auVar78,auVar78,0x50);
        auVar396 = vshufps_avx(auVar78,auVar78,0xfa);
        local_bc0 = ZEXT1632(auVar77);
        auVar322._16_16_ = auVar396;
        auVar322._0_16_ = auVar77;
        auVar167 = vblendvps_avx(auVar270,auVar167,auVar322);
        auVar380 = vblendvps_avx(auVar270,
                                 ___ymm_0000000000000380000000000000030000000000000002800000000000000200
                                 ,auVar322);
        auVar323 = vblendvps_avx(auVar270,
                                 ___ymm_0000000000000188000000000000010800000000000000880000000000000008
                                 ,auVar303);
        auVar285 = vblendvps_avx(auVar270,
                                 ___ymm_0000000000000388000000000000030800000000000002880000000000000208
                                 ,auVar322);
        lVar43 = vmovlps_avx(auVar285._0_16_);
        auVar168 = vblendvps_avx(auVar270,
                                 ___ymm_0000000000000190000000000000011000000000000000900000000000000010
                                 ,auVar303);
        lVar44 = vmovlps_avx(auVar168._0_16_);
        auVar266 = vblendvps_avx(auVar270,
                                 ___ymm_0000000000000390000000000000031000000000000002900000000000000210
                                 ,auVar322);
        lVar45 = vmovlps_avx(auVar266._0_16_);
        auVar304 = vblendvps_avx(auVar270,
                                 ___ymm_0000000000000198000000000000011800000000000000980000000000000018
                                 ,auVar303);
        auVar333 = vblendvps_avx(auVar270,
                                 ___ymm_0000000000000398000000000000031800000000000002980000000000000218
                                 ,auVar322);
        lVar52 = vmovlps_avx(auVar333._0_16_);
        auVar341 = vblendvps_avx(auVar270,
                                 ___ymm_00000000000001a0000000000000012000000000000000a00000000000000020
                                 ,auVar303);
        lVar55 = vmovlps_avx(auVar341._0_16_);
        auVar342 = vblendvps_avx(auVar270,
                                 ___ymm_00000000000003a0000000000000032000000000000002a00000000000000220
                                 ,auVar322);
        lVar61 = vmovlps_avx(auVar342._0_16_);
        auVar351 = vblendvps_avx(auVar270,
                                 ___ymm_00000000000001a8000000000000012800000000000000a80000000000000028
                                 ,auVar303);
        auVar352 = vblendvps_avx(auVar270,
                                 ___ymm_00000000000003a8000000000000032800000000000002a80000000000000228
                                 ,auVar322);
        lVar1 = vmovlps_avx(auVar352._0_16_);
        auVar365 = vblendvps_avx(auVar270,
                                 ___ymm_00000000000001b0000000000000013000000000000000b00000000000000030
                                 ,auVar303);
        lVar2 = vmovlps_avx(auVar365._0_16_);
        auVar368 = vblendvps_avx(auVar270,
                                 ___ymm_00000000000003b0000000000000033000000000000002b00000000000000230
                                 ,auVar322);
        lVar3 = vmovlps_avx(auVar368._0_16_);
        auVar369 = vblendvps_avx(auVar270,
                                 ___ymm_00000000000001b8000000000000013800000000000000b80000000000000038
                                 ,auVar303);
        auVar378 = vblendvps_avx(auVar270,
                                 ___ymm_00000000000003b8000000000000033800000000000002b80000000000000238
                                 ,auVar322);
        lVar4 = vmovlps_avx(auVar378._0_16_);
        auVar379 = vblendvps_avx(auVar270,
                                 ___ymm_00000000000001c0000000000000014000000000000000c00000000000000040
                                 ,auVar303);
        lVar5 = vmovlps_avx(auVar379._0_16_);
        auVar390 = vblendvps_avx(auVar270,
                                 ___ymm_00000000000003c0000000000000034000000000000002c00000000000000240
                                 ,auVar322);
        lVar6 = vmovlps_avx(auVar390._0_16_);
        auVar397 = vblendvps_avx(auVar270,
                                 ___ymm_00000000000001c8000000000000014800000000000000c80000000000000048
                                 ,auVar303);
        auVar267 = vblendvps_avx(auVar270,
                                 ___ymm_00000000000003c8000000000000034800000000000002c80000000000000248
                                 ,auVar322);
        lVar7 = vmovlps_avx(auVar267._0_16_);
        auVar391 = vblendvps_avx(auVar270,
                                 ___ymm_00000000000001d0000000000000015000000000000000d00000000000000050
                                 ,auVar303);
        lVar8 = vmovlps_avx(auVar391._0_16_);
        auVar366 = vblendvps_avx(auVar270,
                                 ___ymm_00000000000003d0000000000000035000000000000002d00000000000000250
                                 ,auVar322);
        lVar9 = vmovlps_avx(auVar366._0_16_);
        auVar268 = vblendvps_avx(auVar270,
                                 ___ymm_00000000000001d8000000000000015800000000000000d80000000000000058
                                 ,auVar303);
        auVar286 = vblendvps_avx(auVar270,
                                 ___ymm_00000000000003d8000000000000035800000000000002d80000000000000258
                                 ,auVar322);
        lVar10 = vmovlps_avx(auVar286._0_16_);
        auVar392 = vblendvps_avx(auVar270,
                                 ___ymm_00000000000001e0000000000000016000000000000000e00000000000000060
                                 ,auVar303);
        lVar11 = vmovlps_avx(auVar392._0_16_);
        auVar170 = vblendvps_avx(auVar270,
                                 ___ymm_00000000000003e0000000000000036000000000000002e00000000000000260
                                 ,auVar322);
        lVar12 = vmovlps_avx(auVar170._0_16_);
        auVar305 = vblendvps_avx(auVar270,
                                 ___ymm_00000000000001e8000000000000016800000000000000e80000000000000068
                                 ,auVar303);
        auVar171 = vblendvps_avx(auVar270,
                                 ___ymm_00000000000003e8000000000000036800000000000002e80000000000000268
                                 ,auVar322);
        lVar13 = vmovlps_avx(auVar171._0_16_);
        auVar172 = vblendvps_avx(auVar270,
                                 ___ymm_00000000000001f0000000000000017000000000000000f00000000000000070
                                 ,auVar303);
        lVar14 = vmovlps_avx(auVar172._0_16_);
        auVar269 = vblendvps_avx(auVar270,
                                 ___ymm_00000000000003f0000000000000037000000000000002f00000000000000270
                                 ,auVar322);
        lVar15 = vmovlps_avx(auVar269._0_16_);
        auVar303 = vblendvps_avx(auVar270,
                                 ___ymm_00000000000001f8000000000000017800000000000000f80000000000000078
                                 ,auVar303);
        lVar65 = auVar167._16_8_ + param_2;
        lVar50 = auVar167._24_8_ + param_2;
        auVar77._8_8_ = 0;
        auVar77._0_8_ = *(ulonglong *)(auVar380._16_8_ + lVar65);
        local_4d0 = vmovhps_avx(auVar77,*(undefined8 *)(auVar380._24_8_ + lVar50));
        lVar42 = auVar167._0_8_ + param_2;
        lVar51 = auVar167._8_8_ + param_2;
        auVar78._8_8_ = 0;
        auVar78._0_8_ = *(ulonglong *)(auVar380._0_8_ + lVar42);
        local_4e0 = vmovhps_avx(auVar78,*(undefined8 *)(auVar380._8_8_ + lVar51));
        lVar63 = auVar265._0_8_ + param_2;
        auVar167 = vblendvps_avx(auVar270,
                                 ___ymm_00000000000003f8000000000000037800000000000002f80000000000000278
                                 ,auVar322);
        lVar16 = vmovlps_avx(auVar167._0_16_);
        auVar282._8_8_ = 0;
        auVar282._0_8_ = *(ulonglong *)(lVar60 + lVar63);
        lVar66 = auVar265._8_8_ + param_2;
        local_500 = vmovhps_avx(auVar282,*(undefined8 *)(auVar169._8_8_ + lVar66));
        lVar60 = auVar265._16_8_ + param_2;
        lVar64 = auVar265._24_8_ + param_2;
        auVar197._8_8_ = 0;
        auVar197._0_8_ = *(ulonglong *)(auVar169._16_8_ + lVar60);
        local_4f0 = vmovhps_avx(auVar197,*(undefined8 *)(auVar169._24_8_ + lVar64));
        auVar198._8_8_ = 0;
        auVar198._0_8_ = *(ulonglong *)(auVar323._0_8_ + lVar63);
        local_4c0 = vmovhps_avx(auVar198,*(undefined8 *)(auVar323._8_8_ + lVar66));
        auVar79._8_8_ = 0;
        auVar79._0_8_ = *(ulonglong *)(auVar285._16_8_ + lVar65);
        local_490 = vmovhps_avx(auVar79,*(undefined8 *)(auVar285._24_8_ + lVar50));
        auVar80._8_8_ = 0;
        auVar80._0_8_ = *(ulonglong *)(lVar43 + lVar42);
        local_4a0 = vmovhps_avx(auVar80,*(undefined8 *)(auVar285._8_8_ + lVar51));
        auVar81._8_8_ = 0;
        auVar81._0_8_ = *(ulonglong *)(auVar323._16_8_ + lVar60);
        local_4b0 = vmovhps_avx(auVar81,*(undefined8 *)(auVar323._24_8_ + lVar64));
        auVar82._8_8_ = 0;
        auVar82._0_8_ = *(ulonglong *)(lVar44 + lVar63);
        local_480 = vmovhps_avx(auVar82,*(undefined8 *)(auVar168._8_8_ + lVar66));
        auVar199._8_8_ = 0;
        auVar199._0_8_ = *(ulonglong *)(auVar266._16_8_ + lVar65);
        local_450 = vmovhps_avx(auVar199,*(undefined8 *)(auVar266._24_8_ + lVar50));
        auVar200._8_8_ = 0;
        auVar200._0_8_ = *(ulonglong *)(lVar45 + lVar42);
        local_460 = vmovhps_avx(auVar200,*(undefined8 *)(auVar266._8_8_ + lVar51));
        auVar201._8_8_ = 0;
        auVar201._0_8_ = *(ulonglong *)(auVar168._16_8_ + lVar60);
        local_470 = vmovhps_avx(auVar201,*(undefined8 *)(auVar168._24_8_ + lVar64));
        auVar202._8_8_ = 0;
        auVar202._0_8_ = *(ulonglong *)(auVar304._0_8_ + lVar63);
        local_440 = vmovhps_avx(auVar202,*(undefined8 *)(auVar304._8_8_ + lVar66));
        auVar83._8_8_ = 0;
        auVar83._0_8_ = *(ulonglong *)(auVar333._16_8_ + lVar65);
        local_410 = vmovhps_avx(auVar83,*(undefined8 *)(auVar333._24_8_ + lVar50));
        auVar84._8_8_ = 0;
        auVar84._0_8_ = *(ulonglong *)(lVar52 + lVar42);
        local_420 = vmovhps_avx(auVar84,*(undefined8 *)(auVar333._8_8_ + lVar51));
        auVar85._8_8_ = 0;
        auVar85._0_8_ = *(ulonglong *)(auVar304._16_8_ + lVar60);
        local_430 = vmovhps_avx(auVar85,*(undefined8 *)(auVar304._24_8_ + lVar64));
        auVar86._8_8_ = 0;
        auVar86._0_8_ = *(ulonglong *)(lVar55 + lVar63);
        local_400 = vmovhps_avx(auVar86,*(undefined8 *)(auVar341._8_8_ + lVar66));
        auVar203._8_8_ = 0;
        auVar203._0_8_ = *(ulonglong *)(auVar342._16_8_ + lVar65);
        local_3d0 = vmovhps_avx(auVar203,*(undefined8 *)(auVar342._24_8_ + lVar50));
        auVar204._8_8_ = 0;
        auVar204._0_8_ = *(ulonglong *)(lVar61 + lVar42);
        local_3e0 = vmovhps_avx(auVar204,*(undefined8 *)(auVar342._8_8_ + lVar51));
        auVar205._8_8_ = 0;
        auVar205._0_8_ = *(ulonglong *)(auVar341._16_8_ + lVar60);
        local_3f0 = vmovhps_avx(auVar205,*(undefined8 *)(auVar341._24_8_ + lVar64));
        auVar206._8_8_ = 0;
        auVar206._0_8_ = *(ulonglong *)(auVar351._0_8_ + lVar63);
        local_3c0 = vmovhps_avx(auVar206,*(undefined8 *)(auVar351._8_8_ + lVar66));
        auVar87._8_8_ = 0;
        auVar87._0_8_ = *(ulonglong *)(auVar352._16_8_ + lVar65);
        local_390 = vmovhps_avx(auVar87,*(undefined8 *)(auVar352._24_8_ + lVar50));
        auVar88._8_8_ = 0;
        auVar88._0_8_ = *(ulonglong *)(lVar1 + lVar42);
        local_3a0 = vmovhps_avx(auVar88,*(undefined8 *)(auVar352._8_8_ + lVar51));
        auVar89._8_8_ = 0;
        auVar89._0_8_ = *(ulonglong *)(auVar351._16_8_ + lVar60);
        local_3b0 = vmovhps_avx(auVar89,*(undefined8 *)(auVar351._24_8_ + lVar64));
        auVar90._8_8_ = 0;
        auVar90._0_8_ = *(ulonglong *)(lVar2 + lVar63);
        local_380 = vmovhps_avx(auVar90,*(undefined8 *)(auVar365._8_8_ + lVar66));
        auVar207._8_8_ = 0;
        auVar207._0_8_ = *(ulonglong *)(auVar368._16_8_ + lVar65);
        local_350 = vmovhps_avx(auVar207,*(undefined8 *)(auVar368._24_8_ + lVar50));
        auVar208._8_8_ = 0;
        auVar208._0_8_ = *(ulonglong *)(lVar3 + lVar42);
        local_360 = vmovhps_avx(auVar208,*(undefined8 *)(auVar368._8_8_ + lVar51));
        auVar209._8_8_ = 0;
        auVar209._0_8_ = *(ulonglong *)(auVar365._16_8_ + lVar60);
        local_370 = vmovhps_avx(auVar209,*(undefined8 *)(auVar365._24_8_ + lVar64));
        auVar210._8_8_ = 0;
        auVar210._0_8_ = *(ulonglong *)(auVar369._0_8_ + lVar63);
        local_340 = vmovhps_avx(auVar210,*(undefined8 *)(auVar369._8_8_ + lVar66));
        auVar91._8_8_ = 0;
        auVar91._0_8_ = *(ulonglong *)(auVar378._16_8_ + lVar65);
        local_310 = vmovhps_avx(auVar91,*(undefined8 *)(auVar378._24_8_ + lVar50));
        auVar92._8_8_ = 0;
        auVar92._0_8_ = *(ulonglong *)(lVar4 + lVar42);
        local_320 = vmovhps_avx(auVar92,*(undefined8 *)(auVar378._8_8_ + lVar51));
        auVar93._8_8_ = 0;
        auVar93._0_8_ = *(ulonglong *)(auVar369._16_8_ + lVar60);
        local_330 = vmovhps_avx(auVar93,*(undefined8 *)(auVar369._24_8_ + lVar64));
        auVar94._8_8_ = 0;
        auVar94._0_8_ = *(ulonglong *)(lVar5 + lVar63);
        local_300 = vmovhps_avx(auVar94,*(undefined8 *)(auVar379._8_8_ + lVar66));
        auVar211._8_8_ = 0;
        auVar211._0_8_ = *(ulonglong *)(auVar390._16_8_ + lVar65);
        local_2d0 = vmovhps_avx(auVar211,*(undefined8 *)(auVar390._24_8_ + lVar50));
        auVar212._8_8_ = 0;
        auVar212._0_8_ = *(ulonglong *)(lVar6 + lVar42);
        local_2e0 = vmovhps_avx(auVar212,*(undefined8 *)(auVar390._8_8_ + lVar51));
        auVar213._8_8_ = 0;
        auVar213._0_8_ = *(ulonglong *)(auVar379._16_8_ + lVar60);
        local_2f0 = vmovhps_avx(auVar213,*(undefined8 *)(auVar379._24_8_ + lVar64));
        auVar214._8_8_ = 0;
        auVar214._0_8_ = *(ulonglong *)(auVar397._0_8_ + lVar63);
        local_2c0 = vmovhps_avx(auVar214,*(undefined8 *)(auVar397._8_8_ + lVar66));
        auVar95._8_8_ = 0;
        auVar95._0_8_ = *(ulonglong *)(auVar267._16_8_ + lVar65);
        local_290 = vmovhps_avx(auVar95,*(undefined8 *)(auVar267._24_8_ + lVar50));
        auVar96._8_8_ = 0;
        auVar96._0_8_ = *(ulonglong *)(lVar7 + lVar42);
        local_2a0 = vmovhps_avx(auVar96,*(undefined8 *)(auVar267._8_8_ + lVar51));
        auVar97._8_8_ = 0;
        auVar97._0_8_ = *(ulonglong *)(auVar397._16_8_ + lVar60);
        local_2b0 = vmovhps_avx(auVar97,*(undefined8 *)(auVar397._24_8_ + lVar64));
        auVar98._8_8_ = 0;
        auVar98._0_8_ = *(ulonglong *)(lVar8 + lVar63);
        local_280 = vmovhps_avx(auVar98,*(undefined8 *)(auVar391._8_8_ + lVar66));
        auVar215._8_8_ = 0;
        auVar215._0_8_ = *(ulonglong *)(auVar366._16_8_ + lVar65);
        local_250 = vmovhps_avx(auVar215,*(undefined8 *)(auVar366._24_8_ + lVar50));
        auVar216._8_8_ = 0;
        auVar216._0_8_ = *(ulonglong *)(lVar9 + lVar42);
        local_260 = vmovhps_avx(auVar216,*(undefined8 *)(auVar366._8_8_ + lVar51));
        auVar217._8_8_ = 0;
        auVar217._0_8_ = *(ulonglong *)(auVar391._16_8_ + lVar60);
        local_270 = vmovhps_avx(auVar217,*(undefined8 *)(auVar391._24_8_ + lVar64));
        auVar218._8_8_ = 0;
        auVar218._0_8_ = *(ulonglong *)(auVar268._0_8_ + lVar63);
        local_240 = vmovhps_avx(auVar218,*(undefined8 *)(auVar268._8_8_ + lVar66));
        auVar99._8_8_ = 0;
        auVar99._0_8_ = *(ulonglong *)(auVar286._16_8_ + lVar65);
        local_210 = vmovhps_avx(auVar99,*(undefined8 *)(auVar286._24_8_ + lVar50));
        auVar100._8_8_ = 0;
        auVar100._0_8_ = *(ulonglong *)(lVar10 + lVar42);
        local_220 = vmovhps_avx(auVar100,*(undefined8 *)(auVar286._8_8_ + lVar51));
        auVar101._8_8_ = 0;
        auVar101._0_8_ = *(ulonglong *)(auVar268._16_8_ + lVar60);
        local_230 = vmovhps_avx(auVar101,*(undefined8 *)(auVar268._24_8_ + lVar64));
        auVar102._8_8_ = 0;
        auVar102._0_8_ = *(ulonglong *)(lVar11 + lVar63);
        local_200 = vmovhps_avx(auVar102,*(undefined8 *)(auVar392._8_8_ + lVar66));
        auVar219._8_8_ = 0;
        auVar219._0_8_ = *(ulonglong *)(auVar170._16_8_ + lVar65);
        local_1d0 = vmovhps_avx(auVar219,*(undefined8 *)(auVar170._24_8_ + lVar50));
        auVar220._8_8_ = 0;
        auVar220._0_8_ = *(ulonglong *)(lVar12 + lVar42);
        local_1e0 = vmovhps_avx(auVar220,*(undefined8 *)(auVar170._8_8_ + lVar51));
        auVar221._8_8_ = 0;
        auVar221._0_8_ = *(ulonglong *)(auVar392._16_8_ + lVar60);
        local_1f0 = vmovhps_avx(auVar221,*(undefined8 *)(auVar392._24_8_ + lVar64));
        auVar222._8_8_ = 0;
        auVar222._0_8_ = *(ulonglong *)(auVar305._0_8_ + lVar63);
        local_1c0 = vmovhps_avx(auVar222,*(undefined8 *)(auVar305._8_8_ + lVar66));
        auVar103._8_8_ = 0;
        auVar103._0_8_ = *(ulonglong *)(auVar171._16_8_ + lVar65);
        local_190 = vmovhps_avx(auVar103,*(undefined8 *)(auVar171._24_8_ + lVar50));
        auVar104._8_8_ = 0;
        auVar104._0_8_ = *(ulonglong *)(lVar13 + lVar42);
        local_1a0 = vmovhps_avx(auVar104,*(undefined8 *)(auVar171._8_8_ + lVar51));
        auVar105._8_8_ = 0;
        auVar105._0_8_ = *(ulonglong *)(auVar305._16_8_ + lVar60);
        local_1b0 = vmovhps_avx(auVar105,*(undefined8 *)(auVar305._24_8_ + lVar64));
        auVar106._8_8_ = 0;
        auVar106._0_8_ = *(ulonglong *)(lVar14 + lVar63);
        local_180 = vmovhps_avx(auVar106,*(undefined8 *)(auVar172._8_8_ + lVar66));
        auVar223._8_8_ = 0;
        auVar223._0_8_ = *(ulonglong *)(auVar269._16_8_ + lVar65);
        local_150 = vmovhps_avx(auVar223,*(undefined8 *)(auVar269._24_8_ + lVar50));
        auVar224._8_8_ = 0;
        auVar224._0_8_ = *(ulonglong *)(lVar15 + lVar42);
        local_160 = vmovhps_avx(auVar224,*(undefined8 *)(auVar269._8_8_ + lVar51));
        auVar225._8_8_ = 0;
        auVar225._0_8_ = *(ulonglong *)(auVar172._16_8_ + lVar60);
        local_170 = vmovhps_avx(auVar225,*(undefined8 *)(auVar172._24_8_ + lVar64));
        auVar226._8_8_ = 0;
        auVar226._0_8_ = *(ulonglong *)(auVar303._0_8_ + lVar63);
        local_140 = vmovhps_avx(auVar226,*(undefined8 *)(auVar303._8_8_ + lVar66));
        auVar107._8_8_ = 0;
        auVar107._0_8_ = *(ulonglong *)(auVar167._16_8_ + lVar65);
        local_110 = vmovhps_avx(auVar107,*(undefined8 *)(auVar167._24_8_ + lVar50));
        auVar108._8_8_ = 0;
        auVar108._0_8_ = *(ulonglong *)(lVar16 + lVar42);
        local_120 = vmovhps_avx(auVar108,*(undefined8 *)(auVar167._8_8_ + lVar51));
        auVar109._8_8_ = 0;
        auVar109._0_8_ = *(ulonglong *)(auVar303._16_8_ + lVar60);
        local_130 = vmovhps_avx(auVar109,*(undefined8 *)(auVar303._24_8_ + lVar64));
        dVar17 = *param_4;
        lVar60 = 0xc0;
        dVar67 = param_4[8];
        dVar68 = param_4[0xc];
        dVar69 = param_4[1];
        dVar70 = param_4[5];
        dVar71 = param_4[9];
        dVar180 = param_4[0xd];
        dVar181 = param_4[2];
        dVar182 = param_4[6];
        dVar183 = param_4[10];
        dVar184 = param_4[0xe];
        dVar185 = param_4[3];
        dVar186 = param_4[7];
        dVar187 = param_4[0xb];
        dVar188 = param_4[0xf];
        do {
          dVar190 = *(double *)(local_5c0 + lVar60);
          dVar191 = *(double *)(local_5c0 + lVar60 + 8);
          dVar192 = *(double *)(local_5b0 + lVar60);
          dVar193 = *(double *)(local_5b0 + lVar60 + 8);
          dVar194 = *(double *)(local_5a0 + lVar60);
          dVar296 = *(double *)(local_5a0 + lVar60 + 8);
          dVar310 = *(double *)(local_590 + lVar60);
          dVar311 = *(double *)(local_590 + lVar60 + 8);
          dVar312 = *(double *)(local_580 + lVar60);
          dVar313 = *(double *)(local_580 + lVar60 + 8);
          dVar326 = *(double *)(local_570 + lVar60);
          dVar327 = *(double *)(local_570 + lVar60 + 8);
          dVar328 = *(double *)(local_560 + lVar60);
          dVar337 = *(double *)(local_560 + lVar60 + 8);
          dVar344 = *(double *)(local_550 + lVar60);
          dVar345 = *(double *)(local_550 + lVar60 + 8);
          dVar346 = *(double *)(local_520 + lVar60);
          dVar347 = *(double *)(local_520 + lVar60 + 8);
          dVar348 = *(double *)(local_510 + lVar60);
          dVar356 = *(double *)(local_510 + lVar60 + 8);
          dVar357 = *(double *)(local_540 + lVar60);
          dVar358 = *(double *)(local_540 + lVar60 + 8);
          dVar359 = *(double *)(local_530 + lVar60);
          dVar360 = *(double *)(local_530 + lVar60 + 8);
          dVar361 = *(double *)(local_500 + lVar60);
          dVar376 = *(double *)(local_500 + lVar60 + 8);
          dVar377 = *(double *)(local_4f0 + lVar60);
          dVar384 = *(double *)(local_4f0 + lVar60 + 8);
          dVar385 = *(double *)(local_4e0 + lVar60);
          dVar386 = *(double *)(local_4e0 + lVar60 + 8);
          dVar387 = *(double *)(local_4d0 + lVar60);
          dVar388 = *(double *)(local_4d0 + lVar60 + 8);
          dVar189 = param_4[4];
          *(double *)(local_10a0 + lVar60) =
               dVar385 * dVar68 + dVar346 * dVar67 + dVar328 * dVar189 + dVar194 * dVar17 + 0.0;
          *(double *)(local_10a0 + lVar60 + 8) =
               dVar386 * dVar68 + dVar347 * dVar67 + dVar337 * dVar189 + dVar296 * dVar17 + 0.0;
          *(double *)(local_10a0 + lVar60 + 0x10) =
               dVar387 * dVar68 + dVar348 * dVar67 + dVar344 * dVar189 + dVar310 * dVar17 + 0.0;
          *(double *)(auStack_1090 + lVar60 + 8) =
               dVar388 * dVar68 + dVar356 * dVar67 + dVar345 * dVar189 + dVar311 * dVar17 + 0.0;
          *(double *)(local_10c0 + lVar60) =
               dVar361 * dVar68 + dVar357 * dVar67 + dVar190 * dVar17 + 0.0 + dVar312 * dVar189;
          *(double *)(local_10c0 + lVar60 + 8) =
               dVar376 * dVar68 + dVar358 * dVar67 + dVar191 * dVar17 + 0.0 + dVar313 * dVar189;
          *(double *)(local_10c0 + lVar60 + 0x10) =
               dVar377 * dVar68 + dVar359 * dVar67 + dVar192 * dVar17 + 0.0 + dVar326 * dVar189;
          *(double *)(auStack_10b0 + lVar60 + 8) =
               dVar384 * dVar68 + dVar360 * dVar67 + dVar193 * dVar17 + 0.0 + dVar327 * dVar189;
          *(double *)(local_1060 + lVar60) =
               dVar385 * dVar180 + dVar346 * dVar71 + dVar328 * dVar70 + dVar194 * dVar69 + 0.0;
          *(double *)(local_1060 + lVar60 + 8) =
               dVar386 * dVar180 + dVar347 * dVar71 + dVar337 * dVar70 + dVar296 * dVar69 + 0.0;
          *(double *)(local_1060 + lVar60 + 0x10) =
               dVar387 * dVar180 + dVar348 * dVar71 + dVar344 * dVar70 + dVar310 * dVar69 + 0.0;
          *(double *)(local_1060 + lVar60 + 0x18) =
               dVar388 * dVar180 + dVar356 * dVar71 + dVar345 * dVar70 + dVar311 * dVar69 + 0.0;
          *(double *)(local_1080 + lVar60) =
               dVar361 * dVar180 + dVar357 * dVar71 + dVar312 * dVar70 + dVar190 * dVar69 + 0.0;
          *(double *)(local_1080 + lVar60 + 8) =
               dVar376 * dVar180 + dVar358 * dVar71 + dVar313 * dVar70 + dVar191 * dVar69 + 0.0;
          *(double *)(local_1080 + lVar60 + 0x10) =
               dVar377 * dVar180 + dVar359 * dVar71 + dVar326 * dVar70 + dVar192 * dVar69 + 0.0;
          *(double *)(local_1080 + lVar60 + 0x18) =
               dVar384 * dVar180 + dVar360 * dVar71 + dVar327 * dVar70 + dVar193 * dVar69 + 0.0;
          *(double *)((longlong)adStack_1038 + lVar60 + 0x18) =
               dVar385 * dVar184 + dVar346 * dVar183 + dVar328 * dVar182 + dVar194 * dVar181 + 0.0;
          *(double *)((longlong)adStack_1038 + lVar60 + 0x20) =
               dVar386 * dVar184 + dVar347 * dVar183 + dVar337 * dVar182 + dVar296 * dVar181 + 0.0;
          *(double *)((longlong)adStack_1038 + lVar60 + 0x28) =
               dVar387 * dVar184 + dVar348 * dVar183 + dVar344 * dVar182 + dVar310 * dVar181 + 0.0;
          *(double *)((longlong)adStack_1038 + lVar60 + 0x30) =
               dVar388 * dVar184 + dVar356 * dVar183 + dVar345 * dVar182 + dVar311 * dVar181 + 0.0;
          *(double *)((longlong)adStack_1038 + lVar60 + -8) =
               dVar361 * dVar184 + dVar357 * dVar183 + dVar312 * dVar182 + dVar190 * dVar181 + 0.0;
          *(double *)((longlong)adStack_1038 + lVar60) =
               dVar376 * dVar184 + dVar358 * dVar183 + dVar313 * dVar182 + dVar191 * dVar181 + 0.0;
          *(double *)((longlong)adStack_1038 + lVar60 + 8) =
               dVar377 * dVar184 + dVar359 * dVar183 + dVar326 * dVar182 + dVar192 * dVar181 + 0.0;
          *(double *)((longlong)adStack_1038 + lVar60 + 0x10) =
               dVar384 * dVar184 + dVar360 * dVar183 + dVar327 * dVar182 + dVar193 * dVar181 + 0.0;
          *(double *)(local_fe0 + lVar60) =
               dVar194 * dVar185 + 0.0 + dVar328 * dVar186 + dVar187 * dVar346 + dVar188 * dVar385;
          *(double *)(local_fe0 + lVar60 + 8) =
               dVar296 * dVar185 + 0.0 + dVar337 * dVar186 + dVar187 * dVar347 + dVar188 * dVar386;
          *(double *)(local_fe0 + lVar60 + 0x10) =
               dVar310 * dVar185 + 0.0 + dVar344 * dVar186 + dVar187 * dVar348 + dVar188 * dVar387;
          *(double *)(local_fe0 + lVar60 + 0x18) =
               dVar311 * dVar185 + 0.0 + dVar345 * dVar186 + dVar187 * dVar356 + dVar188 * dVar388;
          *(double *)(local_1000 + lVar60) =
               dVar190 * dVar185 + 0.0 + dVar312 * dVar186 + dVar357 * dVar187 + dVar188 * dVar361;
          *(double *)(local_1000 + lVar60 + 8) =
               dVar191 * dVar185 + 0.0 + dVar313 * dVar186 + dVar358 * dVar187 + dVar188 * dVar376;
          *(double *)(local_1000 + lVar60 + 0x10) =
               dVar192 * dVar185 + 0.0 + dVar326 * dVar186 + dVar359 * dVar187 + dVar188 * dVar377;
          *(double *)(local_1000 + lVar60 + 0x18) =
               dVar193 * dVar185 + 0.0 + dVar327 * dVar186 + dVar360 * dVar187 + dVar188 * dVar384;
          lVar60 = lVar60 + 0x100;
        } while (lVar60 != 0x4c0);
        local_1500 = auVar275._0_8_;
        dStack_14f8 = auVar275._8_8_;
        dStack_14f0 = auVar300._0_8_;
        dStack_14e8 = auVar300._8_8_;
        local_1300 = auVar73._0_8_;
        dStack_12f8 = auVar73._8_8_;
        dStack_12f0 = auVar277._0_8_;
        dStack_12e8 = auVar277._8_8_;
        local_1320 = auVar276._0_8_;
        dStack_1318 = auVar276._8_8_;
        dStack_1310 = auVar74._0_8_;
        dStack_1308 = auVar74._8_8_;
        local_12e0 = auVar334._0_8_;
        dStack_12d8 = auVar334._8_8_;
        dStack_12d0 = auVar298._0_8_;
        dStack_12c8 = auVar298._8_8_;
        dVar67 = (local_1500 + local_1300) * __real_3fe0000000000000;
        dVar180 = (dStack_14f8 + dStack_12f8) * __real_3fe0000000000000;
        dVar185 = (dStack_14f0 + dStack_12f0) * __real_3fe0000000000000;
        dVar190 = (dStack_14e8 + dStack_12e8) * __real_3fe0000000000000;
        dVar313 = (local_1320 + local_12e0) * __real_3fe0000000000000;
        dVar326 = (dStack_1318 + dStack_12d8) * __real_3fe0000000000000;
        dVar327 = (dStack_1310 + dStack_12d0) * __real_3fe0000000000000;
        dVar328 = (dStack_1308 + dStack_12c8) * __real_3fe0000000000000;
        local_14c0 = auVar110._0_8_;
        dStack_14b8 = auVar110._8_8_;
        dStack_14b0 = auVar196._0_8_;
        dStack_14a8 = auVar196._8_8_;
        dVar337 = (local_b40._0_8_ + local_14c0) * __real_3fe0000000000000;
        dVar344 = (local_b40._8_8_ + dStack_14b8) * __real_3fe0000000000000;
        dVar345 = (local_b40._16_8_ + dStack_14b0) * __real_3fe0000000000000;
        dVar346 = (local_b40._24_8_ + dStack_14a8) * __real_3fe0000000000000;
        local_1480 = auVar338._0_8_;
        dStack_1478 = auVar338._8_8_;
        dStack_1470 = auVar330._0_8_;
        dStack_1468 = auVar330._8_8_;
        dVar347 = (local_b60._0_8_ + local_1480) * __real_3fe0000000000000;
        dVar356 = (local_b60._8_8_ + dStack_1478) * __real_3fe0000000000000;
        dVar358 = (local_b60._16_8_ + dStack_1470) * __real_3fe0000000000000;
        dVar360 = (local_b60._24_8_ + dStack_1468) * __real_3fe0000000000000;
        dVar17 = (double)CONCAT17(uStack_e79,
                                  CONCAT16(uStack_e7a,
                                           CONCAT15(uStack_e7b,
                                                    CONCAT14(uStack_e7c,
                                                             CONCAT13(uStack_e7d,
                                                                      CONCAT12(uStack_e7e,
                                                                               CONCAT11(uStack_e7f,
                                                                                        local_e80)))
                                                            ))));
        dVar296 = (local_b00._0_8_ + local_b80._0_8_) * __real_3fe0000000000000;
        dVar310 = (local_b00._8_8_ + local_b80._8_8_) * __real_3fe0000000000000;
        dVar311 = (local_b00._16_8_ + local_b80._16_8_) * __real_3fe0000000000000;
        dVar312 = (local_b00._24_8_ + local_b80._24_8_) * __real_3fe0000000000000;
        dVar348 = (local_b20._0_8_ + local_ba0._0_8_) * __real_3fe0000000000000;
        dVar357 = (local_b20._8_8_ + local_ba0._8_8_) * __real_3fe0000000000000;
        dVar359 = (local_b20._16_8_ + local_ba0._16_8_) * __real_3fe0000000000000;
        dVar361 = (local_b20._24_8_ + local_ba0._24_8_) * __real_3fe0000000000000;
        auVar265 = vsubpd_avx(auVar165,auVar284);
        auVar169 = vsubpd_avx(local_b40,auVar164);
        auVar167 = vsubpd_avx(auVar166,auVar302);
        auVar380 = vsubpd_avx(local_b60,auVar332);
        auVar323 = vsubpd_avx(local_b80,local_b00);
        auVar285 = vsubpd_avx(local_ba0,local_b20);
        dVar68 = auVar265._0_8_ * __real_3fe0000000000000;
        dVar181 = auVar265._8_8_ * __real_3fe0000000000000;
        dVar186 = auVar265._16_8_ * __real_3fe0000000000000;
        dVar191 = auVar265._24_8_ * __real_3fe0000000000000;
        dVar69 = auVar169._0_8_ * __real_3fe0000000000000;
        dVar182 = auVar169._8_8_ * __real_3fe0000000000000;
        dVar187 = auVar169._16_8_ * __real_3fe0000000000000;
        dVar192 = auVar169._24_8_ * __real_3fe0000000000000;
        dVar70 = auVar167._0_8_ * __real_3fe0000000000000;
        dVar183 = auVar167._8_8_ * __real_3fe0000000000000;
        dVar188 = auVar167._16_8_ * __real_3fe0000000000000;
        dVar193 = auVar167._24_8_ * __real_3fe0000000000000;
        dVar71 = auVar380._0_8_ * __real_3fe0000000000000;
        dVar184 = auVar380._8_8_ * __real_3fe0000000000000;
        dVar189 = auVar380._16_8_ * __real_3fe0000000000000;
        dVar194 = auVar380._24_8_ * __real_3fe0000000000000;
        local_1500 = auVar323._0_8_;
        dStack_14f8 = auVar323._8_8_;
        dStack_14f0 = auVar323._16_8_;
        dStack_14e8 = auVar323._24_8_;
        local_1500 = __real_3fe0000000000000 * local_1500;
        dStack_14f8 = __real_3fe0000000000000 * dStack_14f8;
        dStack_14f0 = __real_3fe0000000000000 * dStack_14f0;
        dStack_14e8 = __real_3fe0000000000000 * dStack_14e8;
        local_14c0 = auVar285._0_8_;
        dStack_14b8 = auVar285._8_8_;
        dStack_14b0 = auVar285._16_8_;
        dStack_14a8 = auVar285._24_8_;
        local_14c0 = __real_3fe0000000000000 * local_14c0;
        dStack_14b8 = __real_3fe0000000000000 * dStack_14b8;
        dStack_14b0 = __real_3fe0000000000000 * dStack_14b0;
        dStack_14a8 = __real_3fe0000000000000 * dStack_14a8;
        auVar323._0_8_ =
             (double)((ulonglong)(local_14c0 * local_e00) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar68 * (double)local_1000) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar70 * (double)local_f00._0_8_) & __real_7fffffffffffffff);
        auVar323._8_8_ =
             (double)((ulonglong)(dStack_14b8 * dStack_df8) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar181 * adStack_ff8[0]) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar183 * (double)local_f00._8_8_) & __real_7fffffffffffffff);
        auVar323._16_8_ =
             (double)((ulonglong)(dStack_14b0 * dStack_df0) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar186 * adStack_ff8[1]) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar188 * dStack_ef0) & __real_7fffffffffffffff);
        auVar323._24_8_ =
             (double)((ulonglong)(dStack_14a8 * dStack_de8) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar191 * adStack_ff8[2]) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar193 * dStack_ee8) & __real_7fffffffffffffff);
        auVar285._0_8_ =
             (double)((ulonglong)(local_1500 * local_de0) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar69 * (double)local_fe0) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar71 * (double)local_ee0._0_8_) & __real_7fffffffffffffff);
        auVar285._8_8_ =
             (double)((ulonglong)(dStack_14f8 * dStack_dd8) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar182 * adStack_fd8[0]) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar184 * (double)local_ee0._8_8_) & __real_7fffffffffffffff);
        auVar285._16_8_ =
             (double)((ulonglong)(dStack_14f0 * dStack_dd0) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar187 * adStack_fd8[1]) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar189 * dStack_ed0) & __real_7fffffffffffffff);
        auVar285._24_8_ =
             (double)((ulonglong)(dStack_14e8 * dStack_dc8) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar192 * adStack_fd8[2]) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar194 * dStack_ec8) & __real_7fffffffffffffff);
        auVar341._0_8_ =
             dVar337 * (double)local_fe0 + dVar347 * (double)local_ee0._0_8_ + dVar296 * local_de0 +
             local_ce0;
        auVar341._8_8_ =
             dVar344 * adStack_fd8[0] + dVar356 * (double)local_ee0._8_8_ + dVar310 * dStack_dd8 +
             dStack_cd8;
        auVar341._16_8_ =
             dVar345 * adStack_fd8[1] + dVar358 * dStack_ed0 + dVar311 * dStack_dd0 + dStack_cd0;
        auVar341._24_8_ =
             dVar346 * adStack_fd8[2] + dVar360 * dStack_ec8 + dVar312 * dStack_dc8 + dStack_cc8;
        auVar351._0_8_ =
             dVar348 * local_e00 + dVar67 * (double)local_1000 + dVar313 * (double)local_f00._0_8_ +
             local_d00;
        auVar351._8_8_ =
             dVar357 * dStack_df8 + dVar180 * adStack_ff8[0] + dVar326 * (double)local_f00._8_8_ +
             dStack_cf8;
        auVar351._16_8_ =
             dVar359 * dStack_df0 + dVar185 * adStack_ff8[1] + dVar327 * dStack_ef0 + dStack_cf0;
        auVar351._24_8_ =
             dVar361 * dStack_de8 + dVar190 * adStack_ff8[2] + dVar328 * dStack_ee8 + dStack_ce8;
        auVar368._0_8_ =
             dVar296 * local_da0 +
             dVar337 * (double)local_fa0._0_8_ + dVar347 * (double)local_ea0._0_8_ + local_ca0;
        auVar368._8_8_ =
             dVar310 * dStack_d98 +
             dVar344 * (double)local_fa0._8_8_ + dVar356 * (double)local_ea0._8_8_ + dStack_c98;
        auVar368._16_8_ =
             dVar311 * dStack_d90 + dVar345 * dStack_f90 + dVar358 * dStack_e90 + dStack_c90;
        auVar368._24_8_ =
             dVar312 * dStack_d88 + dVar346 * dStack_f88 + dVar360 * dStack_e88 + dStack_c88;
        auVar378._0_8_ =
             dVar348 * local_dc0 +
             dVar67 * (double)local_fc0._0_8_ + dVar313 * (double)local_ec0._0_8_ + local_cc0;
        auVar378._8_8_ =
             dVar357 * dStack_db8 +
             dVar180 * (double)local_fc0._8_8_ + dVar326 * (double)local_ec0._8_8_ + dStack_cb8;
        auVar378._16_8_ =
             dVar359 * dStack_db0 + dVar185 * dStack_fb0 + dVar327 * dStack_eb0 + dStack_cb0;
        auVar378._24_8_ =
             dVar361 * dStack_da8 + dVar190 * dStack_fa8 + dVar328 * dStack_ea8 + dStack_ca8;
        auVar397._0_8_ =
             dVar337 * (double)local_f60._0_8_ + dVar347 * local_e60 + dVar296 * local_d60 +
             local_c60;
        auVar397._8_8_ =
             dVar344 * (double)local_f60._8_8_ + dVar356 * dStack_e58 + dVar310 * dStack_d58 +
             dStack_c58;
        auVar397._16_8_ =
             dVar345 * dStack_f50 + dVar358 * dStack_e50 + dVar311 * dStack_d50 + dStack_c50;
        auVar397._24_8_ =
             dVar346 * dStack_f48 + dVar360 * dStack_e48 + dVar312 * dStack_d48 + dStack_c48;
        auVar390._0_8_ =
             (double)local_f80._0_8_ * dVar67 + dVar313 * dVar17 + dVar348 * local_d80 + local_c80;
        auVar390._8_8_ =
             (double)local_f80._8_8_ * dVar180 + dVar326 * dStack_e78 + dVar357 * dStack_d78 +
             dStack_c78;
        auVar390._16_8_ =
             dStack_f70 * dVar185 + dVar327 * dStack_e70 + dVar359 * dStack_d70 + dStack_c70;
        auVar390._24_8_ =
             dStack_f68 * dVar190 + dVar328 * dStack_e68 + dVar361 * dStack_d68 + dStack_c68;
        auVar266._0_8_ =
             (double)((ulonglong)(local_14c0 * local_dc0) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar68 * (double)local_fc0._0_8_) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar70 * (double)local_ec0._0_8_) & __real_7fffffffffffffff);
        auVar266._8_8_ =
             (double)((ulonglong)(dStack_14b8 * dStack_db8) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar181 * (double)local_fc0._8_8_) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar183 * (double)local_ec0._8_8_) & __real_7fffffffffffffff);
        auVar266._16_8_ =
             (double)((ulonglong)(dStack_14b0 * dStack_db0) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar186 * dStack_fb0) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar188 * dStack_eb0) & __real_7fffffffffffffff);
        auVar266._24_8_ =
             (double)((ulonglong)(dStack_14a8 * dStack_da8) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar191 * dStack_fa8) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar193 * dStack_ea8) & __real_7fffffffffffffff);
        auVar365._0_8_ =
             (double)((ulonglong)(local_1500 * local_da0) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar69 * (double)local_fa0._0_8_) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar71 * (double)local_ea0._0_8_) & __real_7fffffffffffffff);
        auVar365._8_8_ =
             (double)((ulonglong)(dStack_14f8 * dStack_d98) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar182 * (double)local_fa0._8_8_) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar184 * (double)local_ea0._8_8_) & __real_7fffffffffffffff);
        auVar365._16_8_ =
             (double)((ulonglong)(dStack_14f0 * dStack_d90) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar187 * dStack_f90) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar189 * dStack_e90) & __real_7fffffffffffffff);
        auVar365._24_8_ =
             (double)((ulonglong)(dStack_14e8 * dStack_d88) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar192 * dStack_f88) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar194 * dStack_e88) & __real_7fffffffffffffff);
        auVar333._0_8_ =
             (double)(__real_7fffffffffffffff & (ulonglong)((double)local_f80._0_8_ * dVar68)) +
             (double)((ulonglong)(dVar70 * dVar17) & __real_7fffffffffffffff) +
             (double)((ulonglong)(local_14c0 * local_d80) & __real_7fffffffffffffff);
        auVar333._8_8_ =
             (double)(__real_7fffffffffffffff & (ulonglong)((double)local_f80._8_8_ * dVar181)) +
             (double)((ulonglong)(dVar183 * dStack_e78) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dStack_14b8 * dStack_d78) & __real_7fffffffffffffff);
        auVar333._16_8_ =
             (double)(__real_7fffffffffffffff & (ulonglong)(dStack_f70 * dVar186)) +
             (double)((ulonglong)(dVar188 * dStack_e70) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dStack_14b0 * dStack_d70) & __real_7fffffffffffffff);
        auVar333._24_8_ =
             (double)(__real_7fffffffffffffff & (ulonglong)(dStack_f68 * dVar191)) +
             (double)((ulonglong)(dVar193 * dStack_e68) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dStack_14a8 * dStack_d68) & __real_7fffffffffffffff);
        auVar304._0_8_ =
             (double)((ulonglong)((double)local_f60._0_8_ * dVar69) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar71 * local_e60) & __real_7fffffffffffffff) +
             (double)((ulonglong)(local_1500 * local_d60) & __real_7fffffffffffffff);
        auVar304._8_8_ =
             (double)((ulonglong)((double)local_f60._8_8_ * dVar182) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar184 * dStack_e58) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dStack_14f8 * dStack_d58) & __real_7fffffffffffffff);
        auVar304._16_8_ =
             (double)((ulonglong)(dStack_f50 * dVar187) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar189 * dStack_e50) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dStack_14f0 * dStack_d50) & __real_7fffffffffffffff);
        auVar304._24_8_ =
             (double)((ulonglong)(dStack_f48 * dVar192) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar194 * dStack_e48) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dStack_14e8 * dStack_d48) & __real_7fffffffffffffff);
        auVar265 = vsubpd_avx(auVar351,auVar323);
        auVar169 = vsubpd_avx(auVar341,auVar285);
        auVar167 = vsubpd_avx(auVar378,auVar266);
        auVar380 = vsubpd_avx(auVar368,auVar365);
        auVar352._0_8_ = auVar351._0_8_ + auVar323._0_8_;
        auVar352._8_8_ = auVar351._8_8_ + auVar323._8_8_;
        auVar352._16_8_ = auVar351._16_8_ + auVar323._16_8_;
        auVar352._24_8_ = auVar351._24_8_ + auVar323._24_8_;
        auVar323 = vsubpd_avx(auVar390,auVar333);
        local_1860._8_8_ = auVar341._8_8_ + auVar285._8_8_;
        local_1860._0_8_ = auVar341._0_8_ + auVar285._0_8_;
        dStack_1850 = auVar341._16_8_ + auVar285._16_8_;
        dStack_1848 = auVar341._24_8_ + auVar285._24_8_;
        auVar285 = vsubpd_avx(auVar397,auVar304);
        local_18e0._8_8_ = auVar378._8_8_ + auVar266._8_8_;
        local_18e0._0_8_ = auVar378._0_8_ + auVar266._0_8_;
        dStack_18d0 = auVar378._16_8_ + auVar266._16_8_;
        dStack_18c8 = auVar378._24_8_ + auVar266._24_8_;
        auVar379._0_8_ = auVar365._0_8_ + auVar368._0_8_;
        auVar379._8_8_ = auVar365._8_8_ + auVar368._8_8_;
        auVar379._16_8_ = auVar365._16_8_ + auVar368._16_8_;
        auVar379._24_8_ = auVar365._24_8_ + auVar368._24_8_;
        auVar342._0_8_ = auVar390._0_8_ + auVar333._0_8_;
        auVar342._8_8_ = auVar390._8_8_ + auVar333._8_8_;
        auVar342._16_8_ = auVar390._16_8_ + auVar333._16_8_;
        auVar342._24_8_ = auVar390._24_8_ + auVar333._24_8_;
        auVar369._0_8_ = auVar397._0_8_ + auVar304._0_8_;
        auVar369._8_8_ = auVar397._8_8_ + auVar304._8_8_;
        auVar369._16_8_ = auVar397._16_8_ + auVar304._16_8_;
        auVar369._24_8_ = auVar397._24_8_ + auVar304._24_8_;
        auVar363._8_8_ = 0;
        auVar363._0_8_ = local_1040;
        auVar196 = vpcmpeqb_avx(auVar363,ZEXT816(0) << 0x40);
        auVar110 = vpmovsxbd_avx(auVar196 ^ ___xmm_ffffffffffffffffffffffffffffffff);
        auVar300 = vpshufd_avx(auVar196 ^ ___xmm_ffffffffffffffffffffffffffffffff,0x55);
        auVar300 = vpmovsxbd_avx(auVar300);
        auVar168._0_4_ = auVar110._0_4_ & local_be0._0_4_;
        auVar168._4_4_ = auVar110._4_4_ & local_be0._4_4_;
        auVar168._8_4_ = auVar110._8_4_ & local_be0._8_4_;
        auVar168._12_4_ = auVar110._12_4_ & local_be0._12_4_;
        auVar168._16_4_ = auVar300._0_4_ & local_be0._16_4_;
        auVar168._20_4_ = auVar300._4_4_ & local_be0._20_4_;
        auVar168._24_4_ = auVar300._8_4_ & local_be0._24_4_;
        auVar168._28_4_ = auVar300._12_4_ & local_be0._28_4_;
        iVar26 = vmovmskps_avx(auVar168);
        auVar275 = local_be0;
        if (iVar26 == 0) {
          auVar168 = ZEXT832(0) << 0x40;
          auVar399 = ZEXT864(0) << 0x20;
LAB_140a750f0:
          auVar110 = vpmovzxbw_avx(auVar196);
          auVar196 = vpand_avx(auVar110,local_ad0);
          auVar196 = vpshufb_avx(auVar196,___xmm_00000000000000000e0c0a0806040200);
          if ((((((((SUB161(auVar196 >> 7,0) & 1) != 0 || (SUB161(auVar196 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar196 >> 0x17,0) & 1) != 0) || (SUB161(auVar196 >> 0x1f,0) & 1) != 0)
                || (SUB161(auVar196 >> 0x27,0) & 1) != 0) || (SUB161(auVar196 >> 0x2f,0) & 1) != 0)
              || (SUB161(auVar196 >> 0x37,0) & 1) != 0) || (SUB161(auVar196 >> 0x3f,0) & 1) != 0) {
            auVar196 = vpmovzxwd_avx(auVar110);
            auVar196 = vpslld_avx(auVar196,0x1f);
            auVar300 = vpsrad_avx(auVar196,0x1f);
            auVar196 = vpunpckhwd_avx(auVar110,auVar110);
            auVar196 = vpslld_avx(auVar196,0x1f);
            auVar196 = vpsrad_avx(auVar196,0x1f);
            auVar366._16_16_ = auVar196;
            auVar366._0_16_ = auVar300;
            auVar366 = _local_be0 & auVar366;
            if ((((((((SUB321(auVar366 >> 0x1f,0) & 1) != 0 || (SUB321(auVar366 >> 0x3f,0) & 1) != 0
                     ) || (SUB321(auVar366 >> 0x5f,0) & 1) != 0) ||
                   SUB321(auVar366 >> 0x7f,0) != '\0') || (SUB321(auVar366 >> 0x9f,0) & 1) != 0) ||
                 SUB321(auVar366 >> 0xbf,0) != '\0') || (SUB321(auVar366 >> 0xdf,0) & 1) != 0) ||
                auVar366[0x1f] < '\0') {
              auVar77 = vpmovsxdq_avx(auVar300);
              auVar330 = vshufps_avx(auVar300,auVar300,0xfa);
              auVar268._16_16_ = auVar330;
              auVar268._0_16_ = auVar77;
              auVar77 = vpmovsxdq_avx(auVar196);
              auVar330 = vpshufd_avx(auVar196,0xfa);
              auVar286._16_16_ = auVar330;
              auVar286._0_16_ = auVar77;
              _local_1000 = vmaskmovpd_avx(auVar268,auVar265);
              _local_fe0 = vmaskmovpd_avx(auVar286,auVar169);
              _local_fc0 = vmaskmovpd_avx(auVar268,auVar167);
              _local_fa0 = vmaskmovpd_avx(auVar286,auVar380);
              _local_f80 = vmaskmovpd_avx(auVar268,auVar323);
              _local_f60 = vmaskmovpd_avx(auVar286,auVar285);
              local_f40 = vmaskmovpd_avx(auVar268,auVar352);
              local_f20 = vmaskmovpd_avx(auVar286,_local_1860);
              _local_f00 = vmaskmovpd_avx(auVar268,_local_18e0);
              _local_ee0 = vmaskmovpd_avx(auVar286,auVar379);
              _local_ec0 = vmaskmovpd_avx(auVar268,auVar342);
              _local_ea0 = vmaskmovpd_avx(auVar286,auVar369);
              auVar110 = vpsllw_avx(auVar110,0xf);
              auVar110 = vpacksswb_avx(auVar110,auVar110);
              if ((SUB161(auVar110 >> 7,0) & 1) != 0) {
                local_e80 = 1;
              }
              if ((SUB161(auVar110 >> 0xf,0) & 1) != 0) {
                uStack_e7f = 1;
              }
              if ((SUB161(auVar110 >> 0x17,0) & 1) != 0) {
                uStack_e7e = 1;
              }
              if ((SUB161(auVar110 >> 0x1f,0) & 1) != 0) {
                uStack_e7d = 1;
              }
              if ((SUB161(auVar110 >> 0x27,0) & 1) != 0) {
                uStack_e7c = 1;
              }
              if ((SUB161(auVar110 >> 0x2f,0) & 1) != 0) {
                uStack_e7b = 1;
              }
              if ((SUB161(auVar110 >> 0x37,0) & 1) != 0) {
                uStack_e7a = 1;
              }
              if ((SUB161(auVar110 >> 0x3f,0) & 1) != 0) {
                uStack_e79 = 1;
              }
              auVar169._0_4_ = auVar300._0_4_ & local_be0._0_4_;
              auVar169._4_4_ = auVar300._4_4_ & local_be0._4_4_;
              auVar169._8_4_ = auVar300._8_4_ & local_be0._8_4_;
              auVar169._12_4_ = auVar300._12_4_ & local_be0._12_4_;
              auVar169._16_4_ = auVar196._0_4_ & local_be0._16_4_;
              auVar169._20_4_ = auVar196._4_4_ & local_be0._20_4_;
              auVar169._24_4_ = auVar196._8_4_ & local_be0._24_4_;
              auVar169._28_4_ = auVar196._12_4_ & local_be0._28_4_;
              vmovmskps_avx(auVar168 | auVar169);
            }
          }
        }
        else {
          auVar266 = vminpd_avx(local_11c0,auVar265);
          auVar77 = vshufps_avx(auVar110,auVar110,0x50);
          auVar110 = vshufps_avx(auVar110,auVar110,0xfa);
          auVar267._16_16_ = auVar110;
          auVar267._0_16_ = auVar77;
          _local_1000 = vmaskmovpd_avx(auVar267,auVar266);
          auVar110 = vshufps_avx(auVar300,auVar300,0x50);
          auVar300 = vshufps_avx(auVar300,auVar300,0xfa);
          auVar391._16_16_ = auVar300;
          auVar391._0_16_ = auVar110;
          auVar266 = vminpd_avx(local_11a0,auVar169);
          _local_fe0 = vmaskmovpd_avx(auVar391,auVar266);
          auVar266 = vminpd_avx(local_1180,auVar167);
          _local_fc0 = vmaskmovpd_avx(auVar267,auVar266);
          auVar266 = vminpd_avx(local_1160,auVar380);
          _local_fa0 = vmaskmovpd_avx(auVar391,auVar266);
          auVar266 = vminpd_avx(local_1140,auVar323);
          _local_f80 = vmaskmovpd_avx(auVar267,auVar266);
          auVar266 = vminpd_avx(local_1120,auVar285);
          _local_f60 = vmaskmovpd_avx(auVar391,auVar266);
          auVar266 = vmaxpd_avx(local_1100,auVar352);
          local_f40 = vmaskmovpd_avx(auVar267,auVar266);
          auVar266 = vmaxpd_avx(local_10e0,_local_1860);
          local_f20 = vmaskmovpd_avx(auVar391,auVar266);
          auVar266 = vmaxpd_avx(_local_10c0,_local_18e0);
          _local_f00 = vmaskmovpd_avx(auVar267,auVar266);
          auVar266 = vmaxpd_avx(_local_10a0,auVar379);
          _local_ee0 = vmaskmovpd_avx(auVar391,auVar266);
          auVar266 = vmaxpd_avx(_local_1080,auVar342);
          _local_ec0 = vmaskmovpd_avx(auVar267,auVar266);
          auVar266 = vmaxpd_avx(_local_1060,auVar369);
          _local_ea0 = vmaskmovpd_avx(auVar391,auVar266);
          auVar110 = vpshufd_avx(auVar363,0x44);
          auVar110 = vpcmpeqb_avx(auVar110,___xmm_00000000000000000000000000000000);
          bVar29 = ~(SUB161(auVar110 >> 7,0) & 1 | (SUB161(auVar110 >> 0xf,0) & 1) << 1 |
                     (SUB161(auVar110 >> 0x17,0) & 1) << 2 | (SUB161(auVar110 >> 0x1f,0) & 1) << 3 |
                     (SUB161(auVar110 >> 0x27,0) & 1) << 4 | (SUB161(auVar110 >> 0x2f,0) & 1) << 5 |
                    (SUB161(auVar110 >> 0x37,0) & 1) << 6);
          if ((bVar29 & 1) != 0) {
            local_e80 = (undefined1)local_1040;
          }
          if ((bVar29 & 2) != 0) {
            uStack_e7f = (undefined1)(local_1040 >> 8);
          }
          if ((bVar29 & 4) != 0) {
            uStack_e7e = (undefined1)(local_1040 >> 0x10);
          }
          auVar399 = ZEXT864(0) << 0x20;
          if ((bVar29 & 8) != 0) {
            uStack_e7d = (undefined1)(local_1040 >> 0x18);
          }
          if ((bVar29 & 0x10) != 0) {
            uStack_e7c = (undefined1)(local_1040 >> 0x20);
          }
          if ((bVar29 & 0x20) != 0) {
            uStack_e7b = (undefined1)(local_1040 >> 0x28);
          }
          if ((bVar29 & 0x40) != 0) {
            uStack_e7a = (undefined1)(local_1040 >> 0x30);
          }
          if ((SUB161(auVar110 >> 0x3f,0) & 1) == 0) {
            uStack_e79 = (undefined1)(local_1040 >> 0x38);
          }
          if ((byte)(bVar30 | bVar19 << 1 | bVar20 << 2 | bVar21 << 3 | bVar22 << 4 | bVar23 << 5 |
                     bVar24 << 6 | bVar25) != (byte)iVar26) goto LAB_140a750f0;
        }
        in_ZMM4 = ZEXT3264(_local_f80);
        in_ZMM7 = ZEXT3264(local_f40);
        auVar196 = vshufps_avx(auVar275,auVar275,0x50);
        auVar110 = vshufps_avx(auVar275,auVar275,0xfa);
        auVar380._16_16_ = auVar110;
        auVar380._0_16_ = auVar196;
        auVar392._0_16_ = local_bc0._0_16_;
        auVar392._16_16_ = auVar396;
        local_11c0 = vmaskmovpd_avx(auVar380,_local_1000);
        local_11a0 = vmaskmovpd_avx(auVar392,_local_fe0);
        local_1180 = vmaskmovpd_avx(auVar380,_local_fc0);
        local_1160 = vmaskmovpd_avx(auVar392,_local_fa0);
        local_1140 = vmaskmovpd_avx(auVar380,_local_f80);
        local_1120 = vmaskmovpd_avx(auVar392,_local_f60);
        local_1100 = vmaskmovpd_avx(auVar380,local_f40);
        local_10e0 = vmaskmovpd_avx(auVar392,local_f20);
        _local_10c0 = vmaskmovpd_avx(auVar380,_local_f00);
        _local_10a0 = vmaskmovpd_avx(auVar392,_local_ee0);
        _local_1080 = vmaskmovpd_avx(auVar380,_local_ec0);
        _local_1060 = vmaskmovpd_avx(auVar392,_local_ea0);
        uVar46 = local_1040;
        if (bVar30 != 0) {
          local_1040 = CONCAT71(local_1040._1_7_,local_e80);
          uVar46 = local_1040;
        }
        auVar372 = ZEXT864(0) << 0x40;
        if (bVar19 != 0) {
          local_1040._2_6_ = (undefined6)(uVar46 >> 0x10);
          local_1040._0_1_ = (undefined1)uVar46;
          local_1040._0_2_ = CONCAT11(uStack_e7f,(undefined1)local_1040);
          uVar46 = local_1040;
        }
        if (bVar20 != 0) {
          local_1040._3_5_ = (undefined5)(uVar46 >> 0x18);
          local_1040._0_2_ = (undefined2)uVar46;
          local_1040._0_3_ = CONCAT12(uStack_e7e,(undefined2)local_1040);
          uVar46 = local_1040;
        }
        if (bVar21 != 0) {
          local_1040._4_4_ = (undefined4)(uVar46 >> 0x20);
          local_1040._0_3_ = (undefined3)uVar46;
          local_1040._0_4_ = CONCAT13(uStack_e7d,(undefined3)local_1040);
          uVar46 = local_1040;
        }
        if (bVar22 != 0) {
          local_1040._5_3_ = (undefined3)(uVar46 >> 0x28);
          local_1040._0_4_ = (undefined4)uVar46;
          local_1040._0_5_ = CONCAT14(uStack_e7c,(undefined4)local_1040);
          uVar46 = local_1040;
        }
        if (bVar23 != 0) {
          local_1040._6_2_ = (undefined2)(uVar46 >> 0x30);
          local_1040._0_5_ = (undefined5)uVar46;
          local_1040._0_6_ = CONCAT15(uStack_e7b,(undefined5)local_1040);
          uVar46 = local_1040;
        }
        local_1040 = uVar46;
        if (bVar24 != 0) {
          local_1040._7_1_ = (undefined1)(uVar46 >> 0x38);
          local_1040._0_6_ = (undefined6)uVar46;
          local_1040._0_7_ = CONCAT16(uStack_e7a,(undefined6)local_1040);
        }
        lVar60 = local_c00._0_8_;
        if (bVar25 != 0) {
          local_1040 = CONCAT17(uStack_e79,(undefined7)local_1040);
        }
      }
      local_d8 = in_ZMM7._0_16_;
      lVar60 = lVar60 + 8;
    } while ((int)lVar60 < (int)(uVar27 & 0xfffffff8));
  }
  uVar27 = (uint)lVar60;
  if ((int)param_6 <= (int)uVar27) {
    auVar196 = vpshufd_avx(ZEXT416(param_6),0);
    goto LAB_140a778bc;
  }
  auVar334 = vpshufd_avx(ZEXT416(uVar27),0);
  local_bc0._16_16_ = auVar334;
  local_bc0._0_16_ = auVar334;
  local_bc0 = local_bc0 | ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
  auVar196 = vpshufd_avx(ZEXT416(param_6),0);
  auVar276 = local_bc0._16_16_;
  auVar330 = vpcmpgtd_avx(auVar196,auVar276);
  auVar338 = vpcmpgtd_avx(auVar196,local_bc0._0_16_);
  auVar110 = vpslld_avx(auVar334,3);
  auVar300 = vpsubd_avx(auVar110,auVar334);
  auVar110 = vpand_avx(auVar338,auVar300);
  auVar305._16_16_ = auVar330;
  auVar305._0_16_ = auVar338;
  lVar60 = param_3 + (longlong)auVar110._0_4_ * 8;
  lVar43 = param_3 + (longlong)auVar110._4_4_ * 8;
  lVar44 = param_3 + (longlong)auVar110._8_4_ * 8;
  lVar45 = param_3 + (longlong)auVar110._12_4_ * 8;
  auVar300 = vpand_avx(auVar330,auVar300);
  lVar52 = param_3 + (longlong)auVar300._0_4_ * 8;
  auVar265 = vmaskmovps_avx(auVar305,*(undefined1 (*) [32])(param_1 + (int)(uVar27 << 2)));
  lVar55 = param_3 + (longlong)auVar300._4_4_ * 8;
  lVar61 = param_3 + (longlong)auVar300._8_4_ * 8;
  uVar32 = auVar338._0_4_;
  uVar33 = auVar338._4_4_;
  uVar34 = auVar338._8_4_;
  uVar28 = auVar338._12_4_;
  uVar36 = auVar330._0_4_;
  uVar37 = auVar330._4_4_;
  uVar38 = auVar330._8_4_;
  uVar39 = auVar330._12_4_;
  lVar1 = param_3 + (longlong)auVar300._12_4_ * 8;
  auVar300 = vpinsrb_avx(ZEXT116(*(byte *)((ulonglong)
                                           (uVar32 & 
                                           ___ymm_000001b8000001800000014800000110000000d8000000a00000006800000030
                                           ) + lVar60)),
                         (uint)*(byte *)((ulonglong)(uVar33 & _UNK_1512875a4) + lVar43),1);
  auVar300 = vpinsrb_avx(auVar300,(uint)*(byte *)((ulonglong)(uVar34 & _UNK_1512875a8) + lVar44),2);
  auVar300 = vpinsrb_avx(auVar300,(uint)*(byte *)((ulonglong)(uVar28 & _UNK_1512875ac) + lVar45),3);
  auVar300 = vpinsrb_avx(auVar300,(uint)*(byte *)((ulonglong)(uVar36 & _UNK_1512875b0) + lVar52),4);
  auVar300 = vpinsrb_avx(auVar300,(uint)*(byte *)((ulonglong)(uVar37 & _UNK_1512875b4) + lVar55),5);
  auVar300 = vpinsrb_avx(auVar300,(uint)*(byte *)((ulonglong)(uVar38 & _UNK_1512875b8) + lVar61),6);
  auVar300 = vpinsrb_avx(auVar300,(uint)*(byte *)((ulonglong)(uVar39 & _UNK_1512875bc) + lVar1),7);
  auVar275 = vpcmpeqd_avx(local_d8,local_d8);
  auVar77 = vpcmpeqd_avx(auVar265._16_16_,auVar275);
  auVar396 = vpcmpeqd_avx(auVar265._0_16_,auVar275);
  auVar300 = vpcmpeqb_avx(ZEXT816(0),auVar300);
  auVar300 = auVar300 ^ auVar275;
  auVar275 = vpmovsxbd_avx(auVar300);
  auVar298 = vpshufd_avx(auVar300,0x55);
  auVar298 = vpmovsxbd_avx(auVar298);
  auVar170._0_4_ = ~auVar396._0_4_ & auVar275._0_4_ & uVar32;
  auVar170._4_4_ = ~auVar396._4_4_ & auVar275._4_4_ & uVar33;
  auVar170._8_4_ = ~auVar396._8_4_ & auVar275._8_4_ & uVar34;
  auVar170._12_4_ = ~auVar396._12_4_ & auVar275._12_4_ & uVar28;
  auVar170._16_4_ = ~auVar77._0_4_ & auVar298._0_4_ & uVar36;
  auVar170._20_4_ = ~auVar77._4_4_ & auVar298._4_4_ & uVar37;
  auVar170._24_4_ = ~auVar77._8_4_ & auVar298._8_4_ & uVar38;
  auVar170._28_4_ = ~auVar77._12_4_ & auVar298._12_4_ & uVar39;
  uVar27 = vmovmskps_avx(auVar170);
  if (uVar27 == 0) goto LAB_140a778bc;
  auVar111._0_4_ = uVar32 & ___ymm_000001880000015000000118000000e0000000a8000000700000003800000000;
  auVar111._4_4_ = uVar33 & _UNK_1512874e4;
  auVar111._8_4_ = uVar34 & _UNK_1512874e8;
  auVar111._12_4_ = uVar28 & _UNK_1512874ec;
  uVar53 = vextractps_avx(auVar111,1);
  uVar35 = (undefined4)((ulonglong)lVar60 >> 0x20);
  uVar62 = vextractps_avx(auVar111,2);
  auVar339._8_8_ = 0;
  auVar339._0_8_ = *(ulonglong *)(param_3 + (longlong)auVar110._0_4_ * 8);
  uVar31 = vextractps_avx(auVar111,3);
  auVar298 = vmovhps_avx(auVar339,*(undefined8 *)((ulonglong)uVar53 + lVar43));
  auVar112._8_8_ = 0;
  auVar112._0_8_ = *(ulonglong *)(CONCAT44(uVar35,uVar62) + lVar44);
  auVar277 = vmovhps_avx(auVar112,*(undefined8 *)
                                   (CONCAT44((int)((ulonglong)lVar52 >> 0x20),uVar31) + lVar45));
  auVar113._8_8_ = 0;
  auVar113._0_8_ = *(ulonglong *)((ulonglong)(uVar38 & _UNK_1512874f8) + lVar61);
  auVar75 = vmovhps_avx(auVar113,*(undefined8 *)((ulonglong)(uVar39 & _UNK_1512874fc) + lVar1));
  auVar340._8_8_ = 0;
  auVar340._0_8_ = *(ulonglong *)((ulonglong)(uVar36 & _UNK_1512874f0) + lVar52);
  auVar74 = vmovhps_avx(auVar340,*(undefined8 *)((ulonglong)(uVar37 & _UNK_1512874f4) + lVar55));
  auVar373._0_4_ = uVar32 & ___ymm_000001900000015800000120000000e8000000b0000000780000004000000008;
  auVar373._4_4_ = uVar33 & _UNK_151287504;
  auVar373._8_4_ = uVar34 & _UNK_151287508;
  auVar373._12_4_ = uVar28 & _UNK_15128750c;
  uVar53 = vextractps_avx(auVar373,1);
  uVar57 = vextractps_avx(auVar373,2);
  uVar54 = vextractps_avx(auVar373,3);
  auVar79 = vpackssdw_avx(auVar338,auVar330);
  auVar227._8_8_ = 0;
  auVar227._0_8_ = *(ulonglong *)((ulonglong)(uVar38 & _UNK_151287518) + lVar61);
  auVar338 = vmovhps_avx(auVar227,*(undefined8 *)((ulonglong)(uVar39 & _UNK_15128751c) + lVar1));
  auVar228._8_8_ = 0;
  auVar228._0_8_ = *(ulonglong *)((ulonglong)(uVar36 & _UNK_151287510) + lVar52);
  auVar110 = vmovhpd_avx(auVar228,*(undefined8 *)((ulonglong)(uVar37 & _UNK_151287514) + lVar55));
  auVar269._16_16_ = auVar277;
  auVar269._0_16_ = auVar298;
  auVar229._8_8_ = 0;
  auVar229._0_8_ = *(ulonglong *)((ulonglong)uVar57 + lVar44);
  auVar76 = vmovhps_avx(auVar229,*(undefined8 *)((ulonglong)uVar54 + lVar45));
  auVar317._8_8_ = 0;
  auVar317._0_8_ = *(ulonglong *)((ulonglong)auVar373._0_4_ + lVar60);
  auVar73 = vmovhps_avx(auVar317,*(undefined8 *)((ulonglong)uVar53 + lVar43));
  auVar318._0_4_ = uVar32 & ___ymm_000001980000016000000128000000f0000000b8000000800000004800000010;
  auVar318._4_4_ = uVar33 & _UNK_151287524;
  auVar318._8_4_ = uVar34 & _UNK_151287528;
  auVar318._12_4_ = uVar28 & _UNK_15128752c;
  uVar53 = vextractps_avx(auVar318,1);
  uVar57 = vextractps_avx(auVar318,2);
  uVar54 = vextractps_avx(auVar318,3);
  auVar171._16_16_ = auVar75;
  auVar171._0_16_ = auVar74;
  auVar353._16_16_ = auVar338;
  auVar353._0_16_ = auVar110;
  auVar350._8_8_ = 0;
  auVar350._0_8_ = *(ulonglong *)((ulonglong)(uVar38 & _UNK_151287538) + lVar61);
  auVar275 = vmovhpd_avx(auVar350,*(undefined8 *)((ulonglong)(uVar39 & _UNK_15128753c) + lVar1));
  auVar367._8_8_ = 0;
  auVar367._0_8_ = *(ulonglong *)((ulonglong)(uVar36 & _UNK_151287530) + lVar52);
  auVar330 = vmovhpd_avx(auVar367,*(undefined8 *)((ulonglong)(uVar37 & _UNK_151287534) + lVar55));
  auVar270._16_16_ = auVar76;
  auVar270._0_16_ = auVar73;
  auVar230._8_8_ = 0;
  auVar230._0_8_ = *(ulonglong *)((ulonglong)uVar57 + lVar44);
  auVar78 = vmovhps_avx(auVar230,*(undefined8 *)((ulonglong)uVar54 + lVar45));
  auVar319._8_8_ = 0;
  auVar319._0_8_ = *(ulonglong *)((ulonglong)auVar318._0_4_ + lVar60);
  auVar282 = vmovhps_avx(auVar319,*(undefined8 *)((ulonglong)uVar53 + lVar43));
  auVar364._0_4_ = uVar32 & ___ymm_000001a00000016800000130000000f8000000c0000000880000005000000018;
  auVar364._4_4_ = uVar33 & _UNK_151287544;
  auVar364._8_4_ = uVar34 & _UNK_151287548;
  auVar364._12_4_ = uVar28 & _UNK_15128754c;
  uVar53 = vextractps_avx(auVar364,1);
  uVar57 = vextractps_avx(auVar364,2);
  uVar54 = vextractps_avx(auVar364,3);
  local_b00._16_16_ = auVar275;
  local_b00._0_16_ = auVar330;
  local_b20._16_16_ = auVar78;
  local_b20._0_16_ = auVar282;
  auVar231._8_8_ = 0;
  auVar231._0_8_ = *(ulonglong *)((ulonglong)(uVar38 & _UNK_151287558) + lVar61);
  auVar275 = vmovhps_avx(auVar231,*(undefined8 *)((ulonglong)(uVar39 & _UNK_15128755c) + lVar1));
  auVar320._8_8_ = 0;
  auVar320._0_8_ = *(ulonglong *)((ulonglong)(uVar36 & _UNK_151287550) + lVar52);
  auVar330 = vmovhps_avx(auVar320,*(undefined8 *)((ulonglong)(uVar37 & _UNK_151287554) + lVar55));
  auVar321._8_8_ = 0;
  auVar321._0_8_ = *(ulonglong *)((ulonglong)uVar57 + lVar44);
  auVar78 = vmovhps_avx(auVar321,*(undefined8 *)((ulonglong)uVar54 + lVar45));
  local_b40._16_16_ = auVar275;
  local_b40._0_16_ = auVar330;
  auVar114._8_8_ = 0;
  auVar114._0_8_ = *(ulonglong *)((ulonglong)auVar364._0_4_ + lVar60);
  auVar275 = vmovhps_avx(auVar114,*(undefined8 *)((ulonglong)uVar53 + lVar43));
  auVar232._0_4_ = uVar32 & ___ymm_000001a8000001700000013800000100000000c8000000900000005800000020;
  auVar232._4_4_ = uVar33 & _UNK_151287564;
  auVar232._8_4_ = uVar34 & _UNK_151287568;
  auVar232._12_4_ = uVar28 & _UNK_15128756c;
  uVar53 = vextractps_avx(auVar232,1);
  uVar31 = vextractps_avx(auVar232,2);
  uVar54 = vextractps_avx(auVar232,3);
  auVar172._16_16_ = auVar78;
  auVar172._0_16_ = auVar275;
  auVar233._8_8_ = 0;
  auVar233._0_8_ = *(ulonglong *)((ulonglong)(uVar38 & _UNK_151287578) + lVar61);
  auVar330 = vmovhps_avx(auVar233,*(undefined8 *)((ulonglong)(uVar39 & _UNK_15128757c) + lVar1));
  auVar115._8_8_ = 0;
  auVar115._0_8_ = *(ulonglong *)((ulonglong)(uVar36 & _UNK_151287570) + lVar52);
  auVar282 = vmovhps_avx(auVar115,*(undefined8 *)((ulonglong)(uVar37 & _UNK_151287574) + lVar55));
  local_b60._16_16_ = auVar330;
  local_b60._0_16_ = auVar282;
  auVar116._8_8_ = 0;
  auVar116._0_8_ = *(ulonglong *)(CONCAT44(uVar35,uVar31) + lVar44);
  auVar330 = vmovhps_avx(auVar116,*(undefined8 *)((ulonglong)uVar54 + lVar45));
  auVar234._8_8_ = 0;
  auVar234._0_8_ = *(ulonglong *)((ulonglong)auVar232._0_4_ + lVar60);
  auVar282 = vmovhps_avx(auVar234,*(undefined8 *)((ulonglong)uVar53 + lVar43));
  register0x00001210 = auVar330;
  local_be0 = auVar282;
  auVar117._0_4_ = uVar32 & ___ymm_000001b0000001780000014000000108000000d0000000980000006000000028;
  auVar117._4_4_ = uVar33 & _UNK_151287584;
  auVar117._8_4_ = uVar34 & _UNK_151287588;
  auVar117._12_4_ = uVar28 & _UNK_15128758c;
  uVar32 = vextractps_avx(auVar117,1);
  uVar33 = vextractps_avx(auVar117,2);
  uVar34 = vextractps_avx(auVar117,3);
  auVar118._8_8_ = 0;
  auVar118._0_8_ = *(ulonglong *)((ulonglong)(uVar38 & _UNK_151287598) + lVar61);
  auVar330 = vmovhps_avx(auVar118,*(undefined8 *)((ulonglong)(uVar39 & _UNK_15128759c) + lVar1));
  auVar235._8_8_ = 0;
  auVar235._0_8_ = *(ulonglong *)((ulonglong)(uVar36 & _UNK_151287590) + lVar52);
  auVar282 = vmovhps_avx(auVar235,*(undefined8 *)((ulonglong)(uVar37 & _UNK_151287594) + lVar55));
  local_b80._16_16_ = auVar330;
  local_b80._0_16_ = auVar282;
  auVar119._8_8_ = 0;
  auVar119._0_8_ = *(ulonglong *)((ulonglong)uVar33 + lVar44);
  auVar330 = vmovhps_avx(auVar119,*(undefined8 *)((ulonglong)uVar34 + lVar45));
  auVar236._8_8_ = 0;
  auVar236._0_8_ = *(ulonglong *)((ulonglong)auVar117._0_4_ + lVar60);
  auVar282 = vmovhps_avx(auVar236,*(undefined8 *)((ulonglong)uVar32 + lVar43));
  local_ba0._16_16_ = auVar330;
  local_ba0._0_16_ = auVar282;
  auVar77 = vpackssdw_avx(auVar396,auVar77);
  auVar300 = vpmovsxbw_avx(auVar300);
  auVar396 = vpandn_avx(auVar77,auVar300);
  auVar300 = vpand_avx(auVar79,auVar396);
  auVar330 = vpmovsxwd_avx(auVar300);
  auVar77 = vpslld_avx(auVar334,7);
  auVar77 = vpand_avx(auVar330,auVar77);
  auVar282 = vpunpckhwd_avx(auVar300,auVar300);
  auVar300 = vpslld_avx(auVar334,7);
  local_c00._16_16_ = auVar282;
  local_c00._0_16_ = auVar330;
  auVar300 = vpand_avx(auVar282,auVar300);
  uVar273 = auVar330._0_4_;
  auVar120._0_4_ = uVar273 & ___ymm_0000038000000300000002800000020000000180000001000000008000000000
  ;
  uVar289 = auVar330._4_4_;
  auVar120._4_4_ = uVar289 & _UNK_1512879c4;
  uVar290 = auVar330._8_4_;
  auVar120._8_4_ = uVar290 & _UNK_1512879c8;
  uVar291 = auVar330._12_4_;
  auVar120._12_4_ = uVar291 & _UNK_1512879cc;
  uVar292 = auVar282._0_4_;
  uVar293 = auVar282._4_4_;
  uVar294 = auVar282._8_4_;
  uVar295 = auVar282._12_4_;
  uVar32 = vextractps_avx(auVar120,1);
  uVar34 = vextractps_avx(auVar120,2);
  uVar33 = vextractps_avx(auVar120,3);
  lVar60 = auVar300._8_4_ + param_2;
  lVar52 = auVar300._12_4_ + param_2;
  auVar121._8_8_ = 0;
  auVar121._0_8_ = *(ulonglong *)((ulonglong)(uVar294 & _UNK_1512879d8) + lVar60);
  local_8d0 = vmovhpd_avx(auVar121,*(undefined8 *)((ulonglong)(uVar295 & _UNK_1512879dc) + lVar52));
  lVar55 = auVar300._0_4_ + param_2;
  auVar122._8_8_ = 0;
  auVar122._0_8_ = *(ulonglong *)((ulonglong)(uVar292 & _UNK_1512879d0) + lVar55);
  lVar43 = auVar77._8_4_ + param_2;
  lVar44 = auVar300._4_4_ + param_2;
  local_8e0 = vmovhps_avx(auVar122,*(undefined8 *)((ulonglong)(uVar293 & _UNK_1512879d4) + lVar44));
  auVar123._0_4_ = uVar273 & ___ymm_0000038800000308000002880000020800000188000001080000008800000008
  ;
  auVar123._4_4_ = uVar289 & _UNK_1512879e4;
  auVar123._8_4_ = uVar290 & _UNK_1512879e8;
  auVar123._12_4_ = uVar291 & _UNK_1512879ec;
  uVar47 = (undefined4)((ulonglong)lVar44 >> 0x20);
  uVar31 = vextractps_avx(auVar123,1);
  uVar62 = vextractps_avx(auVar123,2);
  uVar35 = vextractps_avx(auVar123,3);
  auVar124._8_8_ = 0;
  auVar124._0_8_ = *(ulonglong *)((ulonglong)uVar34 + lVar43);
  lVar45 = auVar77._12_4_ + param_2;
  local_8f0 = vmovhps_avx(auVar124,*(undefined8 *)((ulonglong)uVar33 + lVar45));
  auVar125._0_4_ = uVar273 & ___ymm_0000039800000318000002980000021800000198000001180000009800000018
  ;
  auVar125._4_4_ = uVar289 & _UNK_151287a24;
  auVar125._8_4_ = uVar290 & _UNK_151287a28;
  auVar125._12_4_ = uVar291 & _UNK_151287a2c;
  uVar33 = vextractps_avx(auVar125,1);
  uVar34 = vextractps_avx(auVar125,2);
  uVar28 = vextractps_avx(auVar125,3);
  auVar126._0_4_ = uVar273 & ___ymm_000003b000000330000002b000000230000001b000000130000000b000000030
  ;
  auVar126._4_4_ = uVar289 & _UNK_151287a84;
  auVar126._8_4_ = uVar290 & _UNK_151287a88;
  auVar126._12_4_ = uVar291 & _UNK_151287a8c;
  uVar36 = vextractps_avx(auVar126,1);
  uVar37 = vextractps_avx(auVar126,2);
  uVar38 = vextractps_avx(auVar126,3);
  auVar127._0_4_ = uVar273 & ___ymm_000003c800000348000002c800000248000001c800000148000000c800000048
  ;
  auVar127._4_4_ = uVar289 & _UNK_151287ae4;
  auVar127._8_4_ = uVar290 & _UNK_151287ae8;
  auVar127._12_4_ = uVar291 & _UNK_151287aec;
  uVar39 = vextractps_avx(auVar127,1);
  uVar53 = vextractps_avx(auVar127,2);
  uVar54 = vextractps_avx(auVar127,3);
  lVar61 = auVar77._4_4_ + param_2;
  auVar128._0_4_ = uVar273 & ___ymm_000003e000000360000002e000000260000001e000000160000000e000000060
  ;
  auVar128._4_4_ = uVar289 & _UNK_151287b44;
  auVar128._8_4_ = uVar290 & _UNK_151287b48;
  auVar128._12_4_ = uVar291 & _UNK_151287b4c;
  uVar57 = vextractps_avx(auVar128,1);
  uVar40 = vextractps_avx(auVar128,2);
  uVar41 = vextractps_avx(auVar128,3);
  auVar129._8_8_ = 0;
  auVar129._0_8_ = *(ulonglong *)(param_2 + auVar77._0_4_);
  local_900 = vmovhps_avx(auVar129,*(undefined8 *)((ulonglong)uVar32 + lVar61));
  param_2 = param_2 + auVar77._0_4_;
  auVar237._8_8_ = 0;
  auVar237._0_8_ = *(ulonglong *)((ulonglong)auVar123._0_4_ + param_2);
  local_8c0 = vmovhps_avx(auVar237,*(undefined8 *)(CONCAT44(uVar47,uVar31) + lVar61));
  auVar130._8_8_ = 0;
  auVar130._0_8_ = *(ulonglong *)((ulonglong)(uVar294 & _UNK_1512879f8) + lVar60);
  local_890 = vmovhps_avx(auVar130,*(undefined8 *)((ulonglong)(uVar295 & _UNK_1512879fc) + lVar52));
  auVar131._8_8_ = 0;
  auVar131._0_8_ = *(ulonglong *)((ulonglong)(uVar292 & _UNK_1512879f0) + lVar55);
  local_8a0 = vmovhps_avx(auVar131,*(undefined8 *)((ulonglong)(uVar293 & _UNK_1512879f4) + lVar44));
  auVar132._8_8_ = 0;
  auVar132._0_8_ = *(ulonglong *)(CONCAT44(uVar47,uVar62) + lVar43);
  local_8b0 = vmovhps_avx(auVar132,*(undefined8 *)(CONCAT44(uVar47,uVar35) + lVar45));
  auVar133._8_8_ = 0;
  auVar133._0_8_ =
       *(ulonglong *)
        ((ulonglong)
         (uVar273 & ___ymm_0000039000000310000002900000021000000190000001100000009000000010) +
        param_2);
  local_880 = vmovhps_avx(auVar133,*(undefined8 *)((ulonglong)(uVar289 & _UNK_151287a04) + lVar61));
  auVar238._8_8_ = 0;
  auVar238._0_8_ = *(ulonglong *)((ulonglong)(uVar294 & _UNK_151287a18) + lVar60);
  local_850 = vmovhps_avx(auVar238,*(undefined8 *)((ulonglong)(uVar295 & _UNK_151287a1c) + lVar52));
  auVar239._8_8_ = 0;
  auVar239._0_8_ = *(ulonglong *)((ulonglong)(uVar292 & _UNK_151287a10) + lVar55);
  local_860 = vmovhps_avx(auVar239,*(undefined8 *)((ulonglong)(uVar293 & _UNK_151287a14) + lVar44));
  auVar240._8_8_ = 0;
  auVar240._0_8_ = *(ulonglong *)((ulonglong)(uVar290 & _UNK_151287a08) + lVar43);
  local_870 = vmovhps_avx(auVar240,*(undefined8 *)((ulonglong)(uVar291 & _UNK_151287a0c) + lVar45));
  auVar241._8_8_ = 0;
  auVar241._0_8_ = *(ulonglong *)((ulonglong)auVar125._0_4_ + param_2);
  local_840 = vmovhps_avx(auVar241,*(undefined8 *)((ulonglong)uVar33 + lVar61));
  auVar134._8_8_ = 0;
  auVar134._0_8_ = *(ulonglong *)((ulonglong)(uVar294 & _UNK_151287a38) + lVar60);
  local_810 = vmovhps_avx(auVar134,*(undefined8 *)((ulonglong)(uVar295 & _UNK_151287a3c) + lVar52));
  auVar135._8_8_ = 0;
  auVar135._0_8_ = *(ulonglong *)((ulonglong)(uVar292 & _UNK_151287a30) + lVar55);
  local_820 = vmovhps_avx(auVar135,*(undefined8 *)((ulonglong)(uVar293 & _UNK_151287a34) + lVar44));
  auVar136._8_8_ = 0;
  auVar136._0_8_ = *(ulonglong *)((ulonglong)uVar34 + lVar43);
  local_830 = vmovhps_avx(auVar136,*(undefined8 *)((ulonglong)uVar28 + lVar45));
  auVar137._8_8_ = 0;
  auVar137._0_8_ =
       *(ulonglong *)
        ((ulonglong)
         (uVar273 & ___ymm_000003a000000320000002a000000220000001a000000120000000a000000020) +
        param_2);
  local_800 = vmovhps_avx(auVar137,*(undefined8 *)((ulonglong)(uVar289 & _UNK_151287a44) + lVar61));
  auVar242._8_8_ = 0;
  auVar242._0_8_ = *(ulonglong *)((ulonglong)(uVar294 & _UNK_151287a58) + lVar60);
  local_7d0 = vmovhps_avx(auVar242,*(undefined8 *)((ulonglong)(uVar295 & _UNK_151287a5c) + lVar52));
  auVar243._8_8_ = 0;
  auVar243._0_8_ = *(ulonglong *)((ulonglong)(uVar292 & _UNK_151287a50) + lVar55);
  local_7e0 = vmovhps_avx(auVar243,*(undefined8 *)((ulonglong)(uVar293 & _UNK_151287a54) + lVar44));
  auVar244._8_8_ = 0;
  auVar244._0_8_ = *(ulonglong *)((ulonglong)(uVar290 & _UNK_151287a48) + lVar43);
  local_7f0 = vmovhps_avx(auVar244,*(undefined8 *)((ulonglong)(uVar291 & _UNK_151287a4c) + lVar45));
  auVar245._8_8_ = 0;
  auVar245._0_8_ =
       *(ulonglong *)
        ((ulonglong)
         (uVar273 & ___ymm_000003a800000328000002a800000228000001a800000128000000a800000028) +
        param_2);
  local_7c0 = vmovhps_avx(auVar245,*(undefined8 *)((ulonglong)(uVar289 & _UNK_151287a64) + lVar61));
  auVar138._8_8_ = 0;
  auVar138._0_8_ = *(ulonglong *)((ulonglong)(uVar294 & _UNK_151287a78) + lVar60);
  local_790 = vmovhps_avx(auVar138,*(undefined8 *)((ulonglong)(uVar295 & _UNK_151287a7c) + lVar52));
  auVar139._8_8_ = 0;
  auVar139._0_8_ = *(ulonglong *)((ulonglong)(uVar292 & _UNK_151287a70) + lVar55);
  local_7a0 = vmovhps_avx(auVar139,*(undefined8 *)((ulonglong)(uVar293 & _UNK_151287a74) + lVar44));
  auVar140._8_8_ = 0;
  auVar140._0_8_ = *(ulonglong *)((ulonglong)(uVar290 & _UNK_151287a68) + lVar43);
  local_7b0 = vmovhps_avx(auVar140,*(undefined8 *)((ulonglong)(uVar291 & _UNK_151287a6c) + lVar45));
  auVar141._8_8_ = 0;
  auVar141._0_8_ = *(ulonglong *)((ulonglong)auVar126._0_4_ + param_2);
  local_780 = vmovhps_avx(auVar141,*(undefined8 *)((ulonglong)uVar36 + lVar61));
  auVar246._8_8_ = 0;
  auVar246._0_8_ = *(ulonglong *)((ulonglong)(uVar294 & _UNK_151287a98) + lVar60);
  local_750 = vmovhps_avx(auVar246,*(undefined8 *)((ulonglong)(uVar295 & _UNK_151287a9c) + lVar52));
  auVar247._8_8_ = 0;
  auVar247._0_8_ = *(ulonglong *)((ulonglong)(uVar292 & _UNK_151287a90) + lVar55);
  local_760 = vmovhps_avx(auVar247,*(undefined8 *)((ulonglong)(uVar293 & _UNK_151287a94) + lVar44));
  auVar248._8_8_ = 0;
  auVar248._0_8_ = *(ulonglong *)((ulonglong)uVar37 + lVar43);
  local_770 = vmovhps_avx(auVar248,*(undefined8 *)((ulonglong)uVar38 + lVar45));
  auVar249._8_8_ = 0;
  auVar249._0_8_ =
       *(ulonglong *)
        ((ulonglong)
         (uVar273 & ___ymm_000003b800000338000002b800000238000001b800000138000000b800000038) +
        param_2);
  local_740 = vmovhps_avx(auVar249,*(undefined8 *)((ulonglong)(uVar289 & _UNK_151287aa4) + lVar61));
  auVar142._8_8_ = 0;
  auVar142._0_8_ = *(ulonglong *)((ulonglong)(uVar294 & _UNK_151287ab8) + lVar60);
  local_710 = vmovhps_avx(auVar142,*(undefined8 *)((ulonglong)(uVar295 & _UNK_151287abc) + lVar52));
  auVar143._8_8_ = 0;
  auVar143._0_8_ = *(ulonglong *)((ulonglong)(uVar292 & _UNK_151287ab0) + lVar55);
  local_720 = vmovhps_avx(auVar143,*(undefined8 *)((ulonglong)(uVar293 & _UNK_151287ab4) + lVar44));
  auVar144._8_8_ = 0;
  auVar144._0_8_ = *(ulonglong *)((ulonglong)(uVar290 & _UNK_151287aa8) + lVar43);
  local_730 = vmovhps_avx(auVar144,*(undefined8 *)((ulonglong)(uVar291 & _UNK_151287aac) + lVar45));
  auVar145._8_8_ = 0;
  auVar145._0_8_ =
       *(ulonglong *)
        ((ulonglong)
         (uVar273 & ___ymm_000003c000000340000002c000000240000001c000000140000000c000000040) +
        param_2);
  local_700 = vmovhps_avx(auVar145,*(undefined8 *)((ulonglong)(uVar289 & _UNK_151287ac4) + lVar61));
  auVar250._8_8_ = 0;
  auVar250._0_8_ = *(ulonglong *)((ulonglong)(uVar294 & _UNK_151287ad8) + lVar60);
  local_6d0 = vmovhps_avx(auVar250,*(undefined8 *)((ulonglong)(uVar295 & _UNK_151287adc) + lVar52));
  auVar251._8_8_ = 0;
  auVar251._0_8_ = *(ulonglong *)((ulonglong)(uVar292 & _UNK_151287ad0) + lVar55);
  local_6e0 = vmovhps_avx(auVar251,*(undefined8 *)((ulonglong)(uVar293 & _UNK_151287ad4) + lVar44));
  auVar252._8_8_ = 0;
  auVar252._0_8_ = *(ulonglong *)((ulonglong)(uVar290 & _UNK_151287ac8) + lVar43);
  local_6f0 = vmovhps_avx(auVar252,*(undefined8 *)((ulonglong)(uVar291 & _UNK_151287acc) + lVar45));
  auVar253._8_8_ = 0;
  auVar253._0_8_ = *(ulonglong *)((ulonglong)auVar127._0_4_ + param_2);
  local_6c0 = vmovhps_avx(auVar253,*(undefined8 *)((ulonglong)uVar39 + lVar61));
  auVar146._8_8_ = 0;
  auVar146._0_8_ = *(ulonglong *)((ulonglong)(uVar294 & _UNK_151287af8) + lVar60);
  local_690 = vmovhps_avx(auVar146,*(undefined8 *)((ulonglong)(uVar295 & _UNK_151287afc) + lVar52));
  auVar147._8_8_ = 0;
  auVar147._0_8_ = *(ulonglong *)((ulonglong)(uVar292 & _UNK_151287af0) + lVar55);
  local_6a0 = vmovhps_avx(auVar147,*(undefined8 *)((ulonglong)(uVar293 & _UNK_151287af4) + lVar44));
  auVar148._8_8_ = 0;
  auVar148._0_8_ = *(ulonglong *)((ulonglong)uVar53 + lVar43);
  local_6b0 = vmovhps_avx(auVar148,*(undefined8 *)((ulonglong)uVar54 + lVar45));
  auVar149._8_8_ = 0;
  auVar149._0_8_ =
       *(ulonglong *)
        ((ulonglong)
         (uVar273 & ___ymm_000003d000000350000002d000000250000001d000000150000000d000000050) +
        param_2);
  local_680 = vmovhps_avx(auVar149,*(undefined8 *)((ulonglong)(uVar289 & _UNK_151287b04) + lVar61));
  auVar254._8_8_ = 0;
  auVar254._0_8_ = *(ulonglong *)((ulonglong)(uVar294 & _UNK_151287b18) + lVar60);
  local_650 = vmovhps_avx(auVar254,*(undefined8 *)((ulonglong)(uVar295 & _UNK_151287b1c) + lVar52));
  auVar255._8_8_ = 0;
  auVar255._0_8_ = *(ulonglong *)((ulonglong)(uVar292 & _UNK_151287b10) + lVar55);
  local_660 = vmovhps_avx(auVar255,*(undefined8 *)((ulonglong)(uVar293 & _UNK_151287b14) + lVar44));
  auVar256._8_8_ = 0;
  auVar256._0_8_ = *(ulonglong *)((ulonglong)(uVar290 & _UNK_151287b08) + lVar43);
  local_670 = vmovhps_avx(auVar256,*(undefined8 *)((ulonglong)(uVar291 & _UNK_151287b0c) + lVar45));
  auVar257._8_8_ = 0;
  auVar257._0_8_ =
       *(ulonglong *)
        ((ulonglong)
         (uVar273 & ___ymm_000003d800000358000002d800000258000001d800000158000000d800000058) +
        param_2);
  local_640 = vmovhps_avx(auVar257,*(undefined8 *)((ulonglong)(uVar289 & _UNK_151287b24) + lVar61));
  auVar150._8_8_ = 0;
  auVar150._0_8_ = *(ulonglong *)((ulonglong)(uVar294 & _UNK_151287b38) + lVar60);
  local_610 = vmovhps_avx(auVar150,*(undefined8 *)((ulonglong)(uVar295 & _UNK_151287b3c) + lVar52));
  auVar151._8_8_ = 0;
  auVar151._0_8_ = *(ulonglong *)((ulonglong)(uVar292 & _UNK_151287b30) + lVar55);
  local_620 = vmovhps_avx(auVar151,*(undefined8 *)((ulonglong)(uVar293 & _UNK_151287b34) + lVar44));
  auVar152._8_8_ = 0;
  auVar152._0_8_ = *(ulonglong *)((ulonglong)(uVar290 & _UNK_151287b28) + lVar43);
  local_630 = vmovhps_avx(auVar152,*(undefined8 *)((ulonglong)(uVar291 & _UNK_151287b2c) + lVar45));
  auVar153._8_8_ = 0;
  auVar153._0_8_ = *(ulonglong *)((ulonglong)auVar128._0_4_ + param_2);
  local_600 = vmovhps_avx(auVar153,*(undefined8 *)((ulonglong)uVar57 + lVar61));
  auVar258._8_8_ = 0;
  auVar258._0_8_ = *(ulonglong *)((ulonglong)(uVar294 & _UNK_151287b58) + lVar60);
  local_5d0 = vmovhps_avx(auVar258,*(undefined8 *)((ulonglong)(uVar295 & _UNK_151287b5c) + lVar52));
  auVar259._8_8_ = 0;
  auVar259._0_8_ = *(ulonglong *)((ulonglong)(uVar292 & _UNK_151287b50) + lVar55);
  local_5e0 = vmovhps_avx(auVar259,*(undefined8 *)((ulonglong)(uVar293 & _UNK_151287b54) + lVar44));
  auVar260._8_8_ = 0;
  auVar260._0_8_ = *(ulonglong *)((ulonglong)uVar40 + lVar43);
  local_5f0 = vmovhps_avx(auVar260,*(undefined8 *)((ulonglong)uVar41 + lVar45));
  auVar154._0_4_ = uVar273 & ___ymm_000003e800000368000002e800000268000001e800000168000000e800000068
  ;
  auVar154._4_4_ = uVar289 & _UNK_151287b64;
  auVar154._8_4_ = uVar290 & _UNK_151287b68;
  auVar154._12_4_ = uVar291 & _UNK_151287b6c;
  uVar32 = vextractps_avx(auVar154,1);
  uVar31 = vextractps_avx(auVar154,2);
  auVar261._8_8_ = 0;
  auVar261._0_8_ = *(ulonglong *)((ulonglong)(uVar294 & _UNK_151287b78) + lVar60);
  local_590 = vmovhps_avx(auVar261,*(undefined8 *)((ulonglong)(uVar295 & _UNK_151287b7c) + lVar52));
  auVar155._8_8_ = 0;
  auVar155._0_8_ = *(ulonglong *)((ulonglong)(uVar292 & _UNK_151287b70) + lVar55);
  local_5a0 = vmovhps_avx(auVar155,*(undefined8 *)((ulonglong)(uVar293 & _UNK_151287b74) + lVar44));
  auVar156._8_8_ = 0;
  auVar156._0_8_ = *(ulonglong *)(CONCAT44((int)((ulonglong)lVar52 >> 0x20),uVar31) + lVar43);
  local_5b0 = vmovhps_avx(auVar156,*(undefined8 *)((ulonglong)auVar154._12_4_ + lVar45));
  auVar157._8_8_ = 0;
  auVar157._0_8_ = *(ulonglong *)((ulonglong)auVar154._0_4_ + param_2);
  local_5c0 = vmovhps_avx(auVar157,*(undefined8 *)((ulonglong)uVar32 + lVar61));
  auVar262._0_4_ = uVar273 & ___ymm_000003f000000370000002f000000270000001f000000170000000f000000070
  ;
  auVar262._4_4_ = uVar289 & _UNK_151287b84;
  auVar262._8_4_ = uVar290 & _UNK_151287b88;
  auVar262._12_4_ = uVar291 & _UNK_151287b8c;
  uVar32 = vextractps_avx(auVar262,1);
  uVar33 = vextractps_avx(auVar262,2);
  auVar158._8_8_ = 0;
  auVar158._0_8_ = *(ulonglong *)((ulonglong)(uVar294 & _UNK_151287b98) + lVar60);
  local_550 = vmovhps_avx(auVar158,*(undefined8 *)((ulonglong)(uVar295 & _UNK_151287b9c) + lVar52));
  auVar159._8_8_ = 0;
  auVar159._0_8_ = *(ulonglong *)((ulonglong)(uVar292 & _UNK_151287b90) + lVar55);
  local_560 = vmovhps_avx(auVar159,*(undefined8 *)((ulonglong)(uVar293 & _UNK_151287b94) + lVar44));
  auVar160._8_8_ = 0;
  auVar160._0_8_ = *(ulonglong *)((ulonglong)auVar262._0_4_ + param_2);
  local_580 = vmovhps_avx(auVar160,*(undefined8 *)((ulonglong)uVar32 + lVar61));
  auVar263._8_8_ = 0;
  auVar263._0_8_ = *(ulonglong *)((ulonglong)uVar33 + lVar43);
  local_570 = vmovhps_avx(auVar263,*(undefined8 *)((ulonglong)auVar262._12_4_ + lVar45));
  auVar264._8_8_ = 0;
  auVar264._0_8_ =
       *(ulonglong *)
        ((ulonglong)
         (uVar273 & ___ymm_000003f800000378000002f800000278000001f800000178000000f800000078) +
        param_2);
  local_540 = vmovhps_avx(auVar264,*(undefined8 *)((ulonglong)(uVar289 & _UNK_151287ba4) + lVar61));
  auVar161._8_8_ = 0;
  auVar161._0_8_ = *(ulonglong *)((ulonglong)(uVar294 & _UNK_151287bb8) + lVar60);
  local_510 = vmovhps_avx(auVar161,*(undefined8 *)((ulonglong)(uVar295 & _UNK_151287bbc) + lVar52));
  auVar162._8_8_ = 0;
  auVar162._0_8_ = *(ulonglong *)((ulonglong)(uVar292 & _UNK_151287bb0) + lVar55);
  local_520 = vmovhps_avx(auVar162,*(undefined8 *)((ulonglong)(uVar293 & _UNK_151287bb4) + lVar44));
  auVar163._8_8_ = 0;
  auVar163._0_8_ = *(ulonglong *)((ulonglong)(uVar290 & _UNK_151287ba8) + lVar43);
  local_530 = vmovhps_avx(auVar163,*(undefined8 *)((ulonglong)(uVar291 & _UNK_151287bac) + lVar45));
  dVar17 = param_4[8];
  dVar67 = *param_4;
  lVar60 = 0xc0;
  dVar68 = param_4[0xc];
  dVar69 = param_4[1];
  dVar70 = param_4[5];
  dVar71 = param_4[9];
  dVar180 = param_4[0xd];
  dVar181 = param_4[2];
  dVar182 = param_4[6];
  dVar183 = param_4[10];
  dVar184 = param_4[0xe];
  dVar185 = param_4[3];
  dVar186 = param_4[7];
  dVar187 = param_4[0xb];
  dVar188 = param_4[0xf];
  do {
    dVar190 = *(double *)(local_9c8 + lVar60 + 8);
    dVar191 = *(double *)(local_9b0 + lVar60 + -8);
    dVar192 = *(double *)(local_9b0 + lVar60);
    dVar193 = *(double *)(local_9a8 + lVar60);
    dVar194 = *(double *)(local_9a8 + lVar60 + 8);
    dVar296 = *(double *)(local_990 + lVar60 + -8);
    dVar310 = *(double *)(local_990 + lVar60);
    dVar311 = *(double *)(local_990 + lVar60 + 8);
    dVar312 = *(double *)(local_978 + lVar60 + -8);
    dVar313 = *(double *)(local_978 + lVar60);
    dVar326 = *(double *)(local_970 + lVar60);
    dVar327 = *(double *)(local_970 + lVar60 + 8);
    dVar328 = *(double *)(local_958 + lVar60 + -8);
    dVar337 = *(double *)(local_958 + lVar60);
    dVar344 = *(double *)(local_958 + lVar60 + 8);
    dVar345 = *(double *)(local_940 + lVar60 + -8);
    dVar346 = *(double *)(local_920 + lVar60);
    dVar347 = *(double *)(local_920 + lVar60 + 8);
    dVar348 = *(double *)(local_908 + lVar60 + -8);
    dVar356 = *(double *)(local_908 + lVar60);
    dVar357 = *(double *)(local_940 + lVar60);
    dVar358 = *(double *)(local_938 + lVar60);
    dVar359 = *(double *)(local_938 + lVar60 + 8);
    dVar360 = *(double *)(local_920 + lVar60 + -8);
    dVar361 = *(double *)(local_900 + lVar60);
    dVar376 = *(double *)(local_900 + lVar60 + 8);
    dVar377 = *(double *)(local_8f0 + lVar60);
    dVar384 = *(double *)(local_8f0 + lVar60 + 8);
    dVar385 = *(double *)(local_8e0 + lVar60);
    dVar386 = *(double *)(local_8e0 + lVar60 + 8);
    dVar387 = *(double *)(local_8d0 + lVar60);
    dVar388 = *(double *)(local_8d0 + lVar60 + 8);
    dVar189 = param_4[4];
    *(double *)(local_10a0 + lVar60) =
         dVar194 * dVar67 + 0.0 + dVar328 * dVar189 + dVar17 * dVar346 + dVar68 * dVar385;
    *(double *)(local_10a0 + lVar60 + 8) =
         dVar296 * dVar67 + 0.0 + dVar337 * dVar189 + dVar17 * dVar347 + dVar68 * dVar386;
    *(double *)(local_10a0 + lVar60 + 0x10) =
         dVar310 * dVar67 + 0.0 + dVar344 * dVar189 + dVar17 * dVar348 + dVar68 * dVar387;
    *(double *)(auStack_1090 + lVar60 + 8) =
         dVar311 * dVar67 + 0.0 + dVar345 * dVar189 + dVar17 * dVar356 + dVar68 * dVar388;
    *(double *)(local_10c0 + lVar60) =
         dVar67 * dVar190 + 0.0 + dVar189 * dVar312 + dVar17 * dVar357 + dVar68 * dVar361;
    *(double *)(local_10c0 + lVar60 + 8) =
         dVar67 * dVar191 + 0.0 + dVar189 * dVar313 + dVar17 * dVar358 + dVar68 * dVar376;
    *(double *)(local_10c0 + lVar60 + 0x10) =
         dVar67 * dVar192 + 0.0 + dVar189 * dVar326 + dVar17 * dVar359 + dVar68 * dVar377;
    *(double *)(auStack_10b0 + lVar60 + 8) =
         dVar67 * dVar193 + 0.0 + dVar189 * dVar327 + dVar17 * dVar360 + dVar68 * dVar384;
    *(double *)(local_1060 + lVar60) =
         dVar194 * dVar69 + 0.0 + dVar328 * dVar70 + dVar71 * dVar346 + dVar180 * dVar385;
    *(double *)(local_1060 + lVar60 + 8) =
         dVar296 * dVar69 + 0.0 + dVar337 * dVar70 + dVar71 * dVar347 + dVar180 * dVar386;
    *(double *)(local_1060 + lVar60 + 0x10) =
         dVar310 * dVar69 + 0.0 + dVar344 * dVar70 + dVar71 * dVar348 + dVar180 * dVar387;
    *(double *)(local_1060 + lVar60 + 0x18) =
         dVar311 * dVar69 + 0.0 + dVar345 * dVar70 + dVar71 * dVar356 + dVar180 * dVar388;
    *(double *)(local_1080 + lVar60) =
         dVar69 * dVar190 + 0.0 + dVar70 * dVar312 + dVar71 * dVar357 + dVar180 * dVar361;
    *(double *)(local_1080 + lVar60 + 8) =
         dVar69 * dVar191 + 0.0 + dVar70 * dVar313 + dVar71 * dVar358 + dVar180 * dVar376;
    *(double *)(local_1080 + lVar60 + 0x10) =
         dVar69 * dVar192 + 0.0 + dVar70 * dVar326 + dVar71 * dVar359 + dVar180 * dVar377;
    *(double *)(local_1080 + lVar60 + 0x18) =
         dVar69 * dVar193 + 0.0 + dVar70 * dVar327 + dVar71 * dVar360 + dVar180 * dVar384;
    *(double *)((longlong)adStack_1038 + lVar60 + 0x18) =
         dVar194 * dVar181 + 0.0 + dVar328 * dVar182 + dVar183 * dVar346 + dVar184 * dVar385;
    *(double *)((longlong)adStack_1038 + lVar60 + 0x20) =
         dVar296 * dVar181 + 0.0 + dVar337 * dVar182 + dVar183 * dVar347 + dVar184 * dVar386;
    *(double *)((longlong)adStack_1038 + lVar60 + 0x28) =
         dVar310 * dVar181 + 0.0 + dVar344 * dVar182 + dVar183 * dVar348 + dVar184 * dVar387;
    *(double *)((longlong)adStack_1038 + lVar60 + 0x30) =
         dVar311 * dVar181 + 0.0 + dVar345 * dVar182 + dVar183 * dVar356 + dVar184 * dVar388;
    *(double *)((longlong)adStack_1038 + lVar60 + -8) =
         dVar181 * dVar190 + 0.0 + dVar182 * dVar312 + dVar183 * dVar357 + dVar184 * dVar361;
    *(double *)((longlong)adStack_1038 + lVar60) =
         dVar181 * dVar191 + 0.0 + dVar182 * dVar313 + dVar183 * dVar358 + dVar184 * dVar376;
    *(double *)((longlong)adStack_1038 + lVar60 + 8) =
         dVar181 * dVar192 + 0.0 + dVar182 * dVar326 + dVar183 * dVar359 + dVar184 * dVar377;
    *(double *)((longlong)adStack_1038 + lVar60 + 0x10) =
         dVar181 * dVar193 + 0.0 + dVar182 * dVar327 + dVar183 * dVar360 + dVar184 * dVar384;
    *(double *)(local_fe0 + lVar60) =
         dVar194 * dVar185 + 0.0 + dVar328 * dVar186 + dVar187 * dVar346 + dVar385 * dVar188;
    *(double *)(local_fe0 + lVar60 + 8) =
         dVar296 * dVar185 + 0.0 + dVar337 * dVar186 + dVar187 * dVar347 + dVar386 * dVar188;
    *(double *)(local_fe0 + lVar60 + 0x10) =
         dVar310 * dVar185 + 0.0 + dVar344 * dVar186 + dVar187 * dVar348 + dVar387 * dVar188;
    *(double *)(local_fe0 + lVar60 + 0x18) =
         dVar311 * dVar185 + 0.0 + dVar345 * dVar186 + dVar187 * dVar356 + dVar388 * dVar188;
    *(double *)(local_1000 + lVar60) =
         dVar185 * dVar190 + 0.0 + dVar186 * dVar312 + dVar187 * dVar357 + dVar361 * dVar188;
    *(double *)(local_1000 + lVar60 + 8) =
         dVar185 * dVar191 + 0.0 + dVar186 * dVar313 + dVar187 * dVar358 + dVar376 * dVar188;
    *(double *)(local_1000 + lVar60 + 0x10) =
         dVar185 * dVar192 + 0.0 + dVar186 * dVar326 + dVar187 * dVar359 + dVar377 * dVar188;
    *(double *)(local_1000 + lVar60 + 0x18) =
         dVar185 * dVar193 + 0.0 + dVar186 * dVar327 + dVar187 * dVar360 + dVar384 * dVar188;
    lVar60 = lVar60 + 0x100;
  } while (lVar60 != 0x4c0);
  local_1500 = auVar298._0_8_;
  dStack_14f8 = auVar298._8_8_;
  dStack_14f0 = auVar277._0_8_;
  dStack_14e8 = auVar277._8_8_;
  local_1320 = auVar275._0_8_;
  dStack_1318 = auVar275._8_8_;
  dStack_1310 = auVar78._0_8_;
  dStack_1308 = auVar78._8_8_;
  local_1300 = auVar73._0_8_;
  dStack_12f8 = auVar73._8_8_;
  dStack_12f0 = auVar76._0_8_;
  dStack_12e8 = auVar76._8_8_;
  dVar71 = (local_1500 + local_1320) * __real_3fe0000000000000;
  dVar180 = (dStack_14f8 + dStack_1318) * __real_3fe0000000000000;
  dVar181 = (dStack_14f0 + dStack_1310) * __real_3fe0000000000000;
  dVar182 = (dStack_14e8 + dStack_1308) * __real_3fe0000000000000;
  dVar187 = (local_1300 + (double)local_be0._0_8_) * __real_3fe0000000000000;
  dVar188 = (dStack_12f8 + (double)local_be0._8_8_) * __real_3fe0000000000000;
  dVar189 = (dStack_12f0 + dStack_bd0) * __real_3fe0000000000000;
  dVar190 = (dStack_12e8 + dStack_bc8) * __real_3fe0000000000000;
  local_1480 = auVar74._0_8_;
  dStack_1478 = auVar74._8_8_;
  dStack_1470 = auVar75._0_8_;
  dStack_1468 = auVar75._8_8_;
  dVar296 = (local_b40._0_8_ + local_1480) * __real_3fe0000000000000;
  dVar310 = (local_b40._8_8_ + dStack_1478) * __real_3fe0000000000000;
  dVar311 = (local_b40._16_8_ + dStack_1470) * __real_3fe0000000000000;
  dVar312 = (local_b40._24_8_ + dStack_1468) * __real_3fe0000000000000;
  local_12e0 = auVar110._0_8_;
  dStack_12d8 = auVar110._8_8_;
  dStack_12d0 = auVar338._0_8_;
  dStack_12c8 = auVar338._8_8_;
  dVar313 = (local_b60._0_8_ + local_12e0) * __real_3fe0000000000000;
  dVar328 = (local_b60._8_8_ + dStack_12d8) * __real_3fe0000000000000;
  dVar345 = (local_b60._16_8_ + dStack_12d0) * __real_3fe0000000000000;
  dVar348 = (local_b60._24_8_ + dStack_12c8) * __real_3fe0000000000000;
  dVar17 = (double)CONCAT17(uStack_e79,
                            CONCAT16(uStack_e7a,
                                     CONCAT15(uStack_e7b,
                                              CONCAT14(uStack_e7c,
                                                       CONCAT13(uStack_e7d,
                                                                CONCAT12(uStack_e7e,
                                                                         CONCAT11(uStack_e7f,
                                                                                  local_e80)))))));
  dVar326 = (local_b00._0_8_ + local_b80._0_8_) * __real_3fe0000000000000;
  dVar337 = (local_b00._8_8_ + local_b80._8_8_) * __real_3fe0000000000000;
  dVar346 = (local_b00._16_8_ + local_b80._16_8_) * __real_3fe0000000000000;
  dVar356 = (local_b00._24_8_ + local_b80._24_8_) * __real_3fe0000000000000;
  dVar376 = (local_b20._0_8_ + local_ba0._0_8_) * __real_3fe0000000000000;
  dVar384 = (local_b20._8_8_ + local_ba0._8_8_) * __real_3fe0000000000000;
  dVar386 = (local_b20._16_8_ + local_ba0._16_8_) * __real_3fe0000000000000;
  dVar388 = (local_b20._24_8_ + local_ba0._24_8_) * __real_3fe0000000000000;
  auVar265 = vsubpd_avx(auVar172,auVar269);
  auVar169 = vsubpd_avx(local_b40,auVar171);
  auVar167 = vsubpd_avx(_local_be0,auVar270);
  auVar380 = vsubpd_avx(local_b60,auVar353);
  auVar323 = vsubpd_avx(local_b80,local_b00);
  auVar285 = vsubpd_avx(local_ba0,local_b20);
  dVar327 = auVar169._0_8_ * __real_3fe0000000000000;
  dVar344 = auVar169._8_8_ * __real_3fe0000000000000;
  dVar347 = auVar169._16_8_ * __real_3fe0000000000000;
  dVar357 = auVar169._24_8_ * __real_3fe0000000000000;
  dVar67 = auVar265._0_8_ * __real_3fe0000000000000;
  dVar68 = auVar265._8_8_ * __real_3fe0000000000000;
  dVar69 = auVar265._16_8_ * __real_3fe0000000000000;
  dVar70 = auVar265._24_8_ * __real_3fe0000000000000;
  dVar377 = auVar380._0_8_ * __real_3fe0000000000000;
  dVar385 = auVar380._8_8_ * __real_3fe0000000000000;
  dVar387 = auVar380._16_8_ * __real_3fe0000000000000;
  dVar389 = auVar380._24_8_ * __real_3fe0000000000000;
  dVar358 = auVar167._0_8_ * __real_3fe0000000000000;
  dVar359 = auVar167._8_8_ * __real_3fe0000000000000;
  dVar360 = auVar167._16_8_ * __real_3fe0000000000000;
  dVar361 = auVar167._24_8_ * __real_3fe0000000000000;
  dVar183 = auVar285._0_8_ * __real_3fe0000000000000;
  dVar184 = auVar285._8_8_ * __real_3fe0000000000000;
  dVar185 = auVar285._16_8_ * __real_3fe0000000000000;
  dVar186 = auVar285._24_8_ * __real_3fe0000000000000;
  dVar191 = auVar323._0_8_ * __real_3fe0000000000000;
  dVar192 = auVar323._8_8_ * __real_3fe0000000000000;
  dVar193 = auVar323._16_8_ * __real_3fe0000000000000;
  dVar194 = auVar323._24_8_ * __real_3fe0000000000000;
  auVar306._0_8_ =
       (double)((ulonglong)(dVar183 * local_e00) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar358 * (double)local_f00._0_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar67 * (double)local_1000) & __real_7fffffffffffffff);
  auVar306._8_8_ =
       (double)((ulonglong)(dVar184 * dStack_df8) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar359 * (double)local_f00._8_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar68 * adStack_ff8[0]) & __real_7fffffffffffffff);
  auVar306._16_8_ =
       (double)((ulonglong)(dVar185 * dStack_df0) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar360 * dStack_ef0) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar69 * adStack_ff8[1]) & __real_7fffffffffffffff);
  auVar306._24_8_ =
       (double)((ulonglong)(dVar186 * dStack_de8) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar361 * dStack_ee8) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar70 * adStack_ff8[2]) & __real_7fffffffffffffff);
  auVar336._0_8_ =
       (double)((ulonglong)(dVar191 * local_de0) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar377 * (double)local_ee0._0_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar327 * (double)local_fe0) & __real_7fffffffffffffff);
  auVar336._8_8_ =
       (double)((ulonglong)(dVar192 * dStack_dd8) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar385 * (double)local_ee0._8_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar344 * adStack_fd8[0]) & __real_7fffffffffffffff);
  auVar336._16_8_ =
       (double)((ulonglong)(dVar193 * dStack_dd0) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar387 * dStack_ed0) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar347 * adStack_fd8[1]) & __real_7fffffffffffffff);
  auVar336._24_8_ =
       (double)((ulonglong)(dVar194 * dStack_dc8) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar389 * dStack_ec8) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar357 * adStack_fd8[2]) & __real_7fffffffffffffff);
  auVar283._0_8_ =
       (double)((ulonglong)(dVar183 * local_dc0) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar67 * (double)local_fc0._0_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar358 * (double)local_ec0._0_8_) & __real_7fffffffffffffff);
  auVar283._8_8_ =
       (double)((ulonglong)(dVar184 * dStack_db8) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar68 * (double)local_fc0._8_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar359 * (double)local_ec0._8_8_) & __real_7fffffffffffffff);
  auVar287._16_8_ =
       (double)((ulonglong)(dVar185 * dStack_db0) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar69 * dStack_fb0) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar360 * dStack_eb0) & __real_7fffffffffffffff);
  auVar287._0_16_ = auVar283;
  auVar287._24_8_ =
       (double)((ulonglong)(dVar186 * dStack_da8) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar70 * dStack_fa8) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar361 * dStack_ea8) & __real_7fffffffffffffff);
  auVar354._0_8_ =
       dVar296 * (double)local_fe0 + dVar313 * (double)local_ee0._0_8_ + dVar326 * local_de0 +
       local_ce0;
  auVar354._8_8_ =
       dVar310 * adStack_fd8[0] + dVar328 * (double)local_ee0._8_8_ + dVar337 * dStack_dd8 +
       dStack_cd8;
  auVar354._16_8_ =
       dVar311 * adStack_fd8[1] + dVar345 * dStack_ed0 + dVar346 * dStack_dd0 + dStack_cd0;
  auVar354._24_8_ =
       dVar312 * adStack_fd8[2] + dVar348 * dStack_ec8 + dVar356 * dStack_dc8 + dStack_cc8;
  auVar370._0_8_ =
       dVar376 * local_e00 + dVar71 * (double)local_1000 + dVar187 * (double)local_f00._0_8_ +
       local_d00;
  auVar370._8_8_ =
       dVar384 * dStack_df8 + dVar180 * adStack_ff8[0] + dVar188 * (double)local_f00._8_8_ +
       dStack_cf8;
  auVar370._16_8_ =
       dVar386 * dStack_df0 + dVar181 * adStack_ff8[1] + dVar189 * dStack_ef0 + dStack_cf0;
  auVar370._24_8_ =
       dVar388 * dStack_de8 + dVar182 * adStack_ff8[2] + dVar190 * dStack_ee8 + dStack_ce8;
  auVar374._0_8_ =
       dVar296 * (double)local_fa0._0_8_ + dVar313 * (double)local_ea0._0_8_ + dVar326 * local_da0 +
       local_ca0;
  auVar374._8_8_ =
       dVar310 * (double)local_fa0._8_8_ + dVar328 * (double)local_ea0._8_8_ + dVar337 * dStack_d98
       + dStack_c98;
  auVar374._16_8_ = dVar311 * dStack_f90 + dVar345 * dStack_e90 + dVar346 * dStack_d90 + dStack_c90;
  auVar374._24_8_ = dVar312 * dStack_f88 + dVar348 * dStack_e88 + dVar356 * dStack_d88 + dStack_c88;
  auVar381._0_8_ =
       dVar376 * local_dc0 + dVar71 * (double)local_fc0._0_8_ + dVar187 * (double)local_ec0._0_8_ +
       local_cc0;
  auVar381._8_8_ =
       dVar384 * dStack_db8 + dVar180 * (double)local_fc0._8_8_ + dVar188 * (double)local_ec0._8_8_
       + dStack_cb8;
  auVar381._16_8_ = dVar386 * dStack_db0 + dVar181 * dStack_fb0 + dVar189 * dStack_eb0 + dStack_cb0;
  auVar381._24_8_ = dVar388 * dStack_da8 + dVar182 * dStack_fa8 + dVar190 * dStack_ea8 + dStack_ca8;
  auVar393._0_8_ =
       dVar296 * (double)local_f60._0_8_ + dVar313 * local_e60 + dVar326 * local_d60 + local_c60;
  auVar393._8_8_ =
       dVar310 * (double)local_f60._8_8_ + dVar328 * dStack_e58 + dVar337 * dStack_d58 + dStack_c58;
  auVar393._16_8_ = dVar311 * dStack_f50 + dVar345 * dStack_e50 + dVar346 * dStack_d50 + dStack_c50;
  auVar393._24_8_ = dVar312 * dStack_f48 + dVar348 * dStack_e48 + dVar356 * dStack_d48 + dStack_c48;
  auVar398._0_8_ =
       dVar376 * local_d80 + dVar71 * (double)local_f80._0_8_ + dVar187 * dVar17 + local_c80;
  auVar398._8_8_ =
       dVar384 * dStack_d78 + dVar180 * (double)local_f80._8_8_ + dVar188 * dStack_e78 + dStack_c78;
  auVar398._16_8_ = dVar386 * dStack_d70 + dVar181 * dStack_f70 + dVar189 * dStack_e70 + dStack_c70;
  auVar398._24_8_ = dVar388 * dStack_d68 + dVar182 * dStack_f68 + dVar190 * dStack_e68 + dStack_c68;
  auVar173._0_8_ =
       (double)((ulonglong)(dVar191 * local_da0) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar327 * (double)local_fa0._0_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar377 * (double)local_ea0._0_8_) & __real_7fffffffffffffff);
  auVar173._8_8_ =
       (double)((ulonglong)(dVar192 * dStack_d98) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar344 * (double)local_fa0._8_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar385 * (double)local_ea0._8_8_) & __real_7fffffffffffffff);
  auVar173._16_8_ =
       (double)((ulonglong)(dVar193 * dStack_d90) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar347 * dStack_f90) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar387 * dStack_e90) & __real_7fffffffffffffff);
  auVar173._24_8_ =
       (double)((ulonglong)(dVar194 * dStack_d88) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar357 * dStack_f88) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar389 * dStack_e88) & __real_7fffffffffffffff);
  auVar324._0_8_ =
       (double)(__real_7fffffffffffffff & (ulonglong)(dVar67 * (double)local_f80._0_8_)) +
       (double)((ulonglong)(dVar358 * dVar17) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar183 * local_d80) & __real_7fffffffffffffff);
  auVar324._8_8_ =
       (double)(__real_7fffffffffffffff & (ulonglong)(dVar68 * (double)local_f80._8_8_)) +
       (double)((ulonglong)(dVar359 * dStack_e78) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar184 * dStack_d78) & __real_7fffffffffffffff);
  auVar324._16_8_ =
       (double)(__real_7fffffffffffffff & (ulonglong)(dVar69 * dStack_f70)) +
       (double)((ulonglong)(dVar360 * dStack_e70) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar185 * dStack_d70) & __real_7fffffffffffffff);
  auVar324._24_8_ =
       (double)(__real_7fffffffffffffff & (ulonglong)(dVar70 * dStack_f68)) +
       (double)((ulonglong)(dVar361 * dStack_e68) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar186 * dStack_d68) & __real_7fffffffffffffff);
  auVar271._0_8_ =
       (double)((ulonglong)(dVar377 * local_e60) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar327 * (double)local_f60._0_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar191 * local_d60) & __real_7fffffffffffffff);
  auVar271._8_8_ =
       (double)((ulonglong)(dVar385 * dStack_e58) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar344 * (double)local_f60._8_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar192 * dStack_d58) & __real_7fffffffffffffff);
  auVar271._16_8_ =
       (double)((ulonglong)(dVar387 * dStack_e50) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar347 * dStack_f50) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar193 * dStack_d50) & __real_7fffffffffffffff);
  auVar271._24_8_ =
       (double)((ulonglong)(dVar389 * dStack_e48) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar357 * dStack_f48) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar194 * dStack_d48) & __real_7fffffffffffffff);
  auVar265 = vsubpd_avx(auVar370,auVar306);
  auVar169 = vsubpd_avx(auVar354,auVar336);
  auVar167 = vsubpd_avx(auVar381,auVar287);
  auVar380 = vsubpd_avx(auVar374,auVar173);
  local_1820._8_8_ = auVar370._8_8_ + auVar306._8_8_;
  local_1820._0_8_ = auVar370._0_8_ + auVar306._0_8_;
  dStack_1810 = auVar370._16_8_ + auVar306._16_8_;
  dStack_1808 = auVar370._24_8_ + auVar306._24_8_;
  auVar323 = vsubpd_avx(auVar398,auVar324);
  auVar355._0_8_ = auVar354._0_8_ + auVar336._0_8_;
  auVar355._8_8_ = auVar354._8_8_ + auVar336._8_8_;
  auVar355._16_8_ = auVar354._16_8_ + auVar336._16_8_;
  auVar355._24_8_ = auVar354._24_8_ + auVar336._24_8_;
  auVar285 = vsubpd_avx(auVar393,auVar271);
  auVar382._0_8_ = auVar381._0_8_ + auVar283._0_8_;
  auVar382._8_8_ = auVar381._8_8_ + auVar283._8_8_;
  auVar382._16_8_ = auVar381._16_8_ + auVar287._16_8_;
  auVar382._24_8_ = auVar381._24_8_ + auVar287._24_8_;
  auVar375._0_8_ = auVar374._0_8_ + auVar173._0_8_;
  auVar375._8_8_ = auVar374._8_8_ + auVar173._8_8_;
  auVar375._16_8_ = auVar374._16_8_ + auVar173._16_8_;
  auVar375._24_8_ = auVar374._24_8_ + auVar173._24_8_;
  auVar343._0_8_ = auVar398._0_8_ + auVar324._0_8_;
  auVar343._8_8_ = auVar398._8_8_ + auVar324._8_8_;
  auVar343._16_8_ = auVar398._16_8_ + auVar324._16_8_;
  auVar343._24_8_ = auVar398._24_8_ + auVar324._24_8_;
  auVar371._0_8_ = auVar393._0_8_ + auVar271._0_8_;
  auVar371._8_8_ = auVar393._8_8_ + auVar271._8_8_;
  auVar371._16_8_ = auVar393._16_8_ + auVar271._16_8_;
  auVar371._24_8_ = auVar393._24_8_ + auVar271._24_8_;
  auVar301._8_8_ = 0;
  auVar301._0_8_ = local_1040;
  auVar110 = vpcmpeqb_avx(auVar301,ZEXT816(0) << 0x40);
  auVar300 = vpcmpeqd_avx(auVar283,auVar283);
  auVar275 = vpmovsxbd_avx(auVar110 ^ auVar300);
  auVar300 = vpshufd_avx(auVar110 ^ auVar300,0x55);
  auVar300 = vpmovsxbd_avx(auVar300);
  uVar32 = local_c00._0_4_;
  local_18e0._0_4_ = auVar275._0_4_ & uVar32;
  uVar33 = local_c00._4_4_;
  local_18e0._4_4_ = auVar275._4_4_ & uVar33;
  uVar34 = local_c00._8_4_;
  local_18e0._8_4_ = auVar275._8_4_ & uVar34;
  uVar28 = local_c00._12_4_;
  local_18e0._12_4_ = auVar275._12_4_ & uVar28;
  uVar36 = local_c00._16_4_;
  register0x00001210 = auVar300._0_4_ & uVar36;
  uVar37 = local_c00._20_4_;
  register0x00001214 = auVar300._4_4_ & uVar37;
  uVar38 = local_c00._24_4_;
  register0x00001218 = auVar300._8_4_ & uVar38;
  uVar39 = local_c00._28_4_;
  register0x0000121c = auVar300._12_4_ & uVar39;
  iVar26 = vmovmskps_avx(_local_18e0);
  if (iVar26 == 0) {
    _local_18e0 = ZEXT432(0) << 0x20;
LAB_140a775d8:
    auVar300 = vpmovsxbw_avx(auVar110);
    auVar300 = vpand_avx(auVar300,auVar396);
    auVar275 = vpmovsxwd_avx(auVar300);
    auVar300 = vpunpckhwd_avx(auVar300,auVar300);
    auVar175._16_16_ = auVar300;
    auVar175._0_16_ = auVar275;
    auVar300 = vpcmpgtd_avx(auVar196,auVar276);
    auVar275 = vpcmpgtd_avx(auVar196,local_bc0._0_16_);
    auVar307._16_16_ = auVar300;
    auVar307._0_16_ = auVar275;
    auVar307 = auVar307 & auVar175;
    if ((((((((SUB321(auVar307 >> 0x1f,0) & 1) != 0 || (SUB321(auVar307 >> 0x3f,0) & 1) != 0) ||
            (SUB321(auVar307 >> 0x5f,0) & 1) != 0) || SUB321(auVar307 >> 0x7f,0) != '\0') ||
          (SUB321(auVar307 >> 0x9f,0) & 1) != 0) || SUB321(auVar307 >> 0xbf,0) != '\0') ||
        (SUB321(auVar307 >> 0xdf,0) & 1) != 0) || auVar307[0x1f] < '\0') {
      auVar110 = vpmovzxbw_avx(auVar110);
      auVar300 = vpmovzxwd_avx(auVar110);
      auVar300 = vpslld_avx(auVar300,0x1f);
      auVar176._0_16_ = vpsrad_avx(auVar300,0x1f);
      auVar300 = vpunpckhwd_avx(auVar110,auVar110);
      auVar300 = vpslld_avx(auVar300,0x1f);
      auVar300 = vpsrad_avx(auVar300,0x1f);
      auVar176._16_16_ = auVar300;
      auVar168 = local_c00 & auVar176;
      if ((((((((SUB321(auVar168 >> 0x1f,0) & 1) != 0 || (SUB321(auVar168 >> 0x3f,0) & 1) != 0) ||
              (SUB321(auVar168 >> 0x5f,0) & 1) != 0) || SUB321(auVar168 >> 0x7f,0) != '\0') ||
            (SUB321(auVar168 >> 0x9f,0) & 1) != 0) || SUB321(auVar168 >> 0xbf,0) != '\0') ||
          (SUB321(auVar168 >> 0xdf,0) & 1) != 0) || auVar168[0x1f] < '\0') {
        auVar275 = vpmovsxdq_avx(auVar176._0_16_);
        auVar77 = vshufps_avx(auVar176._0_16_,auVar176._0_16_,0xfa);
        auVar288._16_16_ = auVar77;
        auVar288._0_16_ = auVar275;
        auVar275 = vpmovsxdq_avx(auVar300);
        auVar77 = vpshufd_avx(auVar300,0xfa);
        auVar308._16_16_ = auVar77;
        auVar308._0_16_ = auVar275;
        _local_1000 = vmaskmovpd_avx(auVar288,auVar265);
        _local_fe0 = vmaskmovpd_avx(auVar308,auVar169);
        _local_fc0 = vmaskmovpd_avx(auVar288,auVar167);
        _local_fa0 = vmaskmovpd_avx(auVar308,auVar380);
        _local_f80 = vmaskmovpd_avx(auVar288,auVar323);
        _local_f60 = vmaskmovpd_avx(auVar308,auVar285);
        local_f40 = vmaskmovpd_avx(auVar288,_local_1820);
        local_f20 = vmaskmovpd_avx(auVar308,auVar355);
        _local_f00 = vmaskmovpd_avx(auVar288,auVar382);
        _local_ee0 = vmaskmovpd_avx(auVar308,auVar375);
        _local_ec0 = vmaskmovpd_avx(auVar288,auVar343);
        _local_ea0 = vmaskmovpd_avx(auVar308,auVar371);
        auVar110 = vpsllw_avx(auVar110,0xf);
        auVar110 = vpacksswb_avx(auVar110,auVar110);
        bVar30 = SUB161(auVar110 >> 0xf,0) & 1;
        bVar19 = SUB161(auVar110 >> 0x17,0) & 1;
        bVar20 = SUB161(auVar110 >> 0x1f,0) & 1;
        bVar21 = SUB161(auVar110 >> 0x27,0) & 1;
        bVar22 = SUB161(auVar110 >> 0x2f,0) & 1;
        bVar23 = SUB161(auVar110 >> 0x37,0) & 1;
        if ((SUB161(auVar110 >> 7,0) & 1) == 0) {
          if (bVar30 == 0) goto LAB_140a7771d;
LAB_140a77e40:
          uStack_e7f = 1;
          if (bVar19 != 0) goto LAB_140a77e50;
LAB_140a77725:
          if (bVar20 == 0) goto LAB_140a7772d;
LAB_140a77e60:
          uStack_e7d = 1;
          if (bVar21 != 0) goto LAB_140a77e70;
LAB_140a77735:
          if (bVar22 == 0) goto LAB_140a7773d;
LAB_140a77e80:
          uStack_e7b = 1;
          if (bVar23 != 0) goto LAB_140a77e90;
LAB_140a77745:
          auVar177._0_4_ = uVar32 & auVar176._0_4_;
          auVar177._4_4_ = uVar33 & auVar176._4_4_;
          auVar177._8_4_ = uVar34 & auVar176._8_4_;
          auVar177._12_4_ = uVar28 & auVar176._12_4_;
          auVar177._16_4_ = uVar36 & auVar300._0_4_;
          auVar177._20_4_ = uVar37 & auVar300._4_4_;
          auVar177._24_4_ = uVar38 & auVar300._8_4_;
          auVar177._28_4_ = uVar39 & auVar300._12_4_;
        }
        else {
          local_e80 = 1;
          if (bVar30 != 0) goto LAB_140a77e40;
LAB_140a7771d:
          if (bVar19 == 0) goto LAB_140a77725;
LAB_140a77e50:
          uStack_e7e = 1;
          if (bVar20 != 0) goto LAB_140a77e60;
LAB_140a7772d:
          if (bVar21 == 0) goto LAB_140a77735;
LAB_140a77e70:
          uStack_e7c = 1;
          if (bVar22 != 0) goto LAB_140a77e80;
LAB_140a7773d:
          if (bVar23 == 0) goto LAB_140a77745;
LAB_140a77e90:
          uStack_e7a = 1;
          auVar177._0_4_ = uVar32 & auVar176._0_4_;
          auVar177._4_4_ = uVar33 & auVar176._4_4_;
          auVar177._8_4_ = uVar34 & auVar176._8_4_;
          auVar177._12_4_ = uVar28 & auVar176._12_4_;
          auVar177._16_4_ = uVar36 & auVar300._0_4_;
          auVar177._20_4_ = uVar37 & auVar300._4_4_;
          auVar177._24_4_ = uVar38 & auVar300._8_4_;
          auVar177._28_4_ = uVar39 & auVar300._12_4_;
        }
        if ((SUB161(auVar110 >> 0x3f,0) & 1) != 0) {
          uStack_e79 = 1;
        }
        vmovmskps_avx(auVar177 | _local_18e0);
      }
    }
  }
  else {
    auVar168 = vminpd_avx(local_11c0,auVar265);
    auVar77 = vshufps_avx(auVar275,auVar275,0x50);
    auVar275 = vshufps_avx(auVar275,auVar275,0xfa);
    auVar174._16_16_ = auVar275;
    auVar174._0_16_ = auVar77;
    _local_1000 = vmaskmovpd_avx(auVar174,auVar168);
    auVar275 = vshufps_avx(auVar300,auVar300,0x50);
    auVar300 = vshufps_avx(auVar300,auVar300,0xfa);
    auVar394._16_16_ = auVar300;
    auVar394._0_16_ = auVar275;
    auVar168 = vminpd_avx(local_11a0,auVar169);
    _local_fe0 = vmaskmovpd_avx(auVar394,auVar168);
    auVar168 = vminpd_avx(local_1180,auVar167);
    _local_fc0 = vmaskmovpd_avx(auVar174,auVar168);
    auVar168 = vminpd_avx(local_1160,auVar380);
    _local_fa0 = vmaskmovpd_avx(auVar394,auVar168);
    auVar168 = vminpd_avx(local_1140,auVar323);
    _local_f80 = vmaskmovpd_avx(auVar174,auVar168);
    auVar168 = vminpd_avx(local_1120,auVar285);
    _local_f60 = vmaskmovpd_avx(auVar394,auVar168);
    auVar168 = vmaxpd_avx(local_1100,_local_1820);
    local_f40 = vmaskmovpd_avx(auVar174,auVar168);
    auVar168 = vmaxpd_avx(local_10e0,auVar355);
    local_f20 = vmaskmovpd_avx(auVar394,auVar168);
    auVar168 = vmaxpd_avx(_local_10c0,auVar382);
    _local_f00 = vmaskmovpd_avx(auVar174,auVar168);
    auVar168 = vmaxpd_avx(_local_10a0,auVar375);
    _local_ee0 = vmaskmovpd_avx(auVar394,auVar168);
    auVar168 = vmaxpd_avx(_local_1080,auVar343);
    _local_ec0 = vmaskmovpd_avx(auVar174,auVar168);
    auVar168 = vmaxpd_avx(_local_1060,auVar371);
    _local_ea0 = vmaskmovpd_avx(auVar394,auVar168);
    auVar300 = vpshufd_avx(auVar301,0x44);
    auVar300 = vpcmpeqb_avx(auVar300,___xmm_00000000000000000000000000000000);
    bVar30 = ~(SUB161(auVar300 >> 7,0) & 1 | (SUB161(auVar300 >> 0xf,0) & 1) << 1 |
               (SUB161(auVar300 >> 0x17,0) & 1) << 2 | (SUB161(auVar300 >> 0x1f,0) & 1) << 3 |
               (SUB161(auVar300 >> 0x27,0) & 1) << 4 | (SUB161(auVar300 >> 0x2f,0) & 1) << 5 |
              (SUB161(auVar300 >> 0x37,0) & 1) << 6);
    if ((bVar30 & 1) != 0) {
      local_e80 = (undefined1)local_1040;
    }
    if ((bVar30 & 2) != 0) {
      uStack_e7f = (undefined1)(local_1040 >> 8);
    }
    if ((bVar30 & 4) != 0) {
      uStack_e7e = (undefined1)(local_1040 >> 0x10);
    }
    if ((bVar30 & 8) != 0) {
      uStack_e7d = (undefined1)(local_1040 >> 0x18);
    }
    if ((bVar30 & 0x10) != 0) {
      uStack_e7c = (undefined1)(local_1040 >> 0x20);
    }
    if ((bVar30 & 0x20) != 0) {
      uStack_e7b = (undefined1)(local_1040 >> 0x28);
    }
    if ((bVar30 & 0x40) != 0) {
      uStack_e7a = (undefined1)(local_1040 >> 0x30);
    }
    if ((SUB161(auVar300 >> 0x3f,0) & 1) == 0) {
      uStack_e79 = (undefined1)(local_1040 >> 0x38);
    }
    if ((char)uVar27 != (char)iVar26) goto LAB_140a775d8;
  }
  auVar300 = local_c00._0_16_;
  auVar110 = vshufps_avx(auVar300,auVar300,0x50);
  auVar300 = vshufps_avx(auVar300,auVar300,0xfa);
  auVar383._16_16_ = auVar300;
  auVar383._0_16_ = auVar110;
  auVar110 = vpshufd_avx(local_c00._16_16_,0x50);
  auVar300 = vpshufd_avx(local_c00._16_16_,0xfa);
  auVar395._16_16_ = auVar300;
  auVar395._0_16_ = auVar110;
  local_11c0 = vmaskmovpd_avx(auVar383,_local_1000);
  local_11a0 = vmaskmovpd_avx(auVar395,_local_fe0);
  local_1180 = vmaskmovpd_avx(auVar383,_local_fc0);
  local_1160 = vmaskmovpd_avx(auVar395,_local_fa0);
  local_1140 = vmaskmovpd_avx(auVar383,_local_f80);
  local_1120 = vmaskmovpd_avx(auVar395,_local_f60);
  local_1100 = vmaskmovpd_avx(auVar383,local_f40);
  local_10e0 = vmaskmovpd_avx(auVar395,local_f20);
  _local_10c0 = vmaskmovpd_avx(auVar383,_local_f00);
  _local_10a0 = vmaskmovpd_avx(auVar395,_local_ee0);
  _local_1080 = vmaskmovpd_avx(auVar383,_local_ec0);
  _local_1060 = vmaskmovpd_avx(auVar395,_local_ea0);
  uVar46 = local_1040;
  if ((uVar27 & 1) != 0) {
    local_1040 = CONCAT71(local_1040._1_7_,local_e80);
    uVar46 = local_1040;
  }
  if ((uVar27 & 2) != 0) {
    local_1040._2_6_ = (undefined6)(uVar46 >> 0x10);
    local_1040._0_1_ = (undefined1)uVar46;
    local_1040._0_2_ = CONCAT11(uStack_e7f,(undefined1)local_1040);
    uVar46 = local_1040;
  }
  if ((uVar27 & 4) != 0) {
    local_1040._3_5_ = (undefined5)(uVar46 >> 0x18);
    local_1040._0_2_ = (undefined2)uVar46;
    local_1040._0_3_ = CONCAT12(uStack_e7e,(undefined2)local_1040);
    uVar46 = local_1040;
  }
  if ((uVar27 & 8) != 0) {
    local_1040._4_4_ = (undefined4)(uVar46 >> 0x20);
    local_1040._0_3_ = (undefined3)uVar46;
    local_1040._0_4_ = CONCAT13(uStack_e7d,(undefined3)local_1040);
    uVar46 = local_1040;
  }
  if ((uVar27 & 0x10) != 0) {
    local_1040._5_3_ = (undefined3)(uVar46 >> 0x28);
    local_1040._0_4_ = (undefined4)uVar46;
    local_1040._0_5_ = CONCAT14(uStack_e7c,(undefined4)local_1040);
    uVar46 = local_1040;
  }
  if ((uVar27 & 0x20) != 0) {
    local_1040._6_2_ = (undefined2)(uVar46 >> 0x30);
    local_1040._0_5_ = (undefined5)uVar46;
    local_1040._0_6_ = CONCAT15(uStack_e7b,(undefined5)local_1040);
    uVar46 = local_1040;
  }
  local_1040 = uVar46;
  if ((uVar27 & 0x40) != 0) {
    local_1040._7_1_ = (undefined1)(uVar46 >> 0x38);
    local_1040._0_6_ = (undefined6)uVar46;
    local_1040._0_7_ = CONCAT16(uStack_e7a,(undefined6)local_1040);
  }
  if ((char)uVar27 < '\0') {
    local_1040 = CONCAT17(uStack_e79,(undefined7)local_1040);
  }
LAB_140a778bc:
  local_ac0 = vmovlhps_avx(local_11c0._0_16_,local_1180._0_16_);
  local_a88 = vunpckhpd_avx(local_11c0._0_16_,local_1180._0_16_);
  local_a50 = vmovlhps_avx(local_11c0._16_16_,local_1180._16_16_);
  local_a18 = vunpckhpd_avx(local_11c0._16_16_,local_1180._16_16_);
  local_9e0 = vmovlhps_avx(local_11a0._0_16_,local_1160._0_16_);
  local_9a8 = vunpckhpd_avx(local_11a0._0_16_,local_1160._0_16_);
  local_970 = vmovlhps_avx(local_11a0._16_16_,local_1160._16_16_);
  local_938 = vunpckhpd_avx(local_11a0._16_16_,local_1160._16_16_);
  local_ab0 = local_1140._0_8_;
  local_a78 = local_1140._8_8_;
  local_a40 = local_1140._16_8_;
  local_a08 = local_1140._24_8_;
  local_9d0 = local_1120._0_8_;
  local_998 = (double)local_1120._8_8_;
  local_960 = (double)local_1120._16_8_;
  local_928 = (double)local_1120._24_8_;
  local_aa8 = vmovlhps_avx(local_1100._0_16_,local_10c0);
  local_a70 = vunpckhpd_avx(local_1100._0_16_,local_10c0);
  local_a38 = vmovlhps_avx(local_1100._16_16_,auStack_10b0);
  local_a00 = vunpckhpd_avx(local_1100._16_16_,auStack_10b0);
  local_9c8 = vmovlhps_avx(local_10e0._0_16_,local_10a0);
  local_990 = vunpckhpd_avx(local_10e0._0_16_,local_10a0);
  local_958 = vmovlhps_avx(local_10e0._16_16_,auStack_1090);
  local_920 = vunpckhpd_avx(local_10e0._16_16_,auStack_1090);
  local_a98 = local_1080;
  local_a60 = adStack_1078[0];
  local_a28 = adStack_1078[1];
  local_9f0 = adStack_1078[2];
  local_9b8 = (double)local_1060;
  local_980 = adStack_1058[0];
  local_948 = adStack_1058[1];
  auVar110 = vpcmpgtd_avx(auVar196,___xmm_00000003000000020000000100000000);
  auVar196 = vpcmpgtd_avx(auVar196,___xmm_00000007000000060000000500000004);
  local_910 = adStack_1058[2];
  auVar178._16_16_ = auVar196;
  auVar178._0_16_ = auVar110;
  uVar27 = vmovmskps_avx(auVar178);
  local_a90[0] = (char)local_1040;
  local_a58 = (char)(local_1040 >> 8);
  local_a20 = (char)(local_1040 >> 0x10);
  local_9e8 = (char)(local_1040 >> 0x18);
  local_9b0[0] = (char)(local_1040 >> 0x20);
  local_978[0] = (char)(local_1040 >> 0x28);
  local_940[0] = (char)(local_1040 >> 0x30);
  local_908[0] = (char)(local_1040 >> 0x38);
  if (uVar27 != 0) {
    uVar46 = (ulonglong)(uVar27 & 0xff);
    do {
      if (uVar46 == 0) {
        uVar49 = 0x40;
      }
      else {
        uVar49 = 0;
        for (uVar48 = uVar46; (uVar48 & 1) == 0; uVar48 = uVar48 >> 1 | 0x8000000000000000) {
          uVar49 = uVar49 + 1;
        }
      }
      lVar60 = uVar49 * 0x38;
      cVar56 = param_5[2][0];
      cVar18 = local_a90[lVar60];
      if ((cVar56 == '\0') || (cVar18 == '\0')) {
        if (cVar18 == '\0') {
          cVar56 = param_5[2][0];
          uVar329 = *(undefined8 *)(param_5[1] + 0x10);
          uVar314 = *(undefined8 *)(param_5[1] + 8);
          uVar297 = *(undefined8 *)param_5[1];
          uVar274 = *(undefined8 *)(*param_5 + 0x10);
          uVar72 = *(undefined8 *)*param_5;
          uVar195 = *(undefined8 *)(*param_5 + 8);
        }
        else {
          uVar72 = *(undefined8 *)*(undefined1 (*) [24])(local_ac0 + lVar60);
          uVar195 = *(undefined8 *)(local_ac0 + lVar60 + 8);
          uVar274 = *(undefined8 *)(local_aa8 + lVar60 + -8);
          uVar297 = *(undefined8 *)(local_aa8 + lVar60);
          uVar314 = *(undefined8 *)(local_aa8 + lVar60 + 8);
          uVar329 = *(undefined8 *)(local_a90 + lVar60 + -8);
          cVar56 = cVar18;
        }
      }
      else {
        auVar179._24_8_ = 0;
        auVar179._0_24_ = *param_5;
        auVar272._24_8_ = 0;
        auVar272._0_24_ = *(undefined1 (*) [24])(local_ac0 + lVar60);
        auVar265 = vminpd_avx(auVar179,auVar272);
        uVar72 = auVar265._0_8_;
        auVar196 = vshufpd_avx(auVar265._0_16_,auVar265._0_16_,1);
        uVar195 = auVar196._0_8_;
        uVar274 = auVar265._16_8_;
        auVar309._24_8_ = 0;
        auVar309._0_24_ = param_5[1];
        auVar325._16_8_ = *(undefined8 *)(local_a90 + lVar60 + -8);
        auVar325._0_16_ = *(undefined1 (*) [16])(local_aa8 + lVar60);
        auVar325._24_8_ = 0;
        auVar265 = vmaxpd_avx(auVar309,auVar325);
        uVar297 = auVar265._0_8_;
        auVar196 = vshufpd_avx(auVar265._0_16_,auVar265._0_16_,1);
        uVar314 = auVar196._0_8_;
        uVar329 = auVar265._16_8_;
      }
      uVar46 = uVar46 & ~(1L << (uVar49 & 0x3f));
      *(undefined8 *)*param_5 = uVar72;
      *(undefined8 *)(*param_5 + 8) = uVar195;
      *(undefined8 *)(*param_5 + 0x10) = uVar274;
      *(undefined8 *)param_5[1] = uVar297;
      *(undefined8 *)(param_5[1] + 8) = uVar314;
      *(undefined8 *)(param_5[1] + 0x10) = uVar329;
      param_5[2][0] = cVar56;
    } while (uVar46 != 0);
  }
  return;
}

