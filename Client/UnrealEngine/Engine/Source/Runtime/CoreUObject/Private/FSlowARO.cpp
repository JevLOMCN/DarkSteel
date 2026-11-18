// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 4

// CallSync @ 142023770

void __cdecl UE::GC::FSlowARO::CallSync(uint param_1,UObject *param_2,FReferenceCollector *param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (!GSlowARO.bValid) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0xb1d,L"Must call Get() at least once first");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = 0;
  if ((int)param_1 < GSlowARO.Data._104_4_) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000142023823. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(GSlowARO.Data + (longlong)(int)param_1 * 8 + 0x28))
            (param_2,param_3,*(code **)(GSlowARO.Data + (longlong)(int)param_1 * 8 + 0x28));
  return;
}

// ProcessAllCalls @ 142067b20

bool __cdecl UE::GC::FSlowARO::ProcessAllCalls(FWorkerContext *param_1,FReferenceCollector *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (!GSlowARO.bValid) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0xb1d,L"Must call Get() at least once first");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  bVar2 = FSlowAROManager::ProcessAllQueues((FSlowAROManager *)GSlowARO.Data,param_1,param_2);
  return bVar2;
}

// ProcessUnbalancedCalls @ 14208b8e0

void __cdecl
UE::GC::FSlowARO::ProcessUnbalancedCalls(FWorkerContext *param_1,FReferenceCollector *param_2)

{
  FAROBlock **ppFVar1;
  longlong lVar2;
  UObject **ppUVar3;
  UObject *pUVar4;
  code *pcVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  bool bVar9;
  ulonglong uVar10;
  uint uVar11;
  uchar *puVar12;
  uint *puVar13;
  uint uVar14;
  undefined1 local_res18 [8];
  int local_res20;
  UObject **local_68;
  int iStack_60;
  
  if ((!GSlowARO.bValid) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("bValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                         ,0xb1d,L"Must call Get() at least once first"), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = GSlowARO.Data._32_8_;
  local_res20 = (param_1->ObjectsToSerialize).WorkerIndex;
  uVar10 = (ulonglong)GSlowARO.Data._32_4_;
  puVar12 = GSlowARO.Data + 0x18;
  lVar2 = uVar10 * 4;
  do {
    iVar8 = local_res20;
    if (GSlowARO.Data._32_4_ != (int)uVar10) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (puVar12 == GSlowARO.Data + lVar2 + 0x18) {
      return;
    }
    uVar14 = *(uint *)puVar12;
    uVar11 = 0;
    if ((int)uVar14 < (int)GSlowARO.Data._104_4_) {
      uVar11 = ~uVar14 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcVar5 = *(code **)(GSlowARO.Data + (longlong)(int)uVar14 * 8 + 0x28);
    if (((int)GSlowARO.Data._4_4_ <= iVar8) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("WorkerIdx < NumWorkers",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                           ,0xaca,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (((int)GSlowARO.Data._104_4_ <= (int)uVar14) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("AROIdx < AROs.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                           ,0xacb,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar11 = uVar14 * GSlowARO.Data._4_4_ + iVar8;
    uVar14 = 0;
    if ((int)uVar11 < GSlowARO.Data._16_4_) {
      uVar14 = ~uVar11 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    puVar13 = (uint *)((longlong)(int)uVar11 * 0x80 + GSlowARO.Data._8_8_);
    do {
      while( true ) {
        uVar14 = *puVar13;
        uVar11 = puVar13[0x10];
        if (uVar14 <= uVar11) goto LAB_14208c019;
        uVar6 = uVar11 + 0x40;
        if (uVar14 < uVar11 + 0x40) {
          uVar6 = uVar14;
        }
        if ((0xff < uVar11 >> 9) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Idx / FAROBlock::NumWords < MaxBlocks",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                               ,0x9c8,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar14 = uVar11 & 0x1ff;
        if ((0x1fe < uVar14) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Idx % FAROBlock::NumWords < FAROBlock::Capacity",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                               ,0x9c9,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        ppFVar1 = GAROBlocks.Blocks + (uVar11 >> 9);
        if ((GAROBlocks.Blocks[uVar11 >> 9] == (FAROBlock *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Blocks[Idx / FAROBlock::NumWords]",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                               ,0x9ca,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_68 = (*ppFVar1)->Objects + (uVar11 & 0x1ff);
        if ((uVar11 & 0xfffffe00) + 0x1fe < uVar6) break;
        LOCK();
        bVar9 = uVar11 == puVar13[0x10];
        if (bVar9) {
          puVar13[0x10] = uVar6;
        }
        UNLOCK();
        if (bVar9) {
          iStack_60 = uVar6 - uVar11;
          goto LAB_14208bcdc;
        }
      }
      if ((0xff < uVar11 >> 9) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Idx / FAROBlock::NumWords < MaxBlocks",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x9d1,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((0x1fe < uVar14) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Idx % FAROBlock::NumWords < FAROBlock::Capacity",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x9d2,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((*ppFVar1 == (FAROBlock *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Blocks[Idx / FAROBlock::NumWords]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x9d3,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((((*ppFVar1)->FirstIndexInNextBlock & 0x1ff) != 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Blocks[Idx / FAROBlock::NumWords]->FirstIndexInNextBlock % FAROBlock::NumWords == 0"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x9d4,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((0x1ffff < ((*ppFVar1)->FirstIndexInNextBlock & 0xfffffe00)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Blocks[Idx / FAROBlock::NumWords]->FirstIndexInNextBlock / FAROBlock::NumWords < MaxBlocks"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x9d5,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      LOCK();
      bVar9 = uVar11 == puVar13[0x10];
      if (bVar9) {
        puVar13[0x10] = (*ppFVar1)->FirstIndexInNextBlock;
      }
      UNLOCK();
    } while (!bVar9);
    iStack_60 = 0x1ff - uVar14;
LAB_14208bcdc:
    if ((iStack_60 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
joined_r0x00014208bd06:
    if (iStack_60 != 0) {
      ppUVar3 = local_68 + iStack_60;
      for (; local_68 != ppUVar3; local_68 = local_68 + 1) {
        pUVar4 = *local_68;
        param_1->ReferencingObject = pUVar4;
        (*pcVar5)(pUVar4,param_2);
      }
      do {
        while( true ) {
          uVar14 = *puVar13;
          uVar11 = puVar13[0x10];
          if (uVar14 <= uVar11) {
            local_68 = (UObject **)0x0;
            iStack_60 = 0;
            goto joined_r0x00014208bd06;
          }
          uVar6 = uVar11 + 0x40;
          if (uVar14 < uVar11 + 0x40) {
            uVar6 = uVar14;
          }
          if ((0xff < uVar11 >> 9) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Idx / FAROBlock::NumWords < MaxBlocks",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                 ,0x9c8,L""), bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar14 = uVar11 & 0x1ff;
          if ((0x1fe < uVar14) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Idx % FAROBlock::NumWords < FAROBlock::Capacity",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                 ,0x9c9,L""), bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          ppFVar1 = GAROBlocks.Blocks + (uVar11 >> 9);
          if ((GAROBlocks.Blocks[uVar11 >> 9] == (FAROBlock *)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Blocks[Idx / FAROBlock::NumWords]",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                 ,0x9ca,L""), bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_68 = (*ppFVar1)->Objects + (uVar11 & 0x1ff);
          if ((uVar11 & 0xfffffe00) + 0x1fe < uVar6) break;
          LOCK();
          bVar9 = uVar11 == puVar13[0x10];
          if (bVar9) {
            puVar13[0x10] = uVar6;
          }
          UNLOCK();
          if (bVar9) {
            iStack_60 = uVar6 - uVar11;
            if ((iStack_60 < 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ArrayNum >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xfe,L""), bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            goto joined_r0x00014208bd06;
          }
        }
        if ((0xff < uVar11 >> 9) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Idx / FAROBlock::NumWords < MaxBlocks",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                               ,0x9d1,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((0x1fe < uVar14) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Idx % FAROBlock::NumWords < FAROBlock::Capacity",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                               ,0x9d2,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((*ppFVar1 == (FAROBlock *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Blocks[Idx / FAROBlock::NumWords]",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                               ,0x9d3,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((((*ppFVar1)->FirstIndexInNextBlock & 0x1ff) != 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Blocks[Idx / FAROBlock::NumWords]->FirstIndexInNextBlock % FAROBlock::NumWords == 0"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                               ,0x9d4,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((0x1ffff < ((*ppFVar1)->FirstIndexInNextBlock & 0xfffffe00)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Blocks[Idx / FAROBlock::NumWords]->FirstIndexInNextBlock / FAROBlock::NumWords < MaxBlocks"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                               ,0x9d5,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        LOCK();
        bVar9 = uVar11 == puVar13[0x10];
        if (bVar9) {
          puVar13[0x10] = (*ppFVar1)->FirstIndexInNextBlock;
        }
        UNLOCK();
      } while (!bVar9);
      iStack_60 = 0x1ff - uVar14;
      if ((iStack_60 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      goto joined_r0x00014208bd06;
    }
LAB_14208c019:
    puVar12 = puVar12 + 4;
    uVar10 = uVar7 & 0xffffffff;
  } while( true );
}

// TryQueueCall @ 1420915b0

bool __cdecl UE::GC::FSlowARO::TryQueueCall(uint param_1,UObject *param_2,FWorkerContext *param_3)

{
  int iVar1;
  FAROBlock *pFVar2;
  code *pcVar3;
  uchar *puVar4;
  atomic<unsigned_int> aVar5;
  bool bVar6;
  undefined1 uVar7;
  FAROQueue *pFVar8;
  ulonglong uVar9;
  FAROBlock *pFVar10;
  uint uVar11;
  uchar *puVar12;
  atomic<unsigned_int> aVar13;
  FName local_res10;
  FName local_res18 [2];
  FString local_48;
  FString local_38;
  
  if ((param_2 == (UObject *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                         ,0xb2c,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  if ((*(longlong *)&param_2->field_0x10 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object->GetClass()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                         ,0xb2d,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  if ((GSlowARO.bValid == false) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("bValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                         ,0xb1d,L"Must call Get() at least once first"), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  if ((uint)GSlowARO.Data._104_4_ <= param_1) {
    if ((GSlowARO.bValid == false) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("bValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                           ,0xb1d,L"Must call Get() at least once first"), bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("SlowAROIndex < uint32(GSlowARO.GetPostInit().NumAROs())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0xb2e,L"SlowAROIndex out of bounds %d/%d");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
  }
  if ((GSlowARO.bValid == false) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("bValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                         ,0xb1d,L"Must call Get() at least once first"), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  puVar12 = GSlowARO.Data + 0x28;
  puVar4 = GSlowARO.Data + 0x28;
  while (GSlowARO.Data + (longlong)(int)GSlowARO.Data._104_4_ * 8 + 0x28 != puVar4) {
    if (*(longlong *)puVar12 == *(longlong *)(*(longlong *)&param_2->field_0x10 + 0xc0)) {
      uVar11 = (uint)((longlong)(puVar12 + -0x15501b5d8) >> 3);
      goto LAB_142091737;
    }
    puVar12 = puVar12 + 8;
    puVar4 = puVar12;
  }
  uVar11 = 0xffffffff;
LAB_142091737:
  if (param_1 != uVar11) {
    if ((GSlowARO.bValid == false) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("bValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                           ,0xb1d,L"Must call Get() at least once first"), bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
    puVar12 = GSlowARO.Data + 0x28;
    puVar4 = GSlowARO.Data + 0x28;
    while ((GSlowARO.Data + (longlong)(int)GSlowARO.Data._104_4_ * 8 + 0x28 != puVar4 &&
           (*(longlong *)puVar12 != *(longlong *)(*(longlong *)&param_2->field_0x10 + 0xc0)))) {
      puVar12 = puVar12 + 8;
      puVar4 = puVar12;
    }
    local_res10.ComparisonIndex.Value = *(uint *)&param_2->field_0x18;
    local_res10.Number = *(uint *)&param_2->field_0x1c;
    ::FName::ToString(&local_res10,&local_38);
    local_res18[0] = *(FName *)(*(longlong *)&param_2->field_0x10 + 0x18);
    ::FName::ToString(local_res18,&local_48);
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("SlowAROIndex == GSlowARO.GetPostInit().FindImplementation(Object->GetClass()->CppClassStaticFunctions.GetAddReferencedObjects())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0xb33,
                       L"Queueing a \'%s\' named \'%s\' for slow AddReferenceObjects call, but the class or ARO doesn\'t match. Slow ARO index from schema is %d but found index %d."
                      );
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
  }
  if ((GSlowARO.bValid == false) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("bValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                         ,0xb1d,L"Must call Get() at least once first"), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  pFVar8 = FSlowAROManager::GetQueue
                     ((FSlowAROManager *)GSlowARO.Data,param_1,
                      (param_3->ObjectsToSerialize).WorkerIndex);
  aVar13 = (atomic<unsigned_int>)((int)pFVar8->Head + 1);
  pFVar8->HeadBlock->Objects[(uint)pFVar8->Head & 0x1ff] = param_2;
  aVar5 = GAROBlocks.NumBlocks;
  if (((uint)aVar13 & 0x1ff) == 0x1ff) {
    pFVar2 = pFVar8->HeadBlock;
    iVar1 = pFVar8->WorkerIndex;
    if (GAROBlocks.bFull == (atomic<bool>)0x0) {
      LOCK();
      aVar13 = (atomic<unsigned_int>)((int)GAROBlocks.NumBlocks + 1);
      UNLOCK();
      if ((uint)GAROBlocks.NumBlocks < 0x100) {
        uVar9 = (ulonglong)(uint)GAROBlocks.NumBlocks;
        GAROBlocks.NumBlocks = aVar13;
        if ((GAROBlocks.Blocks[uVar9] != (FAROBlock *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Blocks[BlockIdx] == nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                               ,0x9be,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return (bool)uVar7;
        }
        aVar13 = (atomic<unsigned_int>)((int)aVar5 << 9);
        pFVar10 = FPageAllocator::AllocatePage(&GScratchPages,iVar1);
        GAROBlocks.Blocks[uVar9] = pFVar10;
        if (pFVar10 != (FAROBlock *)0x0) {
          pFVar8->HeadBlock = pFVar10;
          pFVar2->FirstIndexInNextBlock = (uint)aVar13;
          goto code_r0x000142091977;
        }
      }
      else {
        GAROBlocks.bFull = (atomic<bool>)0x1;
        LOCK();
        UNLOCK();
      }
    }
    bVar6 = false;
  }
  else {
code_r0x000142091977:
    bVar6 = true;
    pFVar8->Head = aVar13;
  }
  return bVar6;
}

