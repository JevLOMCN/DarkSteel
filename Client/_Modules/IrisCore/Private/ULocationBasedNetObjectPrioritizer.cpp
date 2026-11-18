// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 17

// StaticClass @ 14429f770

UClass * __cdecl ULocationBasedNetObjectPrioritizer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULocationBasedNetObjectPrioritizer.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"LocationBasedNetObjectPrioritizer",
               &Z_Registration_Info_UClass_ULocationBasedNetObjectPrioritizer.InnerSingleton,
               StaticRegisterNativesULocationBasedNetObjectPrioritizer,0x60,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ULocationBasedNetObjectPrioritizer>,
               InternalVTableHelperCtorCaller<ULocationBasedNetObjectPrioritizer>,local_res8,
               UNetObjectPrioritizer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULocationBasedNetObjectPrioritizer.InnerSingleton;
}

// ULocationBasedNetObjectPrioritizer @ 1442aedd0

ULocationBasedNetObjectPrioritizer * __thiscall
ULocationBasedNetObjectPrioritizer::ULocationBasedNetObjectPrioritizer
          (ULocationBasedNetObjectPrioritizer *this)

{
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7ULocationBasedNetObjectPrioritizer__6B_;
  TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_>::
  TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_>(&this->Locations,0);
  (this->AssignedLocationIndices).Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssignedLocationIndices).Storage.ArrayNum = 0;
  (this->AssignedLocationIndices).Storage.ArrayMax = 0;
  (this->AssignedLocationIndices).BitCount = 0;
  this->WorldLocations = (FWorldLocations *)0x0;
  return this;
}

// ULocationBasedNetObjectPrioritizer @ 1442aee20

ULocationBasedNetObjectPrioritizer * __thiscall
ULocationBasedNetObjectPrioritizer::ULocationBasedNetObjectPrioritizer
          (ULocationBasedNetObjectPrioritizer *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7ULocationBasedNetObjectPrioritizer__6B_;
  TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_>::
  TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_>(&this->Locations,0);
  (this->AssignedLocationIndices).Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssignedLocationIndices).Storage.ArrayNum = 0;
  (this->AssignedLocationIndices).Storage.ArrayMax = 0;
  (this->AssignedLocationIndices).BitCount = 0;
  this->WorldLocations = (FWorldLocations *)0x0;
  return this;
}

// ~ULocationBasedNetObjectPrioritizer @ 1442b0b50

void __thiscall
ULocationBasedNetObjectPrioritizer::~ULocationBasedNetObjectPrioritizer
          (ULocationBasedNetObjectPrioritizer *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ULocationBasedNetObjectPrioritizer__6B_;
  pFVar1 = (this->AssignedLocationIndices).Storage.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TIndirectArray<TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
  ::
  ~TIndirectArray<TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
            (&(this->Locations).Chunks);
  this->_padding_ = (longlong)&___7UNetObjectPrioritizer__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AddObject @ 1442b53a0

bool __thiscall
ULocationBasedNetObjectPrioritizer::AddObject
          (ULocationBasedNetObjectPrioritizer *this,uint param_1,
          FNetObjectPrioritizerAddObjectParams *param_2)

{
  FScriptContainerElement *pFVar1;
  FObjectLocationInfo *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  FRepTagFindInfo local_28;
  
  pFVar1 = (this->WorldLocations->ValidInfoIndexes).Storage.AllocatorInstance.Data;
  if (((this->WorldLocations->ValidInfoIndexes).BitCount <= param_1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2c1,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  if ((*(uint *)(pFVar1 + (ulonglong)(param_1 >> 5) * 4) >> (param_1 & 0x1f) & 1) == 0) {
    bVar4 = UE::Net::FindRepTag(param_2->Protocol,0x719e9e9e02f8b16,&local_28);
    if (((!bVar4) || (0xfffe < local_28.ExternalStateOffset)) || (0xfffe < local_28.StateIndex)) {
      return false;
    }
  }
  else {
    local_28.StateIndex = 0xffff;
    local_28.ExternalStateOffset = 0xffff;
  }
  pFVar2 = (FObjectLocationInfo *)param_2->OutInfo;
  *(undefined2 *)pFVar2 = (undefined2)local_28.ExternalStateOffset;
  *(undefined2 *)&pFVar2->field_0x2 = (undefined2)local_28.StateIndex;
  uVar6 = AllocLocation(this);
  *(short *)&pFVar2->field_0x4 = (short)uVar6;
  *(short *)&pFVar2->field_0x6 = (short)(uVar6 >> 0x10);
  UpdateLocation(this,param_1,pFVar2,param_2->InstanceProtocol);
  return true;
}

// AllocLocation @ 1442b5cb0

uint __thiscall
ULocationBasedNetObjectPrioritizer::AllocLocation(ULocationBasedNetObjectPrioritizer *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  void *local_28 [2];
  
  uVar6 = (this->AssignedLocationIndices).Storage.ArrayNum;
  uVar3 = 0;
  pFVar7 = (this->AssignedLocationIndices).Storage.AllocatorInstance.Data;
  iVar9 = 0;
  uVar8 = 0xffffffff;
  if (uVar6 != 0) {
    do {
      if (*(uint *)pFVar7 != 0xffffffff) {
        uVar6 = ~*(uint *)pFVar7;
        iVar5 = 0;
        if (uVar6 != 0) {
          for (; (uVar6 >> iVar5 & 1) == 0; iVar5 = iVar5 + 1) {
          }
        }
        iVar4 = 0x20;
        if (uVar6 != 0) {
          iVar4 = iVar5;
        }
        uVar8 = 0xffffffff;
        if ((uint)(iVar4 + iVar9) < (this->AssignedLocationIndices).BitCount) {
          uVar8 = iVar4 + iVar9;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      pFVar7 = pFVar7 + 4;
      iVar9 = iVar9 + 0x20;
    } while (uVar3 < uVar6);
  }
  uVar6 = (this->Locations).NumElements;
  if (uVar6 <= uVar8) {
    (this->Locations).NumElements = uVar6 + 0x800;
    iVar9 = (this->Locations).Chunks.Array.ArrayNum;
    iVar5 = (int)(uVar6 + 0xfff + ((int)(uVar6 + 0xfff) >> 0x1f & 0x7ffU)) >> 0xb;
    if (iVar9 < iVar5) {
      uVar10 = (ulonglong)(uint)(iVar5 - iVar9);
      do {
        local_28[0] = ::operator_new(0x10000);
        pFVar7 = (this->Locations).Chunks.Array.AllocatorInstance.Data;
        if (((pFVar7 <= (FScriptContainerElement *)local_28) &&
            ((FScriptContainerElement *)local_28 <
             pFVar7 + (longlong)(this->Locations).Chunks.Array.ArrayMax * 8)) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar6 = (*pcVar1)();
          return uVar6;
        }
        iVar9 = (this->Locations).Chunks.Array.ArrayNum;
        if (iVar9 == (this->Locations).Chunks.Array.ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,(ForAnyElementType *)&this->Locations,
                             &(this->Locations).Chunks.Array.ArrayMax);
        }
        pFVar7 = (this->Locations).Chunks.Array.AllocatorInstance.Data;
        (this->Locations).Chunks.Array.ArrayNum = iVar9 + 1;
        *(void **)(pFVar7 + (longlong)iVar9 * 8) = local_28[0];
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
  }
  pFVar7 = (this->AssignedLocationIndices).Storage.AllocatorInstance.Data;
  if (((this->AssignedLocationIndices).BitCount <= uVar8) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2a2,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return uVar6;
  }
  pFVar7 = pFVar7 + (ulonglong)(uVar8 >> 5) * 4;
  *(uint *)pFVar7 = *(uint *)pFVar7 | 1 << (uVar8 & 0x1f);
  return uVar8;
}

// Deinit @ 1442bb3d0

void __thiscall ULocationBasedNetObjectPrioritizer::Deinit(ULocationBasedNetObjectPrioritizer *this)

{
  this->WorldLocations = (FWorldLocations *)0x0;
  return;
}

// FreeLocation @ 1442c2060

void __thiscall
ULocationBasedNetObjectPrioritizer::FreeLocation
          (ULocationBasedNetObjectPrioritizer *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  pFVar1 = (this->AssignedLocationIndices).Storage.AllocatorInstance.Data;
  if ((this->AssignedLocationIndices).BitCount <= param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2b7,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(uint *)(pFVar1 + (ulonglong)(param_1 >> 5) * 4) =
       *(uint *)(pFVar1 + (ulonglong)(param_1 >> 5) * 4) & ~(1 << (param_1 & 0x1f));
  return;
}

// GetLocation @ 1442c2820

VectorRegister4Double * __thiscall
ULocationBasedNetObjectPrioritizer::GetLocation
          (ULocationBasedNetObjectPrioritizer *this,VectorRegister4Double *__return_storage_ptr__,
          FObjectLocationInfo *param_1)

{
  double *pdVar1;
  double *pdVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  VectorRegister4Double *pVVar11;
  uint uVar12;
  
  uVar12 = *(uint *)&param_1->field_0x4;
  uVar9 = (int)(uVar12 + ((int)uVar12 >> 0x1f & 0x7ffU)) >> 0xb;
  uVar12 = uVar12 & 0x800007ff;
  if ((int)uVar12 < 0) {
    uVar12 = (uVar12 - 1 | 0xfffff800) + 1;
  }
  uVar10 = 0;
  if ((int)uVar9 < (this->Locations).Chunks.Array.ArrayNum) {
    uVar10 = ~uVar9 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pVVar11 = (VectorRegister4Double *)(*pcVar4)();
      return pVVar11;
    }
  }
  lVar3 = *(longlong *)
           ((this->Locations).Chunks.Array.AllocatorInstance.Data + (longlong)(int)uVar9 * 8);
  pdVar1 = (double *)(lVar3 + (longlong)(int)uVar12 * 0x20);
  dVar5 = pdVar1[1];
  pdVar2 = (double *)(lVar3 + 0x10 + (longlong)(int)uVar12 * 0x20);
  dVar6 = *pdVar2;
  dVar7 = pdVar2[1];
  (__return_storage_ptr__->XY).m128d_f64[0] = *pdVar1;
  (__return_storage_ptr__->XY).m128d_f64[1] = dVar5;
  (__return_storage_ptr__->ZW).m128d_f64[0] = dVar6;
  (__return_storage_ptr__->ZW).m128d_f64[1] = dVar7;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1442c3080

UClass * __cdecl ULocationBasedNetObjectPrioritizer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULocationBasedNetObjectPrioritizer.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"LocationBasedNetObjectPrioritizer",
               &Z_Registration_Info_UClass_ULocationBasedNetObjectPrioritizer.InnerSingleton,
               StaticRegisterNativesULocationBasedNetObjectPrioritizer,0x60,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ULocationBasedNetObjectPrioritizer>,
               InternalVTableHelperCtorCaller<ULocationBasedNetObjectPrioritizer>,local_res8,
               UNetObjectPrioritizer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULocationBasedNetObjectPrioritizer.InnerSingleton;
}

// Init @ 1442c4630

void __thiscall
ULocationBasedNetObjectPrioritizer::Init
          (ULocationBasedNetObjectPrioritizer *this,FNetObjectPrioritizerInitParams *param_1)

{
  FWorldLocations *pFVar1;
  
  UE::Net::FNetBitArray::Init(&this->AssignedLocationIndices,param_1->CurrentMaxInternalIndex);
  pFVar1 = UReplicationSystem::GetWorldLocations((param_1->ReplicationSystem).field0_0x0.DebugPtr);
  this->WorldLocations = pFVar1;
  return;
}

// OnMaxInternalNetRefIndexIncreased @ 1442c89e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
ULocationBasedNetObjectPrioritizer::OnMaxInternalNetRefIndexIncreased
          (ULocationBasedNetObjectPrioritizer *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  
  (this->AssignedLocationIndices).BitCount = param_1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&(this->AssignedLocationIndices).Storage,param_1 + 0x1f >> 5,No);
  uVar2 = (this->AssignedLocationIndices).BitCount;
  if (uVar2 != 0) {
    pFVar1 = (this->AssignedLocationIndices).Storage.AllocatorInstance.Data +
             (longlong)(this->AssignedLocationIndices).Storage.ArrayNum * 4 + -4;
    *(uint *)pFVar1 = *(uint *)pFVar1 & 0xffffffffU >> (-(char)uVar2 & 0x1fU);
  }
  return;
}

// RemoveObject @ 1442dedb0

void __thiscall
ULocationBasedNetObjectPrioritizer::RemoveObject
          (ULocationBasedNetObjectPrioritizer *this,uint param_1,
          FNetObjectPrioritizationInfo *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  
  uVar3 = *(uint *)(param_2->Data + 2);
  pFVar1 = (this->AssignedLocationIndices).Storage.AllocatorInstance.Data;
  if ((this->AssignedLocationIndices).BitCount <= uVar3) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2b7,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(uint *)(pFVar1 + (ulonglong)(uVar3 >> 5) * 4) =
       *(uint *)(pFVar1 + (ulonglong)(uVar3 >> 5) * 4) & ~(1 << (uVar3 & 0x1f));
  return;
}

// SetLocation @ 1442e4760

void __thiscall
ULocationBasedNetObjectPrioritizer::SetLocation
          (ULocationBasedNetObjectPrioritizer *this,FObjectLocationInfo *param_1,
          VectorRegister4Double *param_2)

{
  undefined4 *puVar1;
  double *pdVar2;
  longlong lVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  uVar14 = *(uint *)&param_1->field_0x4;
  uVar5 = *(undefined4 *)(param_2->XY).m128d_f64;
  uVar6 = *(undefined4 *)((longlong)(param_2->XY).m128d_f64 + 4);
  uVar7 = *(undefined4 *)((param_2->XY).m128d_f64 + 1);
  uVar8 = *(undefined4 *)((longlong)(param_2->XY).m128d_f64 + 0xc);
  dVar9 = (param_2->ZW).m128d_f64[0];
  dVar10 = (param_2->ZW).m128d_f64[1];
  uVar12 = (int)(uVar14 + ((int)uVar14 >> 0x1f & 0x7ffU)) >> 0xb;
  uVar14 = uVar14 & 0x800007ff;
  if ((int)uVar14 < 0) {
    uVar14 = (uVar14 - 1 | 0xfffff800) + 1;
  }
  uVar13 = 0;
  if ((int)uVar12 < (this->Locations).Chunks.Array.ArrayNum) {
    uVar13 = ~uVar12 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar3 = *(longlong *)
           ((this->Locations).Chunks.Array.AllocatorInstance.Data + (longlong)(int)uVar12 * 8);
  puVar1 = (undefined4 *)(lVar3 + (ulonglong)uVar14 * 0x20);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  puVar1[2] = uVar7;
  puVar1[3] = uVar8;
  pdVar2 = (double *)(lVar3 + 0x10 + (ulonglong)uVar14 * 0x20);
  *pdVar2 = dVar9;
  pdVar2[1] = dVar10;
  return;
}

// StaticRegisterNativesULocationBasedNetObjectPrioritizer @ 1442e62b0

void __cdecl
ULocationBasedNetObjectPrioritizer::StaticRegisterNativesULocationBasedNetObjectPrioritizer(void)

{
  return;
}

// UpdateLocation @ 1442e89f0

void __thiscall
ULocationBasedNetObjectPrioritizer::UpdateLocation
          (ULocationBasedNetObjectPrioritizer *this,uint param_1,FObjectLocationInfo *param_2,
          FReplicationInstanceProtocol *param_3)

{
  double *pdVar1;
  ushort uVar2;
  FWorldLocations *this_00;
  FScriptContainerElement *pFVar3;
  FFragmentData *pFVar4;
  uchar *puVar5;
  code *pcVar6;
  bool bVar7;
  FObjectInfo *pFVar8;
  VectorRegister4Double *pVVar9;
  VectorRegister4Double local_48;
  VectorRegister4Double local_28;
  
  uVar2 = *(ushort *)&param_2->field_0x2;
  if (uVar2 == 0xffff) {
    this_00 = this->WorldLocations;
    pFVar3 = (this_00->ValidInfoIndexes).Storage.AllocatorInstance.Data;
    if ((this_00->ValidInfoIndexes).BitCount <= param_1) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2c1,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if ((*(uint *)(pFVar3 + (ulonglong)(param_1 >> 5) * 4) >> (param_1 & 0x1f) & 1) == 0) {
      pVVar9 = &local_48;
      local_48.XY.m128d_f64[0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_48.XY.m128d_f64[1] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_48.ZW.m128d_f64[0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_48.ZW.m128d_f64[1] = 0.0;
    }
    else {
      pFVar8 = UE::Net::FWorldLocations::GetObjectInfo(this_00,param_1);
      pVVar9 = &local_48;
      local_48.XY.m128d_f64[0] = (pFVar8->WorldLocation).field0_0x0._s_0.X;
      local_48.XY.m128d_f64[1] = (pFVar8->WorldLocation).field0_0x0._s_0.Y;
      local_48.ZW.m128d_f64[0] = (pFVar8->WorldLocation).field0_0x0._s_0.Z;
      local_48.ZW.m128d_f64[1] = 0.0;
    }
  }
  else {
    pFVar4 = param_3->FragmentData;
    if (param_3->FragmentCount <= uVar2) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pVVar9 = &local_28;
    puVar5 = pFVar4[uVar2].ExternalSrcBuffer;
    pdVar1 = (double *)(puVar5 + *(ushort *)param_2);
    local_28.XY.m128d_f64[0] = *pdVar1;
    local_28.XY.m128d_f64[1] = pdVar1[1];
    local_28.ZW.m128d_f64[0] = *(double *)(puVar5 + (ulonglong)*(ushort *)param_2 + 0x10);
    local_28.ZW.m128d_f64[1] = 0.0;
  }
  SetLocation(this,param_2,pVVar9);
  return;
}

// UpdateObjects @ 1442ea970

void __thiscall
ULocationBasedNetObjectPrioritizer::UpdateObjects
          (ULocationBasedNetObjectPrioritizer *this,FNetObjectPrioritizerUpdateParams *param_1)

{
  FObjectLocationInfo *pFVar1;
  double *pdVar2;
  undefined8 uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  FWorldLocations *this_00;
  FScriptContainerElement *pFVar7;
  FFragmentData *pFVar8;
  uchar *puVar9;
  code *pcVar10;
  bool bVar11;
  FObjectInfo *pFVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  VectorRegister4Double *pVVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  VectorRegister4Double local_68;
  VectorRegister4Double local_48;
  
  uVar5 = param_1->ObjectCount;
  uVar14 = 0;
  if ((ulonglong)uVar5 != 0) {
    do {
      uVar6 = param_1->ObjectIndices[uVar14];
      uVar4 = param_1->PrioritizationInfos[uVar6].Data[1];
      pFVar1 = (FObjectLocationInfo *)(param_1->PrioritizationInfos + uVar6);
      if (uVar4 == 0xffff) {
        this_00 = this->WorldLocations;
        pFVar7 = (this_00->ValidInfoIndexes).Storage.AllocatorInstance.Data;
        if (((this_00->ValidInfoIndexes).BitCount <= uVar6) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index < BitCount",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                ,0x2c1,L""), bVar11)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        if ((*(uint *)(pFVar7 + (ulonglong)(uVar6 >> 5) * 4) >> (uVar6 & 0x1f) & 1) == 0) {
          uVar16 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
          uVar17 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
          local_68.XY.m128d_f64[0]._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
          local_68.XY.m128d_f64[0]._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
          local_68.XY.m128d_f64[1]._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
          local_68.XY.m128d_f64[1]._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
        }
        else {
          pFVar12 = UE::Net::FWorldLocations::GetObjectInfo(this_00,uVar6);
          uVar3 = *(undefined8 *)((longlong)&(pFVar12->WorldLocation).field0_0x0 + 0x10);
          uVar16 = (undefined4)uVar3;
          uVar17 = (undefined4)((ulonglong)uVar3 >> 0x20);
          local_68.XY.m128d_f64[0]._0_4_ = *(undefined4 *)&(pFVar12->WorldLocation).field0_0x0;
          local_68.XY.m128d_f64[0]._4_4_ =
               *(undefined4 *)((longlong)&(pFVar12->WorldLocation).field0_0x0 + 4);
          local_68.XY.m128d_f64[1]._0_4_ =
               *(undefined4 *)((longlong)&(pFVar12->WorldLocation).field0_0x0 + 8);
          local_68.XY.m128d_f64[1]._4_4_ =
               *(undefined4 *)((longlong)&(pFVar12->WorldLocation).field0_0x0 + 0xc);
        }
        local_68.ZW.m128d_f64[0] = (double)CONCAT44(uVar17,uVar16);
        pVVar15 = &local_68;
        local_68.ZW.m128d_f64[1] = 0.0;
      }
      else {
        pFVar8 = param_1->InstanceProtocols[uVar14]->FragmentData;
        if ((param_1->InstanceProtocols[uVar14]->FragmentCount <= uVar4) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar11)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        uVar13 = (ulonglong)*(ushort *)pFVar1;
        pVVar15 = &local_48;
        puVar9 = pFVar8[uVar4].ExternalSrcBuffer;
        pdVar2 = (double *)(puVar9 + uVar13);
        local_48.XY.m128d_f64[0] = *pdVar2;
        local_48.XY.m128d_f64[1] = pdVar2[1];
        local_48.ZW.m128d_f64[0] = *(double *)(puVar9 + uVar13 + 0x10);
        local_48.ZW.m128d_f64[1] = 0.0;
      }
      SetLocation(this,pFVar1,pVVar15);
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar5);
  }
  return;
}

