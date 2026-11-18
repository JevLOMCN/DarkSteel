// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCache
// Functions: 9

// StaticClass @ 14c9ffb20

UClass * __cdecl UGeometryCacheCodecV1::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryCacheCodecV1.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCache",L"GeometryCacheCodecV1",
               &Z_Registration_Info_UClass_UGeometryCacheCodecV1.InnerSingleton,
               StaticRegisterNativesUGeometryCacheCodecV1,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UGeometryCacheCodecV1>,
               InternalVTableHelperCtorCaller<UGeometryCacheCodecV1>,local_res8,
               UGeometryCacheCodecBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryCacheCodecV1.InnerSingleton;
}

// UGeometryCacheCodecV1 @ 14ca07b50

UGeometryCacheCodecV1 * __thiscall
UGeometryCacheCodecV1::UGeometryCacheCodecV1(UGeometryCacheCodecV1 *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UGeometryCacheCodecV1__6B_;
  return this;
}

// UGeometryCacheCodecV1 @ 14ca07b90

UGeometryCacheCodecV1 * __thiscall
UGeometryCacheCodecV1::UGeometryCacheCodecV1
          (UGeometryCacheCodecV1 *this,FObjectInitializer *param_1)

{
  ICodecDecoder *pIVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UGeometryCacheCodecV1__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  pIVar1 = ::operator_new(0x8010);
  if (pIVar1 != (ICodecDecoder *)0x0) {
    *pIVar1 = (ICodecDecoder)&___7FCodecV1Decoder__6B_;
    this->Decoder = pIVar1;
    return this;
  }
  this->Decoder = (ICodecDecoder *)0x0;
  return this;
}

// ~UGeometryCacheCodecV1 @ 14ca09650

void __thiscall UGeometryCacheCodecV1::~UGeometryCacheCodecV1(UGeometryCacheCodecV1 *this)

{
  ICodecDecoder *pIVar1;
  
  this->_padding_ = (longlong)&___7UGeometryCacheCodecV1__6B_;
  pIVar1 = this->Decoder;
  if (pIVar1 != (ICodecDecoder *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  this->Decoder = (ICodecDecoder *)0x0;
  this->_padding_ = (longlong)&___7UGeometryCacheCodecBase__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// CreateRenderState @ 14ca11570

FGeometryCacheCodecRenderStateBase * __thiscall
UGeometryCacheCodecV1::CreateRenderState(UGeometryCacheCodecV1 *this)

{
  FGeometryCacheCodecRenderStateBase *this_00;
  
  this_00 = ::operator_new(0x18);
  if (this_00 != (FGeometryCacheCodecRenderStateBase *)0x0) {
    FGeometryCacheCodecRenderStateBase::FGeometryCacheCodecRenderStateBase
              (this_00,(TArray<int,TSizedDefaultAllocator<32>_> *)&this->_padding_);
    this_00->_padding_ = (longlong)&___7FGeometryCacheCodecRenderStateV1__6B_;
    return this_00;
  }
  return (FGeometryCacheCodecRenderStateBase *)0x0;
}

// DecodeBuffer @ 14ca11f40

bool __thiscall
UGeometryCacheCodecV1::DecodeBuffer
          (UGeometryCacheCodecV1 *this,uchar *param_1,uint param_2,FGeometryCacheMeshData *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char *pcVar4;
  undefined7 uVar5;
  FArchiveState local_b8;
  uchar *local_28;
  undefined8 local_20;
  ulonglong local_18;
  char local_10;
  
  if (param_1 == (uchar *)0x0) {
    bVar2 = false;
  }
  else {
    pcVar4 = (char *)param_1;
    if (this->Decoder == (ICodecDecoder *)0x0) {
      pcVar4 = 
      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheCodecV1.cpp"
      ;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Decoder != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheCodecV1.cpp"
                         ,0x45,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    FArchiveState::FArchiveState(&local_b8);
    uVar5 = (undefined7)((ulonglong)pcVar4 >> 8);
    local_b8._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    local_20 = 0;
    local_10 = '\0';
    local_28 = param_1;
    local_18 = (ulonglong)param_2;
    FArchiveState::SetIsLoading(&local_b8,true);
    (**(code **)(local_b8._padding_ + 0x108))(&local_b8,CONCAT71(uVar5,1));
    local_b8._padding_ = (longlong)&___7FBufferReader__6B_;
    (**(code **)((longlong)*this->Decoder + 8))(this->Decoder,&local_b8,param_3);
    local_b8._padding_ = (longlong)&___7FBufferReader__6B_;
    if (local_10 != '\0') {
      FMemory::Free(local_28);
      local_28 = (uchar *)0x0;
    }
    local_b8._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    FArchive::~FArchive((FArchive *)&local_b8);
    bVar2 = true;
  }
  return bVar2;
}

// DecodeSingleFrame @ 14ca144c0

bool __thiscall
UGeometryCacheCodecV1::DecodeSingleFrame
          (UGeometryCacheCodecV1 *this,FGeometryCacheCodecDecodeArguments *param_1)

{
  uint uVar1;
  TArray<FStreamedGeometryCacheChunk,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  IGeometryCacheStreamingManager *pIVar7;
  undefined8 uVar8;
  undefined4 local_res8 [2];
  
  uVar1 = param_1->FrameIdentifier;
  pTVar2 = param_1->Chunks;
  uVar6 = 0;
  if ((int)uVar1 < pTVar2->ArrayNum) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  if ((float)param_1->FrameIdentifier !=
      *(float *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar1 * 0x38 + 4)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Args.Chunks[Args.FrameIdentifier].FirstFrame == static_cast<float>(Args.FrameIdentifier)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheCodecV1.cpp"
                       ,0x34,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  local_res8[0] = 0;
  pIVar7 = IGeometryCacheStreamingManager::Get();
  uVar8 = (**(code **)(pIVar7->_padding_ + 0xd8))
                    (pIVar7,param_1->Track->Track,param_1->FrameIdentifier,local_res8);
  uVar5 = (**(code **)(this->_padding_ + 0x2b8))(this,uVar8,local_res8[0],param_1->OutMeshData);
  pIVar7 = IGeometryCacheStreamingManager::Get();
  (**(code **)(pIVar7->_padding_ + 0xe0))(pIVar7,param_1->Track->Track,param_1->FrameIdentifier);
  return (bool)uVar5;
}

// GetPrivateStaticClass @ 14ca1ec60

UClass * __cdecl UGeometryCacheCodecV1::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryCacheCodecV1.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCache",L"GeometryCacheCodecV1",
               &Z_Registration_Info_UClass_UGeometryCacheCodecV1.InnerSingleton,
               StaticRegisterNativesUGeometryCacheCodecV1,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UGeometryCacheCodecV1>,
               InternalVTableHelperCtorCaller<UGeometryCacheCodecV1>,local_res8,
               UGeometryCacheCodecBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryCacheCodecV1.InnerSingleton;
}

// StaticRegisterNativesUGeometryCacheCodecV1 @ 14ca2ba10

void __cdecl UGeometryCacheCodecV1::StaticRegisterNativesUGeometryCacheCodecV1(void)

{
  return;
}

