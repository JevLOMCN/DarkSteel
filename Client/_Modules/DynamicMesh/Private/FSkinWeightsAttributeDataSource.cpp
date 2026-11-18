// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 5

// ~FSkinWeightsAttributeDataSource @ 14c7b7830

void __thiscall
SmoothBoneWeightsLocals::FSkinWeightsAttributeDataSource::~FSkinWeightsAttributeDataSource
          (FSkinWeightsAttributeDataSource *this)

{
  return;
}

// GetBoneIndex @ 14c80e7e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ushort __thiscall
SmoothBoneWeightsLocals::FSkinWeightsAttributeDataSource::GetBoneIndex
          (FSkinWeightsAttributeDataSource *this,int param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  ushort uVar4;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar5;
  ForElementType<UE::AnimationCore::FBoneWeight> _Src;
  uint uVar6;
  undefined1 auStackY_a8 [32];
  ForElementType<UE::AnimationCore::FBoneWeight> local_68;
  int local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_68.SecondaryData = (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
  local_30 = 0;
  local_2c = 0xc;
  FVar5 = (ForElementType<UE::AnimationCore::FBoneWeight>)
          (*(longlong *)
            ((this->Attribute->VertexBoneWeights).Blocks.AllocatorInstance.Data +
            (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 0x40);
  if ((ForElementType<UE::AnimationCore::FBoneWeight>)&local_68 != FVar5) {
    iVar1 = *(int *)((longlong)FVar5 + 0x38);
    _Src = *(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar5 + 0x30);
    if (*(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar5 + 0x30) ==
        (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
      _Src = FVar5;
    }
    local_30 = iVar1;
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
              (4,2,iVar1,0xc,&local_68,iVar1,&local_2c);
    FVar5 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_68;
    if (local_68.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
      FVar5 = local_68.SecondaryData;
    }
    if (iVar1 != 0) {
      memcpy((void *)FVar5,(void *)_Src,(longlong)iVar1 << 2);
    }
  }
  uVar6 = 0;
  if (param_2 < local_30) {
    uVar6 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  FVar5 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_68;
  if (local_68.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
    FVar5 = local_68.SecondaryData;
  }
  uVar4 = *(ushort *)((longlong)FVar5 + (longlong)param_2 * 4);
  if (local_68.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
    FMemory::Free((void *)local_68.SecondaryData);
  }
  return uVar4;
}

// GetBoneNum @ 14c80e970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
SmoothBoneWeightsLocals::FSkinWeightsAttributeDataSource::GetBoneNum
          (FSkinWeightsAttributeDataSource *this,int param_1)

{
  int iVar1;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar2;
  ForElementType<UE::AnimationCore::FBoneWeight> _Src;
  undefined1 auStackY_98 [32];
  ForElementType<UE::AnimationCore::FBoneWeight> local_58;
  int local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_58.SecondaryData = (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
  local_20 = 0;
  local_1c = 0xc;
  FVar2 = (ForElementType<UE::AnimationCore::FBoneWeight>)
          (*(longlong *)
            ((this->Attribute->VertexBoneWeights).Blocks.AllocatorInstance.Data +
            (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 0x40);
  if ((ForElementType<UE::AnimationCore::FBoneWeight>)&local_58 != FVar2) {
    iVar1 = *(int *)((ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar2 + 0x38))->
                    InlineData;
    _Src = *(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar2 + 0x30);
    if (*(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar2 + 0x30) ==
        (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
      _Src = FVar2;
    }
    local_20 = iVar1;
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
              (4,2,iVar1,0xc,&local_58,iVar1,&local_1c);
    FVar2 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_58;
    if (local_58.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
      FVar2 = local_58.SecondaryData;
    }
    if (iVar1 != 0) {
      memcpy((void *)FVar2,(void *)_Src,(longlong)iVar1 << 2);
    }
  }
  iVar1 = local_20;
  if (local_58.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
    FMemory::Free((void *)local_58.SecondaryData);
  }
  return iVar1;
}

// GetBoneWeight @ 14c80ea80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float __thiscall
SmoothBoneWeightsLocals::FSkinWeightsAttributeDataSource::GetBoneWeight
          (FSkinWeightsAttributeDataSource *this,int param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar4;
  ForElementType<UE::AnimationCore::FBoneWeight> _Src;
  uint uVar5;
  float fVar6;
  undefined1 auStackY_b8 [32];
  ForElementType<UE::AnimationCore::FBoneWeight> local_78;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  local_78.SecondaryData = (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
  local_40 = 0;
  local_3c = 0xc;
  FVar4 = (ForElementType<UE::AnimationCore::FBoneWeight>)
          (*(longlong *)
            ((this->Attribute->VertexBoneWeights).Blocks.AllocatorInstance.Data +
            (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 0x40);
  if ((ForElementType<UE::AnimationCore::FBoneWeight>)&local_78 != FVar4) {
    iVar1 = *(int *)((longlong)FVar4 + 0x38);
    _Src = *(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar4 + 0x30);
    if (*(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar4 + 0x30) ==
        (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
      _Src = FVar4;
    }
    local_40 = iVar1;
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
              (4,2,iVar1,0xc,&local_78,iVar1,&local_3c);
    FVar4 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_78;
    if (local_78.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
      FVar4 = local_78.SecondaryData;
    }
    if (iVar1 != 0) {
      memcpy((void *)FVar4,(void *)_Src,(longlong)iVar1 << 2);
    }
  }
  uVar5 = 0;
  if (param_2 < local_40) {
    uVar5 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    fVar6 = (float)(*pcVar2)();
    return fVar6;
  }
  FVar4 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_78;
  if (local_78.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
    FVar4 = local_78.SecondaryData;
  }
  fVar6 = (float)*(ushort *)((uchar *)((longlong)FVar4 + 2) + (longlong)param_2 * 4) *
          __real_37800080;
  if (local_78.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
    FMemory::Free((void *)local_78.SecondaryData);
  }
  return fVar6;
}

// GetWeightOfBoneOnVertex @ 14c811de0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float __thiscall
SmoothBoneWeightsLocals::FSkinWeightsAttributeDataSource::GetWeightOfBoneOnVertex
          (FSkinWeightsAttributeDataSource *this,int param_1,ushort param_2)

{
  int iVar1;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar2;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar3;
  float fVar4;
  undefined1 auStackY_c8 [32];
  undefined1 local_88 [16];
  ForElementType<UE::AnimationCore::FBoneWeight> local_78;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  local_78.SecondaryData = (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
  local_40 = 0;
  local_3c = 0xc;
  FVar2 = (ForElementType<UE::AnimationCore::FBoneWeight>)
          (*(longlong *)
            ((this->Attribute->VertexBoneWeights).Blocks.AllocatorInstance.Data +
            (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 0x40);
  if ((ForElementType<UE::AnimationCore::FBoneWeight>)&local_78 != FVar2) {
    iVar1 = *(int *)((longlong)FVar2 + 0x38);
    FVar3 = *(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar2 + 0x30);
    if (*(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar2 + 0x30) ==
        (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
      FVar3 = FVar2;
    }
    local_40 = iVar1;
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
              (4,2,iVar1,0xc,&local_78,iVar1,&local_3c);
    FVar2 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_78;
    if (local_78.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
      FVar2 = local_78.SecondaryData;
    }
    if (iVar1 != 0) {
      memcpy((void *)FVar2,(void *)FVar3,(longlong)iVar1 << 2);
    }
  }
  iVar1 = local_40;
  FVar2 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_78;
  if (local_78.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
    FVar2 = local_78.SecondaryData;
  }
  FVar3 = (ForElementType<UE::AnimationCore::FBoneWeight>)((longlong)FVar2 + (longlong)local_40 * 4)
  ;
  while( true ) {
    if (local_40 != iVar1) {
      `TCheckedPointerIterator<UE::AnimationCore::FBoneWeight_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_88);
    }
    if (FVar2 == FVar3) break;
    if (*(ushort *)FVar2 == param_2) {
      fVar4 = (float)*(ushort *)((longlong)FVar2 + 2) * __real_37800080;
LAB_14c811f22:
      if (local_78.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
        FMemory::Free((void *)local_78.SecondaryData);
      }
      return fVar4;
    }
    FVar2 = (ForElementType<UE::AnimationCore::FBoneWeight>)((longlong)FVar2 + 4);
  }
  fVar4 = 0.0;
  goto LAB_14c811f22;
}

