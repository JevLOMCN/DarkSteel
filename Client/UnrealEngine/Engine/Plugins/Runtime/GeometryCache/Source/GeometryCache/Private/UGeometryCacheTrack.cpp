// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCache
// Functions: 23

// StaticClass @ 14ca00130

UClass * __cdecl UGeometryCacheTrack::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryCacheTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCache",L"GeometryCacheTrack",
               &Z_Registration_Info_UClass_UGeometryCacheTrack.InnerSingleton,
               StaticRegisterNativesUGeometryCacheTrack,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UGeometryCacheTrack>,
               InternalVTableHelperCtorCaller<UGeometryCacheTrack>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryCacheTrack.InnerSingleton;
}

// UGeometryCacheTrack @ 14ca07d60

UGeometryCacheTrack * __thiscall
UGeometryCacheTrack::UGeometryCacheTrack(UGeometryCacheTrack *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UGeometryCacheTrack__6B_;
  (this->MatrixSamples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MatrixSamples).ArrayNum = 0;
  (this->MatrixSamples).ArrayMax = 0;
  (this->MatrixSampleTimes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MatrixSampleTimes).ArrayNum = 0;
  (this->MatrixSampleTimes).ArrayMax = 0;
  return this;
}

// UGeometryCacheTrack @ 14ca07da0

UGeometryCacheTrack * __thiscall
UGeometryCacheTrack::UGeometryCacheTrack(UGeometryCacheTrack *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UGeometryCacheTrack__6B_;
  (this->MatrixSamples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MatrixSamples).ArrayNum = 0;
  (this->MatrixSamples).ArrayMax = 0;
  (this->MatrixSampleTimes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MatrixSampleTimes).ArrayNum = 0;
  (this->MatrixSampleTimes).ArrayMax = 0;
  this->NumMaterials = 0;
  this->Duration = 0.0;
  return this;
}

// ~UGeometryCacheTrack @ 14ca09730

void __thiscall UGeometryCacheTrack::~UGeometryCacheTrack(UGeometryCacheTrack *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UGeometryCacheTrack__6B_;
  piVar1 = &(this->MatrixSamples).ArrayMax;
  (this->MatrixSamples).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,0x10,0,&(this->MatrixSamples).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->MatrixSampleTimes).ArrayMax;
  (this->MatrixSampleTimes).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->MatrixSampleTimes).AllocatorInstance,0,piVar1);
  }
  pFVar2 = (this->MatrixSampleTimes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->MatrixSamples).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// AddMatrixSample @ 14ca0ddc0

void __thiscall
UGeometryCacheTrack::AddMatrixSample
          (UGeometryCacheTrack *this,TMatrix<double> *param_1,float param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  float fVar8;
  float local_res18 [4];
  
  pFVar2 = (this->MatrixSamples).AllocatorInstance.Data;
  local_res18[0] = param_2;
  if ((pFVar2 <= param_1) && (param_1 < pFVar2 + (longlong)(this->MatrixSamples).ArrayMax * 0x80)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = (this->MatrixSamples).ArrayNum;
  piVar1 = &(this->MatrixSamples).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1080,&(this->MatrixSamples).AllocatorInstance,piVar1);
  }
  (this->MatrixSamples).ArrayNum = iVar6 + 1;
  dVar4 = param_1->M[0][1];
  pFVar2 = (this->MatrixSamples).AllocatorInstance.Data;
  lVar7 = (longlong)iVar6 * 0x80;
  *(double *)(pFVar2 + lVar7) = param_1->M[0][0];
  *(double *)(pFVar2 + lVar7 + 8) = dVar4;
  dVar4 = param_1->M[0][3];
  *(double *)(pFVar2 + lVar7 + 0x10) = param_1->M[0][2];
  *(double *)(pFVar2 + lVar7 + 0x10 + 8) = dVar4;
  dVar4 = param_1->M[1][1];
  *(double *)(pFVar2 + lVar7 + 0x20) = param_1->M[1][0];
  *(double *)(pFVar2 + lVar7 + 0x20 + 8) = dVar4;
  dVar4 = param_1->M[1][3];
  *(double *)(pFVar2 + lVar7 + 0x30) = param_1->M[1][2];
  *(double *)(pFVar2 + lVar7 + 0x30 + 8) = dVar4;
  dVar4 = param_1->M[2][1];
  *(double *)(pFVar2 + lVar7 + 0x40) = param_1->M[2][0];
  *(double *)(pFVar2 + lVar7 + 0x40 + 8) = dVar4;
  dVar4 = param_1->M[2][3];
  *(double *)(pFVar2 + lVar7 + 0x50) = param_1->M[2][2];
  *(double *)(pFVar2 + lVar7 + 0x50 + 8) = dVar4;
  dVar4 = param_1->M[3][1];
  *(double *)(pFVar2 + lVar7 + 0x60) = param_1->M[3][0];
  *(double *)(pFVar2 + lVar7 + 0x60 + 8) = dVar4;
  dVar4 = param_1->M[3][3];
  *(double *)(pFVar2 + lVar7 + 0x70) = param_1->M[3][2];
  *(double *)(pFVar2 + lVar7 + 0x70 + 8) = dVar4;
  pFVar2 = (this->MatrixSampleTimes).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_res18) &&
     ((FScriptContainerElement *)local_res18 <
      pFVar2 + (longlong)(this->MatrixSampleTimes).ArrayMax * 4)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = (this->MatrixSampleTimes).ArrayNum;
  piVar1 = &(this->MatrixSampleTimes).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->MatrixSampleTimes).AllocatorInstance,piVar1);
  }
  (this->MatrixSampleTimes).ArrayNum = iVar6 + 1;
  *(float *)((this->MatrixSampleTimes).AllocatorInstance.Data + (longlong)iVar6 * 4) =
       local_res18[0];
  fVar8 = this->Duration;
  if (this->Duration <= local_res18[0]) {
    fVar8 = local_res18[0];
  }
  this->Duration = fVar8;
  return;
}

// FindSampleIndexFromTime @ 14ca15c10

uint __thiscall
UGeometryCacheTrack::FindSampleIndexFromTime
          (UGeometryCacheTrack *this,TArray<float,TSizedDefaultAllocator<32>_> *param_1,
          float param_2,bool param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 in_register_00001284 [12];
  undefined1 auVar9 [16];
  
  auVar9._4_12_ = in_register_00001284;
  auVar9._0_4_ = param_2;
  iVar1 = param_1->ArrayNum;
  if ((iVar1 != 0) && (iVar1 != 1)) {
    if (param_3) {
      auVar9 = roundps(auVar9,ZEXT416((uint)(param_2 / this->Duration)),1);
      param_2 = param_2 - auVar9._0_4_ * this->Duration;
    }
    uVar8 = iVar1 - 1;
    uVar6 = 0;
    if ((int)uVar8 < iVar1) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar8 = (*pcVar3)();
      return uVar8;
    }
    if (*(float *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar8 * 4) <= param_2) {
      return uVar8;
    }
    if ((param_1->ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar8 = (*pcVar3)();
      return uVar8;
    }
    pFVar2 = (param_1->AllocatorInstance).Data;
    uVar6 = 0;
    if (*(float *)pFVar2 <= param_2 && param_2 != *(float *)pFVar2) {
      while( true ) {
        uVar4 = uVar6;
        if (uVar8 == 0) {
          return uVar4;
        }
        if (uVar8 < uVar4) break;
        uVar7 = uVar8 + uVar4 >> 1;
        if ((param_1->ArrayNum <= (int)uVar7) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar8 = (*pcVar3)();
          return uVar8;
        }
        uVar6 = uVar7 + 1;
        if (param_2 <= *(float *)((param_1->AllocatorInstance).Data + (ulonglong)uVar7 * 4)) {
          uVar8 = uVar7 - 1;
          uVar6 = uVar4;
        }
      }
      return uVar4;
    }
  }
  return 0;
}

// GetDuration @ 14ca1aee0

float __thiscall UGeometryCacheTrack::GetDuration(UGeometryCacheTrack *this)

{
  return this->Duration;
}

// GetHash @ 14ca1dcf0

ulong64 __thiscall UGeometryCacheTrack::GetHash(UGeometryCacheTrack *this)

{
  return 0;
}

// GetMaxSampleTime @ 14ca1e0a0

float __thiscall UGeometryCacheTrack::GetMaxSampleTime(UGeometryCacheTrack *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  float fVar5;
  
  iVar1 = (this->MatrixSampleTimes).ArrayNum;
  if (iVar1 < 1) {
    return 0.0;
  }
  uVar4 = 0;
  if ((int)(iVar1 - 1U) < iVar1) {
    uVar4 = ~(iVar1 - 1U) >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar5 = (float)(*pcVar2)();
      return fVar5;
    }
  }
  return *(float *)((this->MatrixSampleTimes).AllocatorInstance.Data +
                   (longlong)(this->MatrixSampleTimes).ArrayNum * 4 + -4);
}

// GetMeshDataAtSampleIndex @ 14ca1e270

bool __thiscall
UGeometryCacheTrack::GetMeshDataAtSampleIndex
          (UGeometryCacheTrack *this,int param_1,FGeometryCacheMeshData *param_2)

{
  return false;
}

// GetMeshDataAtTime @ 14ca1e600

bool __thiscall
UGeometryCacheTrack::GetMeshDataAtTime
          (UGeometryCacheTrack *this,float param_1,FGeometryCacheMeshData *param_2)

{
  return false;
}

// GetPrivateStaticClass @ 14ca1ede0

UClass * __cdecl UGeometryCacheTrack::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryCacheTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCache",L"GeometryCacheTrack",
               &Z_Registration_Info_UClass_UGeometryCacheTrack.InnerSingleton,
               StaticRegisterNativesUGeometryCacheTrack,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UGeometryCacheTrack>,
               InternalVTableHelperCtorCaller<UGeometryCacheTrack>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryCacheTrack.InnerSingleton;
}

// GetResourceSizeEx @ 14ca1f4f0

void __thiscall
UGeometryCacheTrack::GetResourceSizeEx(UGeometryCacheTrack *this,FResourceSizeEx *param_1)

{
  UObject::GetResourceSizeEx((UObject *)this,param_1);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,(longlong)(this->MatrixSamples).ArrayNum << 7);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,(longlong)(this->MatrixSampleTimes).ArrayNum << 2);
  return;
}

// GetSampleInfo @ 14ca1f630

FGeometryCacheTrackSampleInfo * __thiscall
UGeometryCacheTrack::GetSampleInfo(UGeometryCacheTrack *this,float param_1,bool param_2)

{
  return &FGeometryCacheTrackSampleInfo::EmptySampleInfo;
}

// Serialize @ 14ca2a7d0

void __thiscall UGeometryCacheTrack::Serialize(UGeometryCacheTrack *this,FArchive *param_1)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FAnimPhysObjectVersion::GUID);
  iVar3 = FArchiveState::CustomVer((FArchiveState *)param_1,&FAnimPhysObjectVersion::GUID);
  if (0x10 < iVar3) {
    UObject::Serialize((UObject *)this,param_1);
  }
  TArrayPrivateFriend::Serialize<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_>
            (param_1,&this->MatrixSamples);
  TArrayPrivateFriend::Serialize<float,TSizedDefaultAllocator<32>_>
            (param_1,&this->MatrixSampleTimes);
  puVar1 = &this->NumMaterials;
  puVar2 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if (puVar2 + 1 <= (uint *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *puVar1 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return;
  }
  if ((param_1->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014ca2a873. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(param_1,puVar1);
  return;
}

// Serialize @ 14ca2a890

void __thiscall
UGeometryCacheTrack::Serialize(UGeometryCacheTrack *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// SetDuration @ 14ca2aad0

void __thiscall UGeometryCacheTrack::SetDuration(UGeometryCacheTrack *this,float param_1)

{
  this->Duration = param_1;
  return;
}

// SetMatrixSamples @ 14ca2aef0

void __thiscall
UGeometryCacheTrack::SetMatrixSamples
          (UGeometryCacheTrack *this,
          TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  pTVar1 = &this->MatrixSamples;
  if (pTVar1 == param_1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar3 = param_1->ArrayNum;
  if (iVar3 != 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x80,0x10,iVar3,&pTVar1->AllocatorInstance,&(this->MatrixSamples).ArrayNum,
                       &(this->MatrixSamples).ArrayMax);
    memcpy((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 0x80,
           (param_1->AllocatorInstance).Data,(longlong)iVar3 << 7);
  }
  pTVar2 = &this->MatrixSampleTimes;
  if (pTVar2 == param_2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar3 = param_2->ArrayNum;
  if (iVar3 != 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar3,&pTVar2->AllocatorInstance,&(this->MatrixSampleTimes).ArrayNum,
                       &(this->MatrixSampleTimes).ArrayMax);
    memcpy((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 4,(param_2->AllocatorInstance).Data,
           (longlong)iVar3 << 2);
  }
  return;
}

// StaticRegisterNativesUGeometryCacheTrack @ 14ca2ba60

void __cdecl UGeometryCacheTrack::StaticRegisterNativesUGeometryCacheTrack(void)

{
  return;
}

// UpdateBoundsData @ 14ca2d6c0

bool __thiscall
UGeometryCacheTrack::UpdateBoundsData
          (UGeometryCacheTrack *this,float param_1,bool param_2,bool param_3,int *param_4,
          TBox<double> *param_5)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheTrack.cpp"
                     ,0x2b,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

// UpdateMatrixData @ 14ca2dba0

bool __thiscall
UGeometryCacheTrack::UpdateMatrixData
          (UGeometryCacheTrack *this,float param_1,bool param_2,int *param_3,
          TMatrix<double> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  uVar6 = FindSampleIndexFromTime(this,&this->MatrixSampleTimes,param_1,param_2);
  if (uVar6 == *param_3) {
    return false;
  }
  *param_3 = uVar6;
  uVar7 = 0;
  if ((int)uVar6 < (this->MatrixSamples).ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  pFVar1 = (this->MatrixSamples).AllocatorInstance.Data;
  lVar8 = (longlong)(int)uVar6 * 0x80;
  dVar3 = *(double *)(pFVar1 + lVar8 + 8);
  param_4->M[0][0] = *(double *)(pFVar1 + lVar8);
  param_4->M[0][1] = dVar3;
  dVar3 = *(double *)(pFVar1 + lVar8 + 0x10 + 8);
  param_4->M[0][2] = *(double *)(pFVar1 + lVar8 + 0x10);
  param_4->M[0][3] = dVar3;
  dVar3 = *(double *)(pFVar1 + lVar8 + 0x20 + 8);
  param_4->M[1][0] = *(double *)(pFVar1 + lVar8 + 0x20);
  param_4->M[1][1] = dVar3;
  dVar3 = *(double *)(pFVar1 + lVar8 + 0x30 + 8);
  param_4->M[1][2] = *(double *)(pFVar1 + lVar8 + 0x30);
  param_4->M[1][3] = dVar3;
  dVar3 = *(double *)(pFVar1 + lVar8 + 0x40 + 8);
  param_4->M[2][0] = *(double *)(pFVar1 + lVar8 + 0x40);
  param_4->M[2][1] = dVar3;
  dVar3 = *(double *)(pFVar1 + lVar8 + 0x50 + 8);
  param_4->M[2][2] = *(double *)(pFVar1 + lVar8 + 0x50);
  param_4->M[2][3] = dVar3;
  dVar3 = *(double *)(pFVar1 + lVar8 + 0x60 + 8);
  param_4->M[3][0] = *(double *)(pFVar1 + lVar8 + 0x60);
  param_4->M[3][1] = dVar3;
  dVar3 = *(double *)(pFVar1 + lVar8 + 0x70 + 8);
  param_4->M[3][2] = *(double *)(pFVar1 + lVar8 + 0x70);
  param_4->M[3][3] = dVar3;
  return true;
}

// UpdateMeshData @ 14ca2e150

bool __thiscall
UGeometryCacheTrack::UpdateMeshData
          (UGeometryCacheTrack *this,float param_1,bool param_2,int *param_3,
          FGeometryCacheMeshData **param_4)

{
  return false;
}

// UpdateTime @ 14ca30670

void __thiscall
UGeometryCacheTrack::UpdateTime(UGeometryCacheTrack *this,float param_1,bool param_2)

{
  return;
}

