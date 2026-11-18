// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 3

// Add @ 14710ec00

void __thiscall
UE::Mass::TMultiArray<FTestFragment_Float>::Add
          (TMultiArray<FTestFragment_Float> *this,FTestFragment_Float *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  pFVar2 = (this->FragmentInstances).AllocatorInstance.Data;
  if ((pFVar2 <= param_1) && (param_1 < pFVar2 + (longlong)(this->FragmentInstances).ArrayMax * 4))
  {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->FragmentInstances).ArrayNum;
  piVar1 = &(this->FragmentInstances).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)this,piVar1);
  }
  (this->FragmentInstances).ArrayNum = iVar5 + 1;
  *(float *)((this->FragmentInstances).AllocatorInstance.Data + (longlong)iVar5 * 4) =
       param_1->Value;
  return;
}

// GetAsGenericMultiArray @ 14711f9b0

void __thiscall
UE::Mass::TMultiArray<FTestFragment_Float>::GetAsGenericMultiArray
          (TMultiArray<FTestFragment_Float> *this,
          TArray<FStructArrayView,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UPackage *pUVar6;
  FScriptContainerElement *local_28;
  UScriptStruct *pUStack_20;
  undefined4 local_18;
  int iStack_14;
  
  local_28 = (this->FragmentInstances).AllocatorInstance.Data;
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Float,(UObject *)pUVar6,
                         L"TestFragment_Float");
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  iStack_14 = (this->FragmentInstances).ArrayNum;
  local_18 = 4;
  pUStack_20 = Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton;
  if ((pFVar1 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 < pFVar1 + (longlong)param_1->ArrayMax * 0x18)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = param_1->ArrayNum;
  if (iVar5 == param_1->ArrayMax) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar5 + 1;
  pFVar2 = (param_1->AllocatorInstance).Data;
  pFVar1 = pFVar2 + (longlong)iVar5 * 0x18;
  *(FScriptContainerElement **)pFVar1 = local_28;
  *(UScriptStruct **)(pFVar1 + 8) = pUStack_20;
  *(ulonglong *)(pFVar2 + (longlong)iVar5 * 0x18 + 0x10) = CONCAT44(iStack_14,local_18);
  return;
}

// GetAsGenericMultiArray @ 14711fad0

void __thiscall
UE::Mass::TMultiArray<FTestFragment_Int,FTestFragment_Float>::GetAsGenericMultiArray
          (TMultiArray<FTestFragment_Int,FTestFragment_Float> *this,
          TArray<FStructArrayView,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UPackage *pUVar6;
  FScriptContainerElement *local_28;
  UScriptStruct *pUStack_20;
  undefined4 local_18;
  int iStack_14;
  
  TMultiArray<FTestFragment_Float>::GetAsGenericMultiArray
            ((TMultiArray<FTestFragment_Float> *)this,param_1);
  local_28 = (this->FragmentInstances).AllocatorInstance.Data;
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Int,(UObject *)pUVar6,
                         L"TestFragment_Int");
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  iStack_14 = (this->FragmentInstances).ArrayNum;
  local_18 = 4;
  pUStack_20 = Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton;
  if ((pFVar1 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 < pFVar1 + (longlong)param_1->ArrayMax * 0x18)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = param_1->ArrayNum;
  if (iVar5 == param_1->ArrayMax) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar5 + 1;
  pFVar2 = (param_1->AllocatorInstance).Data;
  pFVar1 = pFVar2 + (longlong)iVar5 * 0x18;
  *(FScriptContainerElement **)pFVar1 = local_28;
  *(UScriptStruct **)(pFVar1 + 8) = pUStack_20;
  *(ulonglong *)(pFVar2 + (longlong)iVar5 * 0x18 + 0x10) = CONCAT44(iStack_14,local_18);
  return;
}

