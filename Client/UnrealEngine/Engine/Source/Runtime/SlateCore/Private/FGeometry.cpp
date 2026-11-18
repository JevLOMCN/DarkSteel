// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 8

// StaticStruct @ 1424c57a0

UScriptStruct * __cdecl FGeometry::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGeometry.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_SlateCore();
    Z_Registration_Info_UScriptStruct_FGeometry.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGeometry,(UObject *)pUVar1,L"Geometry");
  }
  return Z_Registration_Info_UScriptStruct_FGeometry.OuterSingleton;
}

// FGeometry @ 1424e9970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FGeometry * __thiscall
FGeometry::FGeometry
          (FGeometry *this,FDeprecateVector2DParameter *param_1,FSlateLayoutTransform *param_2,
          FSlateLayoutTransform *param_3,TTransform2<float> *param_4,bool param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  TVector2<float>_u_0_s_0 TVar4;
  TVector2<float>_u_0 TVar5;
  undefined1 auStack_58 [32];
  float local_38;
  float fStack_34;
  TTransform2<float> local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_58;
  this->Size = *(FDeprecateSlateVector2D *)param_1;
  *(undefined8 *)&this->Scale = 0x3f800000;
  (this->AbsolutePosition).field0_0x0._s_0.Y = 0.0;
  (this->Position).field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_28.M.M[0][0] = param_2->Scale;
  local_28.Trans.field0_0x0 = (param_2->Translation).field0_0x0;
  local_28.M.M[0][1] = 0.0;
  local_28.M.M[1][0] = 0.0;
  local_28.M.M[1][1] = local_28.M.M[0][0];
  Concatenate<TTransform2<float>_>(&this->AccumulatedRenderTransform,&local_28,param_4);
  this->bHasRenderTransform = '\0';
  this->field_0x34 = this->field_0x34 | param_5;
  fVar1 = param_3->Scale;
  TVar4 = (param_2->Translation).field0_0x0._s_0;
  local_38 = TVar4.X;
  fStack_34 = TVar4.Y;
  fVar2 = (param_3->Translation).field0_0x0._s_0.X;
  fVar3 = (param_3->Translation).field0_0x0._s_0.Y;
  this->Scale = fVar1 * param_2->Scale;
  TVar5._s_0.Y = fVar1 * fStack_34 + fVar3;
  TVar5._s_0.X = fVar1 * local_38 + fVar2;
  (this->AbsolutePosition).field0_0x0 = TVar5;
  (this->Position).field0_0x0 = (param_2->Translation).field0_0x0;
  return this;
}

// FGeometry @ 1424e9a80

FGeometry * __thiscall FGeometry::FGeometry(FGeometry *this)

{
  *(undefined8 *)&this->Scale = 0x3f800000;
  this->Size = (FDeprecateSlateVector2D)0x0;
  (this->AbsolutePosition).field0_0x0._s_0.Y = 0.0;
  (this->Position).field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  (this->AccumulatedRenderTransform).M.M[0] = (float  [2])0x3f800000;
  (this->AccumulatedRenderTransform).M.M[1][0] = 0.0;
  (this->AccumulatedRenderTransform).M.M[1][1] = 1.0;
  (this->AccumulatedRenderTransform).Trans.field0_0x0 = (TVector2<float>_u_0)0x0;
  this->bHasRenderTransform = '\0';
  return this;
}

// operator= @ 1424ed5c0

FGeometry * __thiscall FGeometry::operator=(FGeometry *this,FGeometry *param_1)

{
  undefined8 uVar1;
  
  if (this != param_1) {
    uVar1 = *(undefined8 *)&param_1->Scale;
    this->Size = param_1->Size;
    *(undefined8 *)&this->Scale = uVar1;
    uVar1 = *(undefined8 *)((longlong)&(param_1->Position).field0_0x0 + 4);
    *(undefined8 *)((longlong)&(this->AbsolutePosition).field0_0x0 + 4) =
         *(undefined8 *)((longlong)&(param_1->AbsolutePosition).field0_0x0 + 4);
    *(undefined8 *)((longlong)&(this->Position).field0_0x0 + 4) = uVar1;
    uVar1 = *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[1] + 1);
    *(undefined8 *)((this->AccumulatedRenderTransform).M.M[0] + 1) =
         *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[0] + 1);
    *(undefined8 *)((this->AccumulatedRenderTransform).M.M[1] + 1) = uVar1;
    *(undefined8 *)((longlong)&(this->AccumulatedRenderTransform).Trans.field0_0x0 + 4) =
         *(undefined8 *)((longlong)&(param_1->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
  }
  return this;
}

// MakeChild @ 142512740

FGeometry * __thiscall
FGeometry::MakeChild
          (FGeometry *this,FGeometry *__return_storage_ptr__,FDeprecateVector2DParameter *param_1,
          FSlateLayoutTransform *param_2,TTransform2<float> *param_3,
          FDeprecateVector2DParameter *param_4)

{
  float fVar1;
  TVector2<float>_u_0_s_0 TVar2;
  float fVar3;
  float fVar4;
  undefined8 local_88;
  float local_80;
  float fStack_7c;
  TTransform2<float> local_78;
  TVector2<float>_u_0_s_0 local_5c;
  TTransform2<float> local_50;
  TTransform2<float> local_38 [2];
  
  local_5c = (this->AbsolutePosition).field0_0x0._s_0;
  fVar1 = this->Scale;
  __return_storage_ptr__->Size = *(FDeprecateSlateVector2D *)param_1;
  *(undefined8 *)&__return_storage_ptr__->Scale = 0x3f800000;
  (__return_storage_ptr__->AbsolutePosition).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Position).field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_88._0_4_ = SUB84(*param_1,0);
  local_88._4_4_ = SUB84(*param_1,4);
  fVar4 = (float)((uint)(*(float *)param_4 * (float)(undefined4)local_88) ^
                 __xmm_80000000800000008000000080000000);
  fVar3 = (float)((uint)(*(float *)&param_4->field_0x4 * (float)local_88._4_4_) ^
                 __xmm_80000000800000008000000080000000);
  local_50.M.M[0] = (param_3->M).M[0];
  local_50.M.M[1] = (param_3->M).M[1];
  local_78.M.M[0][0] = param_2->Scale;
  local_50.Trans.field0_0x0._s_0.X =
       *(float *)param_4 * (float)(undefined4)local_88 +
       fVar3 * (param_3->M).M[1][0] + fVar4 * (param_3->M).M[0][0] +
       (param_3->Trans).field0_0x0._s_0.X;
  local_50.Trans.field0_0x0._s_0.Y =
       *(float *)&param_4->field_0x4 * (float)local_88._4_4_ +
       fVar3 * (param_3->M).M[1][1] + fVar4 * (param_3->M).M[0][1] +
       (param_3->Trans).field0_0x0._s_0.Y;
  local_78.Trans.field0_0x0 = (param_2->Translation).field0_0x0;
  local_78.M.M[0][1] = 0.0;
  local_78.M.M[1][0] = 0.0;
  local_78.M.M[1][1] = local_78.M.M[0][0];
  Concatenate<TTransform2<float>_>(local_38,&local_50,&local_78);
  Concatenate<TTransform2<float>_>
            (&__return_storage_ptr__->AccumulatedRenderTransform,local_38,
             &this->AccumulatedRenderTransform);
  __return_storage_ptr__->bHasRenderTransform = '\x01';
  TVar2 = (param_2->Translation).field0_0x0._s_0;
  local_80 = TVar2.X;
  fStack_7c = TVar2.Y;
  __return_storage_ptr__->Scale = fVar1 * param_2->Scale;
  local_88._4_4_ = fVar1 * fStack_7c + local_5c.Y;
  local_88._0_4_ = fVar1 * local_80 + local_5c.X;
  (__return_storage_ptr__->AbsolutePosition).field0_0x0 = local_88;
  (__return_storage_ptr__->Position).field0_0x0 = (param_2->Translation).field0_0x0;
  return __return_storage_ptr__;
}

// ToString @ 1425209c0

FString * __thiscall FGeometry::ToString(FGeometry *this,FString *__return_storage_ptr__)

{
  FString local_38;
  FString local_28 [2];
  
  ::FString::PrintfImpl(local_28,L"X=%3.3f Y=%3.3f");
  ::FString::PrintfImpl(&local_38,L"X=%3.3f Y=%3.3f");
  ::FString::PrintfImpl(__return_storage_ptr__,L"[Abs=%s, Scale=%.2f, Size=%s]");
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// FGeometry @ 1425bcf80

FGeometry * __thiscall
FGeometry::FGeometry
          (FGeometry *this,FDeprecateVector2DParameter *param_1,FSlateLayoutTransform *param_2,
          TTransform2<float> *param_3,FDeprecateVector2DParameter *param_4,
          FSlateLayoutTransform *param_5,TTransform2<float> *param_6)

{
  float fVar1;
  TVector2<float>_u_0_s_0 TVar2;
  float fVar3;
  float fVar4;
  undefined8 local_68;
  float local_60;
  float fStack_5c;
  TTransform2<float> local_58;
  TTransform2<float> local_40;
  TTransform2<float> local_28;
  
  this->Size = *(FDeprecateSlateVector2D *)param_1;
  *(undefined8 *)&this->Scale = 0x3f800000;
  (this->AbsolutePosition).field0_0x0._s_0.Y = 0.0;
  (this->Position).field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_68._0_4_ = SUB84(*param_1,0);
  local_68._4_4_ = SUB84(*param_1,4);
  fVar4 = (float)((uint)(*(float *)param_4 * (float)(undefined4)local_68) ^
                 __xmm_80000000800000008000000080000000);
  fVar3 = (float)((uint)(*(float *)&param_4->field_0x4 * (float)local_68._4_4_) ^
                 __xmm_80000000800000008000000080000000);
  local_40.M.M[0] = (param_3->M).M[0];
  local_40.M.M[1] = (param_3->M).M[1];
  local_58.M.M[0][0] = param_2->Scale;
  local_40.Trans.field0_0x0._s_0.X =
       *(float *)param_4 * (float)(undefined4)local_68 +
       fVar3 * (param_3->M).M[1][0] + fVar4 * (param_3->M).M[0][0] +
       (param_3->Trans).field0_0x0._s_0.X;
  local_40.Trans.field0_0x0._s_0.Y =
       *(float *)&param_4->field_0x4 * (float)local_68._4_4_ +
       fVar3 * (param_3->M).M[1][1] + fVar4 * (param_3->M).M[0][1] +
       (param_3->Trans).field0_0x0._s_0.Y;
  local_58.Trans.field0_0x0 = (param_2->Translation).field0_0x0;
  local_58.M.M[0][1] = 0.0;
  local_58.M.M[1][0] = 0.0;
  local_58.M.M[1][1] = local_58.M.M[0][0];
  Concatenate<TTransform2<float>_>(&local_28,&local_40,&local_58);
  Concatenate<TTransform2<float>_>(&this->AccumulatedRenderTransform,&local_28,param_6);
  this->bHasRenderTransform = '\x01';
  TVar2 = (param_2->Translation).field0_0x0._s_0;
  fVar3 = param_5->Scale;
  local_60 = TVar2.X;
  fStack_5c = TVar2.Y;
  fVar4 = (param_5->Translation).field0_0x0._s_0.X;
  fVar1 = (param_5->Translation).field0_0x0._s_0.Y;
  this->Scale = fVar3 * param_2->Scale;
  local_68._4_4_ = fVar3 * fStack_5c + fVar1;
  local_68._0_4_ = fVar3 * local_60 + fVar4;
  (this->AbsolutePosition).field0_0x0 = local_68;
  (this->Position).field0_0x0 = (param_2->Translation).field0_0x0;
  return this;
}

// MakeChild @ 1425ea520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

FArrangedWidget * __thiscall
FGeometry::MakeChild
          (FGeometry *this,FArrangedWidget *__return_storage_ptr__,TSharedRef<SWidget,1> *param_1,
          FDeprecateVector2DParameter *param_2,FSlateLayoutTransform *param_3)

{
  undefined8 uVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  double dVar4;
  undefined1 auStackY_d8 [32];
  undefined8 local_98;
  FSlateLayoutTransform local_90;
  TTransform2<float> local_80;
  char local_68;
  FGeometry local_60;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  pSVar2 = param_1->Object;
  local_68 = (pSVar2->RenderTransformAttribute).field_0x18;
  if (GSlateFlowDirection == LeftToRight) {
    if (local_68 != '\0') {
      local_80.M.M[0][0] = *(float *)&(pSVar2->RenderTransformAttribute).field_0x0;
      local_80.M.M[0][1] = *(float *)&(pSVar2->RenderTransformAttribute).field_0x4;
      local_80.M.M[1][0] = *(float *)&(pSVar2->RenderTransformAttribute).field_0x8;
      local_80.M.M[1][1] = *(float *)&(pSVar2->RenderTransformAttribute).field_0xc;
      local_80.Trans.field0_0x0 =
           *(TVector2<float>_u_0 *)&(pSVar2->RenderTransformAttribute).field_0x10;
LAB_1425ea5d8:
      if (local_68 != '\0') {
        local_98._0_4_ = (undefined4)*(double *)&param_1->Object->RenderTransformPivotAttribute;
        if (GSlateFlowDirection != LeftToRight) {
          local_98._0_4_ = (__real_3f000000 - (float)(undefined4)local_98) + __real_3f000000;
        }
        local_98._4_4_ =
             (float)*(double *)&(param_1->Object->RenderTransformPivotAttribute).field_0x8;
        local_90.Scale = this->Scale;
        local_90.Translation.field0_0x0 = (this->AbsolutePosition).field0_0x0;
        FGeometry(&local_60,param_2,param_3,&local_80,(FDeprecateVector2DParameter *)&local_98,
                  &local_90,&this->AccumulatedRenderTransform);
        goto LAB_1425ea6a3;
      }
    }
  }
  else if (local_68 != '\0') {
    uVar1 = *(undefined8 *)&(pSVar2->RenderTransformAttribute).field_0x10;
    local_80.M.M[0][0] = *(float *)&(pSVar2->RenderTransformAttribute).field_0x0;
    local_80.M.M[0][1] = *(float *)&(pSVar2->RenderTransformAttribute).field_0x4;
    local_80.M.M[1][0] = *(float *)&(pSVar2->RenderTransformAttribute).field_0x8;
    local_80.M.M[1][1] = *(float *)&(pSVar2->RenderTransformAttribute).field_0xc;
    dVar4 = (double)(float)uVar1;
    local_98._4_4_ = (int)((ulonglong)uVar1 >> 0x20);
    local_98._0_4_ =
         (float)(double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) ^
                                 __xmm_80000000000000008000000000000000._4_4_,
                                 SUB84(dVar4,0) ^ (uint)__xmm_80000000000000008000000000000000);
    local_60._16_8_ = local_98;
    local_80.Trans.field0_0x0 = local_98;
    goto LAB_1425ea5d8;
  }
  local_90.Translation.field0_0x0 = (this->AbsolutePosition).field0_0x0;
  local_90.Scale = this->Scale;
  FGeometry(&local_60,param_2,param_3,&local_90,&this->AccumulatedRenderTransform,
            this->bHasRenderTransform);
LAB_1425ea6a3:
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar2 = param_1->Object;
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    (__return_storage_ptr__->Geometry).Size = local_60.Size;
    *(undefined8 *)&(__return_storage_ptr__->Geometry).Scale = local_60._8_8_;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->Geometry).AbsolutePosition.field0_0x0 + 4) =
         local_60._16_8_;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->Geometry).Position.field0_0x0 + 4) =
         local_60._24_8_;
    *(undefined8 *)((__return_storage_ptr__->Geometry).AccumulatedRenderTransform.M.M[0] + 1) =
         local_60.AccumulatedRenderTransform.M.M._4_8_;
    *(undefined8 *)((__return_storage_ptr__->Geometry).AccumulatedRenderTransform.M.M[1] + 1) =
         local_60.AccumulatedRenderTransform._12_8_;
    *(undefined8 *)
     ((longlong)&(__return_storage_ptr__->Geometry).AccumulatedRenderTransform.Trans.field0_0x0 + 4)
         = local_60._48_8_;
    (__return_storage_ptr__->Widget).Object = pSVar2;
    (__return_storage_ptr__->Widget).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    (__return_storage_ptr__->Geometry).Size = local_60.Size;
    *(undefined8 *)&(__return_storage_ptr__->Geometry).Scale = local_60._8_8_;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->Geometry).AbsolutePosition.field0_0x0 + 4) =
         local_60._16_8_;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->Geometry).Position.field0_0x0 + 4) =
         local_60._24_8_;
    *(undefined8 *)((__return_storage_ptr__->Geometry).AccumulatedRenderTransform.M.M[0] + 1) =
         local_60.AccumulatedRenderTransform.M.M._4_8_;
    *(undefined8 *)((__return_storage_ptr__->Geometry).AccumulatedRenderTransform.M.M[1] + 1) =
         local_60.AccumulatedRenderTransform._12_8_;
    *(undefined8 *)
     ((longlong)&(__return_storage_ptr__->Geometry).AccumulatedRenderTransform.Trans.field0_0x0 + 4)
         = local_60._48_8_;
    (__return_storage_ptr__->Widget).Object = pSVar2;
    (__return_storage_ptr__->Widget).SharedReferenceCount.ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

