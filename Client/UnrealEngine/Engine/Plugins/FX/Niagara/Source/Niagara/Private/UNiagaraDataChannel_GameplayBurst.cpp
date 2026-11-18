// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 8

// StaticClass @ 14907c530

UClass * __cdecl UNiagaraDataChannel_GameplayBurst::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataChannel_GameplayBurst.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataChannel_GameplayBurst",
               &Z_Registration_Info_UClass_UNiagaraDataChannel_GameplayBurst.InnerSingleton,
               StaticRegisterNativesUNiagaraDataChannel_GameplayBurst,0xe0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataChannel_GameplayBurst>,
               InternalVTableHelperCtorCaller<UNiagaraDataChannel_GameplayBurst>,local_res8,
               UNiagaraDataChannel_MapBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataChannel_GameplayBurst.InnerSingleton;
}

// UNiagaraDataChannel_GameplayBurst @ 1490b2ba0

UNiagaraDataChannel_GameplayBurst * __thiscall
UNiagaraDataChannel_GameplayBurst::UNiagaraDataChannel_GameplayBurst
          (UNiagaraDataChannel_GameplayBurst *this,FVTableHelper *param_1)

{
  UNiagaraDataChannel_MapBase::UNiagaraDataChannel_MapBase
            ((UNiagaraDataChannel_MapBase *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraDataChannel_GameplayBurst__6B_;
  (this->CellSize).field0_0x0._s_0.X = 2500.0;
  (this->CellSize).field0_0x0._s_0.Y = 2500.0;
  (this->CellSize).field0_0x0._s_0.Z = 2500.0;
  (this->SystemBoundsPadding).field0_0x0._s_0.X = 250.0;
  (this->SystemBoundsPadding).field0_0x0._s_0.Y = 250.0;
  (this->SystemBoundsPadding).field0_0x0._s_0.Z = 250.0;
  (this->AttachmentSettings).GameplayTags.GameplayTags.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AttachmentSettings).GameplayTags.GameplayTags.ArrayNum = 0;
  (this->AttachmentSettings).GameplayTags.GameplayTags.ArrayMax = 0;
  (this->AttachmentSettings).GameplayTags.ParentTags.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AttachmentSettings).GameplayTags.ParentTags.ArrayNum = 0;
  (this->AttachmentSettings).GameplayTags.ParentTags.ArrayMax = 0;
  (this->AttachmentSettings).ComponentTypes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttachmentSettings).ComponentTypes.ArrayNum = 0;
  (this->AttachmentSettings).ComponentTypes.ArrayMax = 0;
  (this->AttachmentSettings).SpeedThreshold = -1.0;
  return this;
}

// UNiagaraDataChannel_GameplayBurst @ 1490b2c40

UNiagaraDataChannel_GameplayBurst * __thiscall
UNiagaraDataChannel_GameplayBurst::UNiagaraDataChannel_GameplayBurst
          (UNiagaraDataChannel_GameplayBurst *this,FObjectInitializer *param_1)

{
  UNiagaraDataChannel_MapBase::UNiagaraDataChannel_MapBase
            ((UNiagaraDataChannel_MapBase *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraDataChannel_GameplayBurst__6B_;
  (this->CellSize).field0_0x0._s_0.X = 2500.0;
  (this->CellSize).field0_0x0._s_0.Y = 2500.0;
  (this->CellSize).field0_0x0._s_0.Z = 2500.0;
  (this->SystemBoundsPadding).field0_0x0._s_0.X = 250.0;
  (this->SystemBoundsPadding).field0_0x0._s_0.Y = 250.0;
  (this->SystemBoundsPadding).field0_0x0._s_0.Z = 250.0;
  (this->AttachmentSettings).GameplayTags.GameplayTags.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AttachmentSettings).GameplayTags.GameplayTags.ArrayNum = 0;
  (this->AttachmentSettings).GameplayTags.GameplayTags.ArrayMax = 0;
  (this->AttachmentSettings).GameplayTags.ParentTags.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AttachmentSettings).GameplayTags.ParentTags.ArrayNum = 0;
  (this->AttachmentSettings).GameplayTags.ParentTags.ArrayMax = 0;
  (this->AttachmentSettings).ComponentTypes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttachmentSettings).ComponentTypes.ArrayNum = 0;
  (this->AttachmentSettings).ComponentTypes.ArrayMax = 0;
  (this->AttachmentSettings).SpeedThreshold = -1.0;
  return this;
}

// ~UNiagaraDataChannel_GameplayBurst @ 1490b8840

void __thiscall
UNiagaraDataChannel_GameplayBurst::~UNiagaraDataChannel_GameplayBurst
          (UNiagaraDataChannel_GameplayBurst *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraDataChannel_GameplayBurst__6B_;
  pFVar1 = (this->AttachmentSettings).ComponentTypes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AttachmentSettings).GameplayTags.ParentTags.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AttachmentSettings).GameplayTags.GameplayTags.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UNiagaraDataChannel__6B_;
  FInstancedStruct::Reset((FInstancedStruct *)&this->_padding_);
  FRenderCommandFence::~FRenderCommandFence((FRenderCommandFence *)&this->_padding_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// CreateHandler @ 1490e7760

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
UNiagaraDataChannel_GameplayBurst::CreateHandler
          (UNiagaraDataChannel_GameplayBurst *this,UWorld *param_1)

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
  pUVar1 = UNiagaraDataChannelHandler_GameplayBurst::StaticClass();
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

// GetAccessContextType @ 149102520

TNDCAccessContextType __thiscall
UNiagaraDataChannel_GameplayBurst::GetAccessContextType(UNiagaraDataChannel_GameplayBurst *this)

{
  UPackage *pUVar1;
  UScriptStruct *in_RDX;
  
  if (Z_Registration_Info_UScriptStruct_FNDCAccessContext_GameplayBurst.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNDCAccessContext_GameplayBurst.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNDCAccessContext_GameplayBurst,(UObject *)pUVar1
                         ,L"NDCAccessContext_GameplayBurst");
  }
  TNDCAccessContextType::TNDCAccessContextType
            ((TNDCAccessContextType *)in_RDX,
             Z_Registration_Info_UScriptStruct_FNDCAccessContext_GameplayBurst.OuterSingleton);
  return (TNDCAccessContextType)in_RDX;
}

// GetPrivateStaticClass @ 149108760

UClass * __cdecl UNiagaraDataChannel_GameplayBurst::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataChannel_GameplayBurst.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataChannel_GameplayBurst",
               &Z_Registration_Info_UClass_UNiagaraDataChannel_GameplayBurst.InnerSingleton,
               StaticRegisterNativesUNiagaraDataChannel_GameplayBurst,0xe0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataChannel_GameplayBurst>,
               InternalVTableHelperCtorCaller<UNiagaraDataChannel_GameplayBurst>,local_res8,
               UNiagaraDataChannel_MapBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataChannel_GameplayBurst.InnerSingleton;
}

// StaticRegisterNativesUNiagaraDataChannel_GameplayBurst @ 149139de0

void __cdecl
UNiagaraDataChannel_GameplayBurst::StaticRegisterNativesUNiagaraDataChannel_GameplayBurst(void)

{
  return;
}

