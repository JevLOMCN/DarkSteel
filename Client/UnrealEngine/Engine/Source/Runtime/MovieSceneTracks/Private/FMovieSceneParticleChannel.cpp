// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 3

// FMovieSceneParticleChannel @ 146610f00

FMovieSceneParticleChannel * __thiscall
FMovieSceneParticleChannel::FMovieSceneParticleChannel
          (FMovieSceneParticleChannel *this,FMovieSceneParticleChannel *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  void *pvVar3;
  UObject *pUVar4;
  
  FMovieSceneChannel::FMovieSceneChannel((FMovieSceneChannel *)this,(FMovieSceneChannel *)param_1);
  *(undefined ***)this = &___7FMovieSceneByteChannel__6B_;
  puVar1 = &this->field_0x70;
  this->field_0x68 = param_1->field_0x68;
  this->field_0x69 = param_1->field_0x69;
  *(undefined8 *)puVar1 = 0;
  iVar2 = *(int *)&param_1->field_0x78;
  pvVar3 = *(void **)&param_1->field_0x70;
  *(int *)&this->field_0x78 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&this->field_0x7c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar2,0,(ForAnyElementType *)puVar1,iVar2,(int *)&this->field_0x7c);
    memcpy(*(void **)puVar1,pvVar3,(longlong)iVar2 << 2);
  }
  puVar1 = &this->field_0x88;
  this->field_0x80 = param_1->field_0x80;
  this->field_0x81 = param_1->field_0x81;
  *(undefined8 *)puVar1 = 0;
  iVar2 = *(int *)&param_1->field_0x90;
  pvVar3 = *(void **)&param_1->field_0x88;
  *(int *)&this->field_0x90 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&this->field_0x94 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar2,0,(ForAnyElementType *)puVar1,iVar2,(int *)&this->field_0x94);
    memcpy(*(void **)puVar1,pvVar3,(longlong)iVar2);
  }
  pUVar4 = *(UObject **)&param_1->field_0x98;
  *(UObject **)&this->field_0x98 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  *(undefined8 *)&this->field_0xa0 = 0;
  *(undefined8 *)&this->field_0xa8 = 0;
  *(undefined8 *)&this->field_0xc0 = 0;
  *(undefined4 *)&this->field_0xc8 = 0;
  *(undefined4 *)&this->field_0xcc = 0x80;
  *(undefined4 *)&this->field_0xd0 = 0xffffffff;
  *(undefined4 *)&this->field_0xd4 = 0;
  *(undefined8 *)&this->field_0xd8 = 0;
  *(undefined8 *)&this->field_0xe0 = 0;
  *(undefined8 *)&this->field_0xf8 = 0;
  *(undefined4 *)&this->field_0x100 = 0;
  *(undefined4 *)&this->field_0x104 = 0x80;
  *(undefined4 *)&this->field_0x108 = 0xffffffff;
  *(undefined4 *)&this->field_0x10c = 0;
  *(undefined8 *)&this->field_0x118 = 0;
  *(undefined4 *)&this->field_0x120 = 0;
  *(undefined ***)this = &___7FMovieSceneParticleChannel__6B_;
  return this;
}

// StaticStruct @ 146726840

UScriptStruct * __cdecl FMovieSceneParticleChannel::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneParticleChannel.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FMovieSceneParticleChannel.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneParticleChannel,(UObject *)pUVar1,
                         L"MovieSceneParticleChannel");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneParticleChannel.OuterSingleton;
}

// FMovieSceneParticleChannel @ 14675fe70

FMovieSceneParticleChannel * __thiscall
FMovieSceneParticleChannel::FMovieSceneParticleChannel(FMovieSceneParticleChannel *this)

{
  UEnum *pUVar1;
  UPackage *pUVar2;
  
  FMovieSceneByteChannel::FMovieSceneByteChannel((FMovieSceneByteChannel *)this);
  *(undefined ***)this = &___7FMovieSceneParticleChannel__6B_;
  if (Z_Registration_Info_UEnum_EParticleKey.OuterSingleton == (UEnum *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UEnum_EParticleKey.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieSceneTracks_EParticleKey,(UObject *)pUVar2,
                       L"EParticleKey");
  }
  pUVar1 = Z_Registration_Info_UEnum_EParticleKey.OuterSingleton;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (Z_Registration_Info_UEnum_EParticleKey.OuterSingleton != (UEnum *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)Z_Registration_Info_UEnum_EParticleKey.OuterSingleton);
  }
  *(UEnum **)&this->field_0x98 = pUVar1;
  return this;
}

