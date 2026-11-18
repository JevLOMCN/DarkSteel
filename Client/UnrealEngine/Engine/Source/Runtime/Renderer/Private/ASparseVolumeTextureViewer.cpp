// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 6

// StaticClass @ 1456522c0

UClass * __cdecl ASparseVolumeTextureViewer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ASparseVolumeTextureViewer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Renderer",L"SparseVolumeTextureViewer",
               &Z_Registration_Info_UClass_ASparseVolumeTextureViewer.InnerSingleton,
               StaticRegisterNativesASparseVolumeTextureViewer,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ASparseVolumeTextureViewer>,
               InternalVTableHelperCtorCaller<ASparseVolumeTextureViewer>,local_res8,
               AInfo::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ASparseVolumeTextureViewer.InnerSingleton;
}

// ASparseVolumeTextureViewer @ 145665550

ASparseVolumeTextureViewer * __thiscall
ASparseVolumeTextureViewer::ASparseVolumeTextureViewer
          (ASparseVolumeTextureViewer *this,FVTableHelper *param_1)

{
  AInfo::AInfo((AInfo *)this,param_1);
  this->_padding_ = (longlong)&___7ASparseVolumeTextureViewer__6B_;
  (this->SparseVolumeTextureViewerComponent).field0_0x0.DebugPtr =
       (USparseVolumeTextureViewerComponent *)0x0;
  return this;
}

// ASparseVolumeTextureViewer @ 145665590

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ASparseVolumeTextureViewer * __thiscall
ASparseVolumeTextureViewer::ASparseVolumeTextureViewer
          (ASparseVolumeTextureViewer *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  FName FVar2;
  FName *pFVar3;
  UClass *pUVar4;
  USparseVolumeTextureViewerComponent *pUVar5;
  FName local_res8;
  
  AInfo::AInfo((AInfo *)this,param_1);
  this->_padding_ = (longlong)&___7ASparseVolumeTextureViewer__6B_;
  (this->SparseVolumeTextureViewerComponent).field0_0x0.DebugPtr =
       (USparseVolumeTextureViewerComponent *)0x0;
  pFVar3 = ::FName::FName(&local_res8,L"SparseVolumeTextureViewerComponent");
  FVar2 = *pFVar3;
  pUVar4 = USparseVolumeTextureViewerComponent::StaticClass();
  pUVar5 = (USparseVolumeTextureViewerComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 != (USparseVolumeTextureViewerComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->SparseVolumeTextureViewerComponent).field0_0x0.DebugPtr = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 != (USparseVolumeTextureViewerComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  this->_padding_ = (longlong)(this->SparseVolumeTextureViewerComponent).field0_0x0;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 2;
  AActor::SetHidden((AActor *)this,false);
  return this;
}

// ~ASparseVolumeTextureViewer @ 145666ec0

void __thiscall
ASparseVolumeTextureViewer::~ASparseVolumeTextureViewer(ASparseVolumeTextureViewer *this)

{
  this->_padding_ = (longlong)&___7ASparseVolumeTextureViewer__6B_;
  AInfo::~AInfo((AInfo *)this);
  return;
}

// GetPrivateStaticClass @ 145683b60

UClass * __cdecl ASparseVolumeTextureViewer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ASparseVolumeTextureViewer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Renderer",L"SparseVolumeTextureViewer",
               &Z_Registration_Info_UClass_ASparseVolumeTextureViewer.InnerSingleton,
               StaticRegisterNativesASparseVolumeTextureViewer,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ASparseVolumeTextureViewer>,
               InternalVTableHelperCtorCaller<ASparseVolumeTextureViewer>,local_res8,
               AInfo::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ASparseVolumeTextureViewer.InnerSingleton;
}

// StaticRegisterNativesASparseVolumeTextureViewer @ 1456a3e40

void __cdecl ASparseVolumeTextureViewer::StaticRegisterNativesASparseVolumeTextureViewer(void)

{
  return;
}

