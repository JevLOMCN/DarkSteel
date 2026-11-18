// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeFactoryNodes
// Functions: 8

// StaticClass @ 14e519ba0

UClass * __cdecl UInterchangeAudioSoundWaveFactoryNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeAudioSoundWaveFactoryNode.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeFactoryNodes",L"InterchangeAudioSoundWaveFactoryNode",
               &Z_Registration_Info_UClass_UInterchangeAudioSoundWaveFactoryNode.InnerSingleton,
               StaticRegisterNativesUInterchangeAudioSoundWaveFactoryNode,0x1c0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeAudioSoundWaveFactoryNode>,
               InternalVTableHelperCtorCaller<UInterchangeAudioSoundWaveFactoryNode>,local_res8,
               UInterchangeFactoryBaseNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeAudioSoundWaveFactoryNode.InnerSingleton;
}

// UInterchangeAudioSoundWaveFactoryNode @ 14e52f960

UInterchangeAudioSoundWaveFactoryNode * __thiscall
UInterchangeAudioSoundWaveFactoryNode::UInterchangeAudioSoundWaveFactoryNode
          (UInterchangeAudioSoundWaveFactoryNode *this,FVTableHelper *param_1)

{
  UInterchangeFactoryBaseNode::UInterchangeFactoryBaseNode
            ((UInterchangeFactoryBaseNode *)this,param_1);
  *(undefined ***)this = &___7UInterchangeAudioSoundWaveFactoryNode__6B_;
  return this;
}

// UInterchangeAudioSoundWaveFactoryNode @ 14e52f990

UInterchangeAudioSoundWaveFactoryNode * __thiscall
UInterchangeAudioSoundWaveFactoryNode::UInterchangeAudioSoundWaveFactoryNode
          (UInterchangeAudioSoundWaveFactoryNode *this)

{
  UInterchangeFactoryBaseNode::UInterchangeFactoryBaseNode((UInterchangeFactoryBaseNode *)this);
  *(undefined ***)this = &___7UInterchangeAudioSoundWaveFactoryNode__6B_;
  return this;
}

// ~UInterchangeAudioSoundWaveFactoryNode @ 14e5353a0

void __thiscall
UInterchangeAudioSoundWaveFactoryNode::~UInterchangeAudioSoundWaveFactoryNode
          (UInterchangeAudioSoundWaveFactoryNode *this)

{
  *(undefined ***)this = &___7UInterchangeAudioSoundWaveFactoryNode__6B_;
  UInterchangeFactoryBaseNode::~UInterchangeFactoryBaseNode((UInterchangeFactoryBaseNode *)this);
  return;
}

// GetObjectClass @ 14e558d70

UClass * __thiscall
UInterchangeAudioSoundWaveFactoryNode::GetObjectClass(UInterchangeAudioSoundWaveFactoryNode *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_USoundWave.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundWave",&Z_Registration_Info_UClass_USoundWave.InnerSingleton,
               USoundWave::StaticRegisterNativesUSoundWave,0x408,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<USoundWave>,
               InternalVTableHelperCtorCaller<USoundWave>,aFStackX_8,USoundBase::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundWave.InnerSingleton;
}

// GetPrivateStaticClass @ 14e559dd0

UClass * __cdecl UInterchangeAudioSoundWaveFactoryNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeAudioSoundWaveFactoryNode.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeFactoryNodes",L"InterchangeAudioSoundWaveFactoryNode",
               &Z_Registration_Info_UClass_UInterchangeAudioSoundWaveFactoryNode.InnerSingleton,
               StaticRegisterNativesUInterchangeAudioSoundWaveFactoryNode,0x1c0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeAudioSoundWaveFactoryNode>,
               InternalVTableHelperCtorCaller<UInterchangeAudioSoundWaveFactoryNode>,local_res8,
               UInterchangeFactoryBaseNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeAudioSoundWaveFactoryNode.InnerSingleton;
}

// GetTypeName @ 14e55d530

FString * __thiscall
UInterchangeAudioSoundWaveFactoryNode::GetTypeName
          (UInterchangeAudioSoundWaveFactoryNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"SoundWaveFactoryNode");
  return __return_storage_ptr__;
}

// StaticRegisterNativesUInterchangeAudioSoundWaveFactoryNode @ 14e57f150

void __cdecl
UInterchangeAudioSoundWaveFactoryNode::StaticRegisterNativesUInterchangeAudioSoundWaveFactoryNode
          (void)

{
  return;
}

