// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 10

// BuildFromLegacyQueryFilter @ 1438a1160

FShapeFilterData * __cdecl
Chaos::Filter::FShapeFilterBuilder::BuildFromLegacyQueryFilter
          (FShapeFilterData *__return_storage_ptr__,FCollisionFilterData *param_1)

{
  uint uVar1;
  
  __return_storage_ptr__->QueryBlockChannels = param_1->Word1;
  __return_storage_ptr__->QueryOverlapChannels = param_1->Word2;
  uVar1 = param_1->Word3;
  __return_storage_ptr__->Word3 = uVar1;
  __return_storage_ptr__->SimWord3 = uVar1;
  __return_storage_ptr__->SimBlockChannels = 0;
  return __return_storage_ptr__;
}

// BuildFromLegacyShapeFilter @ 1438a1190

FCombinedShapeFilterData * __cdecl
Chaos::Filter::FShapeFilterBuilder::BuildFromLegacyShapeFilter
          (FCombinedShapeFilterData *__return_storage_ptr__,FCollisionFilterData *param_1,
          FCollisionFilterData *param_2)

{
  (__return_storage_ptr__->ShapeFilterData).QueryBlockChannels = 0;
  (__return_storage_ptr__->ShapeFilterData).QueryOverlapChannels = 0;
  (__return_storage_ptr__->ShapeFilterData).SimBlockChannels = 0;
  (__return_storage_ptr__->ShapeFilterData).Word3 = 0;
  *(undefined8 *)&(__return_storage_ptr__->ShapeFilterData).SimWord3 = 0;
  (__return_storage_ptr__->InstanceData).ComponentId = 0;
  (__return_storage_ptr__->InstanceData).BodyIndex = 0;
  (__return_storage_ptr__->InstanceData).ActorId = param_1->Word0;
  (__return_storage_ptr__->InstanceData).ComponentId = param_2->Word2;
  (__return_storage_ptr__->InstanceData).BodyIndex = param_2->Word0;
  (__return_storage_ptr__->ShapeFilterData).QueryBlockChannels = param_1->Word1;
  (__return_storage_ptr__->ShapeFilterData).QueryOverlapChannels = param_1->Word2;
  (__return_storage_ptr__->ShapeFilterData).Word3 = param_1->Word3;
  (__return_storage_ptr__->ShapeFilterData).SimBlockChannels = param_2->Word1;
  (__return_storage_ptr__->ShapeFilterData).SimWord3 = param_2->Word3;
  return __return_storage_ptr__;
}

// BuildFromLegacySimFilter @ 1438a11e0

FShapeFilterData * __cdecl
Chaos::Filter::FShapeFilterBuilder::BuildFromLegacySimFilter
          (FShapeFilterData *__return_storage_ptr__,FCollisionFilterData *param_1)

{
  uint uVar1;
  
  __return_storage_ptr__->QueryBlockChannels = 0;
  __return_storage_ptr__->QueryOverlapChannels = 0;
  __return_storage_ptr__->SimBlockChannels = param_1->Word1;
  uVar1 = param_1->Word3;
  __return_storage_ptr__->Word3 = uVar1;
  __return_storage_ptr__->SimWord3 = uVar1;
  return __return_storage_ptr__;
}

// BuildLegacyBlockAllSimShapeFilter @ 1438a3790

FShapeFilterData * __cdecl
Chaos::Filter::FShapeFilterBuilder::BuildLegacyBlockAllSimShapeFilter
          (FShapeFilterData *__return_storage_ptr__,uchar param_1,uchar param_2,EFilterFlags param_3
          )

{
  uint uVar1;
  
  __return_storage_ptr__->SimBlockChannels = 0xffffffff;
  __return_storage_ptr__->QueryBlockChannels = 0;
  __return_storage_ptr__->QueryOverlapChannels = 0;
  uVar1 = (param_1 & 0x1f) << 0x15 | (uint)param_3;
  __return_storage_ptr__->Word3 = uVar1;
  __return_storage_ptr__->SimWord3 = uVar1;
  return __return_storage_ptr__;
}

// BuildLegacyShapeFilter @ 1438a37c0

FShapeFilterData * __cdecl
Chaos::Filter::FShapeFilterBuilder::BuildLegacyShapeFilter
          (FShapeFilterData *__return_storage_ptr__,uchar param_1,uint param_2,uint param_3,
          uint param_4,uchar param_5,EFilterFlags param_6)

{
  uint uVar1;
  
  __return_storage_ptr__->SimBlockChannels = param_4;
  __return_storage_ptr__->QueryBlockChannels = param_3;
  uVar1 = (param_1 & 0x1f | (uint)param_5 << 5) << 0x15 | (uint)param_6;
  __return_storage_ptr__->QueryOverlapChannels = param_2;
  __return_storage_ptr__->Word3 = uVar1;
  __return_storage_ptr__->SimWord3 = uVar1;
  return __return_storage_ptr__;
}

// GetLegacyShapeFilter @ 1438ba7d0

void __cdecl
Chaos::Filter::FShapeFilterBuilder::GetLegacyShapeFilter
          (FCombinedShapeFilterData *param_1,FCollisionFilterData *param_2,
          FCollisionFilterData *param_3)

{
  param_2->Word0 = (param_1->InstanceData).ActorId;
  param_3->Word2 = (param_1->InstanceData).ComponentId;
  param_3->Word0 = (param_1->InstanceData).BodyIndex;
  param_2->Word1 = (param_1->ShapeFilterData).QueryBlockChannels;
  param_2->Word2 = (param_1->ShapeFilterData).QueryOverlapChannels;
  param_2->Word3 = (param_1->ShapeFilterData).Word3;
  param_3->Word1 = (param_1->ShapeFilterData).SimBlockChannels;
  param_3->Word3 = (param_1->ShapeFilterData).SimWord3;
  return;
}

// GetLegacyShapeQueryFilter @ 1438ba810

FCollisionFilterData * __cdecl
Chaos::Filter::FShapeFilterBuilder::GetLegacyShapeQueryFilter
          (FCollisionFilterData *__return_storage_ptr__,FCombinedShapeFilterData *param_1)

{
  __return_storage_ptr__->Word0 = (param_1->InstanceData).ActorId;
  __return_storage_ptr__->Word1 = (param_1->ShapeFilterData).QueryBlockChannels;
  __return_storage_ptr__->Word2 = (param_1->ShapeFilterData).QueryOverlapChannels;
  __return_storage_ptr__->Word3 = (param_1->ShapeFilterData).Word3;
  return __return_storage_ptr__;
}

// GetLegacyShapeSimFilter @ 1438ba830

FCollisionFilterData * __cdecl
Chaos::Filter::FShapeFilterBuilder::GetLegacyShapeSimFilter
          (FCollisionFilterData *__return_storage_ptr__,FCombinedShapeFilterData *param_1)

{
  __return_storage_ptr__->Word2 = (param_1->InstanceData).ComponentId;
  __return_storage_ptr__->Word0 = (param_1->InstanceData).BodyIndex;
  __return_storage_ptr__->Word1 = (param_1->ShapeFilterData).SimBlockChannels;
  __return_storage_ptr__->Word3 = (param_1->ShapeFilterData).SimWord3;
  return __return_storage_ptr__;
}

// SetLegacyShapeQueryFilter @ 1438d2d10

void __cdecl
Chaos::Filter::FShapeFilterBuilder::SetLegacyShapeQueryFilter
          (FCombinedShapeFilterData *param_1,FCollisionFilterData *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = param_2->Word0;
  uVar4 = (param_1->InstanceData).ComponentId;
  uVar5 = (param_1->InstanceData).BodyIndex;
  uVar3 = param_2->Word2;
  uVar2 = param_2->Word3;
  (param_1->ShapeFilterData).QueryBlockChannels = param_2->Word1;
  (param_1->ShapeFilterData).QueryOverlapChannels = uVar3;
  (param_1->ShapeFilterData).SimBlockChannels = (param_1->ShapeFilterData).SimBlockChannels;
  (param_1->ShapeFilterData).Word3 = uVar2;
  *(ulonglong *)&(param_1->ShapeFilterData).SimWord3 =
       CONCAT44(uVar1,(param_1->ShapeFilterData).SimWord3);
  (param_1->InstanceData).ComponentId = uVar4;
  (param_1->InstanceData).BodyIndex = uVar5;
  return;
}

// SetLegacyShapeSimFilter @ 1438d2d70

void __cdecl
Chaos::Filter::FShapeFilterBuilder::SetLegacyShapeSimFilter
          (FCombinedShapeFilterData *param_1,FCollisionFilterData *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = (param_1->InstanceData).ActorId;
  uVar2 = param_2->Word2;
  uVar3 = param_2->Word0;
  uVar4 = param_2->Word1;
  uVar5 = param_2->Word3;
  (param_1->ShapeFilterData).QueryBlockChannels = (param_1->ShapeFilterData).QueryBlockChannels;
  (param_1->ShapeFilterData).QueryOverlapChannels = (param_1->ShapeFilterData).QueryOverlapChannels;
  (param_1->ShapeFilterData).SimBlockChannels = uVar4;
  (param_1->ShapeFilterData).Word3 = (param_1->ShapeFilterData).Word3;
  *(ulonglong *)&(param_1->ShapeFilterData).SimWord3 = CONCAT44(uVar1,uVar5);
  (param_1->InstanceData).ComponentId = uVar2;
  (param_1->InstanceData).BodyIndex = uVar3;
  return;
}

