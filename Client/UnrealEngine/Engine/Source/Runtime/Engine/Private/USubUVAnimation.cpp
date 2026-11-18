// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 14

// StaticClass @ 1481baca0

UClass * __cdecl USubUVAnimation::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USubUVAnimation.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SubUVAnimation",
               &Z_Registration_Info_UClass_USubUVAnimation.InnerSingleton,
               StaticRegisterNativesUSubUVAnimation,0x60,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USubUVAnimation>,InternalVTableHelperCtorCaller<USubUVAnimation>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubUVAnimation.InnerSingleton;
}

// USubUVAnimation @ 1481c87b0

USubUVAnimation * __thiscall
USubUVAnimation::USubUVAnimation(USubUVAnimation *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7USubUVAnimation__6B_;
  (this->SubUVTexture).field0_0x0.DebugPtr = (UTexture2D *)0x0;
  (this->DerivedData).BoundingGeometry.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DerivedData).BoundingGeometry.ArrayNum = 0;
  (this->DerivedData).BoundingGeometry.ArrayMax = 0;
  FRenderCommandFence::FRenderCommandFence(&this->ReleaseFence);
  return this;
}

// USubUVAnimation @ 1481c87f0

USubUVAnimation * __thiscall
USubUVAnimation::USubUVAnimation(USubUVAnimation *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7USubUVAnimation__6B_;
  (this->SubUVTexture).field0_0x0.DebugPtr = (UTexture2D *)0x0;
  (this->DerivedData).BoundingGeometry.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DerivedData).BoundingGeometry.ArrayNum = 0;
  (this->DerivedData).BoundingGeometry.ArrayMax = 0;
  FRenderCommandFence::FRenderCommandFence(&this->ReleaseFence);
  this->SubImages_Horizontal = 8;
  this->SubImages_Vertical = 8;
  (this->BoundingMode).Value = '\x01';
  return this;
}

// ~USubUVAnimation @ 1481c96c0

void __thiscall USubUVAnimation::~USubUVAnimation(USubUVAnimation *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7USubUVAnimation__6B_;
  FRenderCommandFence::~FRenderCommandFence(&this->ReleaseFence);
  pFVar1 = (this->DerivedData).BoundingGeometry.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// BeginDestroy @ 1481d5400

void __thiscall USubUVAnimation::BeginDestroy(USubUVAnimation *this)

{
  UObject::BeginDestroy((UObject *)this);
  if (this->BoundingGeometryBuffer != (FSubUVBoundingGeometryBuffer *)0x0) {
    BeginReleaseResource((FRenderResource *)this->BoundingGeometryBuffer,(FRenderCommandPipe *)0x0);
    FRenderCommandFence::BeginFence(&this->ReleaseFence,RenderThread);
    return;
  }
  return;
}

// CacheDerivedData @ 1481d6260

void __thiscall USubUVAnimation::CacheDerivedData(USubUVAnimation *this)

{
  return;
}

// FinishDestroy @ 1481f2b90

void __thiscall USubUVAnimation::FinishDestroy(USubUVAnimation *this)

{
  FSubUVBoundingGeometryBuffer *pFVar1;
  
  pFVar1 = this->BoundingGeometryBuffer;
  if (pFVar1 != (FSubUVBoundingGeometryBuffer *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
  }
  UObject::FinishDestroy((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1481fe080

UClass * __cdecl USubUVAnimation::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USubUVAnimation.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SubUVAnimation",
               &Z_Registration_Info_UClass_USubUVAnimation.InnerSingleton,
               StaticRegisterNativesUSubUVAnimation,0x60,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USubUVAnimation>,InternalVTableHelperCtorCaller<USubUVAnimation>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubUVAnimation.InnerSingleton;
}

// IsReadyForFinishDestroy @ 148205cd0

bool __thiscall USubUVAnimation::IsReadyForFinishDestroy(USubUVAnimation *this)

{
  bool bVar1;
  
  bVar1 = FRenderCommandFence::IsFenceComplete(&this->ReleaseFence);
  return bVar1;
}

// PostInitProperties @ 14820af30

void __thiscall USubUVAnimation::PostInitProperties(USubUVAnimation *this)

{
  FSubUVBoundingGeometryBuffer *this_00;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x10) == 0) {
    this_00 = ::operator_new(0x38);
    if (this_00 != (FSubUVBoundingGeometryBuffer *)0x0) {
      FVertexBuffer::FVertexBuffer((FVertexBuffer *)this_00);
      this_00->_padding_ = (longlong)&___7FSubUVBoundingGeometryBuffer__6B_;
      (this_00->ShaderResourceView).Reference = (FRHIShaderResourceView *)0x0;
      this_00->Vertices = &(this->DerivedData).BoundingGeometry;
      this->BoundingGeometryBuffer = this_00;
      return;
    }
    this->BoundingGeometryBuffer = (FSubUVBoundingGeometryBuffer *)0x0;
  }
  return;
}

// PostLoad @ 14820b390

void __thiscall USubUVAnimation::PostLoad(USubUVAnimation *this)

{
  UObject::PostLoad((UObject *)this);
  BeginInitResource((FRenderResource *)this->BoundingGeometryBuffer,(FRenderCommandPipe *)0x0);
  return;
}

// Serialize @ 1482157d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USubUVAnimation::Serialize(USubUVAnimation *this,FArchive *param_1)

{
  FStructuredArchiveFromArchive *this_00;
  FStructuredArchiveSlot FVar1;
  FArchive *pFVar2;
  undefined1 auStack_1f8 [32];
  bool local_1d8 [8];
  FSlotBase local_1d0;
  FName local_1c8;
  FString local_1c0;
  FStructuredArchiveFromArchive local_1a8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  this_00 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&local_1a8,param_1);
  FVar1 = FStructuredArchiveFromArchive::GetSlot(this_00);
  local_1d0.StructuredArchive = *(FStructuredArchive **)FVar1;
  pFVar2 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_1d0);
  UObject::Serialize((UObject *)this,(FStructuredArchiveRecord)local_1d0.StructuredArchive);
  if ((*(longlong *)&pFVar2->field_0x68 == 0) ||
     (*(longlong *)(*(longlong *)&pFVar2->field_0x68 + 0x10) == 0)) {
    local_1d8[0] = false;
  }
  else {
    local_1d8[0] = true;
  }
  ::operator<<((local_1d0.StructuredArchive)->Formatter->Inner,local_1d8);
  if (local_1d8[0] == false) {
    if ((pFVar2->field_0x28 & 1) == 0) goto LAB_1482158c9;
    local_1c8 = (FName)this->_padding_;
    ::FName::ToString(&local_1c8,&local_1c0);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
    if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
    }
    if (local_1d8[0] == false) goto LAB_1482158c9;
  }
  operator<<<UE::Math::TVector2<float>_>
            ((FStructuredArchiveSlot)local_1d0.StructuredArchive,
             &(this->DerivedData).BoundingGeometry);
LAB_1482158c9:
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1a8);
  return;
}

// Serialize @ 148215900

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USubUVAnimation::Serialize(USubUVAnimation *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10;
  bool local_res18 [8];
  FName local_res20;
  FString local_18;
  
  local_res10.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
  UObject::Serialize((UObject *)this,(FStructuredArchiveRecord)local_res10.StructuredArchive);
  if ((*(longlong *)&pFVar1->field_0x68 == 0) ||
     (*(longlong *)(*(longlong *)&pFVar1->field_0x68 + 0x10) == 0)) {
    local_res18[0] = false;
  }
  else {
    local_res18[0] = true;
  }
  ::operator<<((local_res10.StructuredArchive)->Formatter->Inner,local_res18);
  if (local_res18[0] == false) {
    if ((pFVar1->field_0x28 & 1) == 0) {
      return;
    }
    local_res20 = (FName)this->_padding_;
    ::FName::ToString(&local_res20,&local_18);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (local_res18[0] == false) {
      return;
    }
  }
  operator<<<UE::Math::TVector2<float>_>
            ((FStructuredArchiveSlot)local_res10.StructuredArchive,
             &(this->DerivedData).BoundingGeometry);
  return;
}

// StaticRegisterNativesUSubUVAnimation @ 1482205c0

void __cdecl USubUVAnimation::StaticRegisterNativesUSubUVAnimation(void)

{
  return;
}

