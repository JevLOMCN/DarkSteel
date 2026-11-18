// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 4

// StaticStruct @ 146f14e10

UScriptStruct * __cdecl FAIDynamicParam::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAIDynamicParam.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UScriptStruct_FAIDynamicParam.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAIDynamicParam,(UObject *)pUVar1,
                         L"AIDynamicParam");
  }
  return Z_Registration_Info_UScriptStruct_FAIDynamicParam.OuterSingleton;
}

// FAIDynamicParam @ 146f288f0

FAIDynamicParam * __thiscall
FAIDynamicParam::FAIDynamicParam(FAIDynamicParam *this,FAIDynamicParam *param_1)

{
  undefined1 *puVar1;
  UClass *pUVar2;
  
  this->ParamName = param_1->ParamName;
  this->ParamType = param_1->ParamType;
  this->field_0x9 = this->field_0x9 ^ (this->bAllowBBKey ^ param_1->bAllowBBKey) & 1;
  this->Value = param_1->Value;
  (this->BBKey).AllowedTypes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BBKey).AllowedTypes.AllocatorInstance.Data =
       (param_1->BBKey).AllowedTypes.AllocatorInstance.Data;
  (param_1->BBKey).AllowedTypes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BBKey).AllowedTypes.ArrayNum = (param_1->BBKey).AllowedTypes.ArrayNum;
  (this->BBKey).AllowedTypes.ArrayMax = (param_1->BBKey).AllowedTypes.ArrayMax;
  (param_1->BBKey).AllowedTypes.ArrayNum = 0;
  (param_1->BBKey).AllowedTypes.ArrayMax = 0;
  (this->BBKey).SelectedKeyName = (param_1->BBKey).SelectedKeyName;
  pUVar2 = (param_1->BBKey).SelectedKeyType.Class.field0_0x0.DebugPtr;
  (this->BBKey).SelectedKeyType.Class.field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->BBKey).SelectedKeyID = (param_1->BBKey).SelectedKeyID;
  puVar1 = &(this->BBKey).field_0x24;
  *(uint *)puVar1 =
       *(uint *)puVar1 ^
       ((this->BBKey).bNoneIsAllowedValue ^ (param_1->BBKey).bNoneIsAllowedValue) & 1;
  return this;
}

// ConfigureBBKey @ 146f3a4a0

void __thiscall FAIDynamicParam::ConfigureBBKey(FAIDynamicParam *this,UObject *param_1)

{
  undefined1 *puVar1;
  EAIParamType EVar2;
  code *pcVar3;
  bool bVar4;
  
  (this->BBKey).bNoneIsAllowedValue = 1;
  EVar2 = this->ParamType;
  if ((EVar2 == Float) || (EVar2 == Int)) {
    FBlackboardKeySelector::AddFloatFilter(&this->BBKey,param_1,this->ParamName);
    FBlackboardKeySelector::AddIntFilter(&this->BBKey,param_1,this->ParamName);
  }
  else {
    if (EVar2 == Bool) {
      FBlackboardKeySelector::AddBoolFilter(&this->BBKey,param_1,this->ParamName);
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\EnvironmentQuery\\EnvQueryTypes.cpp"
                       ,0x171,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// GenerateConfigurableParamsFromNamedValues @ 146f4b4d0

void __cdecl
FAIDynamicParam::GenerateConfigurableParamsFromNamedValues
          (UObject *param_1,TArray<FAIDynamicParam,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FEnvNamedValue,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  FAIDynamicParam *pFVar6;
  FName *pFVar7;
  FName *pFVar8;
  undefined1 local_res18 [8];
  uint local_res20;
  FAIDynamicParam local_78;
  
  local_res20 = param_3->ArrayNum;
  uVar5 = (ulonglong)(int)local_res20;
  pFVar7 = (FName *)(param_3->AllocatorInstance).Data;
  pFVar8 = pFVar7 + uVar5 * 2;
  while( true ) {
    if (param_3->ArrayNum != (int)uVar5) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FEnvNamedValue,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar7 == pFVar8) break;
    local_78.BBKey.bNoneIsAllowedValue = 1;
    local_78.bAllowBBKey = '\x01';
    local_78.BBKey.AllowedTypes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.BBKey.SelectedKeyType.Class.field0_0x0 =
         (TObjectPtr<UClass>)(TObjectPtr<UClass>_u_0)0x0;
    pFVar6 = (FAIDynamicParam *)(param_2->AllocatorInstance).Data;
    local_78.ParamName.ComparisonIndex.Value = 0;
    local_78.ParamName.Number = 0;
    local_78.BBKey.AllowedTypes.ArrayNum = 0;
    local_78.BBKey.AllowedTypes.ArrayMax = 0;
    local_78.BBKey.SelectedKeyName.ComparisonIndex.Value = 0;
    local_78.BBKey.SelectedKeyName.Number = 0;
    local_78.BBKey.SelectedKeyID = 0xffff;
    local_78.ParamType = Float;
    local_78.Value = 0.0;
    if ((pFVar6 <= &local_78) && (&local_78 < pFVar6 + param_2->ArrayMax)) {
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
    uVar3 = param_2->ArrayNum;
    if (uVar3 == param_2->ArrayMax) {
      uVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x838,&param_2->AllocatorInstance,&param_2->ArrayMax);
      param_2->ArrayNum = uVar3;
    }
    param_2->ArrayNum = uVar3 + 1;
    FAIDynamicParam((FAIDynamicParam *)
                    ((param_2->AllocatorInstance).Data + (longlong)(int)uVar3 * 0x38),&local_78);
    uVar4 = 0;
    if ((int)uVar3 < param_2->ArrayNum) {
      uVar4 = ~uVar3 >> 0x1f;
    }
    if (uVar4 == 0) {
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
    pFVar6 = (FAIDynamicParam *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar3 * 0x38);
    if (local_78.BBKey.AllowedTypes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.BBKey.AllowedTypes.AllocatorInstance.Data);
    }
    pFVar6->ParamName = *pFVar7;
    pFVar6->ParamType = (EAIParamType)pFVar7[1].ComparisonIndex.Value;
    pFVar6->Value = (float)pFVar7[1].Number;
    ConfigureBBKey(pFVar6,param_1);
    uVar5 = (ulonglong)local_res20;
    pFVar7 = pFVar7 + 2;
  }
  return;
}

