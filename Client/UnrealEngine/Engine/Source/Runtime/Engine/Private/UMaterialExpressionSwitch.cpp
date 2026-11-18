// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 1472de1d0

UClass * __cdecl UMaterialExpressionSwitch::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSwitch.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSwitch",
               &Z_Registration_Info_UClass_UMaterialExpressionSwitch.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSwitch,0x130,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSwitch>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSwitch>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSwitch.InnerSingleton;
}

// UMaterialExpressionSwitch @ 1472e1ae0

UMaterialExpressionSwitch * __thiscall
UMaterialExpressionSwitch::UMaterialExpressionSwitch
          (UMaterialExpressionSwitch *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionSwitch__6B_;
  ::FString::FString(&this->Description,L"Switch");
  (this->SwitchValue).OutputIndex = 0;
  (this->SwitchValue).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->SwitchValue).InputName.Number = 0;
  (this->SwitchValue).MaskR = 0;
  (this->SwitchValue).MaskG = 0;
  (this->SwitchValue).MaskB = 0;
  (this->SwitchValue).MaskA = 0;
  (this->SwitchValue).Expression = (UMaterialExpression *)0x0;
  (this->Default).OutputIndex = 0;
  (this->Default).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Default).InputName.Number = 0;
  (this->Default).MaskR = 0;
  (this->Default).MaskG = 0;
  (this->Default).MaskB = 0;
  (this->Default).MaskA = 0;
  (this->Default).Expression = (UMaterialExpression *)0x0;
  (this->Inputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Inputs).ArrayNum = 0;
  (this->Inputs).ArrayMax = 0;
  return this;
}

// ~UMaterialExpressionSwitch @ 1472e3310

void __thiscall
UMaterialExpressionSwitch::~UMaterialExpressionSwitch(UMaterialExpressionSwitch *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMaterialExpressionSwitch__6B_;
  pFVar1 = (this->Inputs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Description).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472e52e0

UClass * __cdecl UMaterialExpressionSwitch::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSwitch.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSwitch",
               &Z_Registration_Info_UClass_UMaterialExpressionSwitch.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSwitch,0x130,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSwitch>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSwitch>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSwitch.InnerSingleton;
}

// Serialize @ 1472e76d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UMaterialExpressionSwitch::Serialize(UMaterialExpressionSwitch *this,FArchive *param_1)

{
  FStructuredArchiveFromArchive *this_00;
  FStructuredArchiveSlot FVar1;
  undefined1 auStack_1c8 [40];
  FStructuredArchiveFromArchive local_1a0;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  this_00 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&local_1a0,param_1);
  FVar1 = FStructuredArchiveFromArchive::GetSlot(this_00);
  Serialize(this,*(FStructuredArchiveRecord *)FVar1);
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1a0);
  return;
}

// StaticRegisterNativesUMaterialExpressionSwitch @ 1472e77a0

void __cdecl UMaterialExpressionSwitch::StaticRegisterNativesUMaterialExpressionSwitch(void)

{
  return;
}

// UMaterialExpressionSwitch @ 148afee60

UMaterialExpressionSwitch * __thiscall
UMaterialExpressionSwitch::UMaterialExpressionSwitch
          (UMaterialExpressionSwitch *this,FObjectInitializer *param_1)

{
  int *piVar1;
  TArray<FSwitchCustomInput,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  UMaterialExpressionSwitch *pUVar8;
  FName local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionSwitch__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  ::FString::FString(&this->Description,L"Switch");
  pTVar2 = &this->Inputs;
  (this->SwitchValue).OutputIndex = 0;
  (this->SwitchValue).InputName.ComparisonIndex = 0;
  piVar1 = &(this->Inputs).ArrayMax;
  *piVar1 = 0;
  *(undefined8 *)&(this->SwitchValue).InputName.Number = 0;
  (this->SwitchValue).MaskR = 0;
  (this->SwitchValue).MaskG = 0;
  (this->SwitchValue).MaskB = 0;
  (this->SwitchValue).MaskA = 0;
  (this->SwitchValue).Expression = (UMaterialExpression *)0x0;
  (this->Default).OutputIndex = 0;
  (this->Default).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Default).InputName.Number = 0;
  (this->Default).MaskR = 0;
  (this->Default).MaskG = 0;
  (this->Default).MaskB = 0;
  (this->Default).MaskA = 0;
  (this->Default).Expression = (UMaterialExpression *)0x0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Inputs).ArrayNum = 0;
  iVar6 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x830,&pTVar2->AllocatorInstance,piVar1);
  lVar7 = (longlong)iVar6;
  (this->Inputs).ArrayNum = iVar6 + 1;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar3 + lVar7 * 0x30) = 0;
  *(undefined8 *)(pFVar3 + lVar7 * 0x30 + 8) = 0;
  *(undefined8 *)(pFVar3 + lVar7 * 0x30 + 0x10) = 0;
  *(undefined8 *)(pFVar3 + lVar7 * 0x30 + 0x10 + 8) = 0;
  *(undefined8 *)(pFVar3 + lVar7 * 0x30 + 0x20) = 0;
  *(undefined8 *)(pFVar3 + lVar7 * 0x30 + 0x20 + 8) = 0;
  ::FName::FName(&local_res8,L"");
  if ((this->Inputs).ArrayNum < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pUVar8 = (UMaterialExpressionSwitch *)(*pcVar4)();
      return pUVar8;
    }
  }
  *(FName *)(pTVar2->AllocatorInstance).Data = local_res8;
  return this;
}

// Serialize @ 148b04650

void __thiscall
UMaterialExpressionSwitch::Serialize
          (UMaterialExpressionSwitch *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  UMaterialExpression::Serialize((UMaterialExpression *)this,param_1);
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FRenderingObjectVersion::GUID);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FUE5MainStreamObjectVersion::GUID);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FNaniteResearchStreamObjectVersion::GUID);
  return;
}

