// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 17

// operator()<int> @ 149a19b40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
`FPCGAttributeReduceElement::ExecuteInternal'::__l18::<lambda_1>::operator()<int>
          (void *this,int param_1)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  undefined8 uVar4;
  UPCGParamData *pUVar5;
  FString local_58;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined1 local_10;
  
  iVar1 = *(int *)(*(longlong *)((longlong)this + 0x10) + 0x114);
  plVar2 = *(longlong **)((longlong)this + 0x18);
  local_28 = 0;
  if ((*plVar2 == 0) || (*(char *)((longlong)this + 0x40) == '\0')) {
    if (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x108) == '\0') {
      pUVar5 = FPCGContext::NewObject_AnyThread<UPCGParamData>
                         ((FPCGContext *)**(undefined8 **)((longlong)this + 0x30));
      *plVar2 = (longlong)pUVar5;
    }
    else {
      uVar4 = (**(code **)(**(longlong **)((longlong)this + 0x38) + 0x310))
                        (*(longlong **)((longlong)this + 0x38),
                         **(undefined8 **)((longlong)this + 0x30),1);
      **(undefined8 **)((longlong)this + 0x18) = uVar4;
    }
    local_28 = 1;
  }
  local_48 = *(undefined8 *)((longlong)this + 0x18);
  local_40 = *(undefined8 *)this;
  local_38 = *(undefined8 *)((longlong)this + 8);
  local_30 = *(undefined8 *)((longlong)this + 0x10);
  local_20 = *(undefined8 *)((longlong)this + 0x20);
  local_18 = *(undefined8 *)((longlong)this + 0x28);
  local_10 = *(undefined1 *)((longlong)this + 0x40);
  if (iVar1 == 4) {
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    bVar3 = ``FPCGAttributeReduceElement::ExecuteInternal'::__l18::<lambda_1>::operator()<int>'::
            __l2::<lambda_1>::operator()<FString>(&local_48,&local_58);
    return bVar3;
  }
  bVar3 = ``FPCGAttributeReduceElement::ExecuteInternal'::__l18::<lambda_1>::operator()<int>'::__l2
          ::<lambda_1>::operator()<int>(&local_48,0);
  return bVar3;
}

// operator()<float> @ 149a1b3f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
`FPCGAttributeReduceElement::ExecuteInternal'::__l18::<lambda_1>::operator()<float>
          (void *this,float param_1)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  undefined8 uVar4;
  UPCGParamData *pUVar5;
  FString local_58;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined1 local_10;
  
  iVar1 = *(int *)(*(longlong *)((longlong)this + 0x10) + 0x114);
  plVar2 = *(longlong **)((longlong)this + 0x18);
  local_28 = 0;
  if ((*plVar2 == 0) || (*(char *)((longlong)this + 0x40) == '\0')) {
    if (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x108) == '\0') {
      pUVar5 = FPCGContext::NewObject_AnyThread<UPCGParamData>
                         ((FPCGContext *)**(undefined8 **)((longlong)this + 0x30));
      *plVar2 = (longlong)pUVar5;
    }
    else {
      uVar4 = (**(code **)(**(longlong **)((longlong)this + 0x38) + 0x310))
                        (*(longlong **)((longlong)this + 0x38),
                         **(undefined8 **)((longlong)this + 0x30),1);
      **(undefined8 **)((longlong)this + 0x18) = uVar4;
    }
    local_28 = 1;
  }
  local_48 = *(undefined8 *)((longlong)this + 0x18);
  local_40 = *(undefined8 *)this;
  local_38 = *(undefined8 *)((longlong)this + 8);
  local_30 = *(undefined8 *)((longlong)this + 0x10);
  local_20 = *(undefined8 *)((longlong)this + 0x20);
  local_18 = *(undefined8 *)((longlong)this + 0x28);
  local_10 = *(undefined1 *)((longlong)this + 0x40);
  if (iVar1 == 4) {
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    bVar3 = ``FPCGAttributeReduceElement::ExecuteInternal'::__l18::<lambda_1>::operator()<float>'::
            __l2::<lambda_1>::operator()<FString>(&local_48,&local_58);
    return bVar3;
  }
  bVar3 = ``FPCGAttributeReduceElement::ExecuteInternal'::__l18::<lambda_1>::operator()<float>'::
          __l2::<lambda_1>::operator()<float>(&local_48,0.0);
  return bVar3;
}

// operator()<double> @ 149a1cfd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
`FPCGAttributeReduceElement::ExecuteInternal'::__l18::<lambda_1>::operator()<double>
          (void *this,double param_1)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  undefined8 uVar4;
  UPCGParamData *pUVar5;
  FString local_58;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined1 local_10;
  
  iVar1 = *(int *)(*(longlong *)((longlong)this + 0x10) + 0x114);
  plVar2 = *(longlong **)((longlong)this + 0x18);
  local_28 = 0;
  if ((*plVar2 == 0) || (*(char *)((longlong)this + 0x40) == '\0')) {
    if (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x108) == '\0') {
      pUVar5 = FPCGContext::NewObject_AnyThread<UPCGParamData>
                         ((FPCGContext *)**(undefined8 **)((longlong)this + 0x30));
      *plVar2 = (longlong)pUVar5;
    }
    else {
      uVar4 = (**(code **)(**(longlong **)((longlong)this + 0x38) + 0x310))
                        (*(longlong **)((longlong)this + 0x38),
                         **(undefined8 **)((longlong)this + 0x30),1);
      **(undefined8 **)((longlong)this + 0x18) = uVar4;
    }
    local_28 = 1;
  }
  local_48 = *(undefined8 *)((longlong)this + 0x18);
  local_40 = *(undefined8 *)this;
  local_38 = *(undefined8 *)((longlong)this + 8);
  local_30 = *(undefined8 *)((longlong)this + 0x10);
  local_20 = *(undefined8 *)((longlong)this + 0x20);
  local_18 = *(undefined8 *)((longlong)this + 0x28);
  local_10 = *(undefined1 *)((longlong)this + 0x40);
  if (iVar1 == 4) {
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    bVar3 = ``FPCGAttributeReduceElement::ExecuteInternal'::__l18::<lambda_1>::operator()<double>'::
            __l2::<lambda_1>::operator()<FString>(&local_48,&local_58);
    return bVar3;
  }
  bVar3 = ``FPCGAttributeReduceElement::ExecuteInternal'::__l18::<lambda_1>::operator()<double>'::
          __l2::<lambda_1>::operator()<double>(&local_48,0.0);
  return bVar3;
}

// operator()<UE::Math::TQuat<double>_> @ 149a1e920

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
`FPCGAttributeReduceElement::ExecuteInternal'::__l18::<lambda_1>::
operator()<UE::Math::TQuat<double>_>(void *this,TQuat<double> *param_1)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  undefined8 uVar4;
  UPCGParamData *pUVar5;
  TQuat<double> local_68;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined1 local_10;
  
  iVar1 = *(int *)(*(longlong *)((longlong)this + 0x10) + 0x114);
  plVar2 = *(longlong **)((longlong)this + 0x18);
  local_28 = 0;
  if ((*plVar2 == 0) || (*(char *)((longlong)this + 0x40) == '\0')) {
    if (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x108) == '\0') {
      pUVar5 = FPCGContext::NewObject_AnyThread<UPCGParamData>
                         ((FPCGContext *)**(undefined8 **)((longlong)this + 0x30));
      *plVar2 = (longlong)pUVar5;
    }
    else {
      uVar4 = (**(code **)(**(longlong **)((longlong)this + 0x38) + 0x310))
                        (*(longlong **)((longlong)this + 0x38),
                         **(undefined8 **)((longlong)this + 0x30),1);
      **(undefined8 **)((longlong)this + 0x18) = uVar4;
    }
    local_28 = 1;
  }
  local_48 = *(undefined8 *)((longlong)this + 0x18);
  local_40 = *(undefined8 *)this;
  local_38 = *(undefined8 *)((longlong)this + 8);
  local_30 = *(undefined8 *)((longlong)this + 0x10);
  local_20 = *(undefined8 *)((longlong)this + 0x20);
  local_18 = *(undefined8 *)((longlong)this + 0x28);
  local_10 = *(undefined1 *)((longlong)this + 0x40);
  if (iVar1 == 4) {
    local_68.X = 0.0;
    local_68.Y = 0.0;
    bVar3 = ``FPCGAttributeReduceElement::ExecuteInternal'::__l18::<lambda_1>::
            operator()<UE::Math::TQuat<double>_>'::__l2::<lambda_1>::operator()<FString>
                      (&local_48,(FString *)&local_68);
    return bVar3;
  }
  local_68.X = 0.0;
  local_68.Y = 0.0;
  local_68.Z = 0.0;
  local_68.W = 0.0;
  bVar3 = ``FPCGAttributeReduceElement::ExecuteInternal'::__l18::<lambda_1>::
          operator()<UE::Math::TQuat<double>_>'::__l2::<lambda_1>::
          operator()<UE::Math::TQuat<double>_>(&local_48,&local_68);
  return bVar3;
}

// operator()<UE::Math::TRotator<double>_> @ 149a200d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
`FPCGAttributeReduceElement::ExecuteInternal'::__l18::<lambda_1>::
operator()<UE::Math::TRotator<double>_>(void *this,TRotator<double> *param_1)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  undefined8 uVar4;
  UPCGParamData *pUVar5;
  TRotator<double> local_88 [2];
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined1 local_10;
  
  iVar1 = *(int *)(*(longlong *)((longlong)this + 0x10) + 0x114);
  plVar2 = *(longlong **)((longlong)this + 0x18);
  local_28 = 0;
  if ((*plVar2 == 0) || (*(char *)((longlong)this + 0x40) == '\0')) {
    if (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x108) == '\0') {
      pUVar5 = FPCGContext::NewObject_AnyThread<UPCGParamData>
                         ((FPCGContext *)**(undefined8 **)((longlong)this + 0x30));
      *plVar2 = (longlong)pUVar5;
    }
    else {
      uVar4 = (**(code **)(**(longlong **)((longlong)this + 0x38) + 0x310))
                        (*(longlong **)((longlong)this + 0x38),
                         **(undefined8 **)((longlong)this + 0x30),1);
      **(undefined8 **)((longlong)this + 0x18) = uVar4;
    }
    local_28 = 1;
  }
  local_48 = *(undefined8 *)((longlong)this + 0x18);
  local_40 = *(undefined8 *)this;
  local_38 = *(undefined8 *)((longlong)this + 8);
  local_30 = *(undefined8 *)((longlong)this + 0x10);
  local_20 = *(undefined8 *)((longlong)this + 0x20);
  local_18 = *(undefined8 *)((longlong)this + 0x28);
  local_10 = *(undefined1 *)((longlong)this + 0x40);
  if (iVar1 == 4) {
    local_88[0].Pitch = 0.0;
    local_88[0].Yaw = 0.0;
    bVar3 = ``FPCGAttributeReduceElement::ExecuteInternal'::__l18::<lambda_1>::
            operator()<UE::Math::TRotator<double>_>'::__l2::<lambda_1>::operator()<FString>
                      (&local_48,(FString *)local_88);
    return bVar3;
  }
  local_88[0].Pitch = 0.0;
  local_88[0].Yaw = 0.0;
  local_58 = 0;
  local_88[0].Roll = 0.0;
  bVar3 = ``FPCGAttributeReduceElement::ExecuteInternal'::__l18::<lambda_1>::
          operator()<UE::Math::TRotator<double>_>'::__l2::<lambda_1>::
          operator()<UE::Math::TRotator<double>_>(&local_48,local_88);
  return bVar3;
}

// operator()<UE::Math::TTransform<double>_> @ 149a21ab0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
`FPCGAttributeReduceElement::ExecuteInternal'::__l18::<lambda_1>::
operator()<UE::Math::TTransform<double>_>(void *this,TTransform<double> *param_1)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  undefined8 uVar4;
  UPCGParamData *pUVar5;
  FString local_b8;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70;
  TTransform<double> local_68;
  
  iVar1 = *(int *)(*(longlong *)((longlong)this + 0x10) + 0x114);
  plVar2 = *(longlong **)((longlong)this + 0x18);
  local_88 = 0;
  if ((*plVar2 == 0) || (*(char *)((longlong)this + 0x40) == '\0')) {
    if (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x108) == '\0') {
      pUVar5 = FPCGContext::NewObject_AnyThread<UPCGParamData>
                         ((FPCGContext *)**(undefined8 **)((longlong)this + 0x30));
      *plVar2 = (longlong)pUVar5;
    }
    else {
      uVar4 = (**(code **)(**(longlong **)((longlong)this + 0x38) + 0x310))
                        (*(longlong **)((longlong)this + 0x38),
                         **(undefined8 **)((longlong)this + 0x30),1);
      **(undefined8 **)((longlong)this + 0x18) = uVar4;
    }
    local_88 = 1;
  }
  local_a8 = *(undefined8 *)((longlong)this + 0x18);
  local_a0 = *(undefined8 *)this;
  local_98 = *(undefined8 *)((longlong)this + 8);
  local_90 = *(undefined8 *)((longlong)this + 0x10);
  local_80 = *(undefined8 *)((longlong)this + 0x20);
  local_78 = *(undefined8 *)((longlong)this + 0x28);
  local_70 = *(undefined1 *)((longlong)this + 0x40);
  if (iVar1 == 4) {
    local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.Data.ArrayNum = 0;
    local_b8.Data.ArrayMax = 0;
    bVar3 = ``FPCGAttributeReduceElement::ExecuteInternal'::__l18::<lambda_1>::
            operator()<UE::Math::TTransform<double>_>'::__l2::<lambda_1>::operator()<FString>
                      (&local_a8,&local_b8);
    return bVar3;
  }
  local_68.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_68.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_68.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_68.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_68.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_68.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_68.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_68.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_68.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_68.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_68.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_68.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_68.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_68.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  bVar3 = ``FPCGAttributeReduceElement::ExecuteInternal'::__l18::<lambda_1>::
          operator()<UE::Math::TTransform<double>_>'::__l2::<lambda_1>::
          operator()<UE::Math::TTransform<double>_>(&local_a8,&local_68);
  return bVar3;
}

// operator()<UE::Math::TVector2<double>_> @ 149a23bf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
`FPCGAttributeReduceElement::ExecuteInternal'::__l18::<lambda_1>::
operator()<UE::Math::TVector2<double>_>(void *this,TVector2<double> *param_1)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  undefined8 uVar4;
  UPCGParamData *pUVar5;
  FString local_58;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined1 local_10;
  
  iVar1 = *(int *)(*(longlong *)((longlong)this + 0x10) + 0x114);
  plVar2 = *(longlong **)((longlong)this + 0x18);
  local_28 = 0;
  if ((*plVar2 == 0) || (*(char *)((longlong)this + 0x40) == '\0')) {
    if (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x108) == '\0') {
      pUVar5 = FPCGContext::NewObject_AnyThread<UPCGParamData>
                         ((FPCGContext *)**(undefined8 **)((longlong)this + 0x30));
      *plVar2 = (longlong)pUVar5;
    }
    else {
      uVar4 = (**(code **)(**(longlong **)((longlong)this + 0x38) + 0x310))
                        (*(longlong **)((longlong)this + 0x38),
                         **(undefined8 **)((longlong)this + 0x30),1);
      **(undefined8 **)((longlong)this + 0x18) = uVar4;
    }
    local_28 = 1;
  }
  local_48 = *(undefined8 *)((longlong)this + 0x18);
  local_40 = *(undefined8 *)this;
  local_38 = *(undefined8 *)((longlong)this + 8);
  local_30 = *(undefined8 *)((longlong)this + 0x10);
  local_20 = *(undefined8 *)((longlong)this + 0x20);
  local_18 = *(undefined8 *)((longlong)this + 0x28);
  local_10 = *(undefined1 *)((longlong)this + 0x40);
  if (iVar1 == 4) {
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    bVar3 = ``FPCGAttributeReduceElement::ExecuteInternal'::__l18::<lambda_1>::
            operator()<UE::Math::TVector2<double>_>'::__l2::<lambda_1>::operator()<FString>
                      (&local_48,&local_58);
    return bVar3;
  }
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  bVar3 = ``FPCGAttributeReduceElement::ExecuteInternal'::__l18::<lambda_1>::
          operator()<UE::Math::TVector2<double>_>'::__l2::<lambda_1>::
          operator()<UE::Math::TVector2<double>_>(&local_48,(TVector2<double> *)&local_58);
  return bVar3;
}

// operator()<UE::Math::TVector4<double>_> @ 149a25de0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
`FPCGAttributeReduceElement::ExecuteInternal'::__l18::<lambda_1>::
operator()<UE::Math::TVector4<double>_>(void *this,TVector4<double> *param_1)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  undefined8 uVar4;
  UPCGParamData *pUVar5;
  TVector4<double>_u_0 local_68;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined1 local_10;
  
  iVar1 = *(int *)(*(longlong *)((longlong)this + 0x10) + 0x114);
  plVar2 = *(longlong **)((longlong)this + 0x18);
  local_28 = 0;
  if ((*plVar2 == 0) || (*(char *)((longlong)this + 0x40) == '\0')) {
    if (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x108) == '\0') {
      pUVar5 = FPCGContext::NewObject_AnyThread<UPCGParamData>
                         ((FPCGContext *)**(undefined8 **)((longlong)this + 0x30));
      *plVar2 = (longlong)pUVar5;
    }
    else {
      uVar4 = (**(code **)(**(longlong **)((longlong)this + 0x38) + 0x310))
                        (*(longlong **)((longlong)this + 0x38),
                         **(undefined8 **)((longlong)this + 0x30),1);
      **(undefined8 **)((longlong)this + 0x18) = uVar4;
    }
    local_28 = 1;
  }
  local_48 = *(undefined8 *)((longlong)this + 0x18);
  local_40 = *(undefined8 *)this;
  local_38 = *(undefined8 *)((longlong)this + 8);
  local_30 = *(undefined8 *)((longlong)this + 0x10);
  local_20 = *(undefined8 *)((longlong)this + 0x20);
  local_18 = *(undefined8 *)((longlong)this + 0x28);
  local_10 = *(undefined1 *)((longlong)this + 0x40);
  if (iVar1 == 4) {
    local_68._s_0.X = 0.0;
    local_68._s_0.Y = 0.0;
    bVar3 = ``FPCGAttributeReduceElement::ExecuteInternal'::__l18::<lambda_1>::
            operator()<UE::Math::TVector4<double>_>'::__l2::<lambda_1>::operator()<FString>
                      (&local_48,(FString *)&local_68._s_0);
    return bVar3;
  }
  local_68._s_0.Z = ___xmm_3ff00000000000000000000000000000;
  local_68._s_0.W = _UNK_15061cbc8;
  local_68._s_0.X = 0.0;
  local_68._s_0.Y = 0.0;
  bVar3 = ``FPCGAttributeReduceElement::ExecuteInternal'::__l18::<lambda_1>::
          operator()<UE::Math::TVector4<double>_>'::__l2::<lambda_1>::
          operator()<UE::Math::TVector4<double>_>(&local_48,(TVector4<double> *)&local_68._s_0);
  return bVar3;
}

// operator()<UE::Math::TVector<double>_> @ 149a27fe0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
`FPCGAttributeReduceElement::ExecuteInternal'::__l18::<lambda_1>::
operator()<UE::Math::TVector<double>_>(void *this,TVector<double> *param_1)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  undefined8 uVar4;
  UPCGParamData *pUVar5;
  TVector<double>_u_0 local_88 [2];
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined1 local_10;
  
  iVar1 = *(int *)(*(longlong *)((longlong)this + 0x10) + 0x114);
  plVar2 = *(longlong **)((longlong)this + 0x18);
  local_28 = 0;
  if ((*plVar2 == 0) || (*(char *)((longlong)this + 0x40) == '\0')) {
    if (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x108) == '\0') {
      pUVar5 = FPCGContext::NewObject_AnyThread<UPCGParamData>
                         ((FPCGContext *)**(undefined8 **)((longlong)this + 0x30));
      *plVar2 = (longlong)pUVar5;
    }
    else {
      uVar4 = (**(code **)(**(longlong **)((longlong)this + 0x38) + 0x310))
                        (*(longlong **)((longlong)this + 0x38),
                         **(undefined8 **)((longlong)this + 0x30),1);
      **(undefined8 **)((longlong)this + 0x18) = uVar4;
    }
    local_28 = 1;
  }
  local_48 = *(undefined8 *)((longlong)this + 0x18);
  local_40 = *(undefined8 *)this;
  local_38 = *(undefined8 *)((longlong)this + 8);
  local_30 = *(undefined8 *)((longlong)this + 0x10);
  local_20 = *(undefined8 *)((longlong)this + 0x20);
  local_18 = *(undefined8 *)((longlong)this + 0x28);
  local_10 = *(undefined1 *)((longlong)this + 0x40);
  if (iVar1 == 4) {
    local_88[0]._s_0.X = 0.0;
    local_88[0]._s_0.Y = 0.0;
    bVar3 = ``FPCGAttributeReduceElement::ExecuteInternal'::__l18::<lambda_1>::
            operator()<UE::Math::TVector<double>_>'::__l2::<lambda_1>::operator()<FString>
                      (&local_48,(FString *)&local_88[0]._s_0);
    return bVar3;
  }
  local_88[0]._s_0.X = 0.0;
  local_88[0]._s_0.Y = 0.0;
  local_58 = 0;
  local_88[0]._s_0.Z = 0.0;
  bVar3 = ``FPCGAttributeReduceElement::ExecuteInternal'::__l18::<lambda_1>::
          operator()<UE::Math::TVector<double>_>'::__l2::<lambda_1>::
          operator()<UE::Math::TVector<double>_>(&local_48,(TVector<double> *)&local_88[0]._s_0);
  return bVar3;
}

// operator()<FSoftClassPath> @ 149a29af0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
`FPCGAttributeReduceElement::ExecuteInternal'::__l18::<lambda_1>::operator()<FSoftClassPath>
          (void *this,FSoftClassPath *param_1)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  undefined8 uVar4;
  UPCGParamData *pUVar5;
  FSoftClassPath local_68;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined1 local_10;
  
  iVar1 = *(int *)(*(longlong *)((longlong)this + 0x10) + 0x114);
  plVar2 = *(longlong **)((longlong)this + 0x18);
  local_28 = 0;
  if ((*plVar2 == 0) || (*(char *)((longlong)this + 0x40) == '\0')) {
    if (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x108) == '\0') {
      pUVar5 = FPCGContext::NewObject_AnyThread<UPCGParamData>
                         ((FPCGContext *)**(undefined8 **)((longlong)this + 0x30));
      *plVar2 = (longlong)pUVar5;
    }
    else {
      uVar4 = (**(code **)(**(longlong **)((longlong)this + 0x38) + 0x310))
                        (*(longlong **)((longlong)this + 0x38),
                         **(undefined8 **)((longlong)this + 0x30),1);
      **(undefined8 **)((longlong)this + 0x18) = uVar4;
    }
    local_28 = 1;
  }
  local_48 = *(undefined8 *)((longlong)this + 0x18);
  local_40 = *(undefined8 *)this;
  local_38 = *(undefined8 *)((longlong)this + 8);
  local_30 = *(undefined8 *)((longlong)this + 0x10);
  local_20 = *(undefined8 *)((longlong)this + 0x20);
  local_18 = *(undefined8 *)((longlong)this + 0x28);
  local_10 = *(undefined1 *)((longlong)this + 0x40);
  if (iVar1 == 4) {
    local_68._0_8_ = 0;
    local_68._8_8_ = 0;
    bVar3 = ``FPCGAttributeReduceElement::ExecuteInternal'::__l18::<lambda_1>::
            operator()<FSoftClassPath>'::__l2::<lambda_1>::operator()<FString>
                      (&local_48,(FString *)&local_68);
  }
  else {
    local_68._0_8_ = 0;
    local_68._8_8_ = 0;
    local_68._16_8_ = 0;
    local_68._24_8_ = 0;
    bVar3 = ``FPCGAttributeReduceElement::ExecuteInternal'::__l18::<lambda_1>::
            operator()<FSoftClassPath>'::__l2::<lambda_1>::operator()<FSoftClassPath>
                      (&local_48,&local_68);
  }
  if (*(void **)&param_1->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x10);
  }
  return bVar3;
}

// operator()<FSoftObjectPath> @ 149a2b1d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
`FPCGAttributeReduceElement::ExecuteInternal'::__l18::<lambda_1>::operator()<FSoftObjectPath>
          (void *this,FSoftObjectPath *param_1)

{
  int iVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  undefined8 uVar5;
  UPCGParamData *pUVar6;
  FSoftObjectPath local_68;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined1 local_10;
  
  iVar1 = *(int *)(*(longlong *)((longlong)this + 0x10) + 0x114);
  plVar2 = *(longlong **)((longlong)this + 0x18);
  local_28 = 0;
  if ((*plVar2 == 0) || (*(char *)((longlong)this + 0x40) == '\0')) {
    if (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x108) == '\0') {
      pUVar6 = FPCGContext::NewObject_AnyThread<UPCGParamData>
                         ((FPCGContext *)**(undefined8 **)((longlong)this + 0x30));
      *plVar2 = (longlong)pUVar6;
    }
    else {
      uVar5 = (**(code **)(**(longlong **)((longlong)this + 0x38) + 0x310))
                        (*(longlong **)((longlong)this + 0x38),
                         **(undefined8 **)((longlong)this + 0x30),1);
      **(undefined8 **)((longlong)this + 0x18) = uVar5;
    }
    local_28 = 1;
  }
  local_48 = *(undefined8 *)((longlong)this + 0x18);
  local_40 = *(undefined8 *)this;
  local_38 = *(undefined8 *)((longlong)this + 8);
  local_30 = *(undefined8 *)((longlong)this + 0x10);
  local_20 = *(undefined8 *)((longlong)this + 0x20);
  local_18 = *(undefined8 *)((longlong)this + 0x28);
  local_10 = *(undefined1 *)((longlong)this + 0x40);
  if (iVar1 == 4) {
    local_68.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_68.AssetPath.PackageName.Number = 0;
    local_68.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_68.AssetPath.AssetName.Number = 0;
    bVar4 = ``FPCGAttributeReduceElement::ExecuteInternal'::__l18::<lambda_1>::
            operator()<FSoftObjectPath>'::__l2::<lambda_1>::operator()<FString>
                      (&local_48,(FString *)&local_68);
  }
  else {
    local_68.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_68.AssetPath.PackageName.Number = 0;
    local_68.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_68.AssetPath.AssetName.Number = 0;
    local_68.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.SubPathString.Data.ArrayNum = 0;
    local_68.SubPathString.Data.ArrayMax = 0;
    bVar4 = ``FPCGAttributeReduceElement::ExecuteInternal'::__l18::<lambda_1>::
            operator()<FSoftObjectPath>'::__l2::<lambda_1>::operator()<FSoftObjectPath>
                      (&local_48,&local_68);
  }
  pFVar3 = (param_1->SubPathString).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return bVar4;
}

// operator()<FName> @ 149a2c7e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
`FPCGAttributeReduceElement::ExecuteInternal'::__l18::<lambda_1>::operator()<FName>
          (void *this,FName param_1)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  undefined8 uVar4;
  UPCGParamData *pUVar5;
  FString local_58;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined1 local_10;
  
  iVar1 = *(int *)(*(longlong *)((longlong)this + 0x10) + 0x114);
  plVar2 = *(longlong **)((longlong)this + 0x18);
  local_28 = 0;
  if ((*plVar2 == 0) || (*(char *)((longlong)this + 0x40) == '\0')) {
    if (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x108) == '\0') {
      pUVar5 = FPCGContext::NewObject_AnyThread<UPCGParamData>
                         ((FPCGContext *)**(undefined8 **)((longlong)this + 0x30));
      *plVar2 = (longlong)pUVar5;
    }
    else {
      uVar4 = (**(code **)(**(longlong **)((longlong)this + 0x38) + 0x310))
                        (*(longlong **)((longlong)this + 0x38),
                         **(undefined8 **)((longlong)this + 0x30),1);
      **(undefined8 **)((longlong)this + 0x18) = uVar4;
    }
    local_28 = 1;
  }
  local_48 = *(undefined8 *)((longlong)this + 0x18);
  local_40 = *(undefined8 *)this;
  local_38 = *(undefined8 *)((longlong)this + 8);
  local_30 = *(undefined8 *)((longlong)this + 0x10);
  local_20 = *(undefined8 *)((longlong)this + 0x20);
  local_18 = *(undefined8 *)((longlong)this + 0x28);
  local_10 = *(undefined1 *)((longlong)this + 0x40);
  if (iVar1 == 4) {
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    bVar3 = ``FPCGAttributeReduceElement::ExecuteInternal'::__l18::<lambda_1>::operator()<FName>'::
            __l2::<lambda_1>::operator()<FString>(&local_48,&local_58);
    return bVar3;
  }
  bVar3 = ``FPCGAttributeReduceElement::ExecuteInternal'::__l18::<lambda_1>::operator()<FName>'::
          __l2::<lambda_1>::operator()<FName>(&local_48,(FName)0x0);
  return bVar3;
}

// operator()<__int64> @ 149a311c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
`FPCGAttributeReduceElement::ExecuteInternal'::__l18::<lambda_1>::operator()<__int64>
          (void *this,long64 param_1)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  undefined8 uVar4;
  UPCGParamData *pUVar5;
  FString local_58;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined1 local_10;
  
  iVar1 = *(int *)(*(longlong *)((longlong)this + 0x10) + 0x114);
  plVar2 = *(longlong **)((longlong)this + 0x18);
  local_28 = 0;
  if ((*plVar2 == 0) || (*(char *)((longlong)this + 0x40) == '\0')) {
    if (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x108) == '\0') {
      pUVar5 = FPCGContext::NewObject_AnyThread<UPCGParamData>
                         ((FPCGContext *)**(undefined8 **)((longlong)this + 0x30));
      *plVar2 = (longlong)pUVar5;
    }
    else {
      uVar4 = (**(code **)(**(longlong **)((longlong)this + 0x38) + 0x310))
                        (*(longlong **)((longlong)this + 0x38),
                         **(undefined8 **)((longlong)this + 0x30),1);
      **(undefined8 **)((longlong)this + 0x18) = uVar4;
    }
    local_28 = 1;
  }
  local_48 = *(undefined8 *)((longlong)this + 0x18);
  local_40 = *(undefined8 *)this;
  local_38 = *(undefined8 *)((longlong)this + 8);
  local_30 = *(undefined8 *)((longlong)this + 0x10);
  local_20 = *(undefined8 *)((longlong)this + 0x20);
  local_18 = *(undefined8 *)((longlong)this + 0x28);
  local_10 = *(undefined1 *)((longlong)this + 0x40);
  if (iVar1 == 4) {
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    bVar3 = ``FPCGAttributeReduceElement::ExecuteInternal'::__l18::<lambda_1>::operator()<__int64>'
            ::__l2::<lambda_1>::operator()<FString>(&local_48,&local_58);
    return bVar3;
  }
  bVar3 = ``FPCGAttributeReduceElement::ExecuteInternal'::__l18::<lambda_1>::operator()<__int64>'::
          __l2::<lambda_1>::operator()<__int64>(&local_48,0);
  return bVar3;
}

// operator()<bool> @ 149a32740

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
`FPCGAttributeReduceElement::ExecuteInternal'::__l18::<lambda_1>::operator()<bool>
          (void *this,bool param_1)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  undefined8 uVar4;
  UPCGParamData *pUVar5;
  FString local_58;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined1 local_10;
  
  iVar1 = *(int *)(*(longlong *)((longlong)this + 0x10) + 0x114);
  plVar2 = *(longlong **)((longlong)this + 0x18);
  local_28 = 0;
  if ((*plVar2 == 0) || (*(char *)((longlong)this + 0x40) == '\0')) {
    if (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x108) == '\0') {
      pUVar5 = FPCGContext::NewObject_AnyThread<UPCGParamData>
                         ((FPCGContext *)**(undefined8 **)((longlong)this + 0x30));
      *plVar2 = (longlong)pUVar5;
    }
    else {
      uVar4 = (**(code **)(**(longlong **)((longlong)this + 0x38) + 0x310))
                        (*(longlong **)((longlong)this + 0x38),
                         **(undefined8 **)((longlong)this + 0x30),1);
      **(undefined8 **)((longlong)this + 0x18) = uVar4;
    }
    local_28 = 1;
  }
  local_48 = *(undefined8 *)((longlong)this + 0x18);
  local_40 = *(undefined8 *)this;
  local_38 = *(undefined8 *)((longlong)this + 8);
  local_30 = *(undefined8 *)((longlong)this + 0x10);
  local_20 = *(undefined8 *)((longlong)this + 0x20);
  local_18 = *(undefined8 *)((longlong)this + 0x28);
  local_10 = *(undefined1 *)((longlong)this + 0x40);
  if (iVar1 == 4) {
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    bVar3 = ``FPCGAttributeReduceElement::ExecuteInternal'::__l18::<lambda_1>::operator()<bool>'::
            __l2::<lambda_1>::operator()<FString>(&local_48,&local_58);
    return bVar3;
  }
  bVar3 = ``FPCGAttributeReduceElement::ExecuteInternal'::__l18::<lambda_1>::operator()<bool>'::__l2
          ::<lambda_1>::operator()<bool>(&local_48,false);
  return bVar3;
}

// ExecuteInternal @ 149b073e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FPCGAttributeReduceElement::ExecuteInternal(FPCGAttributeReduceElement *this,FPCGContext *param_1)

{
  FPCGDataCollection *pFVar1;
  int *piVar2;
  TObjectPtr<UPCGSettings> *this_00;
  UPCGNode *this_01;
  UPCGData *this_02;
  code *pcVar3;
  double dVar4;
  double dVar5;
  FName FVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  UClass *pUVar11;
  UPCGSettings *pUVar12;
  FObjectPtr_u_0 FVar13;
  FObjectPtr_u_0 *pFVar14;
  longlong lVar15;
  FName FVar16;
  FPCGTaggedData *pFVar17;
  FText *pFVar18;
  FText *pFVar19;
  FString *pFVar20;
  FText *pFVar21;
  FTextFormat *pFVar22;
  FPCGTaggedData *pFVar23;
  char cVar24;
  FObjectPtr_u_0 FVar25;
  FObjectPtr_u_0 FVar26;
  uint uVar27;
  FObjectPtr_u_0 FVar28;
  bool bVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  FPCGContext *local_res10;
  undefined4 local_res18;
  uint local_res20;
  undefined1 local_4e8 [16];
  UPCGParamData *local_4d8;
  FObjectPtr_u_0 local_4d0;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_4c8;
  FName local_4b8;
  TObjectPtr<UPCGMetadata>_u_0 local_4b0;
  undefined8 local_4a8;
  FName local_4a0;
  undefined8 *local_498;
  undefined1 *puStack_490;
  FObjectPtr_u_0 local_488;
  UPCGParamData **ppUStack_480;
  TObjectPtr<UPCGMetadata>_u_0 *local_478;
  FName FStack_470;
  undefined8 local_468;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined8 local_458;
  FPCGDataCollection *local_448;
  FSoftClassPath local_440;
  FString local_420;
  FString local_410;
  FSoftObjectPath local_400;
  FPCGAttributePropertySelector local_3d8;
  undefined8 *local_398;
  undefined1 *puStack_390;
  FObjectPtr_u_0 local_388;
  UPCGParamData **ppUStack_380;
  TObjectPtr<UPCGMetadata>_u_0 *local_378;
  FName FStack_370;
  FPCGContext **local_368;
  undefined8 uStack_360;
  char local_358;
  undefined7 uStack_357;
  TSharedPtr<FCulture,1> local_348;
  UPCGParamData **local_338;
  undefined1 *local_330;
  undefined1 *local_328;
  FObjectPtr_u_0 local_320;
  undefined1 local_318;
  TObjectPtr<UPCGMetadata>_u_0 *local_310;
  FName local_308;
  char local_300;
  FName local_2f0;
  TVector2<double>_u_0 local_2e8;
  FString local_2d8;
  FText local_2c8;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  TVector<double>_u_0 local_298;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  TRotator<double> local_258;
  FText local_238;
  FString local_228;
  FText local_218;
  FString local_208;
  TVector4<double>_u_0 local_1f8;
  TQuat<double> local_1d8;
  TTransform<double> local_1b8;
  undefined8 local_158;
  undefined8 uStack_150;
  FText local_148;
  FText local_138;
  FTextFormat local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  double local_108;
  double dStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [16];
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  undefined1 local_88 [16];
  
  FVar25.Handle = (UObject *)0x0;
  bVar29 = CpuChannel->Enabled < 0;
  local_res10 = param_1;
  if (bVar29) {
    local_res18 = 0;
  }
  else {
    local_res18 = 1;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId265,"FPCGAttributeReduceElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGAttributeReduceElement.cpp"
               ,0x109);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId265);
  }
  if ((local_res10 == (FPCGContext *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGAttributeReduceElement.cpp"
                         ,0x10b,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    uVar8 = (*pcVar3)();
    return (bool)uVar8;
  }
  this_00 = &local_res10->SettingsWithOverride;
  if ((this_00->field0_0x0).DebugPtr == (UPCGSettings *)0x0) {
    this_01 = local_res10->Node;
    pFVar1 = &local_res10->InputData;
    if ((this_01 == (UPCGNode *)0x0) ||
       (pUVar12 = UPCGNode::GetSettings(this_01), pUVar12 == (UPCGSettings *)0x0)) {
      pFVar14 = (FObjectPtr_u_0 *)
                TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGAttributeReduceSettings>_::__l2::<lambda_1>_>
                          (&pFVar1->TaggedData,local_res10._0_1_);
      if (pFVar14 != (FObjectPtr_u_0 *)0x0) {
        local_4d0 = (FObjectPtr_u_0)pFVar14->Handle;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if ((UPCGSettings *)local_4d0.Handle == (UPCGSettings *)0x0) goto LAB_149b07588;
          UE::GC::MarkAsReachable(local_4d0.Handle);
        }
        if ((UPCGSettings *)local_4d0.Handle != (UPCGSettings *)0x0) {
          pUVar11 = UPCGAttributeReduceSettings::StaticClass();
          bVar7 = FObjectPtr::IsA((FObjectPtr *)&local_4d0,pUVar11);
          FVar13 = local_4d0;
          if (bVar7) goto LAB_149b0758b;
        }
      }
    }
    else {
      pUVar12 = UPCGNode::GetSettings(this_01);
      FVar13.Handle = (UObject *)FPCGDataCollection::GetSettings(pFVar1,pUVar12);
      if ((UPCGSettings *)FVar13.Handle != (UPCGSettings *)0x0) {
        pUVar11 = UPCGAttributeReduceSettings::StaticClass();
        iVar10 = (int)pUVar11->_padding_;
        if ((iVar10 <= *(int *)(*(longlong *)&(FVar13.Handle)->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&(FVar13.Handle)->field_0x10 + 0x30) + (longlong)iVar10 * 8
             ) == &pUVar11->_padding_)) goto LAB_149b0758b;
      }
    }
  }
  else {
    pUVar11 = UPCGAttributeReduceSettings::StaticClass();
    bVar7 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar11);
    if (bVar7) {
      FVar13.Handle = (UObject *)(this_00->field0_0x0).DebugPtr;
      goto LAB_149b0758b;
    }
  }
LAB_149b07588:
  FVar13.Handle = FVar25.Handle;
LAB_149b0758b:
  if (((UPCGSettings *)FVar13.Handle == (UPCGSettings *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGAttributeReduceElement.cpp"
                         ,0x10e,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    uVar8 = (*pcVar3)();
    return (bool)uVar8;
  }
  FPCGDataCollection::GetInputsByPin
            (&local_res10->InputData,&local_4c8,&PCGPinConstants::DefaultInputLabel);
  dVar5 = _UNK_15061cbc8;
  dVar4 = ___xmm_3ff00000000000000000000000000000;
  local_448 = &local_res10->OutputData;
  local_4d8 = (UPCGParamData *)0x0;
  local_4b0.DebugPtr = (UPCGMetadata *)0x0;
  local_res20 = 0;
  FVar26.Handle = FVar25.Handle;
  FVar28.Handle = FVar25.Handle;
  cVar24 = !bVar29;
  if (0 < local_4c8.ArrayNum) {
    do {
      uVar27 = FVar28._0_4_;
      uVar9 = 0;
      if ((int)uVar27 < local_4c8.ArrayNum) {
        uVar9 = ~uVar27 >> 0x1f;
      }
      if (uVar9 == 0) {
        bVar29 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar29) {
          pcVar3 = (code *)swi(3);
          uVar8 = (*pcVar3)();
          return (bool)uVar8;
        }
      }
      this_02 = *(UPCGData **)(local_4c8.AllocatorInstance.Data + (longlong)FVar25.Handle);
      if (this_02 == (UPCGData *)0x0) {
LAB_149b08077:
        PCGLog::InputOutput::LogInvalidInputDataError(local_res10);
      }
      else {
        lVar15 = (**(code **)(this_02->_padding_ + 800))(this_02);
        if (lVar15 == 0) goto LAB_149b08077;
        if (FVar13.Handle[6].field_0x18 != '\0') {
          bVar29 = UPCGData::IsSupportedMetadataDomainID(this_02,&PCGMetadataDomainID::Data);
          if (bVar29) goto LAB_149b0770b;
          if (*(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
              < ::_TSS0) {
            _Init_thread_header(&::_TSS0);
            if (::_TSS0 == -1) {
              DataSelector._padding_ = (longlong)&___7FPCGAttributePropertySelector__6B_;
              local_4b8.ComparisonIndex.Value = 0;
              local_4b8.Number = 0;
              DataSelector.Selection = Attribute;
              DataSelector.DomainName.ComparisonIndex.Value = 0;
              DataSelector.DomainName.Number = 0;
              DataSelector.AttributeName.ComparisonIndex.Value = 0;
              DataSelector.AttributeName.Number = 0;
              DataSelector.PropertyName.ComparisonIndex.Value = 0;
              DataSelector.PropertyName.Number = 0;
              DataSelector.ExtraNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              DataSelector.ExtraNames.ArrayNum = 0;
              DataSelector.ExtraNames.ArrayMax = 0;
              DataSelector.ExtraProperty = Index;
              FPCGAttributePropertySelector::SetDomainName
                        (&DataSelector,PCGDataConstants::DataDomainName,true);
              FPCGAttributePropertySelector::SetAttributeName(&DataSelector,local_4b8,true);
              DestructItems<FString,int>
                        ((FString *)DataSelector.ExtraNames.AllocatorInstance.Data,
                         DataSelector.ExtraNames.ArrayNum);
              iVar10 = DataSelector.ExtraNames.ArrayMax;
              DataSelector.ExtraNames._8_8_ =
                   (ulonglong)(uint)DataSelector.ExtraNames.ArrayMax << 0x20;
              if (iVar10 == 0) {
                DataSelector.ExtraNames.ArrayNum = 0;
                DataSelector.ExtraNames.ArrayMax = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,8,0,iVar10,&DataSelector.ExtraNames.AllocatorInstance,0,
                           &DataSelector.ExtraNames.ArrayMax);
                ConstructItems<FString,FString,int>
                          (DataSelector.ExtraNames.AllocatorInstance.Data,(FString *)0x0,0);
              }
              atexit(`FPCGAttributeReduceElement::ExecuteInternal'::__l24::
                     _dynamic_atexit_destructor_for__DataSelector__);
              _Init_thread_footer(&::_TSS0);
            }
          }
          PCGLog::Metadata::LogInvalidMetadataDomain(&DataSelector,local_res10);
          goto LAB_149b07f69;
        }
LAB_149b0770b:
        FPCGAttributePropertyInputSelector::CopyAndFixLast
                  ((FPCGAttributePropertyInputSelector *)(FVar13.Handle + 5),
                   (FPCGAttributePropertyInputSelector *)&local_3d8,this_02);
        FVar16.ComparisonIndex.Value = *(uint *)&(FVar13.Handle + 0xf0)->field_0x1c;
        FVar16.Number = *(uint *)&(FVar13.Handle + 0xf0)->field_0x20;
        FVar6 = FVar16;
        if (FVar16 == PCGMetadataAttributeConstants::SourceNameAttributeName) {
          FVar16 = FPCGAttributePropertySelector::GetName(&local_3d8);
          FVar16 = *(FName *)FVar16;
          FVar6 = local_2f0;
        }
        local_2f0 = FVar6;
        local_4a0 = FVar16;
        PCGAttributeAccessorHelpers::CreateConstAccessor
                  ((UPCGData *)local_4e8,(FPCGAttributePropertySelector *)this_02,
                   SUB81(&local_3d8,0));
        PCGAttributeAccessorHelpers::CreateConstKeys
                  ((UPCGData *)(local_4e8 + 8),(FPCGAttributePropertySelector *)this_02);
        FVar16 = local_4a0;
        if (((undefined8 *)local_4e8._0_8_ == (undefined8 *)0x0) ||
           ((undefined8 *)local_4e8._8_8_ == (undefined8 *)0x0)) {
          PCGLog::Metadata::LogFailToCreateAccessorError(&local_3d8,local_res10);
          if ((undefined8 *)local_4e8._8_8_ != (undefined8 *)0x0) {
            (*(code *)**(undefined8 **)local_4e8._8_8_)(local_4e8._8_8_,1);
          }
          if ((undefined8 *)local_4e8._0_8_ != (undefined8 *)0x0) {
            (*(code *)**(undefined8 **)local_4e8._0_8_)(local_4e8._0_8_,1);
          }
          DestructItems<FString,int>
                    ((FString *)local_3d8.ExtraNames.AllocatorInstance.Data,
                     local_3d8.ExtraNames.ArrayNum);
          if (local_3d8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3d8.ExtraNames.AllocatorInstance.Data);
          }
          goto LAB_149b07f69;
        }
        if ((FVar13.Handle[6].field_0x18 == '\0') && (FVar13.Handle[7].field_0x10 != '\0')) {
          cVar24 = '\x01';
        }
        else {
          cVar24 = '\0';
        }
        local_498 = (undefined8 *)local_4e8;
        puStack_490 = local_4e8 + 8;
        ppUStack_480 = &local_4d8;
        local_478 = &local_4b0;
        local_368 = &local_res10;
        FStack_370 = local_4a0;
        uStack_360._0_4_ = SUB84(this_02,0);
        uStack_360._4_4_ = (undefined4)((ulonglong)this_02 >> 0x20);
        FStack_470 = local_4a0;
        local_458 = CONCAT71(uStack_357,cVar24);
        uStack_460 = (undefined4)uStack_360;
        uStack_45c = uStack_360._4_4_;
        local_488 = FVar13;
        local_398 = local_498;
        puStack_390 = puStack_490;
        local_388 = FVar13;
        ppUStack_380 = ppUStack_480;
        local_378 = local_478;
        uStack_360 = this_02;
        local_358 = cVar24;
        local_468 = local_368;
        switch(*(undefined2 *)(local_4e8._0_8_ + 10)) {
        case 0:
          bVar29 = `FPCGAttributeReduceElement::ExecuteInternal'::__l18::<lambda_1>::
                   operator()<float>(&local_498,0.0);
          break;
        case 1:
          bVar29 = `FPCGAttributeReduceElement::ExecuteInternal'::__l18::<lambda_1>::
                   operator()<double>(&local_498,0.0);
          break;
        case 2:
          bVar29 = `FPCGAttributeReduceElement::ExecuteInternal'::__l18::<lambda_1>::operator()<int>
                             (&local_498,0);
          break;
        case 3:
          bVar29 = `FPCGAttributeReduceElement::ExecuteInternal'::__l18::<lambda_1>::
                   operator()<__int64>(&local_498,0);
          break;
        case 4:
          local_158 = 0;
          uStack_150 = 0;
          local_2e8._s_0.X = 0.0;
          local_2e8._s_0.Y = 0.0;
          bVar29 = `FPCGAttributeReduceElement::ExecuteInternal'::__l18::<lambda_1>::
                   operator()<UE::Math::TVector2<double>_>
                             (&local_498,(TVector2<double> *)&local_2e8._s_0);
          break;
        case 5:
          local_298._s_0.X = 0.0;
          local_298._s_0.Y = 0.0;
          local_2b8 = 0;
          uStack_2b0 = 0;
          local_2a8 = 0;
          local_298._s_0.Z = 0.0;
          bVar29 = `FPCGAttributeReduceElement::ExecuteInternal'::__l18::<lambda_1>::
                   operator()<UE::Math::TVector<double>_>
                             (&local_498,(TVector<double> *)&local_298._s_0);
          break;
        case 6:
          local_108 = dVar4;
          dStack_100 = dVar5;
          local_118 = 0;
          uStack_110 = 0;
          local_1f8._s_0.X = 0.0;
          local_1f8._s_0.Y = 0.0;
          local_1f8._s_0.Z = dVar4;
          local_1f8._s_0.W = dVar5;
          bVar29 = `FPCGAttributeReduceElement::ExecuteInternal'::__l18::<lambda_1>::
                   operator()<UE::Math::TVector4<double>_>
                             (&local_498,(TVector4<double> *)&local_1f8._s_0);
          break;
        case 7:
          local_f8 = 0;
          uStack_f0 = 0;
          local_e8 = 0;
          uStack_e0 = 0;
          local_1d8.X = 0.0;
          local_1d8.Y = 0.0;
          local_1d8.Z = 0.0;
          local_1d8.W = 0.0;
          bVar29 = `FPCGAttributeReduceElement::ExecuteInternal'::__l18::<lambda_1>::
                   operator()<UE::Math::TQuat<double>_>(&local_498,&local_1d8);
          break;
        case 8:
          uVar32 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          uVar33 = (undefined4)
                   ((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          local_1b8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_1b8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
          local_1b8.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_1b8.Translation.XY.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[1];
          local_1b8.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_1b8.Translation.ZW.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[3];
          local_1b8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_1b8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
          uVar30 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
          uVar31 = (undefined4)
                   ((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
          local_d8._8_4_ = uVar32;
          local_d8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_d8._12_4_ = uVar33;
          local_88._8_4_ = uVar30;
          local_88._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_88._12_4_ = uVar31;
          local_1b8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar30;
          local_1b8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_1b8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar31;
          local_1b8.Rotation.XY.m128d_f64[1]._0_4_ = uVar32;
          local_1b8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_1b8.Rotation.XY.m128d_f64[1]._4_4_ = uVar33;
          local_c8 = local_1b8.Rotation.ZW.m128d_f64[0];
          dStack_c0 = local_1b8.Rotation.ZW.m128d_f64[1];
          local_b8 = local_1b8.Translation.XY.m128d_f64[0];
          dStack_b0 = local_1b8.Translation.XY.m128d_f64[1];
          local_a8 = local_1b8.Translation.ZW.m128d_f64[0];
          dStack_a0 = local_1b8.Translation.ZW.m128d_f64[1];
          local_98 = local_1b8.Scale3D.XY.m128d_f64[0];
          dStack_90 = local_1b8.Scale3D.XY.m128d_f64[1];
          bVar29 = `FPCGAttributeReduceElement::ExecuteInternal'::__l18::<lambda_1>::
                   operator()<UE::Math::TTransform<double>_>(&local_498,&local_1b8);
          break;
        case 9:
          iVar10 = *(int *)&FVar13.Handle[6].field_0x24;
          uVar8 = 0;
          if ((local_4d8 == (UPCGParamData *)0x0) || (cVar24 == '\0')) {
            if (FVar13.Handle[6].field_0x18 == '\0') {
              local_4d8 = FPCGContext::NewObject_AnyThread<UPCGParamData>(local_res10);
            }
            else {
              local_4d8 = (UPCGParamData *)
                          (**(code **)(this_02->_padding_ + 0x310))(this_02,local_res10);
            }
            uVar8 = 1;
          }
          local_338 = &local_4d8;
          local_310 = &local_4b0;
          local_330 = local_4e8;
          local_328 = local_4e8 + 8;
          local_308 = FVar16;
          local_320 = FVar13;
          local_318 = uVar8;
          local_300 = cVar24;
          if (iVar10 == 4) {
            local_420.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_420.Data.ArrayNum = 0;
            local_420.Data.ArrayMax = 0;
            bVar29 = ``FPCGAttributeReduceElement::ExecuteInternal'::__l18::<lambda_1>::
                     operator()<FString>'::__l2::<lambda_1>::operator()<FString>
                               (&local_338,&local_420);
            uVar27 = local_res20;
          }
          else {
            local_410.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_410.Data.ArrayNum = 0;
            local_410.Data.ArrayMax = 0;
            bVar29 = ``FPCGAttributeReduceElement::ExecuteInternal'::__l18::<lambda_1>::
                     operator()<FString>'::__l2::<lambda_1>::operator()<FString>
                               (&local_338,&local_410);
            uVar27 = local_res20;
          }
          break;
        case 10:
          bVar29 = `FPCGAttributeReduceElement::ExecuteInternal'::__l18::<lambda_1>::
                   operator()<bool>(&local_498,false);
          break;
        case 0xb:
          local_258.Pitch = 0.0;
          local_258.Yaw = 0.0;
          local_278 = 0;
          uStack_270 = 0;
          local_268 = 0;
          local_258.Roll = 0.0;
          bVar29 = `FPCGAttributeReduceElement::ExecuteInternal'::__l18::<lambda_1>::
                   operator()<UE::Math::TRotator<double>_>(&local_498,&local_258);
          break;
        case 0xc:
          local_4a8._0_1_ = false;
          local_4a8._1_1_ = (atomic<unsigned_char>)0x0;
          local_4a8._2_2_ = 0;
          local_4a8._4_4_ = (atomic<int>)0x0;
          bVar29 = `FPCGAttributeReduceElement::ExecuteInternal'::__l18::<lambda_1>::
                   operator()<FName>(&local_498,(FName)0x0);
          break;
        case 0xd:
          local_400.AssetPath.PackageName.ComparisonIndex.Value = 0;
          local_400.AssetPath.PackageName.Number = 0;
          local_400.AssetPath.AssetName.ComparisonIndex.Value = 0;
          local_400.AssetPath.AssetName.Number = 0;
          local_400.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_400.SubPathString.Data.ArrayNum = 0;
          local_400.SubPathString.Data.ArrayMax = 0;
          bVar29 = `FPCGAttributeReduceElement::ExecuteInternal'::__l18::<lambda_1>::
                   operator()<FSoftObjectPath>(&local_498,&local_400);
          break;
        case 0xe:
          local_440._0_8_ = 0;
          local_440._8_8_ = 0;
          local_440._16_8_ = 0;
          local_440._24_8_ = 0;
          bVar29 = `FPCGAttributeReduceElement::ExecuteInternal'::__l18::<lambda_1>::
                   operator()<FSoftClassPath>(&local_498,&local_440);
          break;
        default:
          goto switchD_149b07862_default;
        }
        pFVar1 = local_448;
        if (bVar29 == false) {
switchD_149b07862_default:
          if (1 < (byte)LogPCG._0_1_) {
            local_348.Object = (FCulture *)0x0;
            local_348.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            pFVar18 = FText::AsNumber(&local_148,uVar27,(FNumberFormattingOptions *)0x0,&local_348);
            pFVar19 = FText::FromName(&local_138,&local_4a0);
            pFVar20 = PCG::Private::GetTypeName(&local_2d8,*(ushort *)(local_4e8._0_8_ + 10));
            FText::FromString(&local_2c8,pFVar20);
            if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
            }
            pFVar21 = FText::AsLocalizable_Advanced_LocText
                                (&local_218,L"PCGAttributeReduceElement",L"AttributeOperationFailed"
                                 ,
                                 L"Operation was not compatible with the attribute type {0} or could not create attribute \'{1}\' for input {2}"
                                );
            pFVar22 = FTextFormat::FTextFormat(&local_128,pFVar21,Default);
            pFVar18 = FText::Format<FText,FText,FText>
                                (&local_238,pFVar22,&local_2c8,pFVar19,pFVar18);
            FText::ToString(pFVar18);
            if (local_res10 != (FPCGContext *)0x0) {
              FVar26._0_4_ = FVar26._0_4_ | 1;
              FVar26._4_4_ = 0;
              FPCGContext::GetTaskName(local_res10,&local_228);
              if (local_res10 != (FPCGContext *)0x0) {
                FVar26 = (FObjectPtr_u_0)0x3;
                FPCGContext::GetExecutionSourceName(local_res10,&local_208);
              }
            }
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
            if ((((ulonglong)FVar26.Handle & 2) != 0) &&
               (FVar26._0_4_ = FVar26._0_4_ & 0xfffffffd, FVar26._4_4_ = 0,
               local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(local_208.Data.AllocatorInstance.Data);
            }
            if ((((ulonglong)FVar26.Handle & 1) != 0) &&
               (FVar26._0_4_ = FVar26._0_4_ & 0xfffffffe, FVar26._4_4_ = 0,
               local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(local_228.Data.AllocatorInstance.Data);
            }
            if (local_238.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_238.TextData.Reference + 0x10))();
            }
            if (local_218.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_218.TextData.Reference + 0x10))();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_348.SharedReferenceCount.ReferenceController);
          }
          if ((undefined8 *)local_4e8._8_8_ != (undefined8 *)0x0) {
            (*(code *)**(undefined8 **)local_4e8._8_8_)(local_4e8._8_8_,1);
          }
          if ((undefined8 *)local_4e8._0_8_ != (undefined8 *)0x0) {
            (*(code *)**(undefined8 **)local_4e8._0_8_)(local_4e8._0_8_,1);
          }
          DestructItems<FString,int>
                    ((FString *)local_3d8.ExtraNames.AllocatorInstance.Data,
                     local_3d8.ExtraNames.ArrayNum);
          if (local_3d8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3d8.ExtraNames.AllocatorInstance.Data);
          }
        }
        else {
          if (local_4d8 == (UPCGParamData *)0x0) {
            bVar29 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_7577422938463272535>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGAttributeReduceElement.cpp"
                                ,0x1a9,"OutputData");
            if (bVar29) {
              pcVar3 = (code *)swi(3);
              uVar8 = (*pcVar3)();
              return (bool)uVar8;
            }
          }
          else if (((local_448->TaggedData).ArrayNum == 0) || (cVar24 == '\0')) {
            uVar9 = 0;
            if ((int)uVar27 < local_4c8.ArrayNum) {
              uVar9 = ~uVar27 >> 0x1f;
            }
            if (uVar9 == 0) {
              bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar29) {
                pcVar3 = (code *)swi(3);
                uVar8 = (*pcVar3)();
                return (bool)uVar8;
              }
            }
            pFVar17 = (FPCGTaggedData *)(pFVar1->TaggedData).AllocatorInstance.Data;
            pFVar23 = (FPCGTaggedData *)
                      (local_4c8.AllocatorInstance.Data + (longlong)(int)uVar27 * 0x78);
            if ((pFVar17 <= pFVar23) && (pFVar23 < pFVar17 + (pFVar1->TaggedData).ArrayMax)) {
              bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 );
              if (bVar29) {
                pcVar3 = (code *)swi(3);
                uVar8 = (*pcVar3)();
                return (bool)uVar8;
              }
            }
            iVar10 = (pFVar1->TaggedData).ArrayNum;
            piVar2 = &(pFVar1->TaggedData).ArrayMax;
            if (iVar10 == *piVar2) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x878,(ForAnyElementType *)pFVar1,piVar2);
            }
            (pFVar1->TaggedData).ArrayNum = iVar10 + 1;
            pFVar17 = FPCGTaggedData::FPCGTaggedData
                                ((FPCGTaggedData *)
                                 ((pFVar1->TaggedData).AllocatorInstance.Data +
                                 (longlong)iVar10 * 0x78),pFVar23);
            FPCGDataPtrWrapper::operator=(&pFVar17->Data,(UPCGData *)local_4d8);
          }
          if ((undefined8 *)local_4e8._8_8_ != (undefined8 *)0x0) {
            (*(code *)**(undefined8 **)local_4e8._8_8_)(local_4e8._8_8_,1);
          }
          if ((undefined8 *)local_4e8._0_8_ != (undefined8 *)0x0) {
            (*(code *)**(undefined8 **)local_4e8._0_8_)(local_4e8._0_8_,1);
          }
          DestructItems<FString,int>
                    ((FString *)local_3d8.ExtraNames.AllocatorInstance.Data,
                     local_3d8.ExtraNames.ArrayNum);
          if (local_3d8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3d8.ExtraNames.AllocatorInstance.Data);
          }
        }
      }
LAB_149b07f69:
      FVar28._0_4_ = uVar27 + 1;
      FVar28._4_4_ = 0;
      FVar25.Handle = FVar25.Handle + 3;
      local_res20 = FVar28._0_4_;
    } while ((int)FVar28._0_4_ < local_4c8.ArrayNum);
    cVar24 = (char)local_res18;
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_4c8.AllocatorInstance.Data,local_4c8.ArrayNum);
  if ((FPCGTaggedData *)local_4c8.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_4c8.AllocatorInstance.Data);
  }
  if (cVar24 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// ExecutionLoopMode @ 149b11ae0

EPCGElementExecutionLoopMode __thiscall
FPCGAttributeReduceElement::ExecutionLoopMode
          (FPCGAttributeReduceElement *this,UPCGSettings *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UPCGSettings *)0x0) {
    pUVar2 = UPCGAttributeReduceSettings::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar2->_padding_)) && ((char)param_1[1]._padding_ == '\0')) &&
       (param_1[1].bUseSeed != false)) {
      return NotALoop;
    }
  }
  return SinglePrimaryPin;
}

// SupportsBasePointDataInputs @ 149b2d160

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGAttributeReduceElement::SupportsBasePointDataInputs
          (FPCGAttributeReduceElement *this,FPCGContext *param_1)

{
  return true;
}

