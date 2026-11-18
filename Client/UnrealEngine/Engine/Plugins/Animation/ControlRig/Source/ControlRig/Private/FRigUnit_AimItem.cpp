// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a4cf280

UScriptStruct * __cdecl FRigUnit_AimItem::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_AimItem.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_AimItem.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_AimItem,(UObject *)pUVar1,
                         L"RigUnit_AimItem");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_AimItem.OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_AimItem.OuterSingleton;
}

// FRigUnit_AimItem @ 14a50be10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigUnit_AimItem * __thiscall FRigUnit_AimItem::FRigUnit_AimItem(FRigUnit_AimItem *this)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  ulonglong uVar10;
  uint uVar11;
  double dVar12;
  __m128 _Var13;
  double dVar14;
  double dVar15;
  __m128d _Var16;
  __m128d _Var17;
  __m128d _Var18;
  __m128d _Var19;
  __m128d _Var20;
  __m128d _Var21;
  uint local_b8;
  uint local_a8;
  undefined2 uStack_9a;
  undefined4 uStack_94;
  undefined4 uStack_84;
  undefined4 local_50;
  
  (this->Item).Type = None;
  *(undefined ***)&this->field_0x8 = &___7FRigVMExecutePin__6B_;
  *(undefined ***)this = &___7FRigUnit_AimItem__6B_;
  (this->Item).Name.ComparisonIndex = 0;
  (this->Item).Name.Number = 0;
  (this->Primary).Weight = 1.0;
  (this->Primary).Axis.field0_0x0._s_0.X = 1.0;
  (this->Primary).Axis.field0_0x0._s_0.Y = 0.0;
  (this->Primary).Axis.field0_0x0._s_0.Z = 0.0;
  (this->Primary).Target.field0_0x0._s_0.X = 1.0;
  (this->Primary).Target.field0_0x0._s_0.Y = 0.0;
  (this->Primary).Target.field0_0x0._s_0.Z = 0.0;
  (this->Primary).Kind = Location;
  local_b8 = CONCAT31(local_b8._1_3_,1);
  uVar10 = (ulonglong)local_b8;
  (this->Primary).Space.Type = (char)uVar10;
  *(int3 *)&(this->Primary).Space.field_0x1 = (int3)(uVar10 >> 8);
  (this->Primary).Space.Name.ComparisonIndex = (FNameEntryId)(int)(uVar10 >> 0x20);
  (this->Primary).Space.Name.Number = 0;
  (this->Secondary).Weight = 1.0;
  (this->Secondary).Axis.field0_0x0._s_0.X = 1.0;
  (this->Secondary).Axis.field0_0x0._s_0.Y = 0.0;
  (this->Secondary).Axis.field0_0x0._s_0.Z = 0.0;
  (this->Secondary).Target.field0_0x0._s_0.X = 1.0;
  (this->Secondary).Target.field0_0x0._s_0.Y = 0.0;
  (this->Secondary).Target.field0_0x0._s_0.Z = 0.0;
  (this->Secondary).Kind = Location;
  local_b8 = CONCAT31(local_b8._1_3_,1);
  uVar10 = (ulonglong)local_b8;
  (this->Secondary).Space.Type = (char)uVar10;
  *(int3 *)&(this->Secondary).Space.field_0x1 = (int3)(uVar10 >> 8);
  (this->Secondary).Space.Name.ComparisonIndex = (FNameEntryId)(int)(uVar10 >> 0x20);
  (this->Secondary).Space.Name.Number = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->DebugSettings).WorldOffset.Rotation.XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->DebugSettings).WorldOffset.Rotation.ZW.m128d_f64 = auVar4;
  _Var13 = GlobalVectorConstants::FloatZero;
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->DebugSettings).WorldOffset.Translation.XY.m128d_f64 = auVar5;
  dVar9 = (double)_Var13.m128_f32[3];
  auVar6._8_4_ = SUB84(dVar9,0);
  auVar6._0_8_ = (double)_Var13.m128_f32[2];
  auVar6._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  *(undefined1 (*) [16])(this->DebugSettings).WorldOffset.Translation.ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->DebugSettings).WorldOffset.Scale3D.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->DebugSettings).WorldOffset.Scale3D.ZW.m128d_f64 = auVar8;
  (this->DebugSettings).bEnabled = false;
  (this->DebugSettings).Scale = 10.0;
  *&(this->DebugSettings).WorldOffset.Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->DebugSettings).WorldOffset.Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->DebugSettings).WorldOffset.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->DebugSettings).WorldOffset.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->DebugSettings).WorldOffset.Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->DebugSettings).WorldOffset.Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  (this->CachedItem).Key.Type = None;
  (this->CachedItem).Key.Name.ComparisonIndex = 0;
  (this->CachedItem).Key.Name.Number = 0;
  (this->CachedItem).Index = 0xffff;
  (this->CachedItem).ContainerVersion = -1;
  (this->CachedItem).Element = (FRigBaseElement *)0x0;
  (this->PrimaryCachedSpace).Key.Type = None;
  (this->PrimaryCachedSpace).Key.Name.ComparisonIndex = 0;
  (this->PrimaryCachedSpace).Key.Name.Number = 0;
  (this->PrimaryCachedSpace).Index = 0xffff;
  (this->PrimaryCachedSpace).ContainerVersion = -1;
  (this->PrimaryCachedSpace).Element = (FRigBaseElement *)0x0;
  (this->SecondaryCachedSpace).Key.Type = None;
  (this->SecondaryCachedSpace).Key.Name.ComparisonIndex = 0;
  (this->SecondaryCachedSpace).Key.Name.Number = 0;
  (this->SecondaryCachedSpace).Index = 0xffff;
  dVar15 = _UNK_150689518;
  dVar14 = ___xmm_00000000000000003ff0000000000000;
  dVar12 = _UNK_15061cbc8;
  dVar9 = ___xmm_3ff00000000000000000000000000000;
  (this->SecondaryCachedSpace).ContainerVersion = -1;
  (this->SecondaryCachedSpace).Element = (FRigBaseElement *)0x0;
  local_b8 = CONCAT31(local_b8._1_3_,1);
  uVar10 = (ulonglong)local_b8;
  (this->Item).Type = (char)uVar10;
  *(int3 *)&(this->Item).field_0x1 = (int3)(uVar10 >> 8);
  (this->Item).Name.ComparisonIndex = (FNameEntryId)(int)(uVar10 >> 0x20);
  (this->Item).Name.Number = 0;
  *(ulonglong *)&this->Primary = CONCAT44(uStack_84,0x3f800000);
  (this->Primary).Axis.field0_0x0._s_0.X = dVar14;
  (this->Primary).Axis.field0_0x0._s_0.Y = dVar15;
  (this->Primary).Axis.field0_0x0._s_0.Z = dVar9;
  (this->Primary).Target.field0_0x0._s_0.X = dVar12;
  (this->Primary).Target.field0_0x0._s_0.Y = 0.0;
  (this->Primary).Target.field0_0x0._s_0.Z = 0.0;
  (this->Primary).Kind = 1;
  *(undefined3 *)&(this->Primary).field_0x39 = local_50._1_3_;
  (this->Primary).Space.Type = 1;
  *(undefined3 *)&(this->Primary).Space.field_0x1 = local_b8._1_3_;
  (this->Primary).Space.Name.ComparisonIndex = 0;
  (this->Primary).Space.Name.Number = 0;
  *(ulonglong *)&this->Secondary = CONCAT44(uStack_84,0x3f800000);
  (this->Secondary).Axis.field0_0x0._s_0.X = dVar14;
  (this->Secondary).Axis.field0_0x0._s_0.Y = dVar15;
  (this->Secondary).Axis.field0_0x0._s_0.Z = dVar9;
  (this->Secondary).Target.field0_0x0._s_0.X = dVar12;
  (this->Secondary).Target.field0_0x0._s_0.Y = 0.0;
  (this->Secondary).Target.field0_0x0._s_0.Z = 0.0;
  (this->Secondary).Kind = 1;
  *(undefined3 *)&(this->Secondary).field_0x39 = local_50._1_3_;
  (this->Secondary).Space.Type = 1;
  *(undefined3 *)&(this->Secondary).Space.field_0x1 = local_b8._1_3_;
  (this->Secondary).Space.Name.ComparisonIndex = 0;
  (this->Secondary).Space.Name.Number = 0;
  (this->Primary).Axis.field0_0x0._s_0.X = 1.0;
  (this->Primary).Axis.field0_0x0._s_0.Y = 0.0;
  (this->Primary).Axis.field0_0x0._s_0.Z = 0.0;
  (this->Secondary).Axis.field0_0x0._s_0.X = 0.0;
  (this->Secondary).Axis.field0_0x0._s_0.Y = 0.0;
  (this->Secondary).Axis.field0_0x0._s_0.Z = 1.0;
  this->Weight = 1.0;
  _Var21 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
  _Var20 = UE::Math::TTransform<double>::Identity.Scale3D.XY;
  _Var19 = UE::Math::TTransform<double>::Identity.Translation.ZW;
  _Var18 = UE::Math::TTransform<double>::Identity.Translation.XY;
  _Var17 = UE::Math::TTransform<double>::Identity.Rotation.ZW;
  _Var16 = UE::Math::TTransform<double>::Identity.Rotation.XY;
  (this->DebugSettings).bEnabled = false;
  *(undefined3 *)&(this->DebugSettings).field_0x1 = 0x3f8000;
  (this->DebugSettings).Scale = 10.0;
  (this->DebugSettings)._padding_ = (longlong)dVar14;
  uVar11 = local_a8 >> 8;
  local_a8 = uVar11 << 8;
  *&(this->DebugSettings).WorldOffset.Rotation.XY.m128d_f64 = _Var16.m128d_f64;
  *&(this->DebugSettings).WorldOffset.Rotation.ZW.m128d_f64 = _Var17.m128d_f64;
  *&(this->DebugSettings).WorldOffset.Translation.XY.m128d_f64 = _Var18.m128d_f64;
  *&(this->DebugSettings).WorldOffset.Translation.ZW.m128d_f64 = _Var19.m128d_f64;
  *&(this->DebugSettings).WorldOffset.Scale3D.XY.m128d_f64 = _Var20.m128d_f64;
  *&(this->DebugSettings).WorldOffset.Scale3D.ZW.m128d_f64 = _Var21.m128d_f64;
  uVar10 = (ulonglong)local_a8;
  local_a8 = uVar11 << 8;
  (this->CachedItem).Key.Type = (char)uVar10;
  *(int3 *)&(this->CachedItem).Key.field_0x1 = (int3)(uVar10 >> 8);
  (this->CachedItem).Key.Name.ComparisonIndex = (FNameEntryId)(int)(uVar10 >> 0x20);
  *(ulonglong *)&(this->CachedItem).Key.Name.Number = CONCAT26(uStack_9a,0xffff00000000);
  uVar10 = (ulonglong)local_a8;
  *(ulonglong *)&(this->CachedItem).ContainerVersion = CONCAT44(uStack_94,0xffffffff);
  (this->CachedItem).Element = (FRigBaseElement *)0x0;
  local_a8 = uVar11 << 8;
  (this->PrimaryCachedSpace).Key.Type = (char)uVar10;
  *(int3 *)&(this->PrimaryCachedSpace).Key.field_0x1 = (int3)(uVar10 >> 8);
  (this->PrimaryCachedSpace).Key.Name.ComparisonIndex = (FNameEntryId)(int)(uVar10 >> 0x20);
  *(ulonglong *)&(this->PrimaryCachedSpace).Key.Name.Number = CONCAT26(uStack_9a,0xffff00000000);
  uVar10 = (ulonglong)local_a8;
  *(ulonglong *)&(this->PrimaryCachedSpace).ContainerVersion = CONCAT44(uStack_94,0xffffffff);
  (this->PrimaryCachedSpace).Element = (FRigBaseElement *)0x0;
  this->bIsInitialized = false;
  (this->SecondaryCachedSpace).Key.Type = (char)uVar10;
  *(int3 *)&(this->SecondaryCachedSpace).Key.field_0x1 = (int3)(uVar10 >> 8);
  (this->SecondaryCachedSpace).Key.Name.ComparisonIndex = (FNameEntryId)(int)(uVar10 >> 0x20);
  *(ulonglong *)&(this->SecondaryCachedSpace).Key.Name.Number = CONCAT26(uStack_9a,0xffff00000000);
  *(ulonglong *)&(this->SecondaryCachedSpace).ContainerVersion = CONCAT44(uStack_94,0xffffffff);
  (this->SecondaryCachedSpace).Element = (FRigBaseElement *)0x0;
  return this;
}

// Execute @ 14a524650

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_AimItem::Execute(FRigUnit_AimItem *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Item,&this->Primary,&this->Secondary,this->Weight,
                &this->DebugSettings,&this->CachedItem,&this->PrimaryCachedSpace,
                &this->SecondaryCachedSpace,&this->bIsInitialized);
  return;
}

// Execute @ 14a5246e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_AimItem::Execute(FRigUnit_AimItem *this)

{
  undefined1 auStackY_2b8 [32];
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  FControlRigExecuteContext::FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  if ((FRigVMNameCache *)local_268._80_8_ == (FRigVMNameCache *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
        _thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                           ::__l5::_thread_safe_static_guard_0__);
      if (`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
          _thread_safe_static_guard_0__ == -1) {
        atexit(`FRigVMExecuteContext::Initialize'::__l5::
               _dynamic_atexit_destructor_for__StaticNameCache__);
        _Init_thread_footer(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                             ::__l5::_thread_safe_static_guard_0__);
      }
    }
    local_268._80_8_ =
         &`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
          StaticNameCache;
  }
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Item,&this->Primary,&this->Secondary,
                this->Weight,&this->DebugSettings,&this->CachedItem,&this->PrimaryCachedSpace,
                &this->SecondaryCachedSpace,&this->bIsInitialized);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetExecuteContextStruct @ 14a530920

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall FRigUnit_AimItem::GetExecuteContextStruct(FRigUnit_AimItem *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FControlRigExecuteContext,(UObject *)pUVar1,
                         L"ControlRigExecuteContext");
  }
  return Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton;
}

// RigVMExecute @ 14a535520

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_AimItem::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FRigElementKey *pFVar5;
  FRigUnit_AimItem_Target *pFVar6;
  FRigUnit_AimItem_Target *pFVar7;
  FRigVMMemoryHandle *pFVar8;
  float *pfVar9;
  FRigUnit_AimBone_DebugSettings *pFVar10;
  FRigVMSlice *pFVar11;
  FCachedRigElement *pFVar12;
  FCachedRigElement *pFVar13;
  FCachedRigElement *pFVar14;
  bool *pbVar15;
  FControlRigExecuteContext *pFVar16;
  
  iVar2 = param_2->ArrayNum;
  if (iVar2 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar8 = param_2->DataPtr;
  if (pFVar8->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar5 = (FRigElementKey *)pFVar8->Ptr;
  }
  else {
    pFVar5 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal(pFVar8->PropertyPath,pFVar8->Ptr,pFVar8->Property)
    ;
  }
  if (iVar2 < 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar8 = param_2->DataPtr;
  if (pFVar8[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FRigUnit_AimItem_Target *)pFVar8[1].Ptr;
  }
  else {
    pFVar6 = (FRigUnit_AimItem_Target *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar8[1].PropertyPath,pFVar8[1].Ptr,pFVar8[1].Property);
  }
  if (iVar2 < 3) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar8 = param_2->DataPtr;
  if (pFVar8[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar7 = (FRigUnit_AimItem_Target *)pFVar8[2].Ptr;
  }
  else {
    pFVar7 = (FRigUnit_AimItem_Target *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar8[2].PropertyPath,pFVar8[2].Ptr,pFVar8[2].Property);
  }
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pfVar9 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar8,true,-1);
  fVar1 = *pfVar9;
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pFVar10 = (FRigUnit_AimBone_DebugSettings *)FRigVMMemoryHandle::GetData_Internal(pFVar8,true,-1);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pFVar11 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar12 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar8,false,pFVar11->Offset + pFVar11->Index);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pFVar11 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar13 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar8,false,pFVar11->Offset + pFVar11->Index);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,7);
  pFVar11 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar14 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar8,false,pFVar11->Offset + pFVar11->Index);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,8);
  pFVar11 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pbVar15 = (bool *)FRigVMMemoryHandle::GetData_Internal
                              (pFVar8,false,pFVar11->Offset + pFVar11->Index);
  pFVar16 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar16,pFVar5,pFVar6,pFVar7,fVar1,pFVar10,pFVar12,pFVar13,pFVar14,pbVar15);
  return;
}

// StaticExecute @ 14a5614d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_AimItem::StaticExecute
          (FControlRigExecuteContext *param_1,FRigElementKey *param_2,
          FRigUnit_AimItem_Target *param_3,FRigUnit_AimItem_Target *param_4,float param_5,
          FRigUnit_AimBone_DebugSettings *param_6,FCachedRigElement *param_7,
          FCachedRigElement *param_8,FCachedRigElement *param_9,bool *param_10)

{
  ushort *puVar1;
  URigHierarchy *this;
  ulonglong uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStackY_1a8 [32];
  uint local_158;
  TTransform<double> local_128;
  TTransform<double> local_c8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  this = param_1->Hierarchy;
  if (this != (URigHierarchy *)0x0) {
    uVar5 = 0xffffffff;
    puVar1 = &param_7->Index;
    if (*param_10 == false) {
      *puVar1 = 0xffff;
      param_7->ContainerVersion = -1;
      param_7->Element = (FRigBaseElement *)0x0;
      uVar4 = local_158 >> 8;
      local_158 = uVar4 << 8;
      uVar2 = (ulonglong)local_158;
      (param_7->Key).Type = (char)uVar2;
      *(int3 *)&(param_7->Key).field_0x1 = (int3)(uVar2 >> 8);
      (param_7->Key).Name.ComparisonIndex = (FNameEntryId)(int)(uVar2 >> 0x20);
      (param_7->Key).Name.Number = 0;
      param_8->Index = 0xffff;
      param_8->ContainerVersion = -1;
      param_8->Element = (FRigBaseElement *)0x0;
      local_158 = uVar4 << 8;
      uVar2 = (ulonglong)local_158;
      (param_8->Key).Type = (char)uVar2;
      *(int3 *)&(param_8->Key).field_0x1 = (int3)(uVar2 >> 8);
      (param_8->Key).Name.ComparisonIndex = (FNameEntryId)(int)(uVar2 >> 0x20);
      (param_8->Key).Name.Number = 0;
      local_158 = uVar4 << 8;
      uVar2 = (ulonglong)local_158;
      (param_9->Key).Type = (char)uVar2;
      *(int3 *)&(param_9->Key).field_0x1 = (int3)(uVar2 >> 8);
      (param_9->Key).Name.ComparisonIndex = (FNameEntryId)(int)(uVar2 >> 0x20);
      (param_9->Key).Name.Number = 0;
      param_9->Index = 0xffff;
      param_9->ContainerVersion = -1;
      param_9->Element = (FRigBaseElement *)0x0;
      *param_10 = true;
    }
    bVar3 = FCachedRigElement::UpdateCache(param_7,param_2,this);
    if (((bVar3) && (__real_322bcc77 < param_5)) &&
       ((__real_322bcc77 < param_3->Weight || (__real_322bcc77 < param_4->Weight)))) {
      uVar4 = 0xffffffff;
      if (*puVar1 != 0xffff) {
        uVar4 = (uint)*puVar1;
      }
      URigHierarchy::GetGlobalTransformByIndex(this,&local_c8,uVar4,false);
      FRigUnit_AimBoneMath::StaticExecute
                (param_1,&local_c8,param_3,param_4,param_5,&local_c8,param_6,param_8,param_9,
                 param_10);
      if (*puVar1 != 0xffff) {
        uVar5 = (uint)*puVar1;
      }
      local_128.Rotation.XY.m128d_f64[0] = local_c8.Rotation.XY.m128d_f64[0];
      local_128.Rotation.XY.m128d_f64[1] = local_c8.Rotation.XY.m128d_f64[1];
      local_128.Rotation.ZW.m128d_f64[0] = local_c8.Rotation.ZW.m128d_f64[0];
      local_128.Rotation.ZW.m128d_f64[1] = local_c8.Rotation.ZW.m128d_f64[1];
      local_128.Translation.XY.m128d_f64[0] = local_c8.Translation.XY.m128d_f64[0];
      local_128.Translation.XY.m128d_f64[1] = local_c8.Translation.XY.m128d_f64[1];
      local_128.Translation.ZW.m128d_f64[0] = local_c8.Translation.ZW.m128d_f64[0];
      local_128.Translation.ZW.m128d_f64[1] = local_c8.Translation.ZW.m128d_f64[1];
      local_128.Scale3D.XY.m128d_f64[0] = local_c8.Scale3D.XY.m128d_f64[0];
      local_128.Scale3D.XY.m128d_f64[1] = local_c8.Scale3D.XY.m128d_f64[1];
      local_128.Scale3D.ZW.m128d_f64[0] = local_c8.Scale3D.ZW.m128d_f64[0];
      local_128.Scale3D.ZW.m128d_f64[1] = local_c8.Scale3D.ZW.m128d_f64[1];
      URigHierarchy::SetGlobalTransformByIndex(this,uVar5,&local_128,false,true,false,false);
    }
  }
  return;
}

