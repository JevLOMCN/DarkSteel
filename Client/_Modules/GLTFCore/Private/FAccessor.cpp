// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFCore
// Functions: 45

// UpdateArrayWithSparse<UE::Math::TVector2<float>,2> @ 14e628c10

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
GLTF::FAccessor::UpdateArrayWithSparse<UE::Math::TVector2<float>,2>
          (FAccessor *this,TVector2<float> *param_1)

{
  EComponentType EVar1;
  ulong64 uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ForAnyElementType local_38;
  int local_30 [2];
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_28;
  
  if (((this->Sparse).bHasSparse != false) && (uVar5 = (this->Sparse).Count, uVar5 != 0)) {
    EVar1 = (this->Sparse).Indices.ComponentType;
    uVar2 = (this->Sparse).Indices.ByteOffset;
    uVar8 = 0;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_28,uVar5,No);
    GLTF::`anonymous_namespace'::FillUnsignedIntArray
              (&(this->Sparse).Indices.BufferView,uVar2,EVar1,uVar5,
               (uint *)local_28.AllocatorInstance.Data);
    uVar5 = (this->Sparse).Count;
    local_38.Data = (FScriptContainerElement *)0x0;
    local_30[0] = 0;
    local_30[1] = 0;
    if ((int)uVar5 < 1) {
      if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
      }
    }
    else {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar5,&local_38,local_30,local_30 + 1);
    }
    GLTF::`anonymous_namespace'::CopyWithoutConversion<UE::Math::TVector2<float>,2>
              (this->ByteStride,this->ComponentType,this->bNormalized,(this->Sparse).Count,
               &(this->Sparse).Values.BufferView,(this->Sparse).Values.ByteOffset,
               (TVector2<float> *)local_38.Data);
    if ((this->Sparse).Count != 0) {
      do {
        uVar7 = (uint)uVar8;
        uVar5 = 0;
        if ((int)uVar7 < local_28.ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar5 = *(uint *)(local_28.AllocatorInstance.Data + (longlong)(int)uVar7 * 4);
        uVar6 = 0;
        if ((int)uVar7 < local_30[0]) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (uVar5 < this->Count) {
          param_1[uVar5].field0_0x0 =
               *(TVector2<float>_u_0 *)(local_38.Data + (longlong)(int)uVar7 * 8);
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < (this->Sparse).Count);
    }
    if (local_38.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data);
    }
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  return;
}

// UpdateArrayWithSparse<UE::Math::TVector4<float>,4> @ 14e628e30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
GLTF::FAccessor::UpdateArrayWithSparse<UE::Math::TVector4<float>,4>
          (FAccessor *this,TVector4<float> *param_1)

{
  EComponentType EVar1;
  ulong64 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ForAnyElementType local_38;
  int local_30 [2];
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_28;
  
  if (((this->Sparse).bHasSparse != false) && (uVar6 = (this->Sparse).Count, uVar6 != 0)) {
    EVar1 = (this->Sparse).Indices.ComponentType;
    uVar2 = (this->Sparse).Indices.ByteOffset;
    uVar9 = 0;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_28,uVar6,No);
    GLTF::`anonymous_namespace'::FillUnsignedIntArray
              (&(this->Sparse).Indices.BufferView,uVar2,EVar1,uVar6,
               (uint *)local_28.AllocatorInstance.Data);
    uVar6 = (this->Sparse).Count;
    local_38.Data = (FScriptContainerElement *)0x0;
    local_30[0] = 0;
    local_30[1] = 0;
    if ((int)uVar6 < 1) {
      if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
      }
    }
    else {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,0x10,uVar6,&local_38,local_30,local_30 + 1);
    }
    GLTF::`anonymous_namespace'::CopyWithoutConversion<UE::Math::TVector4<float>,4>
              (this->ByteStride,this->ComponentType,this->bNormalized,(this->Sparse).Count,
               &(this->Sparse).Values.BufferView,(this->Sparse).Values.ByteOffset,
               (TVector4<float> *)local_38.Data);
    if ((this->Sparse).Count != 0) {
      do {
        uVar8 = (uint)uVar9;
        uVar6 = 0;
        if ((int)uVar8 < local_28.ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar6 = *(uint *)(local_28.AllocatorInstance.Data + (longlong)(int)uVar8 * 4);
        uVar7 = 0;
        if ((int)uVar8 < local_30[0]) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar4 = *(undefined8 *)(local_38.Data + (longlong)(int)uVar8 * 0x10 + 8);
        if (uVar6 < this->Count) {
          *(undefined8 *)&param_1[uVar6].field0_0x0 =
               *(undefined8 *)(local_38.Data + (longlong)(int)uVar8 * 0x10);
          *(undefined8 *)((longlong)&param_1[uVar6].field0_0x0 + 8) = uVar4;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (this->Sparse).Count);
    }
    if (local_38.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data);
    }
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  return;
}

// UpdateArrayWithSparse<UE::Math::TVector<float>,3> @ 14e629060

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
GLTF::FAccessor::UpdateArrayWithSparse<UE::Math::TVector<float>,3>
          (FAccessor *this,TVector<float> *param_1)

{
  EComponentType EVar1;
  float fVar2;
  ulong64 uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ForAnyElementType local_38;
  int local_30 [2];
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_28;
  
  if (((this->Sparse).bHasSparse != false) && (uVar6 = (this->Sparse).Count, uVar6 != 0)) {
    EVar1 = (this->Sparse).Indices.ComponentType;
    uVar3 = (this->Sparse).Indices.ByteOffset;
    uVar9 = 0;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_28,uVar6,No);
    GLTF::`anonymous_namespace'::FillUnsignedIntArray
              (&(this->Sparse).Indices.BufferView,uVar3,EVar1,uVar6,
               (uint *)local_28.AllocatorInstance.Data);
    uVar6 = (this->Sparse).Count;
    local_38.Data = (FScriptContainerElement *)0x0;
    local_30[0] = 0;
    local_30[1] = 0;
    if ((int)uVar6 < 1) {
      if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
      }
    }
    else {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,uVar6,&local_38,local_30,local_30 + 1);
    }
    GLTF::`anonymous_namespace'::CopyWithoutConversion<UE::Math::TVector<float>,3>
              (this->ByteStride,this->ComponentType,this->bNormalized,(this->Sparse).Count,
               &(this->Sparse).Values.BufferView,(this->Sparse).Values.ByteOffset,
               (TVector<float> *)local_38.Data);
    if ((this->Sparse).Count != 0) {
      do {
        uVar8 = (uint)uVar9;
        uVar6 = 0;
        if ((int)uVar8 < local_28.ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar6 = *(uint *)(local_28.AllocatorInstance.Data + (longlong)(int)uVar8 * 4);
        uVar7 = 0;
        if ((int)uVar8 < local_30[0]) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        fVar2 = *(float *)(local_38.Data + (longlong)(int)uVar8 * 0xc + 8);
        if (uVar6 < this->Count) {
          *(undefined8 *)&param_1[uVar6].field0_0x0 =
               *(undefined8 *)(local_38.Data + (longlong)(int)uVar8 * 0xc);
          param_1[uVar6].field0_0x0._s_0.Z = fVar2;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (this->Sparse).Count);
    }
    if (local_38.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data);
    }
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  return;
}

// FAccessor @ 14e629ab0

FAccessor * __thiscall
GLTF::FAccessor::FAccessor
          (FAccessor *this,uint param_1,FBufferView *param_2,ulong64 param_3,uint param_4,
          EType param_5,EComponentType param_6,bool param_7,FSparse *param_8)

{
  uchar *puVar1;
  ulong64 uVar2;
  undefined3 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  
  this->Count = param_4;
  this->bNormalized = param_7;
  this->AccessorIndex = param_1;
  this->Type = param_5;
  this->ComponentType = param_6;
  this->bQuantized = false;
  uVar3 = *(undefined3 *)&param_8->field_0x1;
  uVar6 = param_8->Count;
  iVar4 = (param_8->Indices).Count;
  uVar5 = *(undefined4 *)&(param_8->Indices).field_0x4;
  (this->Sparse).bHasSparse = param_8->bHasSparse;
  *(undefined3 *)&(this->Sparse).field_0x1 = uVar3;
  (this->Sparse).Count = uVar6;
  (this->Sparse).Indices.Count = iVar4;
  *(undefined4 *)&(this->Sparse).Indices.field_0x4 = uVar5;
  puVar1 = (param_8->Indices).BufferView.Buffer.Data;
  (this->Sparse).Indices.BufferView.Buffer.ByteLength =
       (param_8->Indices).BufferView.Buffer.ByteLength;
  (this->Sparse).Indices.BufferView.Buffer.Data = puVar1;
  uVar2 = (param_8->Indices).BufferView.ByteLength;
  (this->Sparse).Indices.BufferView.ByteOffset = (param_8->Indices).BufferView.ByteOffset;
  (this->Sparse).Indices.BufferView.ByteLength = uVar2;
  uVar5 = *(undefined4 *)&(param_8->Indices).BufferView.field_0x24;
  uVar2 = (param_8->Indices).ByteOffset;
  (this->Sparse).Indices.BufferView.ByteStride = (param_8->Indices).BufferView.ByteStride;
  *(undefined4 *)&(this->Sparse).Indices.BufferView.field_0x24 = uVar5;
  (this->Sparse).Indices.ByteOffset = uVar2;
  uVar5 = *(undefined4 *)&(param_8->Indices).field_0x3c;
  uVar2 = (param_8->Values).BufferView.Buffer.ByteLength;
  (this->Sparse).Indices.ComponentType = (param_8->Indices).ComponentType;
  *(undefined4 *)&(this->Sparse).Indices.field_0x3c = uVar5;
  (this->Sparse).Values.BufferView.Buffer.ByteLength = uVar2;
  uVar2 = (param_8->Values).BufferView.ByteOffset;
  (this->Sparse).Values.BufferView.Buffer.Data = (param_8->Values).BufferView.Buffer.Data;
  (this->Sparse).Values.BufferView.ByteOffset = uVar2;
  uVar6 = (param_8->Values).BufferView.ByteStride;
  uVar5 = *(undefined4 *)&(param_8->Values).BufferView.field_0x24;
  (this->Sparse).Values.BufferView.ByteLength = (param_8->Values).BufferView.ByteLength;
  (this->Sparse).Values.BufferView.ByteStride = uVar6;
  *(undefined4 *)&(this->Sparse).Values.BufferView.field_0x24 = uVar5;
  (this->Sparse).Values.ByteOffset = (param_8->Values).ByteOffset;
  puVar1 = (param_2->Buffer).Data;
  (this->BufferView).Buffer.ByteLength = (param_2->Buffer).ByteLength;
  (this->BufferView).Buffer.Data = puVar1;
  uVar2 = param_2->ByteLength;
  (this->BufferView).ByteOffset = param_2->ByteOffset;
  (this->BufferView).ByteLength = uVar2;
  uVar5 = *(undefined4 *)&param_2->field_0x24;
  (this->BufferView).ByteStride = param_2->ByteStride;
  *(undefined4 *)&(this->BufferView).field_0x24 = uVar5;
  this->ByteOffset = param_3;
  uVar7 = (uint)""[(int)param_6] * (uint)""[(int)param_5];
  this->NumberOfComponents = (uint)""[(int)param_5];
  this->ElementSize = uVar7;
  uVar6 = param_2->ByteStride;
  if (param_2->ByteStride == 0) {
    uVar6 = uVar7;
  }
  this->ByteStride = uVar6;
  return this;
}

// FAccessor @ 14e629ba0

FAccessor * __thiscall
GLTF::FAccessor::FAccessor
          (FAccessor *this,uint param_1,uint param_2,EType param_3,EComponentType param_4,
          bool param_5,FSparse *param_6)

{
  uchar *puVar1;
  ulong64 uVar2;
  undefined3 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  
  this->bNormalized = param_5;
  this->Count = param_2;
  this->AccessorIndex = param_1;
  this->bQuantized = false;
  this->Type = param_3;
  this->ComponentType = param_4;
  uVar3 = *(undefined3 *)&param_6->field_0x1;
  uVar6 = param_6->Count;
  iVar4 = (param_6->Indices).Count;
  uVar5 = *(undefined4 *)&(param_6->Indices).field_0x4;
  (this->Sparse).bHasSparse = param_6->bHasSparse;
  *(undefined3 *)&(this->Sparse).field_0x1 = uVar3;
  (this->Sparse).Count = uVar6;
  (this->Sparse).Indices.Count = iVar4;
  *(undefined4 *)&(this->Sparse).Indices.field_0x4 = uVar5;
  puVar1 = (param_6->Indices).BufferView.Buffer.Data;
  (this->Sparse).Indices.BufferView.Buffer.ByteLength =
       (param_6->Indices).BufferView.Buffer.ByteLength;
  (this->Sparse).Indices.BufferView.Buffer.Data = puVar1;
  uVar2 = (param_6->Indices).BufferView.ByteLength;
  (this->Sparse).Indices.BufferView.ByteOffset = (param_6->Indices).BufferView.ByteOffset;
  (this->Sparse).Indices.BufferView.ByteLength = uVar2;
  uVar5 = *(undefined4 *)&(param_6->Indices).BufferView.field_0x24;
  uVar2 = (param_6->Indices).ByteOffset;
  (this->Sparse).Indices.BufferView.ByteStride = (param_6->Indices).BufferView.ByteStride;
  *(undefined4 *)&(this->Sparse).Indices.BufferView.field_0x24 = uVar5;
  (this->Sparse).Indices.ByteOffset = uVar2;
  uVar5 = *(undefined4 *)&(param_6->Indices).field_0x3c;
  uVar2 = (param_6->Values).BufferView.Buffer.ByteLength;
  (this->Sparse).Indices.ComponentType = (param_6->Indices).ComponentType;
  *(undefined4 *)&(this->Sparse).Indices.field_0x3c = uVar5;
  (this->Sparse).Values.BufferView.Buffer.ByteLength = uVar2;
  uVar2 = (param_6->Values).BufferView.ByteOffset;
  (this->Sparse).Values.BufferView.Buffer.Data = (param_6->Values).BufferView.Buffer.Data;
  (this->Sparse).Values.BufferView.ByteOffset = uVar2;
  uVar6 = (param_6->Values).BufferView.ByteStride;
  uVar5 = *(undefined4 *)&(param_6->Values).BufferView.field_0x24;
  (this->Sparse).Values.BufferView.ByteLength = (param_6->Values).BufferView.ByteLength;
  (this->Sparse).Values.BufferView.ByteStride = uVar6;
  *(undefined4 *)&(this->Sparse).Values.BufferView.field_0x24 = uVar5;
  (this->Sparse).Values.ByteOffset = (param_6->Values).ByteOffset;
  (this->BufferView).Buffer.ByteLength = 0;
  (this->BufferView).Buffer.Data = (uchar *)0x0;
  (this->BufferView).ByteOffset = 0;
  (this->BufferView).ByteLength = 0;
  (this->BufferView).ByteStride = 0;
  this->ByteOffset = 0;
  uVar6 = (uint)""[(int)param_4] * (uint)""[(int)param_3];
  this->NumberOfComponents = (uint)""[(int)param_3];
  this->ElementSize = uVar6;
  this->ByteStride = uVar6;
  return this;
}

// FAccessor @ 14e629c80

FAccessor * __thiscall GLTF::FAccessor::FAccessor(FAccessor *this)

{
  this->AccessorIndex = 0xffffffff;
  this->Count = 0;
  this->Type = Unknown;
  this->ComponentType = None;
  this->bNormalized = false;
  this->bQuantized = false;
  (this->Sparse).bHasSparse = false;
  (this->Sparse).Count = 0;
  (this->Sparse).Indices.Count = 0;
  (this->Sparse).Indices.BufferView.Buffer.ByteLength = 0;
  (this->Sparse).Indices.BufferView.Buffer.Data = (uchar *)0x0;
  (this->Sparse).Indices.BufferView.ByteOffset = 0;
  (this->Sparse).Indices.BufferView.ByteLength = 0;
  (this->Sparse).Indices.BufferView.ByteStride = 0;
  (this->Sparse).Indices.ByteOffset = 0;
  (this->Sparse).Indices.ComponentType = None;
  (this->Sparse).Values.BufferView.Buffer.ByteLength = 0;
  (this->Sparse).Values.BufferView.Buffer.Data = (uchar *)0x0;
  (this->Sparse).Values.BufferView.ByteOffset = 0;
  (this->Sparse).Values.BufferView.ByteLength = 0;
  (this->Sparse).Values.BufferView.ByteStride = 0;
  (this->Sparse).Values.ByteOffset = 0;
  (this->BufferView).Buffer.ByteLength = 0;
  (this->BufferView).Buffer.Data = (uchar *)0x0;
  (this->BufferView).ByteOffset = 0;
  (this->BufferView).ByteLength = 0;
  (this->BufferView).ByteStride = 0;
  this->ByteOffset = 0;
  this->NumberOfComponents = 0;
  this->ElementSize = 0;
  this->ByteStride = 0;
  return this;
}

// CheckAccessorTypeForDataType @ 14e630b00

bool __thiscall
GLTF::FAccessor::CheckAccessorTypeForDataType
          (FAccessor *this,EMeshAttributeType param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  switch(param_1) {
  case POSITION:
  case NORMAL:
    return this->Type == Vec3;
  case TANGENT:
    if (param_2) {
      if (this->Type != Vec3) {
        return false;
      }
    }
    else if (this->Type != Vec4) {
      return false;
    }
    break;
  case TEXCOORD_0:
  case TEXCOORD_1:
  case TEXCOORD_2:
  case TEXCOORD_3:
  case TEXCOORD_4:
  case TEXCOORD_5:
  case TEXCOORD_6:
  case TEXCOORD_7:
    return this->Type == Vec2;
  case COLOR_0:
    if ((this->Type != Vec3) && (this->Type != Vec4)) {
      return false;
    }
    break;
  case JOINTS_0:
  case WEIGHTS_0:
    return this->Type == Vec4;
  default:
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2814153273458556318>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTF\\GLTFAccessor.cpp"
                       ,0x262,"false");
    if (!bVar2) {
      return false;
    }
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return true;
}

// CheckNonQuantizedComponentTypeForDataType @ 14e6311d0

bool __thiscall
GLTF::FAccessor::CheckNonQuantizedComponentTypeForDataType
          (FAccessor *this,EMeshAttributeType param_1,bool param_2)

{
  EComponentType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  if (!param_2) {
    switch(param_1) {
    case POSITION:
    case NORMAL:
    case TANGENT:
switchD_14e6311f8_caseD_0:
      if ((this->bNormalized != false) || (this->ComponentType != F32)) {
        return false;
      }
      break;
    case TEXCOORD_0:
    case TEXCOORD_1:
    case TEXCOORD_2:
    case TEXCOORD_3:
    case TEXCOORD_4:
    case TEXCOORD_5:
    case TEXCOORD_6:
    case TEXCOORD_7:
    case COLOR_0:
    case WEIGHTS_0:
      EVar1 = this->ComponentType;
      if (this->bNormalized == false) {
        bVar3 = EVar1 == F32;
      }
      else {
        if (EVar1 == U8) {
          return true;
        }
        bVar3 = EVar1 == U16;
      }
      if (!bVar3) {
        return false;
      }
      break;
    case JOINTS_0:
      if (this->bNormalized != false) {
        return false;
      }
      if (this->ComponentType != U8) {
        if (this->ComponentType != U16) {
          return false;
        }
        return true;
      }
      return true;
    default:
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2814153273458556283>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTF\\GLTFAccessor.cpp"
                         ,0x285,"false");
      if (!bVar3) {
        return false;
      }
code_r0x00014e6312ff:
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    return true;
  }
  switch(param_1) {
  case POSITION:
  case NORMAL:
  case TANGENT:
    goto switchD_14e6311f8_caseD_0;
  case TEXCOORD_0:
  case TEXCOORD_1:
  case TEXCOORD_2:
  case TEXCOORD_3:
  case TEXCOORD_4:
  case TEXCOORD_5:
  case TEXCOORD_6:
  case TEXCOORD_7:
  case COLOR_0:
    EVar1 = this->ComponentType;
    if (this->bNormalized == false) {
      if (EVar1 == F32) {
        return true;
      }
      return false;
    }
    if (EVar1 == S8) {
      return true;
    }
    if (EVar1 - U8 < 3) {
      return true;
    }
    return false;
  default:
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2814153273458556258>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTF\\GLTFAccessor.cpp"
                       ,0x29e,"false");
    if (!bVar3) {
      return false;
    }
    goto code_r0x00014e6312ff;
  }
}

// CheckQuantizedComponentTypeForDataType @ 14e631380

bool __thiscall
GLTF::FAccessor::CheckQuantizedComponentTypeForDataType
          (FAccessor *this,EMeshAttributeType param_1,bool param_2)

{
  EComponentType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  if (param_2) {
    switch(param_1) {
    case POSITION:
      if (this->ComponentType == S8) {
        return true;
      }
      if (this->ComponentType == S16) {
        return true;
      }
      return false;
    case NORMAL:
    case TANGENT:
      goto switchD_14e6313a8_caseD_1;
    case TEXCOORD_0:
    case TEXCOORD_1:
    case TEXCOORD_2:
    case TEXCOORD_3:
    case TEXCOORD_4:
    case TEXCOORD_5:
    case TEXCOORD_6:
    case TEXCOORD_7:
      if (this->bNormalized != false) {
        return false;
      }
      break;
    default:
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2814153273458556203>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTF\\GLTFAccessor.cpp"
                         ,0x2d5,"false");
      if (!bVar3) {
        return false;
      }
      goto code_r0x00014e6314a2;
    }
LAB_14e6313cb:
    if ((this->ComponentType != S8) && (this->ComponentType != S16)) {
      return false;
    }
  }
  else {
    switch(param_1) {
    case POSITION:
      if ((this->ComponentType != S8) && (2 < this->ComponentType - U8)) {
        return false;
      }
      break;
    case NORMAL:
    case TANGENT:
switchD_14e6313a8_caseD_1:
      if (this->bNormalized == false) {
        return false;
      }
      goto LAB_14e6313cb;
    case TEXCOORD_0:
    case TEXCOORD_1:
    case TEXCOORD_2:
    case TEXCOORD_3:
    case TEXCOORD_4:
    case TEXCOORD_5:
    case TEXCOORD_6:
    case TEXCOORD_7:
      EVar1 = this->ComponentType;
      if ((EVar1 != S8) && (EVar1 != S16)) {
        if (this->bNormalized != false) {
          return false;
        }
        if ((EVar1 - U8 & 0xfffffffd) != 0) {
          return false;
        }
      }
      break;
    default:
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2814153273458556227>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTF\\GLTFAccessor.cpp"
                         ,0x2bd,"false");
      if (!bVar3) {
        return false;
      }
code_r0x00014e6314a2:
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return true;
}

// DataAt @ 14e633b60

uchar * __thiscall GLTF::FAccessor::DataAt(FAccessor *this,uint param_1)

{
  return (this->BufferView).Buffer.Data +
         (ulonglong)(param_1 * this->ByteStride) + this->ByteOffset + (this->BufferView).ByteOffset;
}

// GetCoordArray @ 14e63af20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
GLTF::FAccessor::GetCoordArray
          (FAccessor *this,TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined4 uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if (((this->BufferView).Buffer.Data != (uchar *)0x0) || ((this->Sparse).bHasSparse != false)) {
    TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNumZeroed
              (param_1,this->Count,No);
  }
  pFVar2 = (param_1->AllocatorInstance).Data;
  GetVec3Array(this,(TVector<float> *)pFVar2);
  uVar4 = 0;
  if (this->Count != 0) {
    do {
      uVar3 = (int)uVar4 + 1;
      uVar1 = *(undefined4 *)(pFVar2 + uVar4 * 0xc + 4);
      *(undefined4 *)(pFVar2 + uVar4 * 0xc + 4) = *(undefined4 *)(pFVar2 + uVar4 * 0xc + 8);
      *(undefined4 *)(pFVar2 + uVar4 * 0xc + 8) = uVar1;
      uVar4 = (ulonglong)uVar3;
    } while (uVar3 < this->Count);
  }
  return;
}

// GetCoordArray @ 14e63afa0

void __thiscall GLTF::FAccessor::GetCoordArray(FAccessor *this,TVector<float> *param_1)

{
  float fVar1;
  uint uVar2;
  ulonglong uVar3;
  
  GetVec3Array(this,param_1);
  uVar3 = 0;
  if (this->Count != 0) {
    do {
      uVar2 = (int)uVar3 + 1;
      fVar1 = param_1[uVar3].field0_0x0._s_0.Y;
      param_1[uVar3].field0_0x0._s_0.Y = param_1[uVar3].field0_0x0._s_0.Z;
      param_1[uVar3].field0_0x0._s_0.Z = fVar1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < this->Count);
  }
  return;
}

// GetFloat @ 14e63b2b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

float __thiscall GLTF::FAccessor::GetFloat(FAccessor *this,uint param_1)

{
  uint uVar1;
  EComponentType EVar2;
  uchar *puVar3;
  ulong64 uVar4;
  code *pcVar5;
  bool bVar6;
  ForAnyElementType FVar7;
  float fVar8;
  float local_res10;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_38 [2];
  
  if (((param_1 < this->Count) && (this->Type == Scalar)) && (this->bNormalized == false)) {
    puVar3 = (this->BufferView).Buffer.Data;
    if (puVar3 != (uchar *)0x0) {
      if (this->ComponentType != F32) goto LAB_14e63b40a;
      local_res10 = (float)puVar3[(ulonglong)(param_1 * this->ByteStride) + this->ByteOffset +
                                  (this->BufferView).ByteOffset];
    }
    if ((this->Sparse).bHasSparse != false) {
      uVar1 = (this->Sparse).Count;
      uVar4 = (this->Sparse).Indices.ByteOffset;
      EVar2 = (this->Sparse).Indices.ComponentType;
      local_38[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38[0].ArrayNum = 0;
      local_38[0].ArrayMax = 0;
      TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(local_38,uVar1,No);
      GLTF::`anonymous_namespace'::FillUnsignedIntArray
                (&(this->Sparse).Indices.BufferView,uVar4,EVar2,uVar1,
                 (uint *)local_38[0].AllocatorInstance.Data);
      for (FVar7.Data = local_38[0].AllocatorInstance.Data;
          FVar7.Data != local_38[0].AllocatorInstance.Data + (longlong)local_38[0].ArrayNum * 4;
          FVar7.Data = FVar7.Data + 4) {
        if (*(uint *)FVar7.Data == param_1) {
          if (((int)((longlong)FVar7.Data - (longlong)local_38[0].AllocatorInstance.Data >> 2) != -1
              ) && (this->ComponentType == F32)) {
            local_res10 = (float)(this->Sparse).Values.BufferView.Buffer.Data
                                 [(ulonglong)(param_1 * this->ByteStride) +
                                  (this->Sparse).Values.ByteOffset +
                                  (this->Sparse).Values.BufferView.ByteOffset];
          }
          break;
        }
      }
      if (local_38[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38[0].AllocatorInstance.Data);
      }
    }
    return local_res10;
  }
LAB_14e63b40a:
  bVar6 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_2814153273458555821>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTF\\GLTFAccessor.cpp"
                     ,0x453,"false");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    fVar8 = (float)(*pcVar5)();
    return fVar8;
  }
  return 0.0;
}

// GetFloatArray @ 14e63b450

void __thiscall
GLTF::FAccessor::GetFloatArray(FAccessor *this,TArray<float,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  if (((this->BufferView).Buffer.Data != (uchar *)0x0) || ((this->Sparse).bHasSparse != false)) {
    uVar2 = this->Count;
    piVar1 = &param_1->ArrayNum;
    iVar7 = *piVar1;
    if (iVar7 < (int)uVar2) {
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,uVar2 - iVar7,&param_1->AllocatorInstance,piVar1,&param_1->ArrayMax);
      memset((param_1->AllocatorInstance).Data + (longlong)iVar6 * 4,0,
             (longlong)(int)(uVar2 - iVar7) << 2);
    }
    else {
      if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
      }
      if ((int)uVar2 < iVar7) {
        uVar8 = iVar7 - uVar2;
        if (((int)(uVar8 | uVar2) < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (uVar8 != 0) {
          pFVar3 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar2 * 4;
          iVar7 = (*piVar1 - uVar2) - uVar8;
          if (iVar7 != 0) {
            memmove(pFVar3,pFVar3 + (longlong)(int)uVar8 * 4,(longlong)iVar7 << 2);
          }
          *piVar1 = *piVar1 - uVar8;
        }
      }
    }
  }
  pFVar3 = (param_1->AllocatorInstance).Data;
  if ((this->Type == Scalar) &&
     (((this->BufferView).Buffer.Data == (uchar *)0x0 ||
      (bVar5 = GLTF::`anonymous_namespace'::FillFloatArray
                         (this->bNormalized,&this->BufferView,this->ByteOffset,this->ComponentType,
                          this->ByteStride,this->Count,(float *)pFVar3), bVar5)))) {
    UpdateFloatArrayWithSparse(this,(float *)pFVar3);
  }
  else {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2814153273458555696>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTF\\GLTFAccessor.cpp"
                       ,0x4d0,"false");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// GetFloatArray @ 14e63b620

void __thiscall GLTF::FAccessor::GetFloatArray(FAccessor *this,float *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Type == Scalar) {
    if ((this->BufferView).Buffer.Data != (uchar *)0x0) {
      bVar2 = GLTF::`anonymous_namespace'::FillFloatArray
                        (this->bNormalized,&this->BufferView,this->ByteOffset,this->ComponentType,
                         this->ByteStride,this->Count,param_1);
      if (!bVar2) goto LAB_14e63b687;
    }
    UpdateFloatArrayWithSparse(this,param_1);
    return;
  }
LAB_14e63b687:
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_2814153273458555696>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTF\\GLTFAccessor.cpp"
                     ,0x4d0,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// GetHash @ 14e63b760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FMD5Hash * __thiscall GLTF::FAccessor::GetHash(FAccessor *this,FMD5Hash *__return_storage_ptr__)

{
  uint uVar1;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined1 local_97;
  uchar local_96 [6];
  undefined1 local_90;
  undefined7 uStack_8f;
  undefined8 uStack_88;
  uchar local_80;
  FMD5 local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if (((this->BufferView).Buffer.Data == (uchar *)0x0) && ((this->Sparse).bHasSparse == false)) {
    __return_storage_ptr__->bIsValid = false;
  }
  else {
    FMD5::FMD5(&local_78);
    if (this->ByteStride == this->ElementSize) {
      FMD5::Update(&local_78,
                   (this->BufferView).Buffer.Data + (this->BufferView).ByteOffset + this->ByteOffset
                   ,(ulonglong)(this->Count * this->ElementSize));
    }
    else {
      uVar1 = 0;
      if (this->Count != 0) {
        do {
          FMD5::Update(&local_78,
                       (this->BufferView).Buffer.Data +
                       (ulonglong)(uVar1 * this->ByteStride) + (this->BufferView).ByteOffset +
                       this->ByteOffset,(ulonglong)this->ElementSize);
          uVar1 = uVar1 + 1;
        } while (uVar1 < this->Count);
      }
    }
    local_98 = (undefined1)this->Type;
    local_97 = (undefined1)this->ComponentType;
    local_96[0] = this->bNormalized;
    FMD5::Update(&local_78,&local_98,1);
    FMD5::Update(&local_78,&local_97,1);
    FMD5::Update(&local_78,local_96,1);
    local_90 = 0;
    FMD5::Final(&local_78,(uchar *)&uStack_8f);
    local_90 = 1;
    __return_storage_ptr__->bIsValid = true;
    __return_storage_ptr__->Bytes[0] = (char)uStack_8f;
    __return_storage_ptr__->Bytes[1] = (char)((uint7)uStack_8f >> 8);
    __return_storage_ptr__->Bytes[2] = (char)((uint7)uStack_8f >> 0x10);
    __return_storage_ptr__->Bytes[3] = (char)((uint7)uStack_8f >> 0x18);
    __return_storage_ptr__->Bytes[4] = (char)((uint7)uStack_8f >> 0x20);
    __return_storage_ptr__->Bytes[5] = (char)((uint7)uStack_8f >> 0x28);
    __return_storage_ptr__->Bytes[6] = (char)((uint7)uStack_8f >> 0x30);
    *(undefined8 *)(__return_storage_ptr__->Bytes + 7) = uStack_88;
    __return_storage_ptr__->Bytes[0xf] = local_80;
    FMD5::~FMD5(&local_78);
  }
  return __return_storage_ptr__;
}

// GetMat4 @ 14e63c9b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TMatrix<double> * __thiscall
GLTF::FAccessor::GetMat4(FAccessor *this,TMatrix<double> *__return_storage_ptr__,uint param_1)

{
  uint uVar1;
  EComponentType EVar2;
  ulong64 uVar3;
  code *pcVar4;
  bool bVar5;
  ForAnyElementType FVar6;
  TMatrix<double> *pTVar7;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_128;
  TMatrix<double> local_118;
  TMatrix<double> local_98;
  
  if (((param_1 < this->Count) && (this->Type == Mat4)) &&
     (((this->BufferView).Buffer.Data == (uchar *)0x0 ||
      (bVar5 = GLTF::`anonymous_namespace'::AcquireMat4
                         (param_1,&this->BufferView,this->ByteOffset,this->ByteStride,
                          this->ComponentType,&local_118), bVar5)))) {
    if ((this->Sparse).bHasSparse != false) {
      uVar1 = (this->Sparse).Count;
      uVar3 = (this->Sparse).Indices.ByteOffset;
      EVar2 = (this->Sparse).Indices.ComponentType;
      local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_128.ArrayNum = 0;
      local_128.ArrayMax = 0;
      TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_128,uVar1,No);
      GLTF::`anonymous_namespace'::FillUnsignedIntArray
                (&(this->Sparse).Indices.BufferView,uVar3,EVar2,uVar1,
                 (uint *)local_128.AllocatorInstance.Data);
      for (FVar6.Data = local_128.AllocatorInstance.Data;
          FVar6.Data != local_128.AllocatorInstance.Data + (longlong)local_128.ArrayNum * 4;
          FVar6.Data = FVar6.Data + 4) {
        if (*(uint *)FVar6.Data == param_1) {
          if (((int)((longlong)FVar6.Data - (longlong)local_128.AllocatorInstance.Data >> 2) != -1)
             && (bVar5 = GLTF::`anonymous_namespace'::AcquireMat4
                                   (param_1,&(this->Sparse).Values.BufferView,
                                    (this->Sparse).Values.ByteOffset,this->ByteStride,
                                    this->ComponentType,&local_98), bVar5)) {
            local_118.M[0][0] = local_98.M[0][0];
            local_118.M[0][1] = local_98.M[0][1];
            local_118.M[0][2] = local_98.M[0][2];
            local_118.M[0][3] = local_98.M[0][3];
            local_118.M[1][0] = local_98.M[1][0];
            local_118.M[1][1] = local_98.M[1][1];
            local_118.M[1][2] = local_98.M[1][2];
            local_118.M[1][3] = local_98.M[1][3];
            local_118.M[2][0] = local_98.M[2][0];
            local_118.M[2][1] = local_98.M[2][1];
            local_118.M[2][2] = local_98.M[2][2];
            local_118.M[2][3] = local_98.M[2][3];
            local_118.M[3][0] = local_98.M[3][0];
            local_118.M[3][1] = local_98.M[3][1];
            local_118.M[3][2] = local_98.M[3][2];
            local_118.M[3][3] = local_98.M[3][3];
          }
          break;
        }
      }
      if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.AllocatorInstance.Data);
      }
    }
    __return_storage_ptr__->M[0][0] = local_118.M[0][0];
    __return_storage_ptr__->M[0][1] = local_118.M[0][1];
    __return_storage_ptr__->M[0][2] = local_118.M[0][2];
    __return_storage_ptr__->M[0][3] = local_118.M[0][3];
    __return_storage_ptr__->M[1][0] = local_118.M[1][0];
    __return_storage_ptr__->M[1][1] = local_118.M[1][1];
    __return_storage_ptr__->M[1][2] = local_118.M[1][2];
    __return_storage_ptr__->M[1][3] = local_118.M[1][3];
    __return_storage_ptr__->M[2][0] = local_118.M[2][0];
    __return_storage_ptr__->M[2][1] = local_118.M[2][1];
    __return_storage_ptr__->M[2][2] = local_118.M[2][2];
    __return_storage_ptr__->M[2][3] = local_118.M[2][3];
    __return_storage_ptr__->M[3][0] = local_118.M[3][0];
    __return_storage_ptr__->M[3][1] = local_118.M[3][1];
    __return_storage_ptr__->M[3][2] = local_118.M[3][2];
    __return_storage_ptr__->M[3][3] = local_118.M[3][3];
  }
  else {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2814153273458555725>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTF\\GLTFAccessor.cpp"
                       ,0x4b3,"false");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TMatrix<double> *)(*pcVar4)();
      return pTVar7;
    }
    __return_storage_ptr__->M[0][0] = 0.0;
    __return_storage_ptr__->M[0][1] = 0.0;
    __return_storage_ptr__->M[0][2] = 0.0;
    __return_storage_ptr__->M[0][3] = 0.0;
    __return_storage_ptr__->M[1][0] = 0.0;
    __return_storage_ptr__->M[1][1] = 0.0;
    __return_storage_ptr__->M[1][2] = 0.0;
    __return_storage_ptr__->M[1][3] = 0.0;
    __return_storage_ptr__->M[2][0] = 0.0;
    __return_storage_ptr__->M[2][1] = 0.0;
    __return_storage_ptr__->M[2][2] = 0.0;
    __return_storage_ptr__->M[2][3] = 0.0;
    __return_storage_ptr__->M[3][0] = 0.0;
    __return_storage_ptr__->M[3][1] = 0.0;
    __return_storage_ptr__->M[3][2] = 0.0;
    __return_storage_ptr__->M[3][3] = 0.0;
  }
  return __return_storage_ptr__;
}

// GetMat4Array @ 14e63d0a0

void __thiscall
GLTF::FAccessor::GetMat4Array
          (FAccessor *this,TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *_Dst;
  uint uVar7;
  
  if (((this->BufferView).Buffer.Data != (uchar *)0x0) || ((this->Sparse).bHasSparse != false)) {
    uVar2 = this->Count;
    piVar1 = &param_1->ArrayNum;
    iVar6 = *piVar1;
    if (iVar6 < (int)uVar2) {
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40,0x10,uVar2 - iVar6,&param_1->AllocatorInstance,piVar1,
                         &param_1->ArrayMax);
      memset((param_1->AllocatorInstance).Data + (longlong)iVar5 * 0x40,0,
             (longlong)(int)(uVar2 - iVar6) << 6);
    }
    else {
      if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
      }
      if ((int)uVar2 < iVar6) {
        uVar7 = iVar6 - uVar2;
        if (((int)(uVar7 | uVar2) < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (uVar7 != 0) {
          _Dst = (param_1->AllocatorInstance).Data + (longlong)(int)uVar2 * 0x40;
          iVar6 = (*piVar1 - uVar2) - uVar7;
          if (iVar6 != 0) {
            memmove(_Dst,_Dst + (longlong)(int)uVar7 * 0x40,(longlong)iVar6 << 6);
          }
          *piVar1 = *piVar1 - uVar7;
        }
      }
    }
  }
  GetMat4Array(this,(TMatrix<float> *)(param_1->AllocatorInstance).Data);
  return;
}

// GetMat4Array @ 14e63d1f0

void __thiscall GLTF::FAccessor::GetMat4Array(FAccessor *this,TMatrix<float> *param_1)

{
  TMatrix<float> *pTVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  ulong64 uVar17;
  uchar *puVar18;
  code *pcVar19;
  float (*pafVar20) [4];
  bool bVar21;
  longlong lVar22;
  uint uVar23;
  uint uVar24;
  
  if ((this->Type == Mat4) && (this->ComponentType == F32)) {
    uVar23 = 0;
    if (this->Count != 0) {
      do {
        uVar17 = this->ByteOffset;
        lVar22 = (ulonglong)(uVar23 * this->ByteStride) + (this->BufferView).ByteOffset;
        puVar18 = (this->BufferView).Buffer.Data;
        fVar2 = *(float *)(puVar18 + uVar17 + lVar22 + 0x10);
        fVar3 = *(float *)(puVar18 + uVar17 + lVar22 + 0x20);
        fVar4 = *(float *)(puVar18 + uVar17 + lVar22 + 0x30);
        fVar5 = *(float *)(puVar18 + uVar17 + lVar22 + 0x3c);
        fVar6 = *(float *)(puVar18 + uVar17 + lVar22 + 0x24);
        fVar7 = *(float *)(puVar18 + uVar17 + lVar22 + 0x34);
        fVar8 = *(float *)(puVar18 + uVar17 + lVar22 + 4);
        fVar9 = *(float *)(puVar18 + uVar17 + lVar22 + 0x14);
        fVar10 = *(float *)(puVar18 + uVar17 + lVar22 + 8);
        fVar11 = *(float *)(puVar18 + uVar17 + lVar22 + 0x18);
        fVar12 = *(float *)(puVar18 + uVar17 + lVar22 + 0x28);
        fVar13 = *(float *)(puVar18 + uVar17 + lVar22 + 0x38);
        fVar14 = *(float *)(puVar18 + uVar17 + lVar22 + 0xc);
        fVar15 = *(float *)(puVar18 + uVar17 + lVar22 + 0x1c);
        fVar16 = *(float *)(puVar18 + uVar17 + lVar22 + 0x2c);
        uVar24 = uVar23 + 1;
        pTVar1 = param_1 + uVar23;
        pTVar1->M[0][0] = *(float *)(puVar18 + uVar17 + lVar22);
        pTVar1->M[0][1] = fVar2;
        pTVar1->M[0][2] = fVar3;
        pTVar1->M[0][3] = fVar4;
        pafVar20 = param_1[uVar23].M;
        pafVar20[1][0] = fVar8;
        pafVar20[1][1] = fVar9;
        pafVar20[1][2] = fVar6;
        pafVar20[1][3] = fVar7;
        pafVar20 = param_1[uVar23].M;
        pafVar20[2][0] = fVar10;
        pafVar20[2][1] = fVar11;
        pafVar20[2][2] = fVar12;
        pafVar20[2][3] = fVar13;
        pafVar20 = param_1[uVar23].M;
        pafVar20[3][0] = fVar14;
        pafVar20[3][1] = fVar15;
        pafVar20[3][2] = fVar16;
        pafVar20[3][3] = fVar5;
        uVar23 = uVar24;
      } while (uVar24 < this->Count);
      return;
    }
  }
  else {
    bVar21 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_2814153273458555651>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTF\\GLTFAccessor.cpp"
                        ,0x4fd,"false");
    if (bVar21) {
      pcVar19 = (code *)swi(3);
      (*pcVar19)();
      return;
    }
  }
  return;
}

// GetQuatArray @ 14e63da40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
GLTF::FAccessor::GetQuatArray
          (FAccessor *this,TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  FScriptContainerElement *pFVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  
  if (((this->BufferView).Buffer.Data != (uchar *)0x0) || ((this->Sparse).bHasSparse != false)) {
    TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>::SetNumZeroed
              (param_1,this->Count,No);
  }
  pFVar4 = (param_1->AllocatorInstance).Data;
  GetVec4Array(this,(TVector4<float> *)pFVar4);
  uVar5 = __xmm_80000000800000008000000080000000;
  uVar7 = 0;
  if (this->Count != 0) {
    do {
      uVar6 = (ulonglong)uVar7;
      uVar7 = uVar7 + 1;
      uVar1 = *(uint *)(pFVar4 + uVar6 * 0x10 + 8);
      uVar2 = *(uint *)(pFVar4 + uVar6 * 0x10 + 4);
      uVar3 = *(undefined4 *)(pFVar4 + uVar6 * 0x10 + 0xc);
      *(uint *)&pFVar4[uVar6 * 0x10].field_0x0 = *(uint *)&pFVar4[uVar6 * 0x10].field_0x0 ^ uVar5;
      *(uint *)(pFVar4 + uVar6 * 0x10 + 4) = uVar1 ^ uVar5;
      *(uint *)(pFVar4 + uVar6 * 0x10 + 8) = uVar2 ^ uVar5;
      *(undefined4 *)(pFVar4 + uVar6 * 0x10 + 0xc) = uVar3;
    } while (uVar7 < this->Count);
  }
  return;
}

// GetQuatArray @ 14e63daf0

void __thiscall GLTF::FAccessor::GetQuatArray(FAccessor *this,TVector4<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  GetVec4Array(this,param_1);
  uVar4 = __xmm_80000000800000008000000080000000;
  uVar5 = 0;
  if (this->Count != 0) {
    do {
      uVar6 = uVar5 + 1;
      fVar1 = param_1[uVar5].field0_0x0._s_0.Z;
      fVar2 = param_1[uVar5].field0_0x0._s_0.Y;
      fVar3 = param_1[uVar5].field0_0x0._s_0.W;
      param_1[uVar5].field0_0x0._s_0.X = (float)((uint)param_1[uVar5].field0_0x0._s_0.X ^ uVar4);
      param_1[uVar5].field0_0x0._s_0.Y = (float)((uint)fVar1 ^ uVar4);
      param_1[uVar5].field0_0x0._s_0.Z = (float)((uint)fVar2 ^ uVar4);
      param_1[uVar5].field0_0x0._s_0.W = fVar3;
      uVar5 = uVar6;
    } while (uVar6 < this->Count);
  }
  return;
}

// GetUnsignedInt16x4 @ 14e63ebf0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall GLTF::FAccessor::GetUnsignedInt16x4(FAccessor *this,uint param_1,ushort *param_2)

{
  uint uVar1;
  EComponentType EVar2;
  ulong64 uVar3;
  uchar *puVar4;
  code *pcVar5;
  bool bVar6;
  ForAnyElementType FVar7;
  longlong lVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_38;
  
  if ((((param_1 < this->Count) && (this->Type == Vec4)) && (this->bNormalized == false)) &&
     (((this->BufferView).Buffer.Data == (uchar *)0x0 ||
      (bVar6 = GLTF::`anonymous_namespace'::AcquireUnsignedInt16x4
                         (param_1,&this->BufferView,this->ByteOffset,this->ByteStride,
                          this->ComponentType,param_2), bVar6)))) {
    if ((this->Sparse).bHasSparse != false) {
      uVar1 = (this->Sparse).Count;
      uVar3 = (this->Sparse).Indices.ByteOffset;
      EVar2 = (this->Sparse).Indices.ComponentType;
      local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.ArrayNum = 0;
      local_38.ArrayMax = 0;
      TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_38,uVar1,No);
      GLTF::`anonymous_namespace'::FillUnsignedIntArray
                (&(this->Sparse).Indices.BufferView,uVar3,EVar2,uVar1,
                 (uint *)local_38.AllocatorInstance.Data);
      for (FVar7.Data = local_38.AllocatorInstance.Data;
          FVar7.Data != local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 4;
          FVar7.Data = FVar7.Data + 4) {
        if (*(uint *)FVar7.Data == param_1) {
          if ((int)((longlong)FVar7.Data - (longlong)local_38.AllocatorInstance.Data >> 2) == -1)
          break;
          puVar4 = (this->Sparse).Values.BufferView.Buffer.Data;
          lVar8 = (ulonglong)(param_1 * this->ByteStride) + (this->Sparse).Values.ByteOffset +
                  (this->Sparse).Values.BufferView.ByteOffset;
          if (this->ComponentType == U8) {
            uVar9 = (ushort)puVar4[lVar8];
            uVar10 = (ushort)puVar4[lVar8 + 1];
            uVar11 = (ushort)puVar4[lVar8 + 2];
            uVar12 = (ushort)puVar4[lVar8 + 3];
          }
          else {
            if (this->ComponentType != U16) break;
            uVar9 = *(ushort *)(puVar4 + lVar8);
            uVar10 = *(ushort *)(puVar4 + lVar8 + 2);
            uVar11 = *(ushort *)(puVar4 + lVar8 + 4);
            uVar12 = *(ushort *)(puVar4 + lVar8 + 6);
          }
          *param_2 = uVar9;
          param_2[1] = uVar10;
          param_2[2] = uVar11;
          param_2[3] = uVar12;
          break;
        }
      }
      if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
        return;
      }
    }
  }
  else {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2814153273458555841>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTF\\GLTFAccessor.cpp"
                       ,0x43f,"false");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  return;
}

// GetUnsignedInt @ 14e63ee90

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uint __thiscall GLTF::FAccessor::GetUnsignedInt(FAccessor *this,uint param_1)

{
  EComponentType EVar1;
  uchar *puVar2;
  ulong64 uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  ForAnyElementType FVar7;
  uint *puVar8;
  uint local_res10;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_28;
  
  if (((param_1 < this->Count) && (this->Type == Scalar)) && (this->bNormalized == false)) {
    puVar2 = (this->BufferView).Buffer.Data;
    if (puVar2 != (uchar *)0x0) {
      puVar8 = (uint *)(puVar2 + (ulonglong)(param_1 * this->ByteStride) + this->ByteOffset +
                                 (this->BufferView).ByteOffset);
      EVar1 = this->ComponentType;
      if (EVar1 == U8) {
        local_res10 = (uint)(byte)*puVar8;
      }
      else if (EVar1 == U16) {
        local_res10 = (uint)(ushort)*puVar8;
      }
      else {
        if (EVar1 != U32) goto LAB_14e63f001;
        local_res10 = *puVar8;
      }
    }
    if ((this->Sparse).bHasSparse != false) {
      uVar6 = (this->Sparse).Count;
      uVar3 = (this->Sparse).Indices.ByteOffset;
      EVar1 = (this->Sparse).Indices.ComponentType;
      local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.ArrayNum = 0;
      local_28.ArrayMax = 0;
      TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_28,uVar6,No);
      GLTF::`anonymous_namespace'::FillUnsignedIntArray
                (&(this->Sparse).Indices.BufferView,uVar3,EVar1,uVar6,
                 (uint *)local_28.AllocatorInstance.Data);
      for (FVar7.Data = local_28.AllocatorInstance.Data;
          FVar7.Data != local_28.AllocatorInstance.Data + (longlong)local_28.ArrayNum * 4;
          FVar7.Data = FVar7.Data + 4) {
        if (*(uint *)FVar7.Data == param_1) {
          if ((int)((longlong)FVar7.Data - (longlong)local_28.AllocatorInstance.Data >> 2) != -1) {
            EVar1 = this->ComponentType;
            puVar8 = (uint *)((this->Sparse).Values.BufferView.Buffer.Data +
                             (ulonglong)(param_1 * this->ByteStride) +
                             (this->Sparse).Values.ByteOffset +
                             (this->Sparse).Values.BufferView.ByteOffset);
            if (EVar1 == U8) {
              local_res10 = (uint)(byte)*puVar8;
            }
            else if (EVar1 == U16) {
              local_res10 = (uint)(ushort)*puVar8;
            }
            else if (EVar1 == U32) {
              local_res10 = *puVar8;
            }
          }
          break;
        }
      }
      if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
    }
    return local_res10;
  }
LAB_14e63f001:
  bVar5 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_2814153273458555860>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTF\\GLTFAccessor.cpp"
                     ,0x42c,"false");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return uVar6;
  }
  return 0;
}

// GetUnsignedIntArray @ 14e63f110

void __thiscall
GLTF::FAccessor::GetUnsignedIntArray
          (FAccessor *this,TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  if (((this->BufferView).Buffer.Data != (uchar *)0x0) || ((this->Sparse).bHasSparse != false)) {
    uVar2 = this->Count;
    piVar1 = &param_1->ArrayNum;
    iVar7 = *piVar1;
    if (iVar7 < (int)uVar2) {
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,uVar2 - iVar7,&param_1->AllocatorInstance,piVar1,&param_1->ArrayMax);
      memset((param_1->AllocatorInstance).Data + (longlong)iVar6 * 4,0,
             (longlong)(int)(uVar2 - iVar7) << 2);
    }
    else {
      if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
      }
      if ((int)uVar2 < iVar7) {
        uVar8 = iVar7 - uVar2;
        if (((int)(uVar8 | uVar2) < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (uVar8 != 0) {
          pFVar3 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar2 * 4;
          iVar7 = (*piVar1 - uVar2) - uVar8;
          if (iVar7 != 0) {
            memmove(pFVar3,pFVar3 + (longlong)(int)uVar8 * 4,(longlong)iVar7 << 2);
          }
          *piVar1 = *piVar1 - uVar8;
        }
      }
    }
  }
  pFVar3 = (param_1->AllocatorInstance).Data;
  if (((this->Type == Scalar) && (this->bNormalized == false)) &&
     (((this->BufferView).Buffer.Data == (uchar *)0x0 ||
      (bVar5 = GLTF::`anonymous_namespace'::FillUnsignedIntArray
                         (&this->BufferView,this->ByteOffset,this->ComponentType,this->Count,
                          (uint *)pFVar3), bVar5)))) {
    UpdateUnsignedIntArrayWithSparse(this,(uint *)pFVar3);
  }
  else {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2814153273458555710>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTF\\GLTFAccessor.cpp"
                       ,0x4c2,"false");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// GetUnsignedIntArray @ 14e63f2e0

void __thiscall GLTF::FAccessor::GetUnsignedIntArray(FAccessor *this,uint *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->Type == Scalar) && (this->bNormalized == false)) {
    if ((this->BufferView).Buffer.Data != (uchar *)0x0) {
      bVar2 = GLTF::`anonymous_namespace'::FillUnsignedIntArray
                        (&this->BufferView,this->ByteOffset,this->ComponentType,this->Count,param_1)
      ;
      if (!bVar2) goto LAB_14e63f33c;
    }
    UpdateUnsignedIntArrayWithSparse(this,param_1);
    return;
  }
LAB_14e63f33c:
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_2814153273458555710>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTF\\GLTFAccessor.cpp"
                     ,0x4c2,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// GetVec2 @ 14e63f380

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TVector2<double> * __thiscall
GLTF::FAccessor::GetVec2(FAccessor *this,TVector2<double> *__return_storage_ptr__,uint param_1)

{
  uint uVar1;
  EComponentType EVar2;
  uchar *puVar3;
  ulong64 uVar4;
  code *pcVar5;
  bool bVar6;
  TVector2<float> TVar7;
  TVector2<double> *pTVar8;
  ForAnyElementType FVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_58;
  undefined1 local_48 [32];
  
  if ((param_1 < this->Count) && (this->Type == Vec2)) {
    puVar3 = (this->BufferView).Buffer.Data;
    if (puVar3 != (uchar *)0x0) {
      local_48._0_16_ = ZEXT816(0);
      pfVar10 = (float *)(puVar3 + (ulonglong)(param_1 * this->ByteStride) + this->ByteOffset +
                                   (this->BufferView).ByteOffset);
      if (this->ComponentType == F32) {
        fVar11 = *pfVar10;
        fVar12 = pfVar10[1];
      }
      else {
        if (this->bNormalized == false) goto LAB_14e63f53f;
        TVar7 = GLTF::`anonymous_namespace'::GetNormalized<UE::Math::TVector2<float>,2>
                          ((EComponentType)local_res8,(void *)(ulonglong)this->ComponentType);
        fVar11 = *(float *)TVar7.field0_0x0;
        fVar12 = *(float *)((longlong)TVar7.field0_0x0 + 4);
      }
      local_48._8_8_ = (double)fVar12;
      local_48._0_8_ = (double)fVar11;
    }
    if ((this->Sparse).bHasSparse != false) {
      uVar1 = (this->Sparse).Count;
      uVar4 = (this->Sparse).Indices.ByteOffset;
      EVar2 = (this->Sparse).Indices.ComponentType;
      local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.ArrayNum = 0;
      local_58.ArrayMax = 0;
      TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_58,uVar1,No);
      GLTF::`anonymous_namespace'::FillUnsignedIntArray
                (&(this->Sparse).Indices.BufferView,uVar4,EVar2,uVar1,
                 (uint *)local_58.AllocatorInstance.Data);
      for (FVar9.Data = local_58.AllocatorInstance.Data;
          FVar9.Data != local_58.AllocatorInstance.Data + (longlong)local_58.ArrayNum * 4;
          FVar9.Data = FVar9.Data + 4) {
        if (*(uint *)FVar9.Data == param_1) {
          if ((int)((longlong)FVar9.Data - (longlong)local_58.AllocatorInstance.Data >> 2) == -1)
          break;
          pfVar10 = (float *)((this->Sparse).Values.BufferView.Buffer.Data +
                             (ulonglong)(param_1 * this->ByteStride) +
                             (this->Sparse).Values.ByteOffset +
                             (this->Sparse).Values.BufferView.ByteOffset);
          if (this->ComponentType == F32) {
            fVar11 = *pfVar10;
            fVar12 = pfVar10[1];
          }
          else {
            if (this->bNormalized == false) break;
            TVar7 = GLTF::`anonymous_namespace'::GetNormalized<UE::Math::TVector2<float>,2>
                              ((EComponentType)local_res20,(void *)(ulonglong)this->ComponentType);
            fVar11 = *(float *)TVar7.field0_0x0;
            fVar12 = *(float *)((longlong)TVar7.field0_0x0 + 4);
          }
          local_48._8_4_ = SUB84((double)fVar12,0);
          local_48._0_8_ = (double)fVar11;
          local_48._12_4_ = (int)((ulonglong)(double)fVar12 >> 0x20);
          break;
        }
      }
      if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.AllocatorInstance.Data);
      }
    }
    (__return_storage_ptr__->field0_0x0)._s_0.X = (double)local_48._0_8_;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)local_48._8_8_;
    return __return_storage_ptr__;
  }
LAB_14e63f53f:
  bVar6 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_2814153273458555796>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTF\\GLTFAccessor.cpp"
                     ,0x46c,"false");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TVector2<double> *)(*pcVar5)();
    return pTVar8;
  }
  (__return_storage_ptr__->field0_0x0)._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
  return __return_storage_ptr__;
}

// GetVec2Array @ 14e63f590

void __thiscall
GLTF::FAccessor::GetVec2Array
          (FAccessor *this,TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  if (((this->BufferView).Buffer.Data != (uchar *)0x0) || ((this->Sparse).bHasSparse != false)) {
    uVar1 = this->Count;
    iVar5 = param_1->ArrayNum;
    if (iVar5 < (int)uVar1) {
      TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::AddZeroed
                (param_1,uVar1 - iVar5);
    }
    else {
      if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
      }
      if ((int)uVar1 < iVar5) {
        uVar6 = iVar5 - uVar1;
        if (((int)(uVar6 | uVar1) < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (uVar6 != 0) {
          pFVar2 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar1 * 8;
          iVar5 = (param_1->ArrayNum - uVar1) - uVar6;
          if (iVar5 != 0) {
            memmove(pFVar2,pFVar2 + (longlong)(int)uVar6 * 8,(longlong)iVar5 << 3);
          }
          param_1->ArrayNum = param_1->ArrayNum - uVar6;
        }
      }
    }
  }
  pFVar2 = (param_1->AllocatorInstance).Data;
  if (this->Type == Vec2) {
    if ((this->BufferView).Buffer.Data != (uchar *)0x0) {
      GLTF::`anonymous_namespace'::CopyWithoutConversion<UE::Math::TVector2<float>,2>
                (this->ByteStride,this->ComponentType,this->bNormalized,this->Count,
                 &this->BufferView,this->ByteOffset,(TVector2<float> *)pFVar2);
    }
    UpdateArrayWithSparse<UE::Math::TVector2<float>,2>(this,(TVector2<float> *)pFVar2);
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2814153273458555691>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTF\\GLTFAccessor.cpp"
                       ,0x4d5,"Type == EType::Vec2");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// GetVec2Array @ 14e63f730

void __thiscall GLTF::FAccessor::GetVec2Array(FAccessor *this,TVector2<float> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Type == Vec2) {
    if ((this->BufferView).Buffer.Data != (uchar *)0x0) {
      GLTF::`anonymous_namespace'::CopyWithoutConversion<UE::Math::TVector2<float>,2>
                (this->ByteStride,this->ComponentType,this->bNormalized,this->Count,
                 &this->BufferView,this->ByteOffset,param_1);
    }
    UpdateArrayWithSparse<UE::Math::TVector2<float>,2>(this,param_1);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2814153273458555691>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTF\\GLTFAccessor.cpp"
                       ,0x4d5,"Type == EType::Vec2");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// GetVec3 @ 14e63f7e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TVector<double> * __thiscall
GLTF::FAccessor::GetVec3(FAccessor *this,TVector<double> *__return_storage_ptr__,uint param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  EComponentType EVar4;
  uchar *puVar5;
  ulong64 uVar6;
  code *pcVar7;
  undefined8 uVar8;
  bool bVar9;
  TVector<float> *pTVar10;
  TVector<double> *pTVar11;
  ForAnyElementType FVar12;
  float *pfVar13;
  float fVar14;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_88;
  undefined1 local_78 [16];
  double local_68;
  TVector<float> local_60;
  double local_50;
  TVector<float> local_48 [4];
  
  if ((param_1 < this->Count) && (this->Type == Vec3)) {
    puVar5 = (this->BufferView).Buffer.Data;
    if (puVar5 != (uchar *)0x0) {
      local_78 = ZEXT816(0);
      local_68 = 0.0;
      pfVar13 = (float *)(puVar5 + (ulonglong)(param_1 * this->ByteStride) + this->ByteOffset +
                                   (this->BufferView).ByteOffset);
      if (this->ComponentType == F32) {
        fVar1 = *pfVar13;
        fVar2 = pfVar13[1];
        fVar14 = pfVar13[2];
      }
      else {
        if (this->bNormalized == false) goto LAB_14e63f9f7;
        pTVar10 = GLTF::`anonymous_namespace'::GetNormalized<UE::Math::TVector<float>,3>
                            (local_48,this->ComponentType,pfVar13);
        fVar1 = (pTVar10->field0_0x0)._s_0.X;
        fVar2 = (pTVar10->field0_0x0)._s_0.Y;
        fVar14 = (pTVar10->field0_0x0)._s_0.Z;
      }
      local_78._0_8_ = (undefined8)fVar1;
      local_68 = (double)fVar14;
      local_78._8_8_ = (double)fVar2;
    }
    if ((this->Sparse).bHasSparse != false) {
      uVar3 = (this->Sparse).Count;
      uVar6 = (this->Sparse).Indices.ByteOffset;
      EVar4 = (this->Sparse).Indices.ComponentType;
      local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_88.ArrayNum = 0;
      local_88.ArrayMax = 0;
      TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_88,uVar3,No);
      GLTF::`anonymous_namespace'::FillUnsignedIntArray
                (&(this->Sparse).Indices.BufferView,uVar6,EVar4,uVar3,
                 (uint *)local_88.AllocatorInstance.Data);
      for (FVar12.Data = local_88.AllocatorInstance.Data;
          FVar12.Data != local_88.AllocatorInstance.Data + (longlong)local_88.ArrayNum * 4;
          FVar12.Data = FVar12.Data + 4) {
        if (*(uint *)FVar12.Data == param_1) {
          if ((int)((longlong)FVar12.Data - (longlong)local_88.AllocatorInstance.Data >> 2) == -1)
          break;
          pfVar13 = (float *)((this->Sparse).Values.BufferView.Buffer.Data +
                             (ulonglong)(param_1 * this->ByteStride) +
                             (this->Sparse).Values.ByteOffset +
                             (this->Sparse).Values.BufferView.ByteOffset);
          if (this->ComponentType == F32) {
            fVar1 = *pfVar13;
            fVar2 = pfVar13[1];
            fVar14 = pfVar13[2];
          }
          else {
            if (this->bNormalized == false) break;
            pTVar10 = GLTF::`anonymous_namespace'::GetNormalized<UE::Math::TVector<float>,3>
                                (&local_60,this->ComponentType,pfVar13);
            fVar1 = (pTVar10->field0_0x0)._s_0.X;
            fVar2 = (pTVar10->field0_0x0)._s_0.Y;
            fVar14 = (pTVar10->field0_0x0)._s_0.Z;
          }
          local_68 = (double)fVar14;
          local_78._8_4_ = SUB84((double)fVar2,0);
          local_78._0_8_ = (double)fVar1;
          local_78._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
          local_50 = local_68;
          break;
        }
      }
      if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.AllocatorInstance.Data);
      }
    }
    (__return_storage_ptr__->field0_0x0)._s_0.X = (double)local_78._0_8_;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)local_78._8_8_;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = local_68;
  }
  else {
LAB_14e63f9f7:
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2814153273458555771>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTF\\GLTFAccessor.cpp"
                       ,0x485,"false");
    uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      pTVar11 = (TVector<double> *)(*pcVar7)();
      return pTVar11;
    }
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar8;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  return __return_storage_ptr__;
}

// GetVec3Array @ 14e63fcd0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
GLTF::FAccessor::GetVec3Array
          (FAccessor *this,TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_1)

{
  if (((this->BufferView).Buffer.Data != (uchar *)0x0) || ((this->Sparse).bHasSparse != false)) {
    TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNumZeroed
              (param_1,this->Count,No);
  }
  GetVec3Array(this,(TVector<float> *)(param_1->AllocatorInstance).Data);
  return;
}

// GetVec3Array @ 14e63fd20

void __thiscall GLTF::FAccessor::GetVec3Array(FAccessor *this,TVector<float> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Type == Vec3) {
    if ((this->BufferView).Buffer.Data != (uchar *)0x0) {
      GLTF::`anonymous_namespace'::CopyWithoutConversion<UE::Math::TVector<float>,3>
                (this->ByteStride,this->ComponentType,this->bNormalized,this->Count,
                 &this->BufferView,this->ByteOffset,param_1);
    }
    UpdateArrayWithSparse<UE::Math::TVector<float>,3>(this,param_1);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2814153273458555681>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTF\\GLTFAccessor.cpp"
                       ,0x4df,"Type == EType::Vec3");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// GetVec4 @ 14e63fdd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TVector4<double> * __thiscall
GLTF::FAccessor::GetVec4(FAccessor *this,TVector4<double> *__return_storage_ptr__,uint param_1)

{
  float fVar1;
  undefined8 uVar2;
  uint uVar3;
  EComponentType EVar4;
  uchar *puVar5;
  ulong64 uVar6;
  code *pcVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  bool bVar11;
  TVector4<float> *pTVar12;
  TVector4<double> *pTVar13;
  ForAnyElementType FVar14;
  float *pfVar15;
  double dVar16;
  float fVar17;
  double dVar19;
  double dVar20;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_68;
  TVector4<float> local_58;
  TVector4<float> local_48 [3];
  double dVar18;
  
  if ((param_1 < this->Count) && (this->Type == Vec4)) {
    puVar5 = (this->BufferView).Buffer.Data;
    dVar16 = 0.0;
    dVar18 = 0.0;
    dVar19 = ___xmm_3ff00000000000000000000000000000;
    dVar20 = _UNK_15061cbc8;
    if (puVar5 != (uchar *)0x0) {
      pfVar15 = (float *)(puVar5 + (ulonglong)(param_1 * this->ByteStride) + this->ByteOffset +
                                   (this->BufferView).ByteOffset);
      if (this->ComponentType == F32) {
        fVar1 = *pfVar15;
        fVar17 = pfVar15[1];
        fVar8 = (float)*(undefined8 *)(pfVar15 + 2);
        fVar9 = (float)((ulonglong)*(undefined8 *)(pfVar15 + 2) >> 0x20);
      }
      else {
        if (this->bNormalized == false) goto LAB_14e63ffa7;
        pTVar12 = GLTF::`anonymous_namespace'::GetNormalized<UE::Math::TVector4<float>,4>
                            (&local_58,this->ComponentType,pfVar15);
        fVar1 = (pTVar12->field0_0x0)._s_0.X;
        fVar17 = (pTVar12->field0_0x0)._s_0.Y;
        uVar2 = *(undefined8 *)((longlong)&pTVar12->field0_0x0 + 8);
        fVar8 = (float)uVar2;
        fVar9 = (float)((ulonglong)uVar2 >> 0x20);
      }
      dVar20 = (double)fVar9;
      dVar19 = (double)fVar8;
      dVar18 = (double)fVar17;
      dVar16 = (double)fVar1;
    }
    if ((this->Sparse).bHasSparse != false) {
      uVar3 = (this->Sparse).Count;
      uVar6 = (this->Sparse).Indices.ByteOffset;
      EVar4 = (this->Sparse).Indices.ComponentType;
      local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.ArrayNum = 0;
      local_68.ArrayMax = 0;
      TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_68,uVar3,No);
      GLTF::`anonymous_namespace'::FillUnsignedIntArray
                (&(this->Sparse).Indices.BufferView,uVar6,EVar4,uVar3,
                 (uint *)local_68.AllocatorInstance.Data);
      for (FVar14.Data = local_68.AllocatorInstance.Data;
          FVar14.Data != local_68.AllocatorInstance.Data + (longlong)local_68.ArrayNum * 4;
          FVar14.Data = FVar14.Data + 4) {
        if (*(uint *)FVar14.Data == param_1) {
          if ((int)((longlong)FVar14.Data - (longlong)local_68.AllocatorInstance.Data >> 2) == -1)
          break;
          pfVar15 = (float *)((this->Sparse).Values.BufferView.Buffer.Data +
                             (ulonglong)(param_1 * this->ByteStride) +
                             (this->Sparse).Values.ByteOffset +
                             (this->Sparse).Values.BufferView.ByteOffset);
          if (this->ComponentType == F32) {
            fVar17 = *pfVar15;
            fVar1 = pfVar15[1];
            fVar8 = (float)*(undefined8 *)(pfVar15 + 2);
            fVar9 = (float)((ulonglong)*(undefined8 *)(pfVar15 + 2) >> 0x20);
          }
          else {
            if (this->bNormalized == false) break;
            pTVar12 = GLTF::`anonymous_namespace'::GetNormalized<UE::Math::TVector4<float>,4>
                                (local_48,this->ComponentType,pfVar15);
            fVar17 = (pTVar12->field0_0x0)._s_0.X;
            fVar1 = (pTVar12->field0_0x0)._s_0.Y;
            uVar2 = *(undefined8 *)((longlong)&pTVar12->field0_0x0 + 8);
            fVar8 = (float)uVar2;
            fVar9 = (float)((ulonglong)uVar2 >> 0x20);
          }
          dVar20 = (double)fVar9;
          dVar19 = (double)fVar8;
          dVar16 = (double)fVar17;
          dVar18 = (double)fVar1;
          break;
        }
      }
      if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.AllocatorInstance.Data);
      }
    }
    auVar10._8_4_ = SUB84(dVar18,0);
    auVar10._0_8_ = dVar16;
    auVar10._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
    *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar10;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar19;
    (__return_storage_ptr__->field0_0x0)._s_0.W = dVar20;
  }
  else {
LAB_14e63ffa7:
    bVar11 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_2814153273458555746>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTF\\GLTFAccessor.cpp"
                        ,0x49e,"false");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      pTVar13 = (TVector4<double> *)(*pcVar7)();
      return pTVar13;
    }
    (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.W = 1.0;
  }
  return __return_storage_ptr__;
}

// GetVec4Array @ 14e640310

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
GLTF::FAccessor::GetVec4Array
          (FAccessor *this,TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *param_1)

{
  if (((this->BufferView).Buffer.Data != (uchar *)0x0) || ((this->Sparse).bHasSparse != false)) {
    TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>::SetNumZeroed
              (param_1,this->Count,No);
  }
  GetVec4Array(this,(TVector4<float> *)(param_1->AllocatorInstance).Data);
  return;
}

// GetVec4Array @ 14e640360

void __thiscall GLTF::FAccessor::GetVec4Array(FAccessor *this,TVector4<float> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Type == Vec4) {
    if ((this->BufferView).Buffer.Data != (uchar *)0x0) {
      GLTF::`anonymous_namespace'::CopyWithoutConversion<UE::Math::TVector4<float>,4>
                (this->ByteStride,this->ComponentType,this->bNormalized,this->Count,
                 &this->BufferView,this->ByteOffset,param_1);
    }
    UpdateArrayWithSparse<UE::Math::TVector4<float>,4>(this,param_1);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2814153273458555671>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTF\\GLTFAccessor.cpp"
                       ,0x4e9,"Type == EType::Vec4");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// IsValid @ 14e646970

bool __thiscall GLTF::FAccessor::IsValid(FAccessor *this)

{
  if (((this->BufferView).Buffer.Data == (uchar *)0x0) && ((this->Sparse).bHasSparse == false)) {
    return false;
  }
  return true;
}

// IsValidDataType @ 14e6469e0

bool __thiscall
GLTF::FAccessor::IsValidDataType(FAccessor *this,EMeshAttributeType param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  EType EVar4;
  
  switch(param_1) {
  case POSITION:
  case NORMAL:
    bVar2 = this->Type == Vec3;
    break;
  case TANGENT:
    EVar4 = this->Type;
    if (param_2) {
      if (EVar4 != Vec3) {
        return false;
      }
    }
    else {
LAB_14e646a3d:
      if (EVar4 != Vec4) {
        return false;
      }
    }
    goto LAB_14e646a5f;
  case TEXCOORD_0:
  case TEXCOORD_1:
  case TEXCOORD_2:
  case TEXCOORD_3:
  case TEXCOORD_4:
  case TEXCOORD_5:
  case TEXCOORD_6:
  case TEXCOORD_7:
    bVar2 = this->Type == Vec2;
    break;
  case COLOR_0:
    EVar4 = this->Type;
    if (EVar4 != Vec3) goto LAB_14e646a3d;
    goto LAB_14e646a5f;
  case JOINTS_0:
  case WEIGHTS_0:
    bVar2 = this->Type == Vec4;
    break;
  default:
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2814153273458556318>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTF\\GLTFAccessor.cpp"
                       ,0x262,"false");
    if (!bVar2) {
      return false;
    }
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if (bVar2) {
LAB_14e646a5f:
    bVar2 = CheckNonQuantizedComponentTypeForDataType(this,param_1,param_2);
    if (bVar2) {
      return true;
    }
    if (this->bQuantized != false) {
      bVar2 = CheckQuantizedComponentTypeForDataType(this,param_1,param_2);
      return bVar2;
    }
  }
  return false;
}

// UpdateFloatArrayWithSparse @ 14e65b230

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall GLTF::FAccessor::UpdateFloatArrayWithSparse(FAccessor *this,float *param_1)

{
  EComponentType EVar1;
  ulong64 uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  TArray<float,TSizedDefaultAllocator<32>_> local_38;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_28;
  
  if (((this->Sparse).bHasSparse != false) && (uVar5 = (this->Sparse).Count, uVar5 != 0)) {
    EVar1 = (this->Sparse).Indices.ComponentType;
    uVar2 = (this->Sparse).Indices.ByteOffset;
    uVar8 = 0;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_28,uVar5,No);
    GLTF::`anonymous_namespace'::FillUnsignedIntArray
              (&(this->Sparse).Indices.BufferView,uVar2,EVar1,uVar5,
               (uint *)local_28.AllocatorInstance.Data);
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ArrayNum = 0;
    local_38.ArrayMax = 0;
    TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&local_38,(this->Sparse).Count,No);
    bVar4 = GLTF::`anonymous_namespace'::FillFloatArray
                      (this->bNormalized,&(this->Sparse).Values.BufferView,
                       (this->Sparse).Values.ByteOffset,this->ComponentType,this->ByteStride,
                       (this->Sparse).Count,(float *)local_38.AllocatorInstance.Data);
    if ((bVar4) && ((this->Sparse).Count != 0)) {
      do {
        uVar7 = (uint)uVar8;
        uVar5 = 0;
        if ((int)uVar7 < local_28.ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar5 = *(uint *)(local_28.AllocatorInstance.Data + (longlong)(int)uVar7 * 4);
        uVar6 = 0;
        if ((int)uVar7 < local_38.ArrayNum) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (uVar5 < this->Count) {
          param_1[uVar5] = *(float *)(local_38.AllocatorInstance.Data + (longlong)(int)uVar7 * 4);
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < (this->Sparse).Count);
    }
    if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  return;
}

// UpdateFloatWithSparse @ 14e65b420

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall GLTF::FAccessor::UpdateFloatWithSparse(FAccessor *this,uint param_1,float *param_2)

{
  uint uVar1;
  EComponentType EVar2;
  ulong64 uVar3;
  ForAnyElementType FVar4;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_28;
  
  if ((this->Sparse).bHasSparse != false) {
    uVar1 = (this->Sparse).Count;
    uVar3 = (this->Sparse).Indices.ByteOffset;
    EVar2 = (this->Sparse).Indices.ComponentType;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_28,uVar1,No);
    GLTF::`anonymous_namespace'::FillUnsignedIntArray
              (&(this->Sparse).Indices.BufferView,uVar3,EVar2,uVar1,
               (uint *)local_28.AllocatorInstance.Data);
    for (FVar4.Data = local_28.AllocatorInstance.Data;
        FVar4.Data != local_28.AllocatorInstance.Data + (longlong)local_28.ArrayNum * 4;
        FVar4.Data = FVar4.Data + 4) {
      if (*(uint *)FVar4.Data == param_1) {
        if (((int)((longlong)FVar4.Data - (longlong)local_28.AllocatorInstance.Data >> 2) != -1) &&
           (this->ComponentType == F32)) {
          *param_2 = (float)(this->Sparse).Values.BufferView.Buffer.Data
                            [(ulonglong)(param_1 * this->ByteStride) +
                             (this->Sparse).Values.ByteOffset +
                             (this->Sparse).Values.BufferView.ByteOffset];
        }
        break;
      }
    }
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  return;
}

// UpdateMat4WithSparse @ 14e65b520

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
GLTF::FAccessor::UpdateMat4WithSparse(FAccessor *this,uint param_1,TMatrix<double> *param_2)

{
  uint uVar1;
  EComponentType EVar2;
  ulong64 uVar3;
  bool bVar4;
  ForAnyElementType FVar5;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_a8;
  TMatrix<double> local_98;
  
  if ((this->Sparse).bHasSparse != false) {
    uVar1 = (this->Sparse).Count;
    uVar3 = (this->Sparse).Indices.ByteOffset;
    EVar2 = (this->Sparse).Indices.ComponentType;
    local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.ArrayNum = 0;
    local_a8.ArrayMax = 0;
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_a8,uVar1,No);
    GLTF::`anonymous_namespace'::FillUnsignedIntArray
              (&(this->Sparse).Indices.BufferView,uVar3,EVar2,uVar1,
               (uint *)local_a8.AllocatorInstance.Data);
    for (FVar5.Data = local_a8.AllocatorInstance.Data;
        FVar5.Data != local_a8.AllocatorInstance.Data + (longlong)local_a8.ArrayNum * 4;
        FVar5.Data = FVar5.Data + 4) {
      if (*(uint *)FVar5.Data == param_1) {
        if (((int)((longlong)FVar5.Data - (longlong)local_a8.AllocatorInstance.Data >> 2) != -1) &&
           (bVar4 = GLTF::`anonymous_namespace'::AcquireMat4
                              (param_1,&(this->Sparse).Values.BufferView,
                               (this->Sparse).Values.ByteOffset,this->ByteStride,this->ComponentType
                               ,&local_98), bVar4)) {
          param_2->M[0][0] = local_98.M[0][0];
          param_2->M[0][1] = local_98.M[0][1];
          param_2->M[0][2] = local_98.M[0][2];
          param_2->M[0][3] = local_98.M[0][3];
          param_2->M[1][0] = local_98.M[1][0];
          param_2->M[1][1] = local_98.M[1][1];
          param_2->M[1][2] = local_98.M[1][2];
          param_2->M[1][3] = local_98.M[1][3];
          param_2->M[2][0] = local_98.M[2][0];
          param_2->M[2][1] = local_98.M[2][1];
          param_2->M[2][2] = local_98.M[2][2];
          param_2->M[2][3] = local_98.M[2][3];
          param_2->M[3][0] = local_98.M[3][0];
          param_2->M[3][1] = local_98.M[3][1];
          param_2->M[3][2] = local_98.M[3][2];
          param_2->M[3][3] = local_98.M[3][3];
        }
        break;
      }
    }
    if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.AllocatorInstance.Data);
    }
  }
  return;
}

// UpdateUnsignedInt16x4WithSparse @ 14e65ba30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
GLTF::FAccessor::UpdateUnsignedInt16x4WithSparse(FAccessor *this,uint param_1,ushort *param_2)

{
  uint uVar1;
  EComponentType EVar2;
  ulong64 uVar3;
  uchar *puVar4;
  ForAnyElementType FVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_38;
  
  if ((this->Sparse).bHasSparse != false) {
    uVar1 = (this->Sparse).Count;
    uVar3 = (this->Sparse).Indices.ByteOffset;
    EVar2 = (this->Sparse).Indices.ComponentType;
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ArrayNum = 0;
    local_38.ArrayMax = 0;
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_38,uVar1,No);
    GLTF::`anonymous_namespace'::FillUnsignedIntArray
              (&(this->Sparse).Indices.BufferView,uVar3,EVar2,uVar1,
               (uint *)local_38.AllocatorInstance.Data);
    for (FVar5.Data = local_38.AllocatorInstance.Data;
        FVar5.Data != local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 4;
        FVar5.Data = FVar5.Data + 4) {
      if (*(uint *)FVar5.Data == param_1) {
        if ((int)((longlong)FVar5.Data - (longlong)local_38.AllocatorInstance.Data >> 2) == -1)
        break;
        puVar4 = (this->Sparse).Values.BufferView.Buffer.Data;
        lVar6 = (ulonglong)(param_1 * this->ByteStride) + (this->Sparse).Values.ByteOffset +
                (this->Sparse).Values.BufferView.ByteOffset;
        if (this->ComponentType == U8) {
          uVar7 = (ushort)puVar4[lVar6];
          uVar8 = (ushort)puVar4[lVar6 + 1];
          uVar9 = (ushort)puVar4[lVar6 + 2];
          uVar10 = (ushort)puVar4[lVar6 + 3];
        }
        else {
          if (this->ComponentType != U16) break;
          uVar7 = *(ushort *)(puVar4 + lVar6);
          uVar8 = *(ushort *)(puVar4 + lVar6 + 2);
          uVar9 = *(ushort *)(puVar4 + lVar6 + 4);
          uVar10 = *(ushort *)(puVar4 + lVar6 + 6);
        }
        *param_2 = uVar7;
        param_2[1] = uVar8;
        param_2[2] = uVar9;
        param_2[3] = uVar10;
        break;
      }
    }
    if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
  }
  return;
}

// UpdateUnsignedIntArrayWithSparse @ 14e65bb70

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall GLTF::FAccessor::UpdateUnsignedIntArrayWithSparse(FAccessor *this,uint *param_1)

{
  EComponentType EVar1;
  ulong64 uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_38;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_28;
  
  if (((this->Sparse).bHasSparse != false) && (uVar5 = (this->Sparse).Count, uVar5 != 0)) {
    EVar1 = (this->Sparse).Indices.ComponentType;
    uVar2 = (this->Sparse).Indices.ByteOffset;
    uVar8 = 0;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_28,uVar5,No);
    GLTF::`anonymous_namespace'::FillUnsignedIntArray
              (&(this->Sparse).Indices.BufferView,uVar2,EVar1,uVar5,
               (uint *)local_28.AllocatorInstance.Data);
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ArrayNum = 0;
    local_38.ArrayMax = 0;
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&local_38,(this->Sparse).Count,No);
    bVar4 = GLTF::`anonymous_namespace'::FillUnsignedIntArray
                      (&(this->Sparse).Values.BufferView,(this->Sparse).Values.ByteOffset,
                       this->ComponentType,this->Count,(uint *)local_38.AllocatorInstance.Data);
    if ((bVar4) && ((this->Sparse).Count != 0)) {
      do {
        uVar7 = (uint)uVar8;
        uVar5 = 0;
        if ((int)uVar7 < local_28.ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar5 = *(uint *)(local_28.AllocatorInstance.Data + (longlong)(int)uVar7 * 4);
        uVar6 = 0;
        if ((int)uVar7 < local_38.ArrayNum) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (uVar5 < this->Count) {
          param_1[uVar5] =
               (uint)(longlong)
                     (float)*(uint *)(local_38.AllocatorInstance.Data + (longlong)(int)uVar7 * 4);
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < (this->Sparse).Count);
    }
    if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  return;
}

// UpdateUnsignedIntWithSparse @ 14e65bd60

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
GLTF::FAccessor::UpdateUnsignedIntWithSparse(FAccessor *this,uint param_1,uint *param_2)

{
  EComponentType EVar1;
  ulong64 uVar2;
  uint uVar3;
  ForAnyElementType FVar4;
  uint *puVar5;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_28;
  
  if ((this->Sparse).bHasSparse != false) {
    uVar3 = (this->Sparse).Count;
    uVar2 = (this->Sparse).Indices.ByteOffset;
    EVar1 = (this->Sparse).Indices.ComponentType;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_28,uVar3,No);
    GLTF::`anonymous_namespace'::FillUnsignedIntArray
              (&(this->Sparse).Indices.BufferView,uVar2,EVar1,uVar3,
               (uint *)local_28.AllocatorInstance.Data);
    for (FVar4.Data = local_28.AllocatorInstance.Data;
        FVar4.Data != local_28.AllocatorInstance.Data + (longlong)local_28.ArrayNum * 4;
        FVar4.Data = FVar4.Data + 4) {
      if (*(uint *)FVar4.Data == param_1) {
        if ((int)((longlong)FVar4.Data - (longlong)local_28.AllocatorInstance.Data >> 2) == -1)
        break;
        EVar1 = this->ComponentType;
        puVar5 = (uint *)((this->Sparse).Values.BufferView.Buffer.Data +
                         (ulonglong)(param_1 * this->ByteStride) + (this->Sparse).Values.ByteOffset
                         + (this->Sparse).Values.BufferView.ByteOffset);
        if (EVar1 == U8) {
          uVar3 = (uint)(byte)*puVar5;
        }
        else if (EVar1 == U16) {
          uVar3 = (uint)(ushort)*puVar5;
        }
        else {
          if (EVar1 != U32) break;
          uVar3 = *puVar5;
        }
        *param_2 = uVar3;
        break;
      }
    }
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  return;
}

// UpdateVec2WithSparse @ 14e65be70

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
GLTF::FAccessor::UpdateVec2WithSparse(FAccessor *this,uint param_1,TVector2<double> *param_2)

{
  uint uVar1;
  EComponentType EVar2;
  ulong64 uVar3;
  TVector2<double>_u_0 TVar4;
  TVector2<float> TVar5;
  ForAnyElementType FVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  undefined1 local_res8 [8];
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_38 [2];
  
  if ((this->Sparse).bHasSparse != false) {
    uVar1 = (this->Sparse).Count;
    uVar3 = (this->Sparse).Indices.ByteOffset;
    EVar2 = (this->Sparse).Indices.ComponentType;
    local_38[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38[0].ArrayNum = 0;
    local_38[0].ArrayMax = 0;
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(local_38,uVar1,No);
    GLTF::`anonymous_namespace'::FillUnsignedIntArray
              (&(this->Sparse).Indices.BufferView,uVar3,EVar2,uVar1,
               (uint *)local_38[0].AllocatorInstance.Data);
    for (FVar6.Data = local_38[0].AllocatorInstance.Data;
        FVar6.Data != local_38[0].AllocatorInstance.Data + (longlong)local_38[0].ArrayNum * 4;
        FVar6.Data = FVar6.Data + 4) {
      if (*(uint *)FVar6.Data == param_1) {
        if ((int)((longlong)FVar6.Data - (longlong)local_38[0].AllocatorInstance.Data >> 2) == -1)
        break;
        pfVar7 = (float *)((this->Sparse).Values.BufferView.Buffer.Data +
                          (ulonglong)(param_1 * this->ByteStride) + (this->Sparse).Values.ByteOffset
                          + (this->Sparse).Values.BufferView.ByteOffset);
        if (this->ComponentType == F32) {
          fVar8 = *pfVar7;
          fVar9 = pfVar7[1];
        }
        else {
          if (this->bNormalized == false) break;
          TVar5 = GLTF::`anonymous_namespace'::GetNormalized<UE::Math::TVector2<float>,2>
                            ((EComponentType)local_res8,(void *)(ulonglong)this->ComponentType);
          fVar8 = *(float *)TVar5.field0_0x0;
          fVar9 = *(float *)((longlong)TVar5.field0_0x0 + 4);
        }
        TVar4._8_4_ = SUB84((double)fVar9,0);
        TVar4._s_0.X = (double)fVar8;
        TVar4._12_4_ = (int)((ulonglong)(double)fVar9 >> 0x20);
        param_2->field0_0x0 = TVar4;
        break;
      }
    }
    if (local_38[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].AllocatorInstance.Data);
    }
  }
  return;
}

// UpdateVec3WithSparse @ 14e65bfa0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
GLTF::FAccessor::UpdateVec3WithSparse(FAccessor *this,uint param_1,TVector<double> *param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  EComponentType EVar4;
  ulong64 uVar5;
  undefined1 auVar6 [16];
  TVector<float> *pTVar7;
  ForAnyElementType FVar8;
  float *pfVar9;
  float fVar10;
  undefined1 local_48 [16];
  double local_38;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_30;
  
  if ((this->Sparse).bHasSparse != false) {
    uVar3 = (this->Sparse).Count;
    uVar5 = (this->Sparse).Indices.ByteOffset;
    EVar4 = (this->Sparse).Indices.ComponentType;
    local_30.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_30.ArrayNum = 0;
    local_30.ArrayMax = 0;
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_30,uVar3,No);
    GLTF::`anonymous_namespace'::FillUnsignedIntArray
              (&(this->Sparse).Indices.BufferView,uVar5,EVar4,uVar3,
               (uint *)local_30.AllocatorInstance.Data);
    for (FVar8.Data = local_30.AllocatorInstance.Data;
        FVar8.Data != local_30.AllocatorInstance.Data + (longlong)local_30.ArrayNum * 4;
        FVar8.Data = FVar8.Data + 4) {
      if (*(uint *)FVar8.Data == param_1) {
        if ((int)((longlong)FVar8.Data - (longlong)local_30.AllocatorInstance.Data >> 2) == -1)
        break;
        local_48._0_8_ = 0;
        local_48._8_8_ = 0;
        local_38 = 0.0;
        pfVar9 = (float *)((this->Sparse).Values.BufferView.Buffer.Data +
                          (ulonglong)(param_1 * this->ByteStride) + (this->Sparse).Values.ByteOffset
                          + (this->Sparse).Values.BufferView.ByteOffset);
        if (this->ComponentType == F32) {
          fVar1 = *pfVar9;
          fVar2 = pfVar9[1];
          fVar10 = pfVar9[2];
        }
        else {
          if (this->bNormalized == false) break;
          pTVar7 = GLTF::`anonymous_namespace'::GetNormalized<UE::Math::TVector<float>,3>
                             ((TVector<float> *)local_48,this->ComponentType,pfVar9);
          fVar1 = (pTVar7->field0_0x0)._s_0.X;
          fVar2 = (pTVar7->field0_0x0)._s_0.Y;
          fVar10 = (pTVar7->field0_0x0)._s_0.Z;
        }
        local_38 = (double)fVar10;
        auVar6._8_4_ = SUB84((double)fVar2,0);
        auVar6._0_8_ = (double)fVar1;
        auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
        *(undefined1 (*) [16])&param_2->field0_0x0 = auVar6;
        (param_2->field0_0x0)._s_0.Z = local_38;
        break;
      }
    }
    if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.AllocatorInstance.Data);
    }
  }
  return;
}

// UpdateVec4WithSparse @ 14e65c110

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
GLTF::FAccessor::UpdateVec4WithSparse(FAccessor *this,uint param_1,TVector4<double> *param_2)

{
  float fVar1;
  undefined8 uVar2;
  uint uVar3;
  EComponentType EVar4;
  ulong64 uVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  TVector4<float> *pTVar9;
  ForAnyElementType FVar10;
  float *pfVar11;
  float fVar12;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_38;
  TVector4<float> local_28;
  
  if ((this->Sparse).bHasSparse != false) {
    uVar3 = (this->Sparse).Count;
    uVar5 = (this->Sparse).Indices.ByteOffset;
    EVar4 = (this->Sparse).Indices.ComponentType;
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ArrayNum = 0;
    local_38.ArrayMax = 0;
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_38,uVar3,No);
    GLTF::`anonymous_namespace'::FillUnsignedIntArray
              (&(this->Sparse).Indices.BufferView,uVar5,EVar4,uVar3,
               (uint *)local_38.AllocatorInstance.Data);
    for (FVar10.Data = local_38.AllocatorInstance.Data;
        FVar10.Data != local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 4;
        FVar10.Data = FVar10.Data + 4) {
      if (*(uint *)FVar10.Data == param_1) {
        if ((int)((longlong)FVar10.Data - (longlong)local_38.AllocatorInstance.Data >> 2) == -1)
        break;
        pfVar11 = (float *)((this->Sparse).Values.BufferView.Buffer.Data +
                           (ulonglong)(param_1 * this->ByteStride) +
                           (this->Sparse).Values.ByteOffset +
                           (this->Sparse).Values.BufferView.ByteOffset);
        if (this->ComponentType == F32) {
          fVar12 = *pfVar11;
          fVar1 = pfVar11[1];
          fVar6 = (float)*(undefined8 *)(pfVar11 + 2);
          fVar7 = (float)((ulonglong)*(undefined8 *)(pfVar11 + 2) >> 0x20);
        }
        else {
          if (this->bNormalized == false) break;
          pTVar9 = GLTF::`anonymous_namespace'::GetNormalized<UE::Math::TVector4<float>,4>
                             (&local_28,this->ComponentType,pfVar11);
          fVar12 = (pTVar9->field0_0x0)._s_0.X;
          fVar1 = (pTVar9->field0_0x0)._s_0.Y;
          uVar2 = *(undefined8 *)((longlong)&pTVar9->field0_0x0 + 8);
          fVar6 = (float)uVar2;
          fVar7 = (float)((ulonglong)uVar2 >> 0x20);
        }
        auVar8._8_4_ = SUB84((double)fVar1,0);
        auVar8._0_8_ = (double)fVar12;
        auVar8._12_4_ = (int)((ulonglong)(double)fVar1 >> 0x20);
        *(undefined1 (*) [16])&param_2->field0_0x0 = auVar8;
        (param_2->field0_0x0)._s_0.Z = (double)fVar6;
        (param_2->field0_0x0)._s_0.W = (double)fVar7;
        break;
      }
    }
    if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
  }
  return;
}

