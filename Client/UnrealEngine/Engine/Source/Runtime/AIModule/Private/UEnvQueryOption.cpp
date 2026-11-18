// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 8

// StaticClass @ 146f10ab0

UClass * __cdecl UEnvQueryOption::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryOption.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryOption",
               &Z_Registration_Info_UClass_UEnvQueryOption.InnerSingleton,
               StaticRegisterNativesUEnvQueryOption,0x40,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEnvQueryOption>,InternalVTableHelperCtorCaller<UEnvQueryOption>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryOption.InnerSingleton;
}

// UEnvQueryOption @ 146f2c980

UEnvQueryOption * __thiscall
UEnvQueryOption::UEnvQueryOption(UEnvQueryOption *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UEnvQueryOption__6B_;
  (this->Generator).field0_0x0.DebugPtr = (UEnvQueryGenerator *)0x0;
  (this->Tests).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tests).ArrayNum = 0;
  (this->Tests).ArrayMax = 0;
  return this;
}

// UEnvQueryOption @ 146f2c9c0

UEnvQueryOption * __thiscall
UEnvQueryOption::UEnvQueryOption(UEnvQueryOption *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UEnvQueryOption__6B_;
  (this->Generator).field0_0x0.DebugPtr = (UEnvQueryGenerator *)0x0;
  (this->Tests).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tests).ArrayNum = 0;
  (this->Tests).ArrayMax = 0;
  return this;
}

// ~UEnvQueryOption @ 146f2f050

void __thiscall UEnvQueryOption::~UEnvQueryOption(UEnvQueryOption *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UEnvQueryOption__6B_;
  pFVar1 = (this->Tests).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetDescriptionDetails @ 146f52d90

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
UEnvQueryOption::GetDescriptionDetails(UEnvQueryOption *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  UEnvQueryGenerator *pUVar2;
  FText *pFVar3;
  FText *pFVar4;
  FTextFormat *pFVar5;
  undefined4 local_res8 [2];
  ITextData *local_78;
  uint local_70;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  local_res8[0] = 0;
  pFVar3 = FText::GetEmpty();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar3->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = pFVar3->Flags;
  pUVar2 = (this->Generator).field0_0x0.DebugPtr;
  if (pUVar2 != (UEnvQueryGenerator *)0x0) {
    (**(code **)(pUVar2->_padding_ + 0x2c0))(pUVar2,&local_78);
    if (((this->Generator).field0_0x0.DebugPtr)->bAutoSortTests == 0) {
      pFVar3 = FText::AsLocalizable_Advanced_LocText
                         (&local_28,L"EnvQueryGenerator",L"NoSortMode",L"TEST SORTING DISABLED");
      local_58.TextData.Reference = local_78;
      if (local_78 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78 + 8))(local_78,local_res8);
      }
      local_58.Flags = local_70;
      pFVar4 = FText::FromString(&local_38,"{0}\n{1}");
      pFVar5 = FTextFormat::FTextFormat(&local_18,pFVar4,Default);
      pFVar3 = FText::Format<FText,FText>(&local_48,pFVar5,&local_58,pFVar3);
      FText::operator=(__return_storage_ptr__,pFVar3);
      if (local_48.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      }
      if (local_38.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
      }
    }
    else {
      local_68.TextData.Reference = local_78;
      if (local_78 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78 + 8))(local_78,local_res8);
      }
      local_68.Flags = local_70;
      FText::operator=(__return_storage_ptr__,&local_68);
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
    }
    if (local_78 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78 + 0x10))();
    }
  }
  return __return_storage_ptr__;
}

// GetDescriptionTitle @ 146f54a70

FText * __thiscall
UEnvQueryOption::GetDescriptionTitle(UEnvQueryOption *this,FText *__return_storage_ptr__)

{
  UEnvQueryGenerator *pUVar1;
  ITextData *pIVar2;
  bool bVar3;
  bool bVar4;
  ITextData **ppIVar5;
  FText *pFVar6;
  ITextData *pIVar7;
  undefined4 local_res8 [2];
  ITextData *local_28;
  uint local_20;
  longlong *local_18 [2];
  
  local_res8[0] = 0;
  pUVar1 = (this->Generator).field0_0x0.DebugPtr;
  if (pUVar1 == (UEnvQueryGenerator *)0x0) {
    pFVar6 = FText::GetEmpty();
    pIVar7 = (pFVar6->TextData).Reference;
    local_28 = pIVar7;
    if (pIVar7 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar7 + 8))(pIVar7,local_res8);
    }
    ppIVar5 = &local_28;
    local_20 = pFVar6->Flags;
    bVar4 = false;
    bVar3 = true;
  }
  else {
    ppIVar5 = (ITextData **)(**(code **)(pUVar1->_padding_ + 0x2b8))(pUVar1,local_18);
    bVar4 = true;
    bVar3 = false;
    pIVar7 = local_28;
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar2 = *ppIVar5;
  (__return_storage_ptr__->TextData).Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
  }
  __return_storage_ptr__->Flags = *(uint *)(ppIVar5 + 1);
  if ((bVar3) && (pIVar7 != (ITextData *)0x0)) {
    (**(code **)((longlong)*pIVar7 + 0x10))(pIVar7);
  }
  if ((bVar4) && (local_18[0] != (longlong *)0x0)) {
    (**(code **)(*local_18[0] + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146f58ea0

UClass * __cdecl UEnvQueryOption::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryOption.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryOption",
               &Z_Registration_Info_UClass_UEnvQueryOption.InnerSingleton,
               StaticRegisterNativesUEnvQueryOption,0x40,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEnvQueryOption>,InternalVTableHelperCtorCaller<UEnvQueryOption>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryOption.InnerSingleton;
}

// StaticRegisterNativesUEnvQueryOption @ 146f76e80

void __cdecl UEnvQueryOption::StaticRegisterNativesUEnvQueryOption(void)

{
  return;
}

