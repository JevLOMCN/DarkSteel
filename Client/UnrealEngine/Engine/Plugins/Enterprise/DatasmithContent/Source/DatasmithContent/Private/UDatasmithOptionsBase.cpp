// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DatasmithContent
// Functions: 8

// StaticClass @ 14e2eaf00

UClass * __cdecl UDatasmithOptionsBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithOptionsBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithOptionsBase",
               &Z_Registration_Info_UClass_UDatasmithOptionsBase.InnerSingleton,
               StaticRegisterNativesUDatasmithOptionsBase,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDatasmithOptionsBase>,
               InternalVTableHelperCtorCaller<UDatasmithOptionsBase>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithOptionsBase.InnerSingleton;
}

// UDatasmithOptionsBase @ 14e2f5100

UDatasmithOptionsBase * __thiscall
UDatasmithOptionsBase::UDatasmithOptionsBase(UDatasmithOptionsBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UDatasmithOptionsBase__6B_;
  return this;
}

// UDatasmithOptionsBase @ 14e2f5130

UDatasmithOptionsBase * __thiscall
UDatasmithOptionsBase::UDatasmithOptionsBase
          (UDatasmithOptionsBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UDatasmithOptionsBase__6B_;
  return this;
}

// ~UDatasmithOptionsBase @ 14e2f6290

void __thiscall UDatasmithOptionsBase::~UDatasmithOptionsBase(UDatasmithOptionsBase *this)

{
  *(undefined ***)this = &___7UDatasmithOptionsBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14e2fcca0

UClass * __cdecl UDatasmithOptionsBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithOptionsBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithOptionsBase",
               &Z_Registration_Info_UClass_UDatasmithOptionsBase.InnerSingleton,
               StaticRegisterNativesUDatasmithOptionsBase,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDatasmithOptionsBase>,
               InternalVTableHelperCtorCaller<UDatasmithOptionsBase>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithOptionsBase.InnerSingleton;
}

// Serialize @ 14e2fe5d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UDatasmithOptionsBase::Serialize(UDatasmithOptionsBase *this,FArchive *param_1)

{
  code *pcVar1;
  FStructuredArchiveFromArchive *this_00;
  FStructuredArchiveSlot FVar2;
  FArchive *pFVar3;
  undefined8 *puVar4;
  undefined ***pppuVar5;
  undefined1 auStack_258 [32];
  byte local_238 [8];
  FSlotBase local_230 [3];
  code *local_218;
  undefined **local_208;
  FSlotBase *pFStack_200;
  byte *local_1f8;
  undefined ***local_1f0;
  undefined **local_1d8;
  FSlotBase *pFStack_1d0;
  byte *local_1c8;
  FStructuredArchiveFromArchive local_1b8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_258;
  this_00 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&local_1b8,param_1);
  FVar2 = FStructuredArchiveFromArchive::GetSlot(this_00);
  local_230[0].StructuredArchive = *(FStructuredArchive **)FVar2;
  pFVar3 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_230);
  local_238[0] = (byte)pFVar3->field_0x2a >> 2 & 1;
  pFVar3 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_230);
  pFVar3->field_0x2a = pFVar3->field_0x2a | 4;
  local_1d8 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UDatasmithOptionsBase::Serialize'::`2'::<lambda_1>,0,0>::
               _vftable_;
  pFStack_200 = local_230;
  local_1f8 = local_238;
  local_218 = UE::Core::Private::Function::
              TFunctionRefCaller<`UDatasmithOptionsBase::Serialize'::__l2::<lambda_1>,void>::Call;
  local_1f0 = (undefined ***)0x0;
  local_208 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UDatasmithOptionsBase::Serialize'::`2'::<lambda_1>,0,0>::
               _vftable_;
  pFStack_1d0 = pFStack_200;
  local_1c8 = local_1f8;
  UObject::Serialize((UObject *)this,(FStructuredArchiveRecord)local_230[0].StructuredArchive);
  UE::Core::Private::Function::CheckCallable(local_218);
  pcVar1 = local_218;
  pppuVar5 = &local_208;
  if (local_1f0 != (undefined ***)0x0) {
    pppuVar5 = local_1f0;
  }
  puVar4 = (undefined8 *)(*(code *)(*pppuVar5)[1])();
  if (pcVar1 == UE::Core::Private::Function::
                TFunctionRefCaller<`UDatasmithOptionsBase::Serialize'::__l2::<lambda_1>,void>::Call)
  {
    pFVar3 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive((FSlotBase *)*puVar4);
    pFVar3->field_0x2a = pFVar3->field_0x2a ^ (*(char *)puVar4[1] << 2 ^ pFVar3->field_0x2a) & 4U;
  }
  else {
    (*pcVar1)(puVar4);
  }
  if (local_218 != (code *)0x0) {
    pppuVar5 = &local_208;
    if (local_1f0 != (undefined ***)0x0) {
      pppuVar5 = local_1f0;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1b8);
  return;
}

// Serialize @ 14e2fe740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UDatasmithOptionsBase::Serialize(UDatasmithOptionsBase *this,FStructuredArchiveRecord param_1)

{
  code *pcVar1;
  FArchive *pFVar2;
  undefined8 *puVar3;
  undefined ***pppuVar4;
  FSlotBase local_res10;
  undefined1 auStack_a8 [32];
  byte local_88 [16];
  code *local_78;
  undefined **local_68;
  FSlotBase *pFStack_60;
  byte *local_58;
  undefined ***local_50;
  undefined **local_38;
  FSlotBase *pFStack_30;
  byte *local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_res10.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar2 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
  local_88[0] = (byte)pFVar2->field_0x2a >> 2 & 1;
  pFVar2 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
  pFVar2->field_0x2a = pFVar2->field_0x2a | 4;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UDatasmithOptionsBase::Serialize'::`2'::<lambda_1>,0,0>::
              _vftable_;
  pFStack_60 = &local_res10;
  local_58 = local_88;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<`UDatasmithOptionsBase::Serialize'::__l2::<lambda_1>,void>::Call;
  local_50 = (undefined ***)0x0;
  local_68 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UDatasmithOptionsBase::Serialize'::`2'::<lambda_1>,0,0>::
              _vftable_;
  pFStack_30 = pFStack_60;
  local_28 = local_58;
  UObject::Serialize((UObject *)this,(FStructuredArchiveRecord)local_res10.StructuredArchive);
  UE::Core::Private::Function::CheckCallable(local_78);
  pcVar1 = local_78;
  pppuVar4 = &local_68;
  if (local_50 != (undefined ***)0x0) {
    pppuVar4 = local_50;
  }
  puVar3 = (undefined8 *)(*(code *)(*pppuVar4)[1])();
  if (pcVar1 == UE::Core::Private::Function::
                TFunctionRefCaller<`UDatasmithOptionsBase::Serialize'::__l2::<lambda_1>,void>::Call)
  {
    pFVar2 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive((FSlotBase *)*puVar3);
    pFVar2->field_0x2a = pFVar2->field_0x2a ^ (*(char *)puVar3[1] << 2 ^ pFVar2->field_0x2a) & 4U;
  }
  else {
    (*pcVar1)(puVar3);
  }
  if (local_78 != (code *)0x0) {
    pppuVar4 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar4 = local_50;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return;
}

// StaticRegisterNativesUDatasmithOptionsBase @ 14e2fedc0

void __cdecl UDatasmithOptionsBase::StaticRegisterNativesUDatasmithOptionsBase(void)

{
  return;
}

