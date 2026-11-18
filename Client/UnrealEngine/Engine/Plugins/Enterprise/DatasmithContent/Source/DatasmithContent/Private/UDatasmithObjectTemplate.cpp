// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DatasmithContent
// Functions: 12

// StaticClass @ 14e2ebe10

UClass * __cdecl UDatasmithObjectTemplate::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithObjectTemplate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithObjectTemplate",
               &Z_Registration_Info_UClass_UDatasmithObjectTemplate.InnerSingleton,
               StaticRegisterNativesUDatasmithObjectTemplate,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithObjectTemplate>,
               InternalVTableHelperCtorCaller<UDatasmithObjectTemplate>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithObjectTemplate.InnerSingleton;
}

// UDatasmithObjectTemplate @ 14e2f50d0

UDatasmithObjectTemplate * __thiscall
UDatasmithObjectTemplate::UDatasmithObjectTemplate
          (UDatasmithObjectTemplate *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bIsActorTemplate = false;
  this->_padding_ = (longlong)&___7UDatasmithObjectTemplate__6B_;
  return this;
}

// ~UDatasmithObjectTemplate @ 14e2f6270

void __thiscall UDatasmithObjectTemplate::~UDatasmithObjectTemplate(UDatasmithObjectTemplate *this)

{
  this->_padding_ = (longlong)&___7UDatasmithObjectTemplate__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// Apply @ 14e2f84f0

void __thiscall
UDatasmithObjectTemplate::Apply(UDatasmithObjectTemplate *this,UObject *param_1,bool param_2)

{
  return;
}

// Equals @ 14e2f9e10

bool __thiscall
UDatasmithObjectTemplate::Equals(UDatasmithObjectTemplate *this,UDatasmithObjectTemplate *param_1)

{
  return false;
}

// GetDifference @ 14e2fb830

UDatasmithObjectTemplate * __cdecl
UDatasmithObjectTemplate::GetDifference(UObject *param_1,UDatasmithObjectTemplate *param_2)

{
  UClass *pUVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  UPackage *pUVar5;
  UDatasmithObjectTemplate *pUVar6;
  UDatasmithObjectTemplate *pUVar7;
  
  pUVar1 = (UClass *)param_2->_padding_;
  pUVar7 = (UDatasmithObjectTemplate *)0x0;
  pUVar5 = GetTransientPackage();
  pUVar6 = NewObject<UDatasmithObjectTemplate>
                     ((UObject *)pUVar5,pUVar1,(FName)0x0,RF_NoFlags,(UObject *)0x0,false,
                      (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  if (pUVar6 == (UDatasmithObjectTemplate *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                       ,0x67,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar7 = (UDatasmithObjectTemplate *)(*pcVar2)();
      return pUVar7;
    }
  }
  else {
    UObjectBase::AddRef((UObjectBase *)pUVar6);
    pUVar7 = pUVar6;
  }
  (**(code **)(pUVar7->_padding_ + 0x2b8))(pUVar7,param_1);
  cVar4 = (**(code **)(param_2->_padding_ + 0x2d0))(param_2,pUVar7);
  if (cVar4 == '\0') {
    pUVar1 = (UClass *)param_2->_padding_;
    pUVar5 = GetTransientPackage();
    pUVar6 = NewObject<UDatasmithObjectTemplate>
                       ((UObject *)pUVar5,pUVar1,(FName)0x0,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    (**(code **)(pUVar6->_padding_ + 0x2c8))(pUVar6,param_1,param_2,1);
  }
  else {
    (**(code **)(param_2->_padding_ + 0x2b0))(param_2,param_1,0);
    pUVar1 = (UClass *)param_2->_padding_;
    pUVar5 = GetTransientPackage();
    pUVar6 = NewObject<UDatasmithObjectTemplate>
                       ((UObject *)pUVar5,pUVar1,(FName)0x0,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    (**(code **)(pUVar6->_padding_ + 0x2b8))(pUVar6,param_1);
    (**(code **)(pUVar7->_padding_ + 0x2b0))(pUVar7,param_1,1);
  }
  UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar7);
  return pUVar6;
}

// GetPrivateStaticClass @ 14e2fcbf0

UClass * __cdecl UDatasmithObjectTemplate::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithObjectTemplate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithObjectTemplate",
               &Z_Registration_Info_UClass_UDatasmithObjectTemplate.InnerSingleton,
               StaticRegisterNativesUDatasmithObjectTemplate,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithObjectTemplate>,
               InternalVTableHelperCtorCaller<UDatasmithObjectTemplate>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithObjectTemplate.InnerSingleton;
}

// HasSameBase @ 14e2fda00

bool __thiscall
UDatasmithObjectTemplate::HasSameBase
          (UDatasmithObjectTemplate *this,UDatasmithObjectTemplate *param_1)

{
  return true;
}

// Load @ 14e2fe150

void __thiscall UDatasmithObjectTemplate::Load(UDatasmithObjectTemplate *this,UObject *param_1)

{
  return;
}

// LoadRebase @ 14e2fe200

void __thiscall
UDatasmithObjectTemplate::LoadRebase
          (UDatasmithObjectTemplate *this,UObject *param_1,UDatasmithObjectTemplate *param_2,
          bool param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00014e2fe203. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2b8))();
  return;
}

// StaticRegisterNativesUDatasmithObjectTemplate @ 14e2fedb0

void __cdecl UDatasmithObjectTemplate::StaticRegisterNativesUDatasmithObjectTemplate(void)

{
  return;
}

// UpdateObject @ 14e2ffcf0

UObject * __thiscall
UDatasmithObjectTemplate::UpdateObject(UDatasmithObjectTemplate *this,UObject *param_1,bool param_2)

{
  return (UObject *)0x0;
}

