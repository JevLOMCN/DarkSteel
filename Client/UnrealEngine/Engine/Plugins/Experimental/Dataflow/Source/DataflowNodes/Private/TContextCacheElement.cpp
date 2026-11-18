// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowNodes
// Functions: 31

// TContextCacheElement<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_> @ 14dacba70

TContextCacheElement<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_> * __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_>::
TContextCacheElement<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_>
          (TContextCacheElement<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_> *this,
          TContextCacheElement<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_> *param_1
          )

{
  TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  FScriptContainerElement *_Src;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  lVar4 = param_1->_padding_;
  pTVar1 = &this->Data;
  lVar7 = param_1->_padding_;
  uVar5 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  uVar6 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = param_1->_padding_;
  this->_padding_ =
       (longlong)
       &
       ___7__TContextCacheElement_V__TArray_U__TBox_N_Math_UE__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
  ;
  piVar2 = &(this->Data).ArrayMax;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar5;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar6;
  *(int *)&this->_padding_ = (int)lVar7;
  this->_padding_ = lVar4;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Data).ArrayNum;
  _Src = (param_1->Data).AllocatorInstance.Data;
  (this->Data).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 * 0x38);
  }
  return this;
}

// Clone @ 14dacfcb0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<float_&>::Clone
          (TContextCacheElement<float_&> *this,IContextCacheStore *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  IContextCacheStore IVar5;
  
  IVar5 = (IContextCacheStore)::operator_new(0x40);
  if (IVar5 != (IContextCacheStore)0x0) {
    uVar3 = *(undefined8 *)((longlong)&this->_padding_ + 4);
    lVar1 = this->_padding_;
    lVar2 = this->_padding_;
    lVar4 = this->_padding_;
    *(undefined8 *)((longlong)IVar5 + 0xc) = *(undefined8 *)((longlong)&this->_padding_ + 4);
    *(undefined8 *)((longlong)IVar5 + 0x14) = uVar3;
    *(undefined4 *)((longlong)IVar5 + 8) = 0;
    *(longlong *)((longlong)IVar5 + 0x20) = lVar2;
    *(int *)((longlong)IVar5 + 0x28) = (int)lVar4;
    *(longlong *)((longlong)IVar5 + 0x30) = lVar1;
    *(undefined ***)IVar5 = &___7__TContextCacheElement_AEAM_Dataflow_UE__6B_;
    *(float *)((longlong)IVar5 + 0x38) = this->Data;
    *param_1 = IVar5;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14dacfd40

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TBox<double>_&>::Clone
          (TContextCacheElement<UE::Math::TBox<double>_&> *this,IContextCacheStore *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  IContextCacheStore IVar7;
  
  IVar7 = (IContextCacheStore)::operator_new(0x70);
  if (IVar7 != (IContextCacheStore)0x0) {
    uVar3 = *(undefined8 *)((longlong)&this->_padding_ + 4);
    lVar1 = this->_padding_;
    lVar2 = this->_padding_;
    lVar6 = this->_padding_;
    *(undefined8 *)((longlong)IVar7 + 0xc) = *(undefined8 *)((longlong)&this->_padding_ + 4);
    *(undefined8 *)((longlong)IVar7 + 0x14) = uVar3;
    *(undefined4 *)((longlong)IVar7 + 8) = 0;
    *(longlong *)((longlong)IVar7 + 0x20) = lVar2;
    *(int *)((longlong)IVar7 + 0x28) = (int)lVar6;
    *(longlong *)((longlong)IVar7 + 0x30) = lVar1;
    *(undefined ***)IVar7 = &___7__TContextCacheElement_AEAU__TBox_N_Math_UE___Dataflow_UE__6B_;
    dVar4 = (this->Data).Min.field0_0x0._s_0.X;
    dVar5 = (this->Data).Min.field0_0x0._s_0.Y;
    *param_1 = IVar7;
    *(double *)((longlong)IVar7 + 0x38) = dVar4;
    *(double *)((longlong)IVar7 + 0x40) = dVar5;
    dVar4 = (this->Data).Max.field0_0x0._s_0.X;
    *(double *)((longlong)IVar7 + 0x48) = (this->Data).Min.field0_0x0._s_0.Z;
    *(double *)((longlong)IVar7 + 0x50) = dVar4;
    dVar4 = (this->Data).Max.field0_0x0._s_0.Z;
    *(double *)((longlong)IVar7 + 0x58) = (this->Data).Max.field0_0x0._s_0.Y;
    *(double *)((longlong)IVar7 + 0x60) = dVar4;
    *(undefined8 *)((longlong)IVar7 + 0x68) = *(undefined8 *)&(this->Data).IsValid;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14dacfde0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<FString_&>::Clone
          (TContextCacheElement<FString_&> *this,IContextCacheStore *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  IContextCacheStore IVar5;
  
  IVar5 = (IContextCacheStore)::operator_new(0x48);
  if (IVar5 != (IContextCacheStore)0x0) {
    uVar3 = *(undefined8 *)((longlong)&this->_padding_ + 4);
    lVar1 = this->_padding_;
    lVar2 = this->_padding_;
    lVar4 = this->_padding_;
    *(undefined8 *)((longlong)IVar5 + 0xc) = *(undefined8 *)((longlong)&this->_padding_ + 4);
    *(undefined8 *)((longlong)IVar5 + 0x14) = uVar3;
    *(undefined4 *)((longlong)IVar5 + 8) = 0;
    *(longlong *)((longlong)IVar5 + 0x20) = lVar2;
    *(int *)((longlong)IVar5 + 0x28) = (int)lVar4;
    *(longlong *)((longlong)IVar5 + 0x30) = lVar1;
    *(undefined ***)IVar5 = &___7__TContextCacheElement_AEAVFString___Dataflow_UE__6B_;
    ::FString::FString((FString *)((longlong)IVar5 + 0x38),&this->Data);
    *param_1 = IVar5;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14dacfe80

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TBox<double>_const_&>::Clone
          (TContextCacheElement<UE::Math::TBox<double>_const_&> *this,IContextCacheStore *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  IContextCacheStore IVar7;
  
  IVar7 = (IContextCacheStore)::operator_new(0x70);
  if (IVar7 != (IContextCacheStore)0x0) {
    uVar3 = *(undefined8 *)((longlong)&this->_padding_ + 4);
    lVar1 = this->_padding_;
    lVar2 = this->_padding_;
    lVar6 = this->_padding_;
    *(undefined8 *)((longlong)IVar7 + 0xc) = *(undefined8 *)((longlong)&this->_padding_ + 4);
    *(undefined8 *)((longlong)IVar7 + 0x14) = uVar3;
    *(undefined4 *)((longlong)IVar7 + 8) = 0;
    *(longlong *)((longlong)IVar7 + 0x20) = lVar2;
    *(int *)((longlong)IVar7 + 0x28) = (int)lVar6;
    *(longlong *)((longlong)IVar7 + 0x30) = lVar1;
    *(undefined ***)IVar7 = &___7__TContextCacheElement_AEBU__TBox_N_Math_UE___Dataflow_UE__6B_;
    dVar4 = (this->Data).Min.field0_0x0._s_0.X;
    dVar5 = (this->Data).Min.field0_0x0._s_0.Y;
    *param_1 = IVar7;
    *(double *)((longlong)IVar7 + 0x38) = dVar4;
    *(double *)((longlong)IVar7 + 0x40) = dVar5;
    dVar4 = (this->Data).Max.field0_0x0._s_0.X;
    *(double *)((longlong)IVar7 + 0x48) = (this->Data).Min.field0_0x0._s_0.Z;
    *(double *)((longlong)IVar7 + 0x50) = dVar4;
    dVar4 = (this->Data).Max.field0_0x0._s_0.Z;
    *(double *)((longlong)IVar7 + 0x58) = (this->Data).Max.field0_0x0._s_0.Y;
    *(double *)((longlong)IVar7 + 0x60) = dVar4;
    *(undefined8 *)((longlong)IVar7 + 0x68) = *(undefined8 *)&(this->Data).IsValid;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14dacff20

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_>::
Clone(TContextCacheElement<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_> *this,
     IContextCacheStore *param_1)

{
  TContextCacheElement<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x48);
  if (this_00 !=
      (TContextCacheElement<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_> *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElement<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_>
                      (this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14dad1120

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<float_&>::CreateArrayFromElement
          (TContextCacheElement<float_&> *this,IContextCacheStore *param_1,FProperty *param_2,
          FGuid *param_3,uint param_4,FTimestamp *param_5)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  IContextCacheStore IVar5;
  IContextCacheStore IVar6;
  undefined4 in_stack_0000002c;
  undefined8 *in_stack_00000038;
  ForAnyElementType local_18;
  undefined4 local_10;
  int iStack_c;
  
  fVar1 = this->Data;
  IVar6 = (IContextCacheStore)0x0;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = 1;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,1,0,&local_18,1,&iStack_c);
  *(float *)local_18.Data = fVar1;
  IVar5 = (IContextCacheStore)::operator_new(0x48);
  if (IVar5 != (IContextCacheStore)0x0) {
    uVar2 = *in_stack_00000038;
    uVar3 = *(undefined8 *)CONCAT44(in_stack_0000002c,param_4);
    uVar4 = ((undefined8 *)CONCAT44(in_stack_0000002c,param_4))[1];
    *(undefined4 *)((longlong)IVar5 + 8) = 0;
    *(undefined8 *)((longlong)IVar5 + 0xc) = uVar3;
    *(undefined8 *)((longlong)IVar5 + 0x14) = uVar4;
    *(FGuid **)((longlong)IVar5 + 0x20) = param_3;
    *(undefined4 *)((longlong)IVar5 + 0x28) = param_5._0_4_;
    *(undefined8 *)((longlong)IVar5 + 0x30) = uVar2;
    *(undefined ***)IVar5 =
         &___7__TContextCacheElement_V__TArray_MV__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    *(FScriptContainerElement **)((longlong)IVar5 + 0x38) = local_18.Data;
    local_18.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)IVar5 + 0x40) = local_10;
    *(int *)((longlong)IVar5 + 0x44) = iStack_c;
    local_10 = 0;
    iStack_c = 0;
    IVar6 = IVar5;
  }
  *param_1 = IVar6;
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14dad1230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TBox<double>_&>::CreateArrayFromElement
          (TContextCacheElement<UE::Math::TBox<double>_&> *this,IContextCacheStore *param_1,
          FProperty *param_2,FGuid *param_3,uint param_4,FTimestamp *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  IContextCacheStore IVar4;
  IContextCacheStore IVar5;
  undefined4 in_stack_0000002c;
  undefined8 *in_stack_00000038;
  undefined1 auStackY_d8 [32];
  ForAnyElementType local_98;
  undefined4 local_90;
  int iStack_8c;
  double local_88;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  local_78 = (this->Data).Min.field0_0x0._s_0.X;
  dStack_70 = (this->Data).Min.field0_0x0._s_0.Y;
  local_68 = (this->Data).Min.field0_0x0._s_0.Z;
  dStack_60 = (this->Data).Max.field0_0x0._s_0.X;
  local_58 = (this->Data).Max.field0_0x0._s_0.Y;
  dStack_50 = (this->Data).Max.field0_0x0._s_0.Z;
  IVar5 = (IContextCacheStore)0x0;
  local_88 = *(double *)&(this->Data).IsValid;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 1;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x38,8,1,0,&local_98,1,&iStack_8c);
  *(double *)local_98.Data = local_78;
  *(double *)(local_98.Data + 8) = dStack_70;
  *(double *)(local_98.Data + 0x10) = local_68;
  *(double *)(local_98.Data + 0x18) = dStack_60;
  *(double *)(local_98.Data + 0x20) = local_58;
  *(double *)(local_98.Data + 0x28) = dStack_50;
  *(double *)(local_98.Data + 0x30) = local_88;
  IVar4 = (IContextCacheStore)::operator_new(0x48);
  if (IVar4 != (IContextCacheStore)0x0) {
    uVar1 = *in_stack_00000038;
    uVar2 = *(undefined8 *)CONCAT44(in_stack_0000002c,param_4);
    uVar3 = ((undefined8 *)CONCAT44(in_stack_0000002c,param_4))[1];
    *(undefined4 *)((longlong)IVar4 + 0x28) = param_5._0_4_;
    *(undefined ***)IVar4 =
         &
         ___7__TContextCacheElement_V__TArray_U__TBox_N_Math_UE__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    *(undefined4 *)((longlong)IVar4 + 8) = 0;
    *(undefined8 *)((longlong)IVar4 + 0xc) = uVar2;
    *(undefined8 *)((longlong)IVar4 + 0x14) = uVar3;
    *(FGuid **)((longlong)IVar4 + 0x20) = param_3;
    *(undefined8 *)((longlong)IVar4 + 0x30) = uVar1;
    *(FScriptContainerElement **)((longlong)IVar4 + 0x38) = local_98.Data;
    local_98.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)IVar4 + 0x40) = local_90;
    *(int *)((longlong)IVar4 + 0x44) = iStack_8c;
    local_90 = 0;
    iStack_8c = 0;
    IVar5 = IVar4;
  }
  *param_1 = IVar5;
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14dad13b0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<FString_&>::CreateArrayFromElement
          (TContextCacheElement<FString_&> *this,IContextCacheStore *param_1,FProperty *param_2,
          FGuid *param_3,uint param_4,FTimestamp *param_5)

{
  FScriptContainerElement *_Src;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  IContextCacheStore IVar4;
  IContextCacheStore IVar5;
  longlong lVar6;
  undefined4 in_stack_0000002c;
  undefined8 *in_stack_00000038;
  ForAnyElementType local_28;
  undefined8 local_20;
  FString local_18;
  
  local_18.Data.ArrayNum = (this->Data).Data.ArrayNum;
  lVar6 = (longlong)local_18.Data.ArrayNum;
  IVar5 = (IContextCacheStore)0x0;
  _Src = (this->Data).Data.AllocatorInstance.Data;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.Data.ArrayNum == 0) {
    local_18.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_18.Data.ArrayNum,0,(ForAnyElementType *)&local_18,local_18.Data.ArrayNum,
               &local_18.Data.ArrayMax);
    memcpy(local_18.Data.AllocatorInstance.Data,_Src,lVar6 * 2);
  }
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = CONCAT44(local_20._4_4_,1);
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_28,1,(int *)((longlong)&local_20 + 4));
  ConstructItems<FString,FString,int>(local_28.Data,&local_18,1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  IVar4 = (IContextCacheStore)::operator_new(0x48);
  if (IVar4 != (IContextCacheStore)0x0) {
    uVar1 = *in_stack_00000038;
    uVar2 = *(undefined8 *)CONCAT44(in_stack_0000002c,param_4);
    uVar3 = ((undefined8 *)CONCAT44(in_stack_0000002c,param_4))[1];
    *(undefined4 *)((longlong)IVar4 + 8) = 0;
    *(undefined8 *)((longlong)IVar4 + 0xc) = uVar2;
    *(undefined8 *)((longlong)IVar4 + 0x14) = uVar3;
    *(FGuid **)((longlong)IVar4 + 0x20) = param_3;
    *(undefined4 *)((longlong)IVar4 + 0x28) = param_5._0_4_;
    *(undefined8 *)((longlong)IVar4 + 0x30) = uVar1;
    *(undefined ***)IVar4 =
         &
         ___7__TContextCacheElement_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    *(FScriptContainerElement **)((longlong)IVar4 + 0x38) = local_28.Data;
    local_28.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)IVar4 + 0x40) = (int)local_20;
    *(undefined4 *)((longlong)IVar4 + 0x44) = local_20._4_4_;
    local_20 = 0;
    IVar5 = IVar4;
    local_20._0_4_ = 0;
  }
  *param_1 = IVar5;
  DestructItems<FString,int>((FString *)local_28.Data,(int)local_20);
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14dad1550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TBox<double>_const_&>::CreateArrayFromElement
          (TContextCacheElement<UE::Math::TBox<double>_const_&> *this,IContextCacheStore *param_1,
          FProperty *param_2,FGuid *param_3,uint param_4,FTimestamp *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  IContextCacheStore IVar4;
  IContextCacheStore IVar5;
  undefined4 in_stack_0000002c;
  undefined8 *in_stack_00000038;
  undefined1 auStackY_d8 [32];
  ForAnyElementType local_98;
  undefined4 local_90;
  int iStack_8c;
  double local_88;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  local_78 = (this->Data).Min.field0_0x0._s_0.X;
  dStack_70 = (this->Data).Min.field0_0x0._s_0.Y;
  local_68 = (this->Data).Min.field0_0x0._s_0.Z;
  dStack_60 = (this->Data).Max.field0_0x0._s_0.X;
  local_58 = (this->Data).Max.field0_0x0._s_0.Y;
  dStack_50 = (this->Data).Max.field0_0x0._s_0.Z;
  IVar5 = (IContextCacheStore)0x0;
  local_88 = *(double *)&(this->Data).IsValid;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 1;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x38,8,1,0,&local_98,1,&iStack_8c);
  *(double *)local_98.Data = local_78;
  *(double *)(local_98.Data + 8) = dStack_70;
  *(double *)(local_98.Data + 0x10) = local_68;
  *(double *)(local_98.Data + 0x18) = dStack_60;
  *(double *)(local_98.Data + 0x20) = local_58;
  *(double *)(local_98.Data + 0x28) = dStack_50;
  *(double *)(local_98.Data + 0x30) = local_88;
  IVar4 = (IContextCacheStore)::operator_new(0x48);
  if (IVar4 != (IContextCacheStore)0x0) {
    uVar1 = *in_stack_00000038;
    uVar2 = *(undefined8 *)CONCAT44(in_stack_0000002c,param_4);
    uVar3 = ((undefined8 *)CONCAT44(in_stack_0000002c,param_4))[1];
    *(undefined4 *)((longlong)IVar4 + 0x28) = param_5._0_4_;
    *(undefined ***)IVar4 =
         &
         ___7__TContextCacheElement_V__TArray_U__TBox_N_Math_UE__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    *(undefined4 *)((longlong)IVar4 + 8) = 0;
    *(undefined8 *)((longlong)IVar4 + 0xc) = uVar2;
    *(undefined8 *)((longlong)IVar4 + 0x14) = uVar3;
    *(FGuid **)((longlong)IVar4 + 0x20) = param_3;
    *(undefined8 *)((longlong)IVar4 + 0x30) = uVar1;
    *(FScriptContainerElement **)((longlong)IVar4 + 0x38) = local_98.Data;
    local_98.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)IVar4 + 0x40) = local_90;
    *(int *)((longlong)IVar4 + 0x44) = iStack_8c;
    local_90 = 0;
    iStack_8c = 0;
    IVar5 = IVar4;
  }
  *param_1 = IVar5;
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14dad16d0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_>::
CreateArrayFromElement
          (TContextCacheElement<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14dad2780

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<float_&>::CreateFromArrayElement
          (TContextCacheElement<float_&> *this,IContextCacheStore *param_1,int param_2,
          FProperty *param_3,FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14dad27a0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TBox<double>_&>::CreateFromArrayElement
          (TContextCacheElement<UE::Math::TBox<double>_&> *this,IContextCacheStore *param_1,
          int param_2,FProperty *param_3,FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14dad27c0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<FString_&>::CreateFromArrayElement
          (TContextCacheElement<FString_&> *this,IContextCacheStore *param_1,int param_2,
          FProperty *param_3,FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14dad27e0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TBox<double>_const_&>::CreateFromArrayElement
          (TContextCacheElement<UE::Math::TBox<double>_const_&> *this,IContextCacheStore *param_1,
          int param_2,FProperty *param_3,FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14dad2800

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_>::
CreateFromArrayElement
          (TContextCacheElement<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,uint param_5,
          FTimestamp *param_6)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  TVar7;
  IContextCacheStore IVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  undefined4 in_stack_00000034;
  undefined8 *in_stack_00000040;
  
  uVar10 = (uint)param_3;
  if (((int)uVar10 < 0) || ((this->Data).ArrayNum <= (int)uVar10)) {
    *param_1 = (IContextCacheStore)0x0;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  uVar6 = 0;
  if ((int)uVar10 < (this->Data).ArrayNum) {
    uVar6 = ~uVar10 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      TVar7.Ptr = (FContextCacheElementBase *)(*pcVar2)();
      return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
              )TVar7.Ptr;
    }
  }
  pFVar9 = (this->Data).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x38;
  IVar8 = (IContextCacheStore)::operator_new(0x70);
  if (IVar8 != (IContextCacheStore)0x0) {
    *param_1 = IVar8;
    uVar1 = *in_stack_00000040;
    uVar3 = *(undefined8 *)CONCAT44(in_stack_00000034,param_5);
    uVar4 = ((undefined8 *)CONCAT44(in_stack_00000034,param_5))[1];
    *(undefined4 *)((longlong)IVar8 + 8) = 0;
    *(undefined8 *)((longlong)IVar8 + 0xc) = uVar3;
    *(undefined8 *)((longlong)IVar8 + 0x14) = uVar4;
    *(FGuid **)((longlong)IVar8 + 0x20) = param_4;
    *(undefined4 *)((longlong)IVar8 + 0x28) = param_6._0_4_;
    *(undefined ***)IVar8 = &___7__TContextCacheElement_AEBU__TBox_N_Math_UE___Dataflow_UE__6B_;
    *(undefined8 *)((longlong)IVar8 + 0x30) = uVar1;
    uVar1 = *(undefined8 *)(pFVar9 + 8);
    *(undefined8 *)((longlong)IVar8 + 0x38) = *(undefined8 *)pFVar9;
    *(undefined8 *)((longlong)IVar8 + 0x40) = uVar1;
    uVar1 = *(undefined8 *)(pFVar9 + 0x18);
    *(undefined8 *)((longlong)IVar8 + 0x48) = *(undefined8 *)(pFVar9 + 0x10);
    *(undefined8 *)((longlong)IVar8 + 0x50) = uVar1;
    uVar1 = *(undefined8 *)(pFVar9 + 0x28);
    *(undefined8 *)((longlong)IVar8 + 0x58) = *(undefined8 *)(pFVar9 + 0x20);
    *(undefined8 *)((longlong)IVar8 + 0x60) = uVar1;
    *(undefined8 *)((longlong)IVar8 + 0x68) = *(undefined8 *)(pFVar9 + 0x30);
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// GetNumArrayElements @ 14dad5540

int __thiscall
UE::Dataflow::TContextCacheElement<float_&>::GetNumArrayElements
          (TContextCacheElement<float_&> *this,IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 14dad5550

int __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TBox<double>_&>::GetNumArrayElements
          (TContextCacheElement<UE::Math::TBox<double>_&> *this,IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 14dad5560

int __thiscall
UE::Dataflow::TContextCacheElement<FString_&>::GetNumArrayElements
          (TContextCacheElement<FString_&> *this,IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 14dad5570

int __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TBox<double>_const_&>::GetNumArrayElements
          (TContextCacheElement<UE::Math::TBox<double>_const_&> *this,IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 14dad5580

int __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_>::
GetNumArrayElements(TContextCacheElement<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_>
                    *this,IContextCacheStore *param_1)

{
  return (this->Data).ArrayNum;
}

// GetUntypedData @ 14dad6a10

void * __thiscall
UE::Dataflow::TContextCacheElement<float_&>::GetUntypedData
          (TContextCacheElement<float_&> *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14dad6a20

void * __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TBox<double>_&>::GetUntypedData
          (TContextCacheElement<UE::Math::TBox<double>_&> *this,IContextCacheStore *param_1,
          FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14dad6a30

void * __thiscall
UE::Dataflow::TContextCacheElement<FString_&>::GetUntypedData
          (TContextCacheElement<FString_&> *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14dad6a40

void * __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TBox<double>_const_&>::GetUntypedData
          (TContextCacheElement<UE::Math::TBox<double>_const_&> *this,IContextCacheStore *param_1,
          FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14dad6a50

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_>::
GetUntypedData(TContextCacheElement<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_>
               *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// IsArray @ 14dad6ca0

bool __thiscall
UE::Dataflow::TContextCacheElement<float_&>::IsArray
          (TContextCacheElement<float_&> *this,IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 14dad6cb0

bool __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TBox<double>_&>::IsArray
          (TContextCacheElement<UE::Math::TBox<double>_&> *this,IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 14dad6cc0

bool __thiscall
UE::Dataflow::TContextCacheElement<FString_&>::IsArray
          (TContextCacheElement<FString_&> *this,IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 14dad6cd0

bool __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TBox<double>_const_&>::IsArray
          (TContextCacheElement<UE::Math::TBox<double>_const_&> *this,IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 14dad6ce0

bool __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_>::
IsArray(TContextCacheElement<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_> *this,
       IContextCacheStore *param_1)

{
  return true;
}

