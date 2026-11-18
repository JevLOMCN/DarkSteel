// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 5

// StaticStruct @ 14ac4edd0

UScriptStruct * __cdecl FMultilayerProjectorLayer::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMultilayerProjectorLayer.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CustomizableObject();
    Z_Registration_Info_UScriptStruct_FMultilayerProjectorLayer.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMultilayerProjectorLayer,(UObject *)pUVar1,
                         L"MultilayerProjectorLayer");
  }
  return Z_Registration_Info_UScriptStruct_FMultilayerProjectorLayer.OuterSingleton;
}

// Read @ 14ac60260

void __thiscall
FMultilayerProjectorLayer::Read
          (FMultilayerProjectorLayer *this,FCustomizableObjectInstanceDescriptor *param_1,
          FString *param_2,int param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  wchar_t *pwVar7;
  undefined1 local_68;
  ECustomizableObjectProjectorType local_67 [3];
  FName local_64;
  FScriptContainerElement *local_58;
  FString local_50;
  FString local_40;
  
  bVar3 = FCustomizableObjectInstanceDescriptor::IsMultilayerProjector(param_1,param_2);
  if (!bVar3) {
    `FMultilayerProjectorLayer::Read'::__l5::<lambda_1>::operator()(&local_68);
    return;
  }
  if (-1 < param_3) {
    if ((param_2->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    ::FName::FName(&local_64,pwVar7);
    iVar4 = FCustomizableObjectInstanceDescriptor::NumProjectorLayers(param_1,&local_64);
    if (param_3 < iVar4) goto LAB_14ac60313;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("LayerIndex >= 0 && LayerIndex < Descriptor.NumProjectorLayers(*ParamName)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\MultilayerProjector.cpp"
                     ,0x14,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14ac60313:
  FCustomizableObjectInstanceDescriptor::GetProjectorValue
            (param_1,param_2,&this->Position,&this->Direction,&this->Up,&this->Scale,&this->Angle,
             local_67,param_3);
  ::FString::ConcatFF(&local_50,param_2,&IMAGE_PARAMETER_POSTFIX);
  uVar5 = FCustomizableObjectInstanceDescriptor::FindTypedParameterIndex(param_1,&local_50,Int);
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  uVar6 = 0;
  if ((int)uVar5 < (param_1->IntParameters).ArrayNum) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_58 = (param_1->IntParameters).AllocatorInstance.Data;
  uVar6 = 0;
  if (param_3 < *(int *)(local_58 + (longlong)(int)uVar5 * 0x40 + 0x38)) {
    uVar6 = (uint)~param_3 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  ::FString::operator=
            (&this->Image,
             (FString *)
             ((longlong)param_3 * 0x10 +
             *(longlong *)(local_58 + (longlong)(int)uVar5 * 0x40 + 0x30)));
  ::FString::ConcatFF(&local_40,param_2,&OPACITY_PARAMETER_POSTFIX);
  uVar5 = FCustomizableObjectInstanceDescriptor::FindTypedParameterIndex(param_1,&local_40,Float);
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  uVar6 = 0;
  if ((int)uVar5 < (param_1->FloatParameters).ArrayNum) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (param_1->FloatParameters).AllocatorInstance.Data;
  uVar6 = 0;
  if (param_3 < *(int *)(pFVar1 + (longlong)(int)uVar5 * 0x38 + 0x30)) {
    uVar6 = (uint)~param_3 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->Opacity =
       *(float *)(*(longlong *)(pFVar1 + (longlong)(int)uVar5 * 0x38 + 0x28) + (longlong)param_3 * 4
                 );
  return;
}

// Write @ 14ac62b30

void __thiscall
FMultilayerProjectorLayer::Write
          (FMultilayerProjectorLayer *this,FCustomizableObjectInstanceDescriptor *param_1,
          FString *param_2,int param_3)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  wchar_t *pwVar5;
  undefined1 local_48 [4];
  FName local_44;
  FString local_38;
  FString local_28 [2];
  
  bVar3 = FCustomizableObjectInstanceDescriptor::IsMultilayerProjector(param_1,param_2);
  if (!bVar3) {
    `FMultilayerProjectorLayer::Write'::__l5::<lambda_1>::operator()(local_48);
    return;
  }
  if (-1 < param_3) {
    if ((param_2->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    ::FName::FName(&local_44,pwVar5);
    iVar4 = FCustomizableObjectInstanceDescriptor::NumProjectorLayers(param_1,&local_44);
    if (param_3 < iVar4) goto LAB_14ac62bcd;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("LayerIndex >= 0 && LayerIndex < Descriptor.NumProjectorLayers(*ParamName)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\MultilayerProjector.cpp"
                     ,0x2f,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14ac62bcd:
  FCustomizableObjectInstanceDescriptor::SetProjectorValue
            (param_1,param_2,&this->Position,&this->Direction,&this->Up,&this->Scale,this->Angle,
             param_3);
  ::FString::ConcatFF(&local_38,param_2,&IMAGE_PARAMETER_POSTFIX);
  FCustomizableObjectInstanceDescriptor::SetIntParameterSelectedOption
            (param_1,&local_38,&this->Image,param_3);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  fVar1 = this->Opacity;
  ::FString::ConcatFF(local_28,param_2,&OPACITY_PARAMETER_POSTFIX);
  FCustomizableObjectInstanceDescriptor::SetFloatParameterSelectedOption
            (param_1,local_28,fVar1,param_3);
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 15055a210

bool __thiscall `FMultilayerProjectorLayer::Read'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_7935931598191460336>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<_7935931598191460336>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

// operator() @ 15055a270

bool __thiscall `FMultilayerProjectorLayer::Write'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_7935931598191460309>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<_7935931598191460309>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

