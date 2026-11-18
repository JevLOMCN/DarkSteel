// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// StaticStruct @ 1473ca9c0

UScriptStruct * __cdecl FSkinnedMeshComponentDescriptorBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSkinnedMeshComponentDescriptorBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FSkinnedMeshComponentDescriptorBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSkinnedMeshComponentDescriptorBase,
                         (UObject *)pUVar1,L"SkinnedMeshComponentDescriptorBase");
  }
  return Z_Registration_Info_UScriptStruct_FSkinnedMeshComponentDescriptorBase.OuterSingleton;
}

// FSkinnedMeshComponentDescriptorBase @ 1473d7260

FSkinnedMeshComponentDescriptorBase * __thiscall
FSkinnedMeshComponentDescriptorBase::FSkinnedMeshComponentDescriptorBase
          (FSkinnedMeshComponentDescriptorBase *this,FSkinnedMeshComponentDescriptorBase *param_1)

{
  UClass *pUVar1;
  double dVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  byte bVar10;
  
  this->_padding_ = (longlong)&___7FSkinnedMeshComponentDescriptorBase__6B_;
  this->Hash = param_1->Hash;
  (this->Mobility).Value = (param_1->Mobility).Value;
  pUVar1 = (param_1->ComponentClass).Class.field0_0x0.DebugPtr;
  (this->ComponentClass).Class.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  this->InstanceMinDrawDistance = param_1->InstanceMinDrawDistance;
  this->InstanceStartCullDistance = param_1->InstanceStartCullDistance;
  this->InstanceEndCullDistance = param_1->InstanceEndCullDistance;
  bVar10 = (this->bCastShadow ^ param_1->bCastShadow) & 1 ^ this->field_0x24;
  this->field_0x24 = bVar10;
  bVar10 = (bVar10 ^ param_1->field_0x24) & 2 ^ bVar10;
  this->field_0x24 = bVar10;
  bVar10 = (bVar10 ^ param_1->field_0x24) & 4 ^ bVar10;
  this->field_0x24 = bVar10;
  bVar10 = (bVar10 ^ param_1->field_0x24) & 8 ^ bVar10;
  this->field_0x24 = bVar10;
  bVar10 = (bVar10 ^ param_1->field_0x24) & 0x10 ^ bVar10;
  this->field_0x24 = bVar10;
  bVar10 = (bVar10 ^ param_1->field_0x24) & 0x20 ^ bVar10;
  this->field_0x24 = bVar10;
  bVar10 = (bVar10 ^ param_1->field_0x24) & 0x40 ^ bVar10;
  this->field_0x24 = bVar10;
  this->field_0x24 = (bVar10 ^ param_1->field_0x24) & 0x7f ^ param_1->field_0x24;
  bVar10 = (this->bCastCinematicShadow ^ param_1->bCastCinematicShadow) & 1 ^ this->field_0x25;
  this->field_0x25 = bVar10;
  this->field_0x25 = (bVar10 ^ param_1->field_0x25) & 2 ^ bVar10;
  this->bVisibleInRayTracing = param_1->bVisibleInRayTracing;
  this->bAffectDynamicIndirectLighting = param_1->bAffectDynamicIndirectLighting;
  this->bAffectDistanceFieldLighting = param_1->bAffectDistanceFieldLighting;
  dVar2 = (param_1->PrimitiveBoundsOverride).Min.field0_0x0._s_0.Y;
  (this->PrimitiveBoundsOverride).Min.field0_0x0._s_0.X =
       (param_1->PrimitiveBoundsOverride).Min.field0_0x0._s_0.X;
  (this->PrimitiveBoundsOverride).Min.field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_1->PrimitiveBoundsOverride).Max.field0_0x0._s_0.X;
  (this->PrimitiveBoundsOverride).Min.field0_0x0._s_0.Z =
       (param_1->PrimitiveBoundsOverride).Min.field0_0x0._s_0.Z;
  (this->PrimitiveBoundsOverride).Max.field0_0x0._s_0.X = dVar2;
  dVar2 = (param_1->PrimitiveBoundsOverride).Max.field0_0x0._s_0.Z;
  (this->PrimitiveBoundsOverride).Max.field0_0x0._s_0.Y =
       (param_1->PrimitiveBoundsOverride).Max.field0_0x0._s_0.Y;
  (this->PrimitiveBoundsOverride).Max.field0_0x0._s_0.Z = dVar2;
  uVar3 = (param_1->PrimitiveBoundsOverride).Pad[0];
  uVar4 = (param_1->PrimitiveBoundsOverride).Pad[1];
  uVar5 = (param_1->PrimitiveBoundsOverride).Pad[2];
  uVar6 = (param_1->PrimitiveBoundsOverride).Pad[3];
  uVar7 = (param_1->PrimitiveBoundsOverride).Pad[4];
  uVar8 = (param_1->PrimitiveBoundsOverride).Pad[5];
  uVar9 = (param_1->PrimitiveBoundsOverride).Pad[6];
  (this->PrimitiveBoundsOverride).IsValid = (param_1->PrimitiveBoundsOverride).IsValid;
  (this->PrimitiveBoundsOverride).Pad[0] = uVar3;
  (this->PrimitiveBoundsOverride).Pad[1] = uVar4;
  (this->PrimitiveBoundsOverride).Pad[2] = uVar5;
  (this->PrimitiveBoundsOverride).Pad[3] = uVar6;
  (this->PrimitiveBoundsOverride).Pad[4] = uVar7;
  (this->PrimitiveBoundsOverride).Pad[5] = uVar8;
  (this->PrimitiveBoundsOverride).Pad[6] = uVar9;
  this->bIsInstanceDataGPUOnly = param_1->bIsInstanceDataGPUOnly;
  this->NumInstancesGPUOnly = param_1->NumInstancesGPUOnly;
  this->NumCustomDataFloatsGPUOnly = param_1->NumCustomDataFloatsGPUOnly;
  return this;
}

// FSkinnedMeshComponentDescriptorBase @ 1473d73a0

FSkinnedMeshComponentDescriptorBase * __thiscall
FSkinnedMeshComponentDescriptorBase::FSkinnedMeshComponentDescriptorBase
          (FSkinnedMeshComponentDescriptorBase *this,ENoInit param_1)

{
  this->bVisibleInRayTracing = true;
  this->bAffectDynamicIndirectLighting = true;
  this->_padding_ = (longlong)&___7FSkinnedMeshComponentDescriptorBase__6B_;
  this->Hash = 0;
  (this->ComponentClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->PrimitiveBoundsOverride).IsValid = '\0';
  this->bIsInstanceDataGPUOnly = false;
  this->NumInstancesGPUOnly = 0;
  this->NumCustomDataFloatsGPUOnly = 0;
  this->bAffectDistanceFieldLighting = true;
  return this;
}

// FSkinnedMeshComponentDescriptorBase @ 1473d73e0

FSkinnedMeshComponentDescriptorBase * __thiscall
FSkinnedMeshComponentDescriptorBase::FSkinnedMeshComponentDescriptorBase
          (FSkinnedMeshComponentDescriptorBase *this)

{
  UClass *this_00;
  UInstancedSkinnedMeshComponent *pUVar1;
  
  this->bVisibleInRayTracing = true;
  this->bAffectDynamicIndirectLighting = true;
  this->_padding_ = (longlong)&___7FSkinnedMeshComponentDescriptorBase__6B_;
  this->bAffectDistanceFieldLighting = true;
  this->Hash = 0;
  (this->ComponentClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->PrimitiveBoundsOverride).IsValid = '\0';
  this->bIsInstanceDataGPUOnly = false;
  this->NumInstancesGPUOnly = 0;
  this->NumCustomDataFloatsGPUOnly = 0;
  this_00 = Z_Construct_UClass_UInstancedSkinnedMeshComponent_NoRegister();
  pUVar1 = UClass::GetDefaultObject<UInstancedSkinnedMeshComponent>(this_00);
  InitFrom(this,pUVar1,true);
  return this;
}

// ~FSkinnedMeshComponentDescriptorBase @ 1473dacf0

void __thiscall
FSkinnedMeshComponentDescriptorBase::~FSkinnedMeshComponentDescriptorBase
          (FSkinnedMeshComponentDescriptorBase *this)

{
  this->_padding_ = (longlong)&___7FSkinnedMeshComponentDescriptorBase__6B_;
  return;
}

// operator= @ 1473db770

FSkinnedMeshComponentDescriptorBase * __thiscall
FSkinnedMeshComponentDescriptorBase::operator=
          (FSkinnedMeshComponentDescriptorBase *this,FSkinnedMeshComponentDescriptorBase *param_1)

{
  UClass *pUVar1;
  double dVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  byte bVar10;
  
  this->Hash = param_1->Hash;
  (this->Mobility).Value = (param_1->Mobility).Value;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->ComponentClass).Class.field0_0x0.DebugPtr, pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->ComponentClass).Class.field0_0x0 = (param_1->ComponentClass).Class.field0_0x0;
  this->InstanceMinDrawDistance = param_1->InstanceMinDrawDistance;
  this->InstanceStartCullDistance = param_1->InstanceStartCullDistance;
  this->InstanceEndCullDistance = param_1->InstanceEndCullDistance;
  bVar10 = (this->bCastShadow ^ param_1->bCastShadow) & 1 ^ this->field_0x24;
  this->field_0x24 = bVar10;
  bVar10 = (bVar10 ^ param_1->field_0x24) & 2 ^ bVar10;
  this->field_0x24 = bVar10;
  bVar10 = (bVar10 ^ param_1->field_0x24) & 4 ^ bVar10;
  this->field_0x24 = bVar10;
  bVar10 = (bVar10 ^ param_1->field_0x24) & 8 ^ bVar10;
  this->field_0x24 = bVar10;
  bVar10 = (bVar10 ^ param_1->field_0x24) & 0x10 ^ bVar10;
  this->field_0x24 = bVar10;
  bVar10 = (bVar10 ^ param_1->field_0x24) & 0x20 ^ bVar10;
  this->field_0x24 = bVar10;
  bVar10 = (bVar10 ^ param_1->field_0x24) & 0x40 ^ bVar10;
  this->field_0x24 = bVar10;
  this->field_0x24 = (bVar10 ^ param_1->field_0x24) & 0x7f ^ param_1->field_0x24;
  bVar10 = (this->bCastCinematicShadow ^ param_1->bCastCinematicShadow) & 1 ^ this->field_0x25;
  this->field_0x25 = bVar10;
  this->field_0x25 = (bVar10 ^ param_1->field_0x25) & 2 ^ bVar10;
  this->bVisibleInRayTracing = param_1->bVisibleInRayTracing;
  this->bAffectDynamicIndirectLighting = param_1->bAffectDynamicIndirectLighting;
  this->bAffectDistanceFieldLighting = param_1->bAffectDistanceFieldLighting;
  dVar2 = (param_1->PrimitiveBoundsOverride).Min.field0_0x0._s_0.Y;
  (this->PrimitiveBoundsOverride).Min.field0_0x0._s_0.X =
       (param_1->PrimitiveBoundsOverride).Min.field0_0x0._s_0.X;
  (this->PrimitiveBoundsOverride).Min.field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_1->PrimitiveBoundsOverride).Max.field0_0x0._s_0.X;
  (this->PrimitiveBoundsOverride).Min.field0_0x0._s_0.Z =
       (param_1->PrimitiveBoundsOverride).Min.field0_0x0._s_0.Z;
  (this->PrimitiveBoundsOverride).Max.field0_0x0._s_0.X = dVar2;
  dVar2 = (param_1->PrimitiveBoundsOverride).Max.field0_0x0._s_0.Z;
  (this->PrimitiveBoundsOverride).Max.field0_0x0._s_0.Y =
       (param_1->PrimitiveBoundsOverride).Max.field0_0x0._s_0.Y;
  (this->PrimitiveBoundsOverride).Max.field0_0x0._s_0.Z = dVar2;
  uVar3 = (param_1->PrimitiveBoundsOverride).Pad[0];
  uVar4 = (param_1->PrimitiveBoundsOverride).Pad[1];
  uVar5 = (param_1->PrimitiveBoundsOverride).Pad[2];
  uVar6 = (param_1->PrimitiveBoundsOverride).Pad[3];
  uVar7 = (param_1->PrimitiveBoundsOverride).Pad[4];
  uVar8 = (param_1->PrimitiveBoundsOverride).Pad[5];
  uVar9 = (param_1->PrimitiveBoundsOverride).Pad[6];
  (this->PrimitiveBoundsOverride).IsValid = (param_1->PrimitiveBoundsOverride).IsValid;
  (this->PrimitiveBoundsOverride).Pad[0] = uVar3;
  (this->PrimitiveBoundsOverride).Pad[1] = uVar4;
  (this->PrimitiveBoundsOverride).Pad[2] = uVar5;
  (this->PrimitiveBoundsOverride).Pad[3] = uVar6;
  (this->PrimitiveBoundsOverride).Pad[4] = uVar7;
  (this->PrimitiveBoundsOverride).Pad[5] = uVar8;
  (this->PrimitiveBoundsOverride).Pad[6] = uVar9;
  this->bIsInstanceDataGPUOnly = param_1->bIsInstanceDataGPUOnly;
  this->NumInstancesGPUOnly = param_1->NumInstancesGPUOnly;
  this->NumCustomDataFloatsGPUOnly = param_1->NumCustomDataFloatsGPUOnly;
  return this;
}

// operator== @ 1473dc380

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
FSkinnedMeshComponentDescriptorBase::operator==
          (FSkinnedMeshComponentDescriptorBase *this,FSkinnedMeshComponentDescriptorBase *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uchar uVar3;
  int iVar4;
  UClass *pUVar5;
  bool bVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  
  pUVar5 = (this->ComponentClass).Class.field0_0x0.DebugPtr;
  pUVar9 = (UClass *)0x0;
  pUVar8 = pUVar9;
  if ((pUVar5 != (UClass *)0x0) &&
     (pUVar7 = Z_Construct_UClass_UInstancedSkinnedMeshComponent_NoRegister(),
     pUVar7 != (UClass *)0x0)) {
    iVar4 = (int)pUVar7->_padding_;
    if (((int)pUVar5->_padding_ < iVar4) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar4 * 8) != &pUVar7->_padding_)
       ) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      pUVar8 = (this->ComponentClass).Class.field0_0x0.DebugPtr;
    }
  }
  pUVar5 = (param_1->ComponentClass).Class.field0_0x0.DebugPtr;
  if ((pUVar5 != (UClass *)0x0) &&
     (pUVar7 = Z_Construct_UClass_UInstancedSkinnedMeshComponent_NoRegister(),
     pUVar7 != (UClass *)0x0)) {
    iVar4 = (int)pUVar7->_padding_;
    if (((int)pUVar5->_padding_ < iVar4) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar4 * 8) != &pUVar7->_padding_)
       ) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      pUVar9 = (param_1->ComponentClass).Class.field0_0x0.DebugPtr;
    }
  }
  if ((((pUVar8 == pUVar9) && ((this->Mobility).Value == (param_1->Mobility).Value)) &&
      (this->InstanceMinDrawDistance == param_1->InstanceMinDrawDistance)) &&
     ((this->InstanceStartCullDistance == param_1->InstanceStartCullDistance &&
      (this->InstanceEndCullDistance == param_1->InstanceEndCullDistance)))) {
    uVar1 = this->field_0x24;
    uVar2 = param_1->field_0x24;
    if (((((((this->bCastShadow ^ param_1->bCastShadow) & 1) == 0) &&
          ((((uVar2 ^ uVar1) & 2) == 0 && (((uVar2 ^ uVar1) & 4) == 0)))) &&
         (((uVar2 ^ uVar1) & 8) == 0)) &&
        (((((uVar2 ^ uVar1) & 0x10) == 0 && (((uVar2 ^ uVar1) & 0x20) == 0)) &&
         (((uVar2 ^ uVar1) & 0x40) == 0)))) && (-1 < (char)(uVar2 ^ uVar1))) {
      if (((((this->bCastCinematicShadow ^ param_1->bCastCinematicShadow) & 1) == 0) &&
          (((param_1->field_0x25 ^ this->field_0x25) & 2) == 0)) &&
         (this->bIsInstanceDataGPUOnly == param_1->bIsInstanceDataGPUOnly)) {
        uVar3 = (param_1->PrimitiveBoundsOverride).IsValid;
        if ((this->PrimitiveBoundsOverride).IsValid == '\0') {
          if (uVar3 != '\0') {
            return false;
          }
        }
        else {
          if (uVar3 == '\0') {
            return false;
          }
          if ((param_1->PrimitiveBoundsOverride).Min.field0_0x0._s_0.X !=
              (this->PrimitiveBoundsOverride).Min.field0_0x0._s_0.X) {
            return false;
          }
          if ((param_1->PrimitiveBoundsOverride).Min.field0_0x0._s_0.Y !=
              (this->PrimitiveBoundsOverride).Min.field0_0x0._s_0.Y) {
            return false;
          }
          if ((param_1->PrimitiveBoundsOverride).Min.field0_0x0._s_0.Z !=
              (this->PrimitiveBoundsOverride).Min.field0_0x0._s_0.Z) {
            return false;
          }
          if ((param_1->PrimitiveBoundsOverride).Max.field0_0x0._s_0.X !=
              (this->PrimitiveBoundsOverride).Max.field0_0x0._s_0.X) {
            return false;
          }
          if ((param_1->PrimitiveBoundsOverride).Max.field0_0x0._s_0.Y !=
              (this->PrimitiveBoundsOverride).Max.field0_0x0._s_0.Y) {
            return false;
          }
          if ((param_1->PrimitiveBoundsOverride).Max.field0_0x0._s_0.Z !=
              (this->PrimitiveBoundsOverride).Max.field0_0x0._s_0.Z) {
            return false;
          }
        }
        if (((this->NumInstancesGPUOnly == param_1->NumInstancesGPUOnly) &&
            (this->NumCustomDataFloatsGPUOnly == param_1->NumCustomDataFloatsGPUOnly)) &&
           ((this->bVisibleInRayTracing == param_1->bVisibleInRayTracing &&
            ((this->bAffectDynamicIndirectLighting == param_1->bAffectDynamicIndirectLighting &&
             (this->bAffectDistanceFieldLighting == param_1->bAffectDistanceFieldLighting)))))) {
          return true;
        }
      }
    }
  }
  return false;
}

// operator!= @ 1473dc6c0

bool __thiscall
FSkinnedMeshComponentDescriptorBase::operator!=
          (FSkinnedMeshComponentDescriptorBase *this,FSkinnedMeshComponentDescriptorBase *param_1)

{
  bool bVar1;
  
  bVar1 = operator==(this,param_1);
  return !bVar1;
}

// InitComponent @ 147406370

void __thiscall
FSkinnedMeshComponentDescriptorBase::InitComponent
          (FSkinnedMeshComponentDescriptorBase *this,UInstancedSkinnedMeshComponent *param_1)

{
  double dVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  byte bVar9;
  byte bVar10;
  
  param_1->field_0x1ab = (this->Mobility).Value;
  param_1->InstanceMinDrawDistance = this->InstanceMinDrawDistance;
  UInstancedSkinnedMeshComponent::SetCullDistances
            (param_1,this->InstanceStartCullDistance,this->InstanceEndCullDistance);
  bVar10 = (param_1->field_0x27e ^ this->bCastShadow) & 1 ^ param_1->field_0x27e;
  param_1->field_0x27e = bVar10;
  bVar10 = (this->field_0x24 << 4 ^ bVar10) & 0x20 ^ bVar10;
  param_1->field_0x27e = bVar10;
  bVar10 = (this->field_0x24 << 4 ^ bVar10) & 0x40 ^ bVar10;
  param_1->field_0x27e = bVar10;
  bVar9 = (this->field_0x24 & 0xf8) << 4 | bVar10 & 0x7f;
  param_1->field_0x27e = bVar9;
  bVar10 = (this->bCastContactShadow ^ param_1->field_0x27f) & 1 ^ param_1->field_0x27f;
  param_1->field_0x27f = bVar10;
  bVar10 = ((byte)this->field_0x24 >> 4 ^ bVar10) & 2 ^ bVar10;
  param_1->field_0x27f = bVar10;
  bVar10 = ((byte)this->field_0x24 >> 4 ^ bVar10) & 4 ^ bVar10;
  param_1->field_0x27f = bVar10;
  bVar10 = ((byte)this->field_0x24 >> 4 ^ bVar10) & 8 ^ bVar10;
  param_1->field_0x27f = bVar10;
  bVar10 = (this->field_0x25 << 4 ^ bVar10) & 0x10 ^ bVar10;
  param_1->field_0x27f = bVar10;
  param_1->field_0x27f = (this->field_0x25 << 5 ^ bVar10) & 0x40 ^ bVar10;
  param_1->field_0x27c =
       (this->bVisibleInRayTracing << 3 ^ param_1->field_0x27c) & 8U ^ param_1->field_0x27c;
  bVar9 = (this->bAffectDynamicIndirectLighting << 2 ^ bVar9) & 4 ^ bVar9;
  param_1->field_0x27e = bVar9;
  param_1->field_0x27e = (this->bAffectDistanceFieldLighting << 4 ^ bVar9) & 0x10 ^ bVar9;
  dVar1 = (this->PrimitiveBoundsOverride).Min.field0_0x0._s_0.Y;
  (param_1->PrimitiveBoundsOverride).Min.field0_0x0._s_0.X =
       (this->PrimitiveBoundsOverride).Min.field0_0x0._s_0.X;
  (param_1->PrimitiveBoundsOverride).Min.field0_0x0._s_0.Y = dVar1;
  dVar1 = (this->PrimitiveBoundsOverride).Max.field0_0x0._s_0.X;
  (param_1->PrimitiveBoundsOverride).Min.field0_0x0._s_0.Z =
       (this->PrimitiveBoundsOverride).Min.field0_0x0._s_0.Z;
  (param_1->PrimitiveBoundsOverride).Max.field0_0x0._s_0.X = dVar1;
  dVar1 = (this->PrimitiveBoundsOverride).Max.field0_0x0._s_0.Z;
  (param_1->PrimitiveBoundsOverride).Max.field0_0x0._s_0.Y =
       (this->PrimitiveBoundsOverride).Max.field0_0x0._s_0.Y;
  (param_1->PrimitiveBoundsOverride).Max.field0_0x0._s_0.Z = dVar1;
  uVar2 = (this->PrimitiveBoundsOverride).Pad[0];
  uVar3 = (this->PrimitiveBoundsOverride).Pad[1];
  uVar4 = (this->PrimitiveBoundsOverride).Pad[2];
  uVar5 = (this->PrimitiveBoundsOverride).Pad[3];
  uVar6 = (this->PrimitiveBoundsOverride).Pad[4];
  uVar7 = (this->PrimitiveBoundsOverride).Pad[5];
  uVar8 = (this->PrimitiveBoundsOverride).Pad[6];
  (param_1->PrimitiveBoundsOverride).IsValid = (this->PrimitiveBoundsOverride).IsValid;
  (param_1->PrimitiveBoundsOverride).Pad[0] = uVar2;
  (param_1->PrimitiveBoundsOverride).Pad[1] = uVar3;
  (param_1->PrimitiveBoundsOverride).Pad[2] = uVar4;
  (param_1->PrimitiveBoundsOverride).Pad[3] = uVar5;
  (param_1->PrimitiveBoundsOverride).Pad[4] = uVar6;
  (param_1->PrimitiveBoundsOverride).Pad[5] = uVar7;
  (param_1->PrimitiveBoundsOverride).Pad[6] = uVar8;
  UInstancedSkinnedMeshComponent::SetInstanceDataGPUOnly(param_1,this->bIsInstanceDataGPUOnly);
  if (this->bIsInstanceDataGPUOnly != false) {
    UInstancedSkinnedMeshComponent::SetNumGPUInstances(param_1,this->NumInstancesGPUOnly);
    UInstancedSkinnedMeshComponent::SetNumCustomDataFloats(param_1,this->NumCustomDataFloatsGPUOnly)
    ;
  }
  return;
}

// InitFrom @ 147406600

void __thiscall
FSkinnedMeshComponentDescriptorBase::InitFrom
          (FSkinnedMeshComponentDescriptorBase *this,UInstancedSkinnedMeshComponent *param_1,
          bool param_2)

{
  UClass *pUVar1;
  code *pcVar2;
  double dVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  bool bVar11;
  byte bVar12;
  
  if (param_1 == (UInstancedSkinnedMeshComponent *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Template",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimBank.cpp"
                        ,0x65d,L"");
    if (bVar11) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (this->Mobility).Value = param_1->field_0x1ab;
  this->InstanceMinDrawDistance = param_1->InstanceMinDrawDistance;
  this->InstanceStartCullDistance = param_1->InstanceStartCullDistance;
  this->InstanceEndCullDistance = param_1->InstanceEndCullDistance;
  pUVar1 = *(UClass **)&param_1->field_0x10;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->ComponentClass).Class.field0_0x0.DebugPtr = pUVar1;
  bVar12 = (this->bCastShadow ^ param_1->field_0x27e) & 1 ^ this->field_0x24;
  this->field_0x24 = bVar12;
  bVar12 = ((byte)param_1->field_0x27e >> 4 ^ bVar12) & 2 ^ bVar12;
  this->field_0x24 = bVar12;
  bVar12 = ((byte)param_1->field_0x27e >> 4 ^ bVar12) & 4 ^ bVar12;
  this->field_0x24 = bVar12;
  bVar12 = ((byte)param_1->field_0x27e >> 4 ^ bVar12) & 8 ^ bVar12;
  this->field_0x24 = bVar12;
  bVar12 = (param_1->field_0x27f << 4 ^ bVar12) & 0x10 ^ bVar12;
  this->field_0x24 = bVar12;
  bVar12 = (param_1->field_0x27f << 4 ^ bVar12) & 0x20 ^ bVar12;
  this->field_0x24 = bVar12;
  bVar12 = (param_1->field_0x27f << 4 ^ bVar12) & 0x40 ^ bVar12;
  this->field_0x24 = bVar12;
  this->field_0x24 = (param_1->field_0x27f & 0xf8) << 4 | bVar12 & 0x7f;
  bVar12 = ((byte)param_1->field_0x27f >> 4 ^ this->bCastCinematicShadow) & 1 ^ this->field_0x25;
  this->field_0x25 = bVar12;
  this->field_0x25 = ((byte)param_1->field_0x27f >> 5 ^ bVar12) & 2 ^ bVar12;
  this->bVisibleInRayTracing = (bool)((byte)param_1->field_0x27c >> 3 & 1);
  this->bAffectDynamicIndirectLighting = (bool)((byte)param_1->field_0x27e >> 2 & 1);
  this->bAffectDistanceFieldLighting = (bool)((byte)param_1->field_0x27e >> 4 & 1);
  dVar3 = (param_1->PrimitiveBoundsOverride).Min.field0_0x0._s_0.Y;
  (this->PrimitiveBoundsOverride).Min.field0_0x0._s_0.X =
       (param_1->PrimitiveBoundsOverride).Min.field0_0x0._s_0.X;
  (this->PrimitiveBoundsOverride).Min.field0_0x0._s_0.Y = dVar3;
  dVar3 = (param_1->PrimitiveBoundsOverride).Max.field0_0x0._s_0.X;
  (this->PrimitiveBoundsOverride).Min.field0_0x0._s_0.Z =
       (param_1->PrimitiveBoundsOverride).Min.field0_0x0._s_0.Z;
  (this->PrimitiveBoundsOverride).Max.field0_0x0._s_0.X = dVar3;
  dVar3 = (param_1->PrimitiveBoundsOverride).Max.field0_0x0._s_0.Z;
  (this->PrimitiveBoundsOverride).Max.field0_0x0._s_0.Y =
       (param_1->PrimitiveBoundsOverride).Max.field0_0x0._s_0.Y;
  (this->PrimitiveBoundsOverride).Max.field0_0x0._s_0.Z = dVar3;
  uVar4 = (param_1->PrimitiveBoundsOverride).Pad[0];
  uVar5 = (param_1->PrimitiveBoundsOverride).Pad[1];
  uVar6 = (param_1->PrimitiveBoundsOverride).Pad[2];
  uVar7 = (param_1->PrimitiveBoundsOverride).Pad[3];
  uVar8 = (param_1->PrimitiveBoundsOverride).Pad[4];
  uVar9 = (param_1->PrimitiveBoundsOverride).Pad[5];
  uVar10 = (param_1->PrimitiveBoundsOverride).Pad[6];
  (this->PrimitiveBoundsOverride).IsValid = (param_1->PrimitiveBoundsOverride).IsValid;
  (this->PrimitiveBoundsOverride).Pad[0] = uVar4;
  (this->PrimitiveBoundsOverride).Pad[1] = uVar5;
  (this->PrimitiveBoundsOverride).Pad[2] = uVar6;
  (this->PrimitiveBoundsOverride).Pad[3] = uVar7;
  (this->PrimitiveBoundsOverride).Pad[4] = uVar8;
  (this->PrimitiveBoundsOverride).Pad[5] = uVar9;
  (this->PrimitiveBoundsOverride).Pad[6] = uVar10;
  bVar11 = param_1->bIsInstanceDataGPUOnly;
  this->bIsInstanceDataGPUOnly = bVar11;
  if (bVar11 != false) {
    this->NumInstancesGPUOnly = param_1->NumInstancesGPUOnly;
    this->NumCustomDataFloatsGPUOnly = param_1->NumCustomDataFloats;
  }
  return;
}

