// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 7

// StaticClass @ 14907d3d0

UClass * __cdecl UNiagaraDataChannel_Global::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataChannel_Global.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataChannel_Global",
               &Z_Registration_Info_UClass_UNiagaraDataChannel_Global.InnerSingleton,
               StaticRegisterNativesUNiagaraDataChannel_Global,0x70,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UNiagaraDataChannel_Global>,
               InternalVTableHelperCtorCaller<UNiagaraDataChannel_Global>,local_res8,
               UNiagaraDataChannel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataChannel_Global.InnerSingleton;
}

// UNiagaraDataChannel_Global @ 1490b2ce0

UNiagaraDataChannel_Global * __thiscall
UNiagaraDataChannel_Global::UNiagaraDataChannel_Global
          (UNiagaraDataChannel_Global *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined2 *)&this->field_0x38 = 1;
  *(undefined ***)this = &___7UNiagaraDataChannel__6B_;
  this->field_0x3a = 3;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  this->field_0x50 = 0;
  FRenderCommandFence::FRenderCommandFence((FRenderCommandFence *)&this->field_0x58);
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)&this->field_0x60);
  *(undefined ***)this = &___7UNiagaraDataChannel_Global__6B_;
  return this;
}

// UNiagaraDataChannel_Global @ 1490b2d50

UNiagaraDataChannel_Global * __thiscall
UNiagaraDataChannel_Global::UNiagaraDataChannel_Global
          (UNiagaraDataChannel_Global *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined2 *)&this->field_0x38 = 1;
  *(undefined ***)this = &___7UNiagaraDataChannel__6B_;
  this->field_0x3a = 3;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  this->field_0x50 = 0;
  FRenderCommandFence::FRenderCommandFence((FRenderCommandFence *)&this->field_0x58);
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)&this->field_0x60);
  *(undefined ***)this = &___7UNiagaraDataChannel_Global__6B_;
  return this;
}

// ~UNiagaraDataChannel_Global @ 1490b88d0

void __thiscall
UNiagaraDataChannel_Global::~UNiagaraDataChannel_Global(UNiagaraDataChannel_Global *this)

{
  *(undefined ***)this = &___7UNiagaraDataChannel__6B_;
  FInstancedStruct::Reset((FInstancedStruct *)&this->field_0x60);
  FRenderCommandFence::~FRenderCommandFence((FRenderCommandFence *)&this->field_0x58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x48);
  if (*(void **)&this->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x28);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// CreateHandler @ 1490e7820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UNiagaraDataChannelHandler * __thiscall
UNiagaraDataChannel_Global::CreateHandler(UNiagaraDataChannel_Global *this,UWorld *param_1)

{
  UClass *pUVar1;
  UNiagaraDataChannelHandler *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UNiagaraDataChannelHandler_Global::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UNiagaraDataChannelHandler *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  (**(code **)(pUVar2->_padding_ + 0x2b0))(pUVar2,this);
  return pUVar2;
}

// GetPrivateStaticClass @ 149108820

UClass * __cdecl UNiagaraDataChannel_Global::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataChannel_Global.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataChannel_Global",
               &Z_Registration_Info_UClass_UNiagaraDataChannel_Global.InnerSingleton,
               StaticRegisterNativesUNiagaraDataChannel_Global,0x70,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UNiagaraDataChannel_Global>,
               InternalVTableHelperCtorCaller<UNiagaraDataChannel_Global>,local_res8,
               UNiagaraDataChannel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataChannel_Global.InnerSingleton;
}

// StaticRegisterNativesUNiagaraDataChannel_Global @ 149139df0

void __cdecl UNiagaraDataChannel_Global::StaticRegisterNativesUNiagaraDataChannel_Global(void)

{
  return;
}

