// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 8

// GetTestFlags @ 141fb4830

EAutomationTestFlags __thiscall FFieldCastTest::GetTestFlags(FFieldCastTest *this)

{
  return SmokeFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 141fb4840

bool __thiscall FFieldCastTest::IsStressTest(FFieldCastTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141fb4850

uint __thiscall FFieldCastTest::GetRequiredDeviceNum(FFieldCastTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141fb4860

FString * __thiscall
FFieldCastTest::GetTestSourceFileName(FFieldCastTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Field.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141fb4890

int __thiscall FFieldCastTest::GetTestSourceFileLine(FFieldCastTest *this)

{
  return 0x4c4;
}

// GetTests @ 141fb48a0

/* WARNING: Removing unreachable block (ram,0x000141fb498d) */
/* WARNING: Removing unreachable block (ram,0x000141fb4a58) */

void __thiscall
FFieldCastTest::GetTests
          (FFieldCastTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"UObject.Field Cast");
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

// RunTest @ 141fb4a80

bool __thiscall FFieldCastTest::RunTest(FFieldCastTest *this,FString *param_1)

{
  code *pcVar1;
  FFieldClass *pFVar2;
  FField *pFVar3;
  FField *pFVar4;
  FField *pFVar5;
  FField *pFVar6;
  FField *pFVar7;
  FString local_38;
  
  pFVar2 = FBoolProperty::StaticClass();
  pFVar3 = FFieldClass::GetDefaultObject(pFVar2);
  pFVar2 = FIntProperty::StaticClass();
  pFVar4 = FFieldClass::GetDefaultObject(pFVar2);
  pFVar2 = FNumericProperty::StaticClass();
  pFVar5 = FFieldClass::GetDefaultObject(pFVar2);
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_38,L"DefaultBoolProperty could not be CastField to a FBoolProperty.");
  pFVar7 = (FField *)0x0;
  if ((pFVar3 == (FField *)0x0) ||
     (pFVar6 = pFVar3, ((uint)(int)pFVar3->ClassPrivate->CastFlags >> 0x11 & 1) == 0)) {
    pFVar6 = pFVar7;
  }
  (*pcVar1)(this,pFVar6 == pFVar3,&local_38,0);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_38,L"Property could not be CastField to a FBoolProperty.");
  if ((pFVar3 == (FField *)0x0) ||
     (pFVar6 = pFVar3, ((uint)(int)pFVar3->ClassPrivate->CastFlags >> 0x11 & 1) == 0)) {
    pFVar6 = pFVar7;
  }
  (*pcVar1)(this,pFVar6 == pFVar3,&local_38,0);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_38,L"DefaultIntProperty was CastField to a FBoolProperty.");
  if ((pFVar4 == (FField *)0x0) ||
     (pFVar3 = pFVar4, ((uint)(int)pFVar4->ClassPrivate->CastFlags >> 0x11 & 1) == 0)) {
    pFVar3 = pFVar7;
  }
  (*pcVar1)(this,pFVar3 == (FField *)0x0,&local_38,0);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_38,L"DefaultIntProperty was CastField to a FBoolProperty.");
  if ((pFVar4 == (FField *)0x0) ||
     (pFVar3 = pFVar4, ((uint)(int)pFVar4->ClassPrivate->CastFlags >> 0x11 & 1) == 0)) {
    pFVar3 = pFVar7;
  }
  (*pcVar1)(this,pFVar3 == (FField *)0x0,&local_38,0);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_38,L"DefaultNumericProperty was CastField to a FBoolProperty.");
  if ((pFVar5 == (FField *)0x0) ||
     (pFVar3 = pFVar5, ((uint)(int)pFVar5->ClassPrivate->CastFlags >> 0x11 & 1) == 0)) {
    pFVar3 = pFVar7;
  }
  (*pcVar1)(this,pFVar3 == (FField *)0x0,&local_38,0);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_38,L"BaseProperty was CastField to a FBoolProperty.");
  if ((pFVar5 == (FField *)0x0) || (((uint)(int)pFVar5->ClassPrivate->CastFlags >> 0x11 & 1) == 0))
  {
    pFVar5 = pFVar7;
  }
  (*pcVar1)(this,pFVar5 == (FField *)0x0,&local_38,0);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_38,L"DefaultIntProperty could not be CastField to a FNumericProperty.");
  if ((pFVar4 == (FField *)0x0) ||
     (pFVar5 = pFVar4, ((uint)(int)pFVar4->ClassPrivate->CastFlags >> 0x18 & 1) == 0)) {
    pFVar5 = pFVar7;
  }
  (*pcVar1)(this,pFVar5 == pFVar4,&local_38,0);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_38,L"BaseProperty could not be CastField to a FNumericProperty.");
  if ((pFVar4 != (FField *)0x0) && (((uint)(int)pFVar4->ClassPrivate->CastFlags >> 0x18 & 1) != 0))
  {
    pFVar7 = pFVar4;
  }
  (*pcVar1)(this,pFVar7 == pFVar4,&local_38,0);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_38,L"nullptr was CastField to a FNumericProperty.");
  (*pcVar1)(this,1,&local_38,0);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 141fb4db0

FString * __thiscall
FFieldCastTest::GetBeautifiedTestName(FFieldCastTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"UObject.Field Cast");
  return __return_storage_ptr__;
}

