// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeCore
// Functions: 10

// GetTestFlags @ 14e306d50

EAutomationTestFlags __thiscall FAttributeStorageTest::GetTestFlags(FAttributeStorageTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14e306d60

bool __thiscall FAttributeStorageTest::IsStressTest(FAttributeStorageTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14e306d80

uint __thiscall FAttributeStorageTest::GetRequiredDeviceNum(FAttributeStorageTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14e306d90

FString * __thiscall
FAttributeStorageTest::GetTestSourceFileName
          (FAttributeStorageTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Private\\Tests\\StorageTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14e306dc0

int __thiscall FAttributeStorageTest::GetTestSourceFileLine(FAttributeStorageTest *this)

{
  return 0xe;
}

// GetTests @ 14e306dd0

/* WARNING: Removing unreachable block (ram,0x00014e306ebd) */
/* WARNING: Removing unreachable block (ram,0x00014e306f88) */

void __thiscall
FAttributeStorageTest::GetTests
          (FAttributeStorageTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Runtime.Interchange.AttributeStorage");
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_1->ArrayNum;
  if (iVar3 == param_1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar3 + 1;
  pFVar4 = (param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(FScriptContainerElement **)pFVar4 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar4 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar4 + 0xc) = local_18.Data.ArrayMax;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_28 = 0;
  local_20 = 0;
  if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_2->ArrayNum;
  if (iVar3 == param_2->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar3 + 1;
  pFVar4 = (param_2->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(undefined8 *)pFVar4 = local_28;
  *(undefined4 *)(pFVar4 + 8) = (undefined4)local_20;
  *(undefined4 *)(pFVar4 + 0xc) = local_20._4_4_;
  return;
}

// GetBeautifiedTestName @ 14e320c20

FString * __thiscall
FAttributeStorageTest::GetBeautifiedTestName
          (FAttributeStorageTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Runtime.Interchange.AttributeStorage");
  return __return_storage_ptr__;
}

// operator() @ 14e405ba0

FAttributeKey * __thiscall
`FAttributeStorageTest::RunTest'::__l2::<lambda_1>::operator()
          (void *this,FAttributeKey *__return_storage_ptr__)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  ForAnyElementType _Src;
  bool bVar4;
  FAttributeKey *pFVar5;
  FString local_38;
  FString local_28;
  FString local_18;
  
  bVar4 = IsInGameThread();
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Private\\Tests\\StorageTest.cpp"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FAttributeKey *)(*pcVar3)();
      return pFVar5;
    }
  }
  iVar2 = **(int **)((longlong)this + 8);
  **(int **)((longlong)this + 8) = iVar2 + 1;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_38,iVar2);
  ::FString::ConcatFC(&local_18,*(FString **)this,L"_");
  ::FString::ConcatFF(&local_28,&local_18,&local_38);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  _Src.Data = local_28.Data.AllocatorInstance.Data;
  (__return_storage_ptr__->Key).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(__return_storage_ptr__->Key).Data.ArrayMax;
  (__return_storage_ptr__->Key).Data.ArrayNum = 0;
  *piVar1 = 0;
  if (&__return_storage_ptr__->Key != &local_28) {
    (__return_storage_ptr__->Key).Data.ArrayNum = local_28.Data.ArrayNum;
    if (local_28.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)__return_storage_ptr__,
                 local_28.Data.ArrayNum,piVar1);
      memcpy((__return_storage_ptr__->Key).Data.AllocatorInstance.Data,_Src.Data,
             (longlong)local_28.Data.ArrayNum * 2);
    }
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// operator() @ 14e4073b0

void __thiscall
`FAttributeStorageTest::RunTest'::__l707::<lambda_2>::operator()(void *this,int param_1)

{
  uint uVar1;
  FAttributeStorage *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  EAttributeStorageResult EVar7;
  int iVar8;
  int iVar9;
  FRandomStream local_res8;
  int local_res10;
  TAttributeHandle<UE::Math::TVector<double>,void> local_98;
  TVector<double>_u_0 local_80;
  TVector<double>_u_0 local_68 [2];
  
  local_res8.InitialSeed = 0;
  local_res8.Seed = 0;
  pFVar2 = (FAttributeStorage *)**(undefined8 **)((longlong)this + 8);
  local_res10 = param_1;
  if (pFVar2 != (FAttributeStorage *)0x0) {
    UE::Interchange::FAttributeStorage::GetAttribute<FRandomStream,void>
              (pFVar2,(FAttributeKey *)(*(undefined8 **)((longlong)this + 8) + 1),&local_res8);
  }
  iVar9 = 0;
  iVar8 = **(int **)((longlong)this + 0x10);
  if (0 < iVar8) {
    do {
      uVar1 = iVar8 * local_res10 + iVar9;
      FRandomStream::GetUnitVector(&local_res8,(TVector<double> *)&local_68[0]._s_0);
      plVar3 = *(longlong **)((longlong)this + 0x18);
      pFVar2 = *(FAttributeStorage **)this;
      uVar6 = 0;
      if ((int)uVar1 < (int)plVar3[1]) {
        uVar6 = ~uVar1 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      EVar7 = UE::Interchange::FAttributeStorage::RegisterAttribute<UE::Math::TVector<double>,void>
                        (pFVar2,(FAttributeKey *)(*plVar3 + (longlong)(int)uVar1 * 0x10),
                         (TVector<double> *)&local_68[0]._s_0,None);
      if ((EVar7 & Operation_Success) == None) {
LAB_14e407571:
        **(undefined1 **)((longlong)this + 0x28) = 1;
      }
      else {
        plVar3 = *(longlong **)((longlong)this + 0x18);
        pFVar2 = *(FAttributeStorage **)this;
        local_80._s_0.Z = 0.0;
        local_80._s_0.X = 0.0;
        local_80._s_0.Y = 0.0;
        uVar6 = 0;
        if ((int)uVar1 < (int)plVar3[1]) {
          uVar6 = ~uVar1 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TVector<double>,void>::
        TAttributeHandle<UE::Math::TVector<double>,void>
                  (&local_98,(FAttributeKey *)(*plVar3 + (longlong)(int)uVar1 * 0x10),pFVar2);
        if (local_98.AttributeStorage != (FAttributeStorage *)0x0) {
          UE::Interchange::FAttributeStorage::GetAttribute<UE::Math::TVector<double>,void>
                    (local_98.AttributeStorage,&local_98.Key,(TVector<double> *)&local_80._s_0);
        }
        if (local_98.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Key.Key.Data.AllocatorInstance.Data);
        }
        if (local_80._s_0.X != (double)local_68[0]._0_8_) goto LAB_14e407571;
      }
      iVar9 = iVar9 + 1;
      iVar8 = **(int **)((longlong)this + 0x10);
    } while (iVar9 < iVar8);
  }
  return;
}

// operator() @ 14e4077b0

void __thiscall
`FAttributeStorageTest::RunTest'::__l707::<lambda_3>::operator()(void *this,int param_1)

{
  uint uVar1;
  longlong *plVar2;
  FAttributeStorage *this_00;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  EAttributeStorageResult EVar7;
  int iVar8;
  
  iVar8 = 0;
  iVar5 = **(int **)((longlong)this + 8);
  if (0 < iVar5) {
    do {
      plVar2 = *(longlong **)((longlong)this + 0x10);
      this_00 = *(FAttributeStorage **)this;
      uVar1 = iVar5 * param_1 + iVar8;
      uVar6 = 0;
      if ((int)uVar1 < (int)plVar2[1]) {
        uVar6 = ~uVar1 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      EVar7 = UE::Interchange::FAttributeStorage::UnregisterAttribute
                        (this_00,(FAttributeKey *)((longlong)(int)uVar1 * 0x10 + *plVar2));
      if ((EVar7 & Operation_Success) == None) {
        **(undefined1 **)((longlong)this + 0x18) = 1;
      }
      iVar8 = iVar8 + 1;
      iVar5 = **(int **)((longlong)this + 8);
    } while (iVar8 < iVar5);
  }
  return;
}

