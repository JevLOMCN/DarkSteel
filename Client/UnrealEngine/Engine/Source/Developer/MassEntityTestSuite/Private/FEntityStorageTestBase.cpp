// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 4

// FEntityStorageTestBase @ 1470f3790

/* WARNING: Restarted to delay deadcode elimination for space: stack */

FEntityStorageTestBase * __thiscall
FMassEntityStorageTest::FEntityStorageTestBase::FEntityStorageTestBase(FEntityStorageTestBase *this)

{
  int iVar1;
  initializer_list<FMassEntityStorageTest::EEntityManagerMode> *piVar2;
  longlong lVar3;
  initializer_list<FMassEntityStorageTest::EEntityManagerMode> *piVar4;
  undefined4 *puVar5;
  undefined4 local_70;
  undefined4 local_6c;
  TArray<FMassEntityStorageTest::EEntityManagerMode,TSizedDefaultAllocator<32>_> *local_68;
  undefined4 *local_60;
  FRandomStream *local_58;
  EEntityManagerMode local_50 [6];
  initializer_list<FMassEntityStorageTest::EEntityManagerMode> local_38;
  undefined1 local_28 [24];
  
  FAITestBase::FAITestBase((FAITestBase *)this);
  this->_padding_ = (longlong)&___7FEntityStorageTestBase_FMassEntityStorageTest__6B_;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&(this->EntityManagers).AllocatorInstance);
  (this->EntityManagers).ArrayNum = 0;
  iVar1 = TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                    (&(this->EntityManagers).AllocatorInstance);
  (this->EntityManagers).ArrayMax = iVar1;
  local_68 = &this->ManagersToCreate;
  local_50[0] = Sequential;
  local_50[1] = 1;
  piVar2 = std::initializer_list<enum_FMassEntityStorageTest::EEntityManagerMode>::
           initializer_list<enum_FMassEntityStorageTest::EEntityManagerMode>
                     (local_28,local_50,local_50 + 2);
  piVar4 = &local_38;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)&piVar4->_First = *(undefined1 *)&piVar2->_First;
    piVar2 = (initializer_list<FMassEntityStorageTest::EEntityManagerMode> *)
             ((longlong)&piVar2->_First + 1);
    piVar4 = (initializer_list<FMassEntityStorageTest::EEntityManagerMode> *)
             ((longlong)&piVar4->_First + 1);
  }
  TArray<enum_FMassEntityStorageTest::EEntityManagerMode,TSizedDefaultAllocator<32>_>::
  TArray<enum_FMassEntityStorageTest::EEntityManagerMode,TSizedDefaultAllocator<32>_>
            (local_68,&local_38);
  puVar5 = &local_70;
  for (lVar3 = 8; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)puVar5 = 0;
    puVar5 = (undefined4 *)((longlong)puVar5 + 1);
  }
  local_70 = 0x40000000;
  local_6c = 0x10000;
  local_60 = &local_70;
  this->MaxConcurrentEntitiesPerPage = 0x10000;
  this->TotalNumToReserve = (this->MaxConcurrentEntitiesPerPage * 3) / 2;
  this->OperationsNumLimit = 0x14;
  this->NumToReserveInOneIteration = 0;
  this->NumToReleaseInOneIteration = 0;
  local_58 = &this->RandomStream;
  FRandomStream::FRandomStream(local_58,1);
  this->NumToReserveInOneIteration = this->TotalNumToReserve / 10;
  this->NumToReleaseInOneIteration = this->TotalNumToReserve / 0xc;
  return this;
}

// PerformOperation @ 147192e20

/* WARNING: Removing unreachable block (ram,0x000147193a25) */
/* WARNING: Removing unreachable block (ram,0x000147193493) */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassEntityStorageTest::FEntityStorageTestBase::PerformOperation
          (FEntityStorageTestBase *this,EEntityOperation param_1,
          TSharedPtr<FMassEntityManager,1> *param_2,
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TArrayView<FMassEntityHandle_const_,int> *pTVar4;
  longlong lVar5;
  undefined1 *puVar6;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_2a0;
  uint local_290;
  EEntityOperation local_28c;
  int local_288;
  int local_284;
  int local_280;
  int local_27c;
  int local_278;
  int local_274;
  int local_270;
  uint local_26c;
  uint local_268;
  uint local_264;
  uint local_260;
  uint local_25c;
  uint local_258;
  uint local_254;
  uint local_250;
  int local_24c;
  uint local_248;
  uint local_244;
  uint local_240;
  FMassEntityHandle local_238;
  FScriptContainerElement *local_230;
  int local_228;
  int local_224;
  int local_220;
  int local_21c;
  int local_218;
  uint local_214;
  uint local_210;
  int local_20c;
  int local_208;
  FMassEntityManager *local_200;
  FMassEntityHandle local_1f8;
  FMassEntityHandle local_1f0;
  FMassEntityHandle local_1e8;
  FScriptContainerElement *local_1e0;
  FScriptContainerElement *local_1d8;
  FScriptContainerElement *local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c4;
  FScriptContainerElement *local_1c0;
  FScriptContainerElement *local_1b8;
  FScriptContainerElement *local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  FScriptContainerElement *local_198;
  FScriptContainerElement *local_190;
  FScriptContainerElement *local_188;
  undefined8 *local_180;
  FMassEntityManager *local_178;
  FRandomStream *local_170;
  undefined4 local_168;
  undefined4 local_164;
  FScriptContainerElement *local_160;
  FScriptContainerElement *local_158;
  FMassEntityHandle *local_150;
  FMassEntityHandle local_148;
  FMassEntityManager *local_140;
  undefined4 local_138;
  undefined4 local_134;
  FRandomStream *local_130;
  undefined4 local_128;
  undefined4 local_124;
  FScriptContainerElement *local_120;
  FScriptContainerElement *local_118;
  FScriptContainerElement *local_110;
  FScriptContainerElement *local_108;
  FScriptContainerElement *local_100;
  FScriptContainerElement *local_f8;
  FScriptContainerElement *local_f0;
  FScriptContainerElement *local_e8;
  FScriptContainerElement *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  FScriptContainerElement *local_d0;
  FScriptContainerElement *local_c8;
  FScriptContainerElement *local_c0;
  longlong local_b8;
  longlong local_b0;
  FScriptContainerElement *local_a8;
  FScriptContainerElement *local_a0;
  FScriptContainerElement *local_98;
  undefined8 *local_90;
  undefined4 local_88;
  undefined4 local_84;
  TArrayView<FMassEntityHandle_const_,int> *local_80;
  FMassEntityManager *local_78;
  int local_70;
  undefined1 local_60 [24];
  TArrayView<FMassEntityHandle_const_,int> local_48;
  TArrayView<FMassEntityHandle_const_,int> local_38;
  TArrayView<FMassEntityHandle_const_,int> local_28;
  
  if (param_1 == Operation_IndividualReserve) {
    local_28c = 0;
    for (local_288 = 0; local_288 < this->NumToReserveInOneIteration; local_288 = local_288 + 1) {
      local_200 = TSharedPtr<FMassEntityManager,1>::operator->(param_2);
      local_238 = FMassEntityManager::ReserveEntity(local_200);
      local_1f8 = (FMassEntityHandle)(param_3->AllocatorInstance).Data;
      local_1f0 = local_1f8;
      local_1e8 = local_1f8;
      if (((ulonglong)local_1f8 <= (ulonglong)local_238) &&
         (local_1e0 = (param_3->AllocatorInstance).Data, local_1d8 = local_1e0,
         local_1d0 = local_1e0,
         (ulonglong)local_238 < (ulonglong)((longlong)local_1e0 + (longlong)param_3->ArrayMax * 8)))
      {
        local_1c8 = 0;
        local_1c4 = 0;
        UE::Core::Private::FormatStringSan::
        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        local_1a8 = (longlong)param_3->ArrayNum;
        local_1a0 = (longlong)param_3->ArrayMax;
        local_1c0 = (param_3->AllocatorInstance).Data;
        local_1b8 = local_1c0;
        local_1b0 = local_1c0;
        local_198 = local_1c0;
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if (param_3->ArrayNum == param_3->ArrayMax) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_3->AllocatorInstance,&param_3->ArrayMax);
        param_3->ArrayNum = iVar3;
      }
      local_27c = param_3->ArrayNum;
      param_3->ArrayNum = param_3->ArrayNum + 1;
      local_190 = (param_3->AllocatorInstance).Data;
      local_188 = local_190 + (longlong)local_27c * 8;
      local_180 = ::operator_new(8,local_188);
      *local_180 = *(undefined8 *)local_238;
      local_70 = local_27c;
    }
  }
  else {
    local_28c = param_1;
    if (param_1 == Operation_BatchReserve) {
      local_178 = TSharedPtr<FMassEntityManager,1>::operator->(param_2);
      local_228 = this->NumToReserveInOneIteration;
      FMassEntityManager::BatchReserveEntities(local_178,&local_38,local_228,param_3);
    }
    else if (param_1 == Operation_IndividualDestroy) {
      local_274 = param_3->ArrayNum;
      local_278 = this->NumToReleaseInOneIteration;
      local_270 = local_274;
      if (local_278 < local_274) {
        local_270 = local_278;
      }
      local_220 = local_270;
      local_21c = local_270;
      local_28c = 2;
      local_224 = local_274;
      for (local_284 = 0; local_284 < local_21c; local_284 = local_284 + 1) {
        local_170 = &this->RandomStream;
        local_218 = param_3->ArrayNum;
        iVar3 = FRandomStream::RandRange(local_170,0,local_218 + -1);
        local_140 = TSharedPtr<FMassEntityManager,1>::operator->(param_2);
        local_268 = (uint)(-1 < iVar3);
        bVar2 = iVar3 < param_3->ArrayNum;
        local_26c = (uint)bVar2;
        if (-1 >= iVar3 || !bVar2) {
          local_168 = 0;
          local_164 = 0;
          UE::Core::Private::FormatStringSan::
          AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
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
        local_160 = (param_3->AllocatorInstance).Data;
        local_150 = (FMassEntityHandle *)(local_160 + (longlong)iVar3 * 8);
        local_148 = *local_150;
        local_158 = local_160;
        FMassEntityManager::ReleaseReservedEntity(local_140,local_148);
        local_260 = (uint)(-1 < iVar3);
        bVar2 = iVar3 < param_3->ArrayNum;
        local_264 = (uint)bVar2;
        if (-1 >= iVar3 || !bVar2) {
          local_138 = 0;
          local_134 = 0;
          UE::Core::Private::FormatStringSan::
          AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
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
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl(param_3,iVar3);
      }
    }
    else if (param_1 == Operation_BatchDestroy) {
      local_258 = param_3->ArrayNum;
      local_25c = this->NumToReleaseInOneIteration;
      local_240 = local_258;
      if ((int)local_25c < (int)local_258) {
        local_240 = local_25c;
      }
      local_210 = local_240;
      local_290 = local_240;
      local_214 = local_258;
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
                (&local_2a0.AllocatorInstance);
      local_2a0.ArrayNum = 0;
      local_2a0.ArrayMax =
           TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                     (&local_2a0.AllocatorInstance);
      if ((int)local_290 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)local_290);
      }
      if (local_2a0.ArrayMax < (int)local_290) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,local_290,&local_2a0.AllocatorInstance,local_2a0.ArrayNum,&local_2a0.ArrayMax
                  );
      }
      for (local_280 = 0; local_280 < (int)local_290; local_280 = local_280 + 1) {
        local_130 = &this->RandomStream;
        local_20c = param_3->ArrayNum;
        iVar3 = FRandomStream::RandRange(local_130,0,local_20c + -1);
        local_250 = (uint)(-1 < iVar3);
        bVar2 = iVar3 < param_3->ArrayNum;
        local_254 = (uint)bVar2;
        if (-1 >= iVar3 || !bVar2) {
          local_128 = 0;
          local_124 = 0;
          UE::Core::Private::FormatStringSan::
          AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
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
        local_120 = (param_3->AllocatorInstance).Data;
        local_230 = local_120 + (longlong)iVar3 * 8;
        local_108 = local_2a0.AllocatorInstance.Data;
        local_100 = local_2a0.AllocatorInstance.Data;
        local_f8 = local_2a0.AllocatorInstance.Data;
        local_118 = local_120;
        local_110 = local_230;
        if (local_2a0.AllocatorInstance.Data <= local_230) {
          local_f0 = local_2a0.AllocatorInstance.Data;
          local_e8 = local_2a0.AllocatorInstance.Data;
          local_e0 = local_2a0.AllocatorInstance.Data;
          if (local_230 < local_2a0.AllocatorInstance.Data + (longlong)local_2a0.ArrayMax * 8) {
            local_d8 = 0;
            local_d4 = 0;
            UE::Core::Private::FormatStringSan::
            AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
            local_b8 = (longlong)local_2a0.ArrayNum;
            local_b0 = (longlong)local_2a0.ArrayMax;
            local_d0 = local_2a0.AllocatorInstance.Data;
            local_c8 = local_2a0.AllocatorInstance.Data;
            local_c0 = local_2a0.AllocatorInstance.Data;
            local_a8 = local_2a0.AllocatorInstance.Data;
            bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar2) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
        }
        if (local_2a0.ArrayNum == local_2a0.ArrayMax) {
          local_2a0.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&local_2a0.AllocatorInstance,&local_2a0.ArrayMax);
        }
        local_24c = local_2a0.ArrayNum;
        local_a0 = local_2a0.AllocatorInstance.Data;
        local_98 = local_2a0.AllocatorInstance.Data + (longlong)local_2a0.ArrayNum * 8;
        local_2a0.ArrayNum = local_2a0.ArrayNum + 1;
        local_90 = ::operator_new(8,local_98);
        *local_90 = *(undefined8 *)local_230;
        local_208 = local_24c;
        local_244 = (uint)(-1 < iVar3);
        bVar2 = iVar3 < param_3->ArrayNum;
        local_248 = (uint)bVar2;
        if (-1 >= iVar3 || !bVar2) {
          local_88 = 0;
          local_84 = 0;
          UE::Core::Private::FormatStringSan::
          AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
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
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl(param_3,iVar3);
      }
      local_78 = TSharedPtr<FMassEntityManager,1>::operator->(param_2);
      local_80 = &local_28;
      pTVar4 = TArrayView<FMassEntityHandle_const_,int>::
               TArrayView<FMassEntityHandle_const_,int><TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_&,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>
                         (local_80,&local_2a0);
      puVar6 = local_60;
      for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar6 = *(undefined1 *)&pTVar4->DataPtr;
        pTVar4 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar4->DataPtr + 1);
        puVar6 = puVar6 + 1;
      }
      puVar6 = local_60;
      pTVar4 = &local_48;
      for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
        *(undefined1 *)&pTVar4->DataPtr = *puVar6;
        puVar6 = puVar6 + 1;
        pTVar4 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar4->DataPtr + 1);
      }
      FMassEntityManager::BatchDestroyEntities(local_78,&local_48);
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_2a0);
    }
  }
  return;
}

// SetUp @ 1471a5950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall FMassEntityStorageTest::FEntityStorageTestBase::SetUp(FEntityStorageTestBase *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  TRawPtrProxy<FMassEntityManager> TVar5;
  FMassEntityManager_InitParams_Concurrent *pFVar6;
  longlong lVar7;
  undefined1 *puVar8;
  undefined1 auStack_1e8 [32];
  TSharedPtr<FMassEntityManager,1> *local_1c8;
  FScriptContainerElement *local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  undefined8 local_1a8;
  undefined1 local_198 [8];
  TArray<TSharedPtr<FMassEntityManager,1>,TSizedDefaultAllocator<32>_> *local_190;
  int local_188;
  uint local_184;
  int local_180;
  TArray<FMassEntityStorageTest::EEntityManagerMode,TSizedDefaultAllocator<32>_> *local_178;
  int local_170;
  uint local_16c;
  int local_168;
  TSharedPtr<FMassEntityManager,1> *local_160;
  FMassEntityManager *local_158;
  FMassEntityManager *local_150;
  TSharedPtr<FMassEntityManager,1> local_148;
  int *local_138;
  int *local_130;
  int local_128;
  FScriptContainerElement *local_120;
  FScriptContainerElement *local_118;
  FScriptContainerElement *local_110;
  int *local_108;
  wchar_t *local_100;
  FString *local_f8;
  FMassEntityManager *local_f0;
  FMassEntityManager *local_e8;
  TSharedPtr<FMassEntityManager,1> *local_e0;
  TSharedPtr<FMassEntityManager,1> *local_d8;
  TSharedPtr<FMassEntityManager,1> *local_d0;
  FScriptContainerElement *local_c8;
  FScriptContainerElement *local_c0;
  FScriptContainerElement *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  FScriptContainerElement *local_a8;
  FScriptContainerElement *local_a0;
  FScriptContainerElement *local_98;
  longlong local_90;
  longlong local_88;
  FScriptContainerElement *local_80;
  FScriptContainerElement *local_78;
  FScriptContainerElement *local_70;
  TSharedPtr<FMassEntityManager,1> *local_68;
  int local_60;
  FScriptContainerElement *local_58;
  undefined1 local_50 [24];
  int *local_38 [3];
  TVariant<FMassEntityManager_InitParams_SingleThreaded,FMassEntityManager_InitParams_Concurrent>
  local_20;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  local_188 = 0;
  local_178 = &this->ManagersToCreate;
  local_120 = (local_178->AllocatorInstance).Data;
  local_58 = local_120;
  TCheckedPointerIterator<enum_FMassEntityStorageTest::EEntityManagerMode,int,0>::
  TCheckedPointerIterator<enum_FMassEntityStorageTest::EEntityManagerMode,int,0>
            (&local_138,&(this->ManagersToCreate).ArrayNum,(EEntityManagerMode *)local_120);
  local_118 = (local_178->AllocatorInstance).Data;
  local_168 = local_178->ArrayNum;
  local_110 = local_118;
  TCheckedPointerIterator<enum_FMassEntityStorageTest::EEntityManagerMode,int,0>::
  TCheckedPointerIterator<enum_FMassEntityStorageTest::EEntityManagerMode,int,0>
            (local_38,&local_178->ArrayNum,
             (EEntityManagerMode *)(local_118 + (longlong)local_168 * 4));
  while( true ) {
    if (*local_130 != local_128) {
      puVar8 = local_198;
      for (lVar7 = 1; lVar7 != 0; lVar7 = lVar7 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      `TCheckedPointerIterator<enum_FMassEntityStorageTest::EEntityManagerMode,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_198);
    }
    local_198[1] = local_138 != local_38[0];
    local_184 = (uint)(byte)local_198[1];
    if (!(bool)local_198[1]) break;
    local_108 = local_138;
    local_170 = *local_138;
    local_150 = ::operator_new(0x7d8);
    if (local_150 == (FMassEntityManager *)0x0) {
      local_158 = (FMassEntityManager *)0x0;
    }
    else {
      local_158 = FMassEntityManager::FMassEntityManager(local_150,(UObject *)0x0);
    }
    TVar5 = MakeShareable<FMassEntityManager>((FMassEntityManager *)local_50);
    TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1><FMassEntityManager>
              (&local_148,(TRawPtrProxy<FMassEntityManager> *)TVar5.Object);
    local_f0 = TSharedPtr<FMassEntityManager,1>::operator->(&local_148);
    local_100 = L"TestEntityManager_%d";
    local_f8 = ::FString::Printf<int>
                         ((FString *)(local_50 + 8),
                          (TCheckedFormatStringPrivate<wchar_t,int>)0x151557a08,local_188);
    FMassEntityManager::SetDebugName(local_f0,local_f8);
    ::FString::~FString((FString *)(local_50 + 8));
    local_188 = local_188 + 1;
    TVariant<FMassEntityManager_InitParams_SingleThreaded,FMassEntityManager_InitParams_Concurrent>
    ::
    TVariant<FMassEntityManager_InitParams_SingleThreaded,FMassEntityManager_InitParams_Concurrent>
              (&local_20);
    if (local_170 == 0) {
      TVariant<FMassEntityManager_InitParams_SingleThreaded,FMassEntityManager_InitParams_Concurrent>
      ::Emplace<FMassEntityManager_InitParams_SingleThreaded>(&local_20);
    }
    else {
      TVariant<FMassEntityManager_InitParams_SingleThreaded,FMassEntityManager_InitParams_Concurrent>
      ::Emplace<FMassEntityManager_InitParams_Concurrent>(&local_20);
      local_16c = this->MaxConcurrentEntitiesPerPage;
      pFVar6 = TVariant<FMassEntityManager_InitParams_SingleThreaded,FMassEntityManager_InitParams_Concurrent>
               ::Get<FMassEntityManager_InitParams_Concurrent>(&local_20);
      pFVar6->MaxEntitiesPerPage = local_16c;
    }
    local_e8 = TSharedPtr<FMassEntityManager,1>::operator->(&local_148);
    FMassEntityManager::Initialize(local_e8,&local_20);
    local_190 = &this->EntityManagers;
    local_160 = &local_148;
    local_e0 = (TSharedPtr<FMassEntityManager,1> *)(local_190->AllocatorInstance).Data;
    local_d8 = local_e0;
    local_d0 = local_e0;
    if ((local_e0 <= local_160) &&
       (local_c8 = (local_190->AllocatorInstance).Data, local_c0 = local_c8, local_b8 = local_c8,
       local_160 <
       (TSharedPtr<FMassEntityManager,1> *)
       (local_c8 + (longlong)(this->EntityManagers).ArrayMax * 0x10))) {
      local_b0 = 0;
      local_ac = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_1b0 = (longlong)local_190->ArrayNum;
      local_1b8 = (longlong)local_190->ArrayMax;
      local_1c0 = (local_190->AllocatorInstance).Data;
      local_1a8 = 0x10;
      local_1c8 = local_160;
      local_a8 = local_1c0;
      local_a0 = local_1c0;
      local_98 = local_1c0;
      local_90 = local_1b0;
      local_88 = local_1b8;
      local_80 = local_1c0;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if (local_190->ArrayNum == local_190->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_190->AllocatorInstance,&local_190->ArrayMax);
      local_190->ArrayNum = iVar4;
    }
    local_180 = local_190->ArrayNum;
    local_190->ArrayNum = local_190->ArrayNum + 1;
    local_78 = (local_190->AllocatorInstance).Data;
    local_70 = local_78 + (longlong)local_180 * 0x10;
    local_68 = ::operator_new(0x10,local_70);
    TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>(local_68,&local_148);
    local_60 = local_180;
    TSharedPtr<FMassEntityManager,1>::~TSharedPtr<FMassEntityManager,1>(&local_148);
    local_138 = local_138 + 1;
  }
  return true;
}

// ValidateUniqueAndValidEntities @ 1471b16c0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassEntityStorageTest::FEntityStorageTestBase::ValidateUniqueAndValidEntities
          (FEntityStorageTestBase *this,TSharedPtr<FMassEntityManager,1> *param_1,
          TArrayView<FMassEntityHandle_const_,int> *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  FAutomationTestBase *pFVar4;
  FMassEntityHandle *pFVar5;
  FMassEntityHandle *pFVar6;
  FMassEntityManager *pFVar7;
  int local_94;
  FString local_38;
  FString local_28;
  FString local_18;
  
  TArrayView<FMassEntityHandle_const_,int>::Sort(param_2);
  iVar1 = param_2->ArrayNum;
  while( true ) {
    local_94 = iVar1 + -1;
    if (local_94 < 0) {
      return true;
    }
    if (0 < local_94) {
      pFVar4 = FAITestBase::GetTestRunner((FAITestBase *)this);
      pFVar5 = TArrayView<FMassEntityHandle_const_,int>::operator[](param_2,local_94);
      pFVar6 = TArrayView<FMassEntityHandle_const_,int>::operator[](param_2,iVar1 + -2);
      iVar1 = pFVar6->Index;
      iVar2 = pFVar5->Index;
      ::FString::FString(&local_38,"Checking for duplicates");
      bVar3 = FAutomationTestBase::TestFalse(pFVar4,&local_38,iVar2 == iVar1);
      ::FString::~FString(&local_38);
      if (!bVar3) {
        UE::AITestSuite::ConditionallyBreakOnTestFail();
        return false;
      }
    }
    pFVar4 = FAITestBase::GetTestRunner((FAITestBase *)this);
    pFVar7 = TSharedPtr<FMassEntityManager,1>::operator->(param_1);
    pFVar5 = TArrayView<FMassEntityHandle_const_,int>::operator[](param_2,local_94);
    bVar3 = FMassEntityManager::IsEntityValid(pFVar7,*pFVar5);
    ::FString::FString(&local_28,"We expect every handle to be valid");
    bVar3 = FAutomationTestBase::TestTrue(pFVar4,&local_28,bVar3);
    ::FString::~FString(&local_28);
    if (!bVar3) break;
    pFVar4 = FAITestBase::GetTestRunner((FAITestBase *)this);
    pFVar7 = TSharedPtr<FMassEntityManager,1>::operator->(param_1);
    pFVar5 = TArrayView<FMassEntityHandle_const_,int>::operator[](param_2,local_94);
    bVar3 = FMassEntityManager::IsEntityBuilt(pFVar7,*pFVar5);
    ::FString::FString(&local_18,"None of the gathered entities is expected to have been built");
    bVar3 = FAutomationTestBase::TestFalse(pFVar4,&local_18,bVar3);
    ::FString::~FString(&local_18);
    iVar1 = local_94;
    if (!bVar3) {
      UE::AITestSuite::ConditionallyBreakOnTestFail();
      return false;
    }
  }
  UE::AITestSuite::ConditionallyBreakOnTestFail();
  return false;
}

