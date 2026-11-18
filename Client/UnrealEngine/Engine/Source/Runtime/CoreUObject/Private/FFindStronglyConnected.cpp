// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 5

// FindAllCycles @ 14203ece0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FFindStronglyConnected::FindAllCycles(FFindStronglyConnected *this)

{
  int *piVar1;
  TMap<UObject_*,FFindStronglyConnected::NodeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FFindStronglyConnected::NodeInfo,0>_>
  *this_00;
  TArray<TArray<UObject_*,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  UObject *pUVar5;
  code *pcVar6;
  TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,1>,FDefaultSetAllocator>
  *pTVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  UClass *pUVar13;
  FUObjectItem *pFVar14;
  NodeInfo *pNVar15;
  ForElementType<FSetElementId> FVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar20;
  FScriptContainerElement *pFVar21;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar22;
  uint uVar23;
  ulonglong uVar24;
  ForAnyElementType FVar25;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar26;
  TPairInitializer<UObject_*_const_&,UObject_*_const_&> local_res10;
  ForAnyElementType local_238;
  undefined8 local_230;
  ForAnyElementType local_228;
  undefined8 uStack_220;
  UObjectBase *local_218;
  ulonglong local_210;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *local_208;
  void *local_200;
  undefined8 local_1f8;
  ulonglong local_1f0;
  TBaseKeyIterator<1> local_1e8;
  FScriptContainerElement *local_1d0;
  FScriptContainerElement *local_1c8;
  undefined8 uStack_1c0;
  longlong *local_1b8;
  undefined1 auStack_1b0 [16];
  uint uStack_1a0;
  int iStack_19c;
  longlong local_198;
  TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,1>,FDefaultSetAllocator>
  *pTStack_190;
  FFindStronglyConnected *local_188;
  undefined2 local_180;
  undefined4 local_178;
  TObjectIteratorBase<1> local_170;
  UObjectBase **local_148;
  FScriptContainerElement *local_140;
  longlong local_138;
  longlong local_130;
  undefined1 local_128 [32];
  longlong local_108;
  TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,1>,FDefaultSetAllocator>
  *pTStack_100;
  FArchiveFindAllRefs local_f8;
  
  if (4 < (byte)LogObj._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogObj);
  }
  pUVar13 = Z_Construct_UClass_UObject_NoRegister();
  uVar18 = 0;
  TObjectIteratorBase<1>::TObjectIteratorBase<1>(&local_170,pUVar13,false,RF_NoFlags,Borrowed);
  pTVar26 = &this->AllObjects;
  lVar3 = local_170._padding_;
joined_r0x00014203ed5e:
  do {
    if (lVar3 == 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(local_170._padding_ + 0x30));
      if ((4 < (byte)LogObj._0_1_) &&
         (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogObj),
         4 < (byte)LogObj._0_1_)) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogObj);
      }
      local_228.Data = (FScriptContainerElement *)0x0;
      uStack_220 = 0;
      if (0 < (this->AllObjects).ArrayNum) {
        do {
          uVar11 = (uint)uVar18;
          uVar23 = 0;
          if ((int)uVar11 < (this->AllObjects).ArrayNum) {
            uVar23 = ~uVar11 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar18 = (ulonglong)(uVar11 + 1);
        } while ((int)(uVar11 + 1) < (this->AllObjects).ArrayNum);
        if ((int)uStack_220 != 0) {
          uStack_1c0 = 0;
          do {
            FVar25.Data = local_228.Data;
            uVar23 = 0;
            iVar9 = (int)uStack_220;
            local_228.Data = (FScriptContainerElement *)0x0;
            uStack_220 = 0;
            local_1c8 = FVar25.Data;
            if (0 < iVar9) {
              local_208 = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)0x0;
              do {
                uVar11 = 0;
                if ((int)uVar23 < iVar9) {
                  uVar11 = ~uVar23 >> 0x1f;
                }
                local_1d0 = FVar25.Data;
                if ((uVar11 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                local_238.Data = (FScriptContainerElement *)0x0;
                local_230 = 0;
                TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,1>,FDefaultSetAllocator>
                ::TBaseKeyIterator<1>::TBaseKeyIterator<1>
                          (&local_1e8,
                           (TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,1>,FDefaultSetAllocator>
                            *)this,*(UObject **)FVar25.Data);
                pUVar5 = local_1e8.Key;
                pTVar7 = local_1e8.Set;
                if (local_1e8.Index != -1) {
                  while( true ) {
                    iVar12 = local_1e8.NextIndex;
                    pFVar21 = (FScriptContainerElement *)
                              (*(longlong *)&pTVar7->Elements +
                              ((longlong)local_1e8.Index * 3 + 1) * 8);
                    if (((local_238.Data <= pFVar21) &&
                        (pFVar21 < local_238.Data + (longlong)local_230._4_4_ * 8)) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar8)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    iVar10 = (int)local_230;
                    if ((int)local_230 == local_230._4_4_) {
                      iVar10 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x808,&local_238,(int *)((longlong)&local_230 + 4));
                    }
                    local_230 = CONCAT44(local_230._4_4_,iVar10 + 1);
                    *(undefined8 *)(local_238.Data + (longlong)iVar10 * 8) = *(undefined8 *)pFVar21;
                    FVar25.Data = local_1d0;
                    local_1e8.Index = iVar12;
                    if (iVar12 == -1) break;
                    lVar3 = *(longlong *)&pTVar7->Elements;
                    while (local_1e8.NextIndex =
                                *(int *)(lVar3 + 0x10 + (longlong)local_1e8.Index * 0x18),
                          *(UObject **)(lVar3 + (longlong)local_1e8.Index * 0x18) != pUVar5) {
                      local_1e8.Index = local_1e8.NextIndex;
                      if (local_1e8.NextIndex == -1) goto LAB_14203f265;
                    }
                  }
                }
LAB_14203f265:
                uVar19 = 0;
                uVar24 = local_230 & 0xffffffff;
                uVar18 = uVar19;
                if (0 < (int)local_230) {
                  do {
                    uVar17 = (uint)uVar19;
                    uVar11 = 0;
                    if ((int)uVar17 < (int)uVar24) {
                      uVar11 = ~uVar17 >> 0x1f;
                    }
                    if (uVar11 == 0) {
                      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        );
                      if (bVar8) {
                        pcVar6 = (code *)swi(3);
                        (*pcVar6)();
                        return;
                      }
                      uVar24 = local_230 & 0xffffffff;
                    }
                    local_1f0 = *(ulonglong *)(local_238.Data + uVar18);
                    uVar11 = ((uint)(local_1f0 >> 0x14) & 0xffff ^ (uint)(local_1f0 >> 4)) *
                             -0x7a143595;
                    uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
                    if (*(int *)&(this->PermanentObjects).Elements.field_0x8 !=
                        *(int *)&(this->PermanentObjects).Elements.field_0x34) {
                      FVar4 = (this->PermanentObjects).Hash.SecondaryData;
                      FVar16 = (ForElementType<FSetElementId>)&(this->PermanentObjects).Hash;
                      if (FVar4 != (ForElementType<FSetElementId>)0x0) {
                        FVar16 = FVar4;
                      }
                      iVar12 = *(int *)((longlong)FVar16 +
                                       (ulonglong)
                                       ((this->PermanentObjects).HashSize - 1U &
                                       (uVar11 >> 0x10 ^ uVar11)) * 4);
                      if (iVar12 != -1) {
                        lVar3 = *(longlong *)&(this->PermanentObjects).Elements;
                        do {
                          if (*(ulonglong *)(lVar3 + (longlong)iVar12 * 0x10) == local_1f0)
                          goto LAB_14203f42e;
                          iVar12 = *(int *)(lVar3 + 8 + (longlong)iVar12 * 0x10);
                        } while (iVar12 != -1);
                      }
                    }
                    TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::
                    Emplace<UObject_*_const_&>
                              (&this->PermanentObjects,(UObject **)&local_res10.Value,
                               (bool *)&local_1f0);
                    if (((local_228.Data <= (FScriptContainerElement *)&local_1f0) &&
                        ((FScriptContainerElement *)&local_1f0 <
                         local_228.Data + (longlong)uStack_220._4_4_ * 8)) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar8)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    iVar12 = (int)uStack_220;
                    if ((int)uStack_220 == uStack_220._4_4_) {
                      iVar12 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x808,&local_228,(int *)((longlong)&uStack_220 + 4));
                    }
                    uStack_220 = CONCAT44(uStack_220._4_4_,iVar12 + 1);
                    *(ulonglong *)(local_228.Data + (longlong)iVar12 * 8) = local_1f0;
                    uVar24 = local_230 & 0xffffffff;
LAB_14203f42e:
                    uVar19 = (ulonglong)(uVar17 + 1);
                    uVar18 = uVar18 + 8;
                  } while ((int)(uVar17 + 1) < (int)uVar24);
                }
                if (local_238.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_238.Data);
                }
                FVar25.Data = FVar25.Data + 8;
                local_208 = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)
                            ((longlong)&(local_208->AllocatorInstance).Data + 1);
                uVar23 = uVar23 + 1;
                local_1d0 = FVar25.Data;
              } while ((int)uVar23 < iVar9);
            }
            if (local_1c8 != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1c8);
            }
          } while ((int)uStack_220 != 0);
        }
      }
      uVar24 = 0;
      uVar18 = uVar24;
      uVar19 = uVar24;
      if (0 < (this->AllObjects).ArrayNum) {
        do {
          uVar11 = (uint)uVar19;
          uVar23 = 0;
          if ((int)uVar11 < (this->AllObjects).ArrayNum) {
            uVar23 = ~uVar11 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_210 = *(ulonglong *)((this->AllObjects).AllocatorInstance.Data + uVar18);
          uVar23 = ((uint)(local_210 >> 0x14) & 0xffff ^ (uint)(local_210 >> 4)) * -0x7a143595;
          uVar23 = (uVar23 >> 0xd ^ uVar23) * -0x3d4d51cb;
          if (*(int *)&(this->PermanentObjects).Elements.field_0x8 !=
              *(int *)&(this->PermanentObjects).Elements.field_0x34) {
            FVar4 = (this->PermanentObjects).Hash.SecondaryData;
            FVar16 = (ForElementType<FSetElementId>)&(this->PermanentObjects).Hash;
            if (FVar4 != (ForElementType<FSetElementId>)0x0) {
              FVar16 = FVar4;
            }
            iVar9 = *(int *)((longlong)FVar16 +
                            (ulonglong)
                            ((this->PermanentObjects).HashSize - 1U & (uVar23 >> 0x10 ^ uVar23)) * 4
                            );
            if (iVar9 != -1) {
              lVar3 = *(longlong *)&(this->PermanentObjects).Elements;
              do {
                if (*(ulonglong *)(lVar3 + (longlong)iVar9 * 0x10) == local_210) goto LAB_14203f64d;
                iVar9 = *(int *)(lVar3 + 8 + (longlong)iVar9 * 0x10);
              } while (iVar9 != -1);
            }
          }
          pTVar26 = &this->TempObjects;
          pFVar21 = (pTVar26->AllocatorInstance).Data;
          if (((pFVar21 <= (FScriptContainerElement *)&local_210) &&
              ((FScriptContainerElement *)&local_210 <
               pFVar21 + (longlong)(this->TempObjects).ArrayMax * 8)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar9 = (this->TempObjects).ArrayNum;
          if (iVar9 == (this->TempObjects).ArrayMax) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&pTVar26->AllocatorInstance,&(this->TempObjects).ArrayMax);
          }
          (this->TempObjects).ArrayNum = iVar9 + 1;
          *(ulonglong *)((pTVar26->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_210;
LAB_14203f64d:
          uVar18 = uVar18 + 8;
          uVar19 = (ulonglong)(uVar11 + 1);
        } while ((int)(uVar11 + 1) < (this->AllObjects).ArrayNum);
      }
      TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,1>,FDefaultSetAllocator>
      ::TIterator::TIterator
                ((TIterator *)local_128,
                 (TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,1>,FDefaultSetAllocator>
                  *)this);
      local_180 = 0;
      stack0xfffffffffffffe58 = local_128._16_16_;
      local_1b8 = (longlong *)local_128._0_8_;
      auStack_1b0._0_8_ = local_128._8_8_;
      local_198 = local_108;
      pTStack_190 = pTStack_100;
      iVar9 = local_128._28_4_;
      local_188 = this;
      if (iVar9 < *(int *)(local_128._16_8_ + 0x18)) {
        do {
          uVar18 = *(ulonglong *)(*local_1b8 + (longlong)iVar9 * 0x18);
          uVar23 = ((uint)(uVar18 >> 0x14) & 0xffff ^ (uint)(uVar18 >> 4)) * -0x7a143595;
          uVar23 = (uVar23 >> 0xd ^ uVar23) * -0x3d4d51cb;
          if (*(int *)&(this->PermanentObjects).Elements.field_0x8 !=
              *(int *)&(this->PermanentObjects).Elements.field_0x34) {
            FVar4 = (this->PermanentObjects).Hash.SecondaryData;
            FVar16 = (ForElementType<FSetElementId>)&(this->PermanentObjects).Hash;
            if (FVar4 != (ForElementType<FSetElementId>)0x0) {
              FVar16 = FVar4;
            }
            iVar12 = *(int *)((longlong)FVar16 +
                             (ulonglong)
                             ((this->PermanentObjects).HashSize - 1U & (uVar23 >> 0x10 ^ uVar23)) *
                             4);
            if (iVar12 != -1) {
              lVar3 = *(longlong *)&(this->PermanentObjects).Elements;
              do {
                if (*(ulonglong *)(lVar3 + (longlong)iVar12 * 0x10) == uVar18) goto LAB_14203f825;
                iVar12 = *(int *)(lVar3 + 8 + (longlong)iVar12 * 0x10);
              } while (iVar12 != -1);
            }
          }
          uVar18 = *(ulonglong *)(*local_1b8 + 8 + (longlong)iVar9 * 0x18);
          uVar23 = ((uint)(uVar18 >> 0x14) & 0xffff ^ (uint)(uVar18 >> 4)) * -0x7a143595;
          uVar23 = (uVar23 >> 0xd ^ uVar23) * -0x3d4d51cb;
          if (*(int *)&(this->PermanentObjects).Elements.field_0x8 !=
              *(int *)&(this->PermanentObjects).Elements.field_0x34) {
            FVar4 = (this->PermanentObjects).Hash.SecondaryData;
            FVar16 = (ForElementType<FSetElementId>)&(this->PermanentObjects).Hash;
            if (FVar4 != (ForElementType<FSetElementId>)0x0) {
              FVar16 = FVar4;
            }
            iVar12 = *(int *)((longlong)FVar16 +
                             (ulonglong)
                             ((this->PermanentObjects).HashSize - 1U & (uVar23 >> 0x10 ^ uVar23)) *
                             4);
            if (iVar12 != -1) {
              lVar3 = *(longlong *)&(this->PermanentObjects).Elements;
              do {
                if (*(ulonglong *)(lVar3 + (longlong)iVar12 * 0x10) == uVar18) goto LAB_14203f825;
                iVar12 = *(int *)(lVar3 + 8 + (longlong)iVar12 * 0x10);
              } while (iVar12 != -1);
            }
          }
          local_138 = *local_1b8 + (longlong)iVar9 * 0x18;
          local_130 = *local_1b8 + ((longlong)iVar9 * 3 + 1) * 8;
          TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,1>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<UObject_*_const_&,UObject_*_const_&>_>
                    ((TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,1>,FDefaultSetAllocator>
                      *)&this->Edges,
                     (TPairInitializer<UObject_*_const_&,UObject_*_const_&> *)&stack0x00000020,
                     (bool *)&local_138);
LAB_14203f825:
          uStack_1a0 = uStack_1a0 & ~auStack_1b0._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_1b0);
          iVar9 = iStack_19c;
        } while (iStack_19c < *(int *)(auStack_1b0._8_8_ + 0x18));
        if (((char)local_180 != '\0') && (local_180._1_1_ != '\0')) {
          uVar23 = *(int *)&(local_188->AllEdges).field_0x8 -
                   *(int *)&(local_188->AllEdges).field_0x34;
          if (uVar23 < 4) {
            iVar9 = 1;
          }
          else {
            uVar18 = (ulonglong)((uVar23 >> 1) + 7) * 2 + 1;
            lVar3 = 0x3f;
            if (uVar18 != 0) {
              for (; uVar18 >> lVar3 == 0; lVar3 = lVar3 + -1) {
              }
            }
            local_178 = (undefined4)lVar3;
            iVar9 = 1 << ((byte)lVar3 & 0x1f);
          }
          if (((0 < (int)uVar23) && (*(int *)&(local_188->AllEdges).field_0x48 < iVar9)) ||
             (iVar9 < *(int *)&(local_188->AllEdges).field_0x48)) {
            *(int *)&(local_188->AllEdges).field_0x48 = iVar9;
            TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,1>,FDefaultSetAllocator>
            ::Rehash((TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,1>,FDefaultSetAllocator>
                      *)local_188);
          }
        }
      }
      if (4 < (byte)LogObj._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogObj);
      }
      uVar18 = uVar24;
      uVar19 = uVar24;
      if (0 < (this->TempObjects).ArrayNum) {
        do {
          uVar11 = (uint)uVar18;
          uVar23 = 0;
          if ((int)uVar11 < (this->TempObjects).ArrayNum) {
            uVar23 = ~uVar11 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pUVar5 = *(UObject **)((this->TempObjects).AllocatorInstance.Data + uVar19);
          pNVar15 = TMapBase<UObject_*,FFindStronglyConnected::NodeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FFindStronglyConnected::NodeInfo,0>_>
                    ::Find((TMapBase<UObject_*,FFindStronglyConnected::NodeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FFindStronglyConnected::NodeInfo,0>_>
                            *)&this->NodeIndex,pUVar5);
          if (pNVar15 == (NodeInfo *)0x0) {
            StrongConnectInner(this,pUVar5);
          }
          uVar18 = (ulonglong)(uVar11 + 1);
          uVar19 = uVar19 + 8;
        } while ((int)(uVar11 + 1) < (this->TempObjects).ArrayNum);
      }
      if (4 < (byte)LogObj._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogObj);
      }
      (this->Stack).ArrayNum = 0;
      if ((this->Stack).ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&(this->Stack).AllocatorInstance,0,&(this->Stack).ArrayMax);
      }
      this_00 = &this->NodeIndex;
      bVar8 = 1 < *(int *)&(this->NodeIndex).field_0x48;
      if (!bVar8) {
        TSet<TTuple<UObject_*,FFindStronglyConnected::NodeInfo>,TDefaultMapHashableKeyFuncs<UObject_*,FFindStronglyConnected::NodeInfo,0>,FDefaultSetAllocator>
        ::UnhashElements((TSet<TTuple<UObject_*,FFindStronglyConnected::NodeInfo>,TDefaultMapHashableKeyFuncs<UObject_*,FFindStronglyConnected::NodeInfo,0>,FDefaultSetAllocator>
                          *)this_00);
      }
      *(undefined4 *)&(this->NodeIndex).field_0x8 = 0;
      if (*(int *)&(this->NodeIndex).field_0xc != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)&(this->NodeIndex).field_0xc);
      }
      *(undefined4 *)&(this->NodeIndex).field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->NodeIndex).field_0x34 = 0;
      iVar9 = *(int *)&(this->NodeIndex).field_0x2c;
      *(undefined4 *)&(this->NodeIndex).field_0x28 = 0;
      if ((iVar9 < 0) || (0x80 < iVar9)) {
        *(undefined4 *)&(this->NodeIndex).field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)&(this->NodeIndex).field_0x10,0);
      }
      if (bVar8) {
        *(undefined4 *)&(this->NodeIndex).field_0x48 = 1;
        TSet<TTuple<UObject_*,FFindStronglyConnected::NodeInfo>,TDefaultMapHashableKeyFuncs<UObject_*,FFindStronglyConnected::NodeInfo,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<UObject_*,FFindStronglyConnected::NodeInfo>,TDefaultMapHashableKeyFuncs<UObject_*,FFindStronglyConnected::NodeInfo,0>,FDefaultSetAllocator>
                  *)this_00);
      }
      iVar9 = (this->Components).ArrayNum;
      this->PrimaryIndex = 1;
      if (0 < iVar9) {
        pTVar2 = &this->SimpleCycles;
        pTVar26 = &this->Stack;
        uVar18 = uVar24;
        local_208 = pTVar26;
        do {
          pFVar21 = (pTVar2->AllocatorInstance).Data;
          local_200 = (void *)0x0;
          local_1f8 = 0;
          if (((pFVar21 <= (FScriptContainerElement *)&local_200) &&
              ((FScriptContainerElement *)&local_200 <
               pFVar21 + (longlong)(this->SimpleCycles).ArrayMax * 0x10)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar23 = (this->SimpleCycles).ArrayNum;
          if (uVar23 == (this->SimpleCycles).ArrayMax) {
            uVar23 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&pTVar2->AllocatorInstance,&(this->SimpleCycles).ArrayMax);
            (this->SimpleCycles).ArrayNum = uVar23 + 1;
          }
          else {
            (this->SimpleCycles).ArrayNum = uVar23 + 1;
          }
          pFVar21 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar23 * 0x10;
          *(undefined8 *)pFVar21 = 0;
          *(void **)pFVar21 = local_200;
          local_200 = (void *)0x0;
          *(undefined4 *)(pFVar21 + 8) = (undefined4)local_1f8;
          *(undefined4 *)(pFVar21 + 0xc) = local_1f8._4_4_;
          local_1f8 = 0;
          uVar11 = 0;
          if ((int)uVar23 < (this->SimpleCycles).ArrayNum) {
            uVar11 = ~uVar23 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pTVar20 = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)
                    ((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar23 * 0x10);
          if (local_200 != (void *)0x0) {
            FMemory::Free(local_200);
          }
          uVar11 = (uint)uVar18;
          uVar23 = 0;
          if ((int)uVar11 < (this->Components).ArrayNum) {
            uVar23 = ~uVar11 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pTVar22 = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)
                    ((this->Components).AllocatorInstance.Data + uVar24);
          iVar9 = pTVar22->ArrayNum;
          if (iVar9 < 3) {
            if (pTVar20 != pTVar22) {
              pFVar21 = (pTVar22->AllocatorInstance).Data;
              piVar1 = &pTVar20->ArrayMax;
              pTVar20->ArrayNum = iVar9;
              if ((iVar9 == 0) && (*piVar1 == 0)) {
                *piVar1 = 0;
                pTVar26 = local_208;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,iVar9,*piVar1,(ForAnyElementType *)pTVar20,iVar9,piVar1);
                pTVar26 = local_208;
                if (iVar9 != 0) {
                  memcpy((pTVar20->AllocatorInstance).Data,pFVar21,(longlong)iVar9 << 3);
                  pTVar26 = local_208;
                }
              }
            }
          }
          else {
            FindSimpleCycleForComponentInner
                      (this,pTVar20,pTVar22,*(UObject **)(pTVar22->AllocatorInstance).Data);
            pTVar26->ArrayNum = 0;
            if (pTVar26->ArrayMax != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,0,&pTVar26->AllocatorInstance,0,&pTVar26->ArrayMax);
            }
          }
          uVar18 = (ulonglong)(uVar11 + 1);
          uVar24 = uVar24 + 0x10;
        } while ((int)(uVar11 + 1) < (this->Components).ArrayNum);
      }
      if (local_228.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_228.Data);
      }
      return;
    }
    local_218 = *(UObjectBase **)(lVar3 + 8);
    pFVar21 = (pTVar26->AllocatorInstance).Data;
    if (((pFVar21 <= (FScriptContainerElement *)&local_218) &&
        ((FScriptContainerElement *)&local_218 < pFVar21 + (longlong)(this->AllObjects).ArrayMax * 8
        )) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar9 = (this->AllObjects).ArrayNum;
    if (iVar9 == (this->AllObjects).ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar26->AllocatorInstance,&(this->AllObjects).ArrayMax);
    }
    (this->AllObjects).ArrayNum = iVar9 + 1;
    *(UObjectBase **)((pTVar26->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_218;
    FArchiveFindAllRefs::FArchiveFindAllRefs(&local_f8,(UObject *)local_218);
    uVar19 = uVar18;
    if (0 < local_f8.References.ArrayNum) {
      do {
        uVar11 = (uint)uVar19;
        uVar23 = 0;
        if ((int)uVar11 < local_f8.References.ArrayNum) {
          uVar23 = ~uVar11 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_148 = &local_218;
        local_140 = local_f8.References.AllocatorInstance.Data + (longlong)(int)uVar11 * 8;
        TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,1>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<UObject_*_const_&,UObject_*_const_&>_>
                  ((TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,1>,FDefaultSetAllocator>
                    *)this,&local_res10,(bool *)&local_148);
        iVar9 = *(int *)&(this->AllEdges).field_0x8 - *(int *)&(this->AllEdges).field_0x34;
        if ((iVar9 == (iVar9 / 25000) * 25000) && (4 < (byte)LogObj._0_1_)) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogObj);
        }
        uVar19 = (ulonglong)(uVar11 + 1);
      } while ((int)(uVar11 + 1) < local_f8.References.ArrayNum);
    }
    if (local_f8.References.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.References.AllocatorInstance.Data);
    }
    FArchive::~FArchive((FArchive *)&local_f8);
LAB_14203ef20:
    do {
      do {
        bVar8 = FUObjectArray::TIterator::Advance((TIterator *)&local_170);
        lVar3 = local_170._padding_;
        if (!bVar8) goto joined_r0x00014203ed5e;
        uVar19 = uVar18;
        if (local_170._padding_ != 0) {
          uVar19 = *(ulonglong *)(local_170._padding_ + 8);
        }
      } while ((local_170.ExclusionFlags & *(EObjectFlags *)(uVar19 + 8)) != RF_NoFlags);
      pUVar13 = Z_Construct_UClass_UObject_NoRegister();
      if (local_170.Class != pUVar13) {
        iVar9 = (int)(local_170.Class)->_padding_;
        if ((*(int *)(*(longlong *)(uVar19 + 0x10) + 0x38) < iVar9) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)(uVar19 + 0x10) + 0x30) + (longlong)iVar9 * 8) !=
            &(local_170.Class)->_padding_)) goto LAB_14203ef20;
      }
      pFVar14 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(uVar19 + 0xc));
    } while ((local_170.InternalExclusionFlags &
             (EInternalObjectFlags)((ulonglong)(pFVar14->field0_0x0).FlagsAndRefCount >> 0x20)) !=
             Borrowed);
  } while( true );
}

// FindSimpleCycleForComponent @ 14203ff50

void __thiscall
FFindStronglyConnected::FindSimpleCycleForComponent
          (FFindStronglyConnected *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  iVar2 = param_2->ArrayNum;
  if (iVar2 < 3) {
    if (param_1 != param_2) {
      _Src = (param_2->AllocatorInstance).Data;
      piVar1 = &param_1->ArrayMax;
      param_1->ArrayNum = iVar2;
      if ((iVar2 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
        return;
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar2,*piVar1,&param_1->AllocatorInstance,iVar2,piVar1);
      if (iVar2 != 0) {
        memcpy((param_1->AllocatorInstance).Data,_Src,(longlong)iVar2 << 3);
        return;
      }
    }
  }
  else {
    FindSimpleCycleForComponentInner
              (this,param_1,param_2,*(UObject **)(param_2->AllocatorInstance).Data);
    piVar1 = &(this->Stack).ArrayMax;
    (this->Stack).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->Stack).AllocatorInstance,0,piVar1);
    }
  }
  return;
}

// FindSimpleCycleForComponentInner @ 142040040

bool __thiscall
FFindStronglyConnected::FindSimpleCycleForComponentInner
          (FFindStronglyConnected *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_2,UObject *param_3)

{
  int *piVar1;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  UObject *pUVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  UObject *local_res20;
  UObject *local_48;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_40;
  
  pTVar2 = &this->Stack;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  local_res20 = param_3;
  if (((pFVar3 <= (FScriptContainerElement *)&local_res20) &&
      ((FScriptContainerElement *)&local_res20 < pFVar3 + (longlong)(this->Stack).ArrayMax * 8)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  iVar8 = (this->Stack).ArrayNum;
  piVar1 = &(this->Stack).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->Stack).ArrayNum = iVar8 + 1;
  uVar12 = 0;
  *(UObject **)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_res20;
  local_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.ArrayNum = 0;
  local_40.ArrayMax = 0;
  TMultiMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,1>_>
  ::MultiFind<TSizedDefaultAllocator<32>_>(&this->Edges,local_res20,&local_40,false);
  uVar13 = uVar12;
  iVar8 = local_40.ArrayNum;
  if (0 < local_40.ArrayNum) {
LAB_142040151:
    uVar11 = (uint)uVar12;
    uVar9 = 0;
    if ((int)uVar11 < iVar8) {
      uVar9 = ~uVar11 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      iVar8 = local_40.ArrayNum;
    }
    pFVar10 = (param_2->AllocatorInstance).Data;
    pUVar4 = *(UObject **)(local_40.AllocatorInstance.Data + uVar13);
    pFVar3 = pFVar10 + (longlong)param_2->ArrayNum * 8;
    for (; pFVar10 != pFVar3; pFVar10 = pFVar10 + 8) {
      if (*(UObject **)pFVar10 == pUVar4) {
        pFVar10 = (pTVar2->AllocatorInstance).Data;
        pFVar3 = pFVar10 + (longlong)(this->Stack).ArrayNum * 8;
        goto joined_r0x0001420401de;
      }
    }
    goto LAB_142040210;
  }
LAB_14204021f:
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\FindStronglyConnected.cpp"
                     ,0x89,L"");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  bVar6 = false;
LAB_142040247:
  if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.AllocatorInstance.Data);
  }
  return bVar6;
joined_r0x0001420401de:
  if (pFVar10 == pFVar3) goto LAB_1420401f2;
  if (*(UObject **)pFVar10 == pUVar4) goto LAB_1420402a0;
  pFVar10 = pFVar10 + 8;
  goto joined_r0x0001420401de;
LAB_1420401f2:
  bVar6 = FindSimpleCycleForComponentInner(this,param_1,param_2,pUVar4);
  if (bVar6) goto LAB_1420403a5;
  iVar8 = local_40.ArrayNum;
LAB_142040210:
  uVar12 = (ulonglong)(uVar11 + 1);
  uVar13 = uVar13 + 8;
  if (iVar8 <= (int)(uVar11 + 1)) goto LAB_14204021f;
  goto LAB_142040151;
LAB_1420402a0:
  do {
    if (((this->Stack).ArrayNum < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    iVar8 = (this->Stack).ArrayNum;
    local_48 = *(UObject **)((this->Stack).AllocatorInstance.Data + (longlong)iVar8 * 8 + -8);
    (this->Stack).ArrayNum = iVar8 + -1;
    pFVar3 = (param_1->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_48) &&
        ((FScriptContainerElement *)&local_48 < pFVar3 + (longlong)param_1->ArrayMax * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    iVar8 = param_1->ArrayNum;
    if (iVar8 == param_1->ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar8 + 1;
    *(UObject **)((param_1->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_48;
  } while (local_48 != pUVar4);
LAB_1420403a5:
  bVar6 = true;
  goto LAB_142040247;
}

// StrongConnect @ 1420900b0

void __thiscall FFindStronglyConnected::StrongConnect(FFindStronglyConnected *this,UObject *param_1)

{
  NodeInfo *pNVar1;
  
  pNVar1 = TMapBase<UObject_*,FFindStronglyConnected::NodeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FFindStronglyConnected::NodeInfo,0>_>
           ::Find((TMapBase<UObject_*,FFindStronglyConnected::NodeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FFindStronglyConnected::NodeInfo,0>_>
                   *)&this->NodeIndex,param_1);
  if (pNVar1 == (NodeInfo *)0x0) {
    StrongConnectInner(this,param_1);
  }
  return;
}

// StrongConnectInner @ 1420900f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

NodeInfo * __thiscall
FFindStronglyConnected::StrongConnectInner(FFindStronglyConnected *this,UObject *param_1)

{
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar1;
  TMap<UObject_*,FFindStronglyConnected::NodeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FFindStronglyConnected::NodeInfo,0>_>
  *this_00;
  TArray<TArray<UObject_*,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar2;
  UObject *pUVar3;
  undefined1 *puVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  NodeInfo *pNVar9;
  NodeInfo *pNVar10;
  ulonglong *puVar11;
  int *piVar12;
  uint uVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  ulonglong *puVar16;
  longlong lVar17;
  FScriptContainerElement *pFVar18;
  undefined1 *puVar19;
  uint uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong *puVar23;
  undefined1 auStack_f8 [32];
  UObject **local_d8;
  FScriptContainerElement *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  UObject *local_a8;
  UObject *local_a0;
  undefined8 local_98;
  UObject *local_90;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_88;
  TPairInitializer<UObject_*_const_&,FFindStronglyConnected::NodeInfo_const_&> local_78;
  UObject **local_68;
  int *local_60;
  int local_58;
  int local_54;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_58 = this->PrimaryIndex;
  pTVar1 = &this->Stack;
  this->PrimaryIndex = local_58 + 1;
  pFVar18 = (pTVar1->AllocatorInstance).Data;
  local_50 = 1;
  local_a8 = param_1;
  local_54 = local_58;
  if ((pFVar18 <= (FScriptContainerElement *)&local_a8) &&
     (lVar17 = (longlong)(this->Stack).ArrayMax,
     (FScriptContainerElement *)&local_a8 < pFVar18 + lVar17 * 8)) {
    local_c0 = (longlong)(this->Stack).ArrayNum;
    local_b8 = 8;
    local_d8 = &local_a8;
    local_d0 = pFVar18;
    local_c8 = lVar17;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pNVar9 = (NodeInfo *)(*pcVar6)();
      return pNVar9;
    }
  }
  iVar8 = (this->Stack).ArrayNum;
  piVar12 = &(this->Stack).ArrayMax;
  if (iVar8 == *piVar12) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,piVar12);
  }
  this_00 = &this->NodeIndex;
  (this->Stack).ArrayNum = iVar8 + 1;
  *(UObject **)((pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_a8;
  local_68 = &local_a8;
  local_60 = &local_58;
  TSet<TTuple<UObject_*,FFindStronglyConnected::NodeInfo>,TDefaultMapHashableKeyFuncs<UObject_*,FFindStronglyConnected::NodeInfo,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UObject_*_const_&,FFindStronglyConnected::NodeInfo_const_&>_>
            ((TSet<TTuple<UObject_*,FFindStronglyConnected::NodeInfo>,TDefaultMapHashableKeyFuncs<UObject_*,FFindStronglyConnected::NodeInfo,0>,FDefaultSetAllocator>
              *)this_00,&local_78,(bool *)&local_68);
  uVar21 = 0;
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pNVar9 = (NodeInfo *)(*(longlong *)&this_00->field_0x0 + (longlong)(int)local_78.Key * 0x20 + 8);
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  local_78.Value = pNVar9;
  TMultiMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,1>_>
  ::MultiFind<TSizedDefaultAllocator<32>_>(&this->Edges,local_a8,&local_88,false);
  uVar22 = uVar21;
  pNVar10 = local_78.Value;
  if (0 < local_88.ArrayNum) {
    do {
      uVar20 = (uint)uVar21;
      uVar13 = 0;
      if ((int)uVar20 < local_88.ArrayNum) {
        uVar13 = ~uVar20 >> 0x1f;
      }
      if (uVar13 == 0) {
        local_d8 = (UObject **)(longlong)(int)uVar20;
        local_d0 = (FScriptContainerElement *)(longlong)local_88.ArrayNum;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          pNVar9 = (NodeInfo *)(*pcVar6)();
          return pNVar9;
        }
      }
      pUVar3 = *(UObject **)(local_88.AllocatorInstance.Data + uVar22);
      uVar13 = ((uint)((ulonglong)pUVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar3 >> 4)) *
               -0x7a143595;
      uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
      if (*(int *)&(this->NodeIndex).field_0x8 != *(int *)&(this->NodeIndex).field_0x34) {
        puVar4 = *(undefined1 **)&(this->NodeIndex).field_0x40;
        puVar19 = &(this->NodeIndex).field_0x38;
        if (puVar4 != (undefined1 *)0x0) {
          puVar19 = puVar4;
        }
        iVar8 = *(int *)(puVar19 +
                        (ulonglong)
                        (*(int *)&(this->NodeIndex).field_0x48 - 1U & (uVar13 >> 0x10 ^ uVar13)) * 4
                        );
        if (iVar8 != -1) {
          do {
            puVar14 = (undefined8 *)((longlong)iVar8 * 0x20 + *(longlong *)&this_00->field_0x0);
            if ((UObject *)*puVar14 == pUVar3) {
              piVar12 = (int *)(puVar14 + 1);
              if (puVar14 == (undefined8 *)0x0) {
                piVar12 = (int *)0x0;
              }
              if (piVar12 != (int *)0x0) {
                if ((char)piVar12[2] == '\0') goto LAB_1420903eb;
                iVar8 = *piVar12;
                if (pNVar9->LowIndex < *piVar12) {
                  iVar8 = pNVar9->LowIndex;
                }
                goto LAB_1420903e8;
              }
              break;
            }
            iVar8 = *(int *)(puVar14 + 3);
          } while (iVar8 != -1);
        }
      }
      pNVar10 = StrongConnectInner(this,pUVar3);
      uVar13 = ((uint)((ulonglong)local_a8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_a8 >> 4)) *
               -0x7a143595;
      uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
      if (*(int *)&(this->NodeIndex).field_0x8 != *(int *)&(this->NodeIndex).field_0x34) {
        puVar4 = *(undefined1 **)&(this->NodeIndex).field_0x40;
        puVar19 = &(this->NodeIndex).field_0x38;
        if (puVar4 != (undefined1 *)0x0) {
          puVar19 = puVar4;
        }
        iVar8 = *(int *)(puVar19 +
                        (ulonglong)
                        (*(int *)&(this->NodeIndex).field_0x48 - 1U & (uVar13 >> 0x10 ^ uVar13)) * 4
                        );
        if (iVar8 != -1) {
          do {
            plVar15 = (longlong *)((longlong)iVar8 * 0x20 + *(longlong *)&this_00->field_0x0);
            if ((UObject *)*plVar15 == local_a8) goto LAB_1420903cf;
            iVar8 = (int)plVar15[3];
          } while (iVar8 != -1);
        }
      }
      plVar15 = (longlong *)0x0;
LAB_1420903cf:
      pNVar9 = (NodeInfo *)(plVar15 + 1);
      if (plVar15 == (longlong *)0x0) {
        pNVar9 = (NodeInfo *)0x0;
      }
      iVar8 = pNVar10->LowIndex;
      if (pNVar9->LowIndex < pNVar10->LowIndex) {
        iVar8 = pNVar9->LowIndex;
      }
LAB_1420903e8:
      pNVar9->LowIndex = iVar8;
LAB_1420903eb:
      uVar21 = (ulonglong)(uVar20 + 1);
      uVar22 = uVar22 + 8;
      pNVar10 = pNVar9;
    } while ((int)(uVar20 + 1) < local_88.ArrayNum);
  }
  local_78.Value = pNVar10;
  puVar23 = (ulonglong *)0x0;
  if (pNVar9->IndexValue == pNVar9->LowIndex) {
    pTVar2 = &this->Components;
    local_a0 = (UObject *)0x0;
    pFVar18 = (pTVar2->AllocatorInstance).Data;
    local_98 = 0;
    if ((pFVar18 <= (FScriptContainerElement *)&local_a0) &&
       (lVar17 = (longlong)(this->Components).ArrayMax,
       (FScriptContainerElement *)&local_a0 < pFVar18 + lVar17 * 0x10)) {
      local_c0 = (longlong)(this->Components).ArrayNum;
      local_b8 = 0x10;
      local_d8 = &local_a0;
      local_d0 = pFVar18;
      local_c8 = lVar17;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pNVar9 = (NodeInfo *)(*pcVar6)();
        return pNVar9;
      }
    }
    uVar13 = (this->Components).ArrayNum;
    piVar12 = &(this->Components).ArrayMax;
    if (uVar13 == *piVar12) {
      uVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar2->AllocatorInstance,piVar12);
    }
    pFVar18 = (pTVar2->AllocatorInstance).Data;
    (this->Components).ArrayNum = uVar13 + 1;
    lVar17 = (longlong)(int)uVar13 * 0x10;
    pFVar18 = pFVar18 + lVar17;
    *(undefined8 *)pFVar18 = 0;
    *(UObject **)pFVar18 = local_a0;
    local_a0 = (UObject *)0x0;
    *(undefined4 *)(pFVar18 + 8) = (undefined4)local_98;
    *(undefined4 *)(pFVar18 + 0xc) = local_98._4_4_;
    iVar8 = (this->Components).ArrayNum;
    local_98 = 0;
    uVar20 = 0;
    if ((int)uVar13 < iVar8) {
      uVar20 = ~uVar13 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (local_d8 = (UObject **)(longlong)(int)uVar13,
       local_d0 = (FScriptContainerElement *)(longlong)iVar8,
       bVar7 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      pNVar9 = (NodeInfo *)(*pcVar6)();
      return pNVar9;
    }
    pFVar18 = (pTVar2->AllocatorInstance).Data + lVar17;
    if (local_a0 != (UObject *)0x0) {
      FMemory::Free(local_a0);
    }
    do {
      iVar8 = (this->Stack).ArrayNum;
      if (iVar8 < 1) {
        local_d8 = (UObject **)0x0;
        local_d0 = (FScriptContainerElement *)(longlong)iVar8;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          pNVar9 = (NodeInfo *)(*pcVar6)();
          return pNVar9;
        }
      }
      iVar8 = (this->Stack).ArrayNum;
      local_90 = *(UObject **)((pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 8 + -8);
      (this->Stack).ArrayNum = iVar8 + -1;
      uVar13 = ((uint)((ulonglong)local_90 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_90 >> 4)) *
               -0x7a143595;
      uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
      puVar16 = puVar23;
      if (*(int *)&(this->NodeIndex).field_0x8 != *(int *)&(this->NodeIndex).field_0x34) {
        puVar4 = *(undefined1 **)&(this->NodeIndex).field_0x40;
        puVar19 = &(this->NodeIndex).field_0x38;
        if (puVar4 != (undefined1 *)0x0) {
          puVar19 = puVar4;
        }
        iVar8 = *(int *)(puVar19 +
                        (ulonglong)
                        (*(int *)&(this->NodeIndex).field_0x48 - 1U & (uVar13 >> 0x10 ^ uVar13)) * 4
                        );
        if (iVar8 != -1) {
          do {
            puVar16 = (ulonglong *)((longlong)iVar8 * 0x20 + *(longlong *)&this_00->field_0x0);
            if ((UObject *)*puVar16 == local_90) break;
            iVar8 = (int)puVar16[3];
            puVar16 = puVar23;
          } while (iVar8 != -1);
        }
      }
      puVar11 = puVar16 + 2;
      if (puVar16 == (ulonglong *)0x0) {
        puVar11 = (ulonglong *)&DAT_00000008;
      }
      *(undefined1 *)puVar11 = 0;
      pFVar5 = *(FScriptContainerElement **)pFVar18;
      if ((pFVar5 <= (FScriptContainerElement *)&local_90) &&
         ((FScriptContainerElement *)&local_90 < pFVar5 + (longlong)*(int *)(pFVar18 + 0xc) * 8)) {
        local_c0 = (longlong)*(int *)(pFVar18 + 8);
        local_b8 = 8;
        local_d8 = &local_90;
        local_d0 = pFVar5;
        local_c8 = (longlong)*(int *)(pFVar18 + 0xc);
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          pNVar9 = (NodeInfo *)(*pcVar6)();
          return pNVar9;
        }
      }
      iVar8 = *(int *)(pFVar18 + 8);
      if (iVar8 == *(int *)(pFVar18 + 0xc)) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)pFVar18,(int *)(pFVar18 + 0xc));
      }
      *(int *)(pFVar18 + 8) = iVar8 + 1;
      *(UObject **)(*(longlong *)pFVar18 + (longlong)iVar8 * 8) = local_90;
      pNVar9 = local_78.Value;
    } while (local_90 != local_a8);
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return pNVar9;
}

