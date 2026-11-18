// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 2

// ApplyStamp @ 14cce0e30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FTwistKelvinletBrushOp::ApplyStamp
          (FTwistKelvinletBrushOp *this,FDynamicMesh3 *param_1,FSculptBrushStamp *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_4)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar5;
  bool bVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  float fVar9;
  TArrayView<std::nullptr_t,int> local_178;
  code *local_168;
  undefined8 **local_160;
  TArrayView<std::nullptr_t,int> local_158;
  code *local_148;
  undefined8 **local_140;
  TArrayView<std::nullptr_t,int> local_138;
  code *local_128;
  FSculptBrushStamp **local_120;
  FSculptBrushStamp *local_118;
  TArray<int,TSizedDefaultAllocator<32>_> *local_110;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_108;
  FTwistKelvinletBrushOp *local_100;
  double *local_f8;
  TArray<int,TSizedDefaultAllocator<32>_> *local_f0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_e8;
  TFrame3<double> *local_e0;
  FTwistKelvinletBrushOp *local_d8;
  double *local_d0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_c8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_c0;
  TFrame3<double> *local_b8;
  undefined8 local_b0;
  int local_a8;
  FTwistKelvinletBrushOp *local_a0;
  double local_98;
  double local_90;
  double local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  double local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  FBaseKelvinletBrushOp::SetBaseProperties((FBaseKelvinletBrushOp *)this,param_1,param_2);
  bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->field_0x8);
  if (!bVar6) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5139374200154226864>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Public\\Sculpting\\MeshBrushOpBase.h"
                       ,0xb0,"PropertySet.IsValid()");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x8);
  if (pUVar7 != (UObject *)0x0) {
    pUVar8 = Z_Construct_UClass_UTwistKelvinletBrushOpProps_NoRegister();
    iVar2 = (int)pUVar8->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar8->_padding_)) goto LAB_14cce0f02;
  }
  pUVar7 = (UObject *)0x0;
  bVar6 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<5139374200154226866>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Public\\Sculpting\\MeshBrushOpBase.h"
                     ,0xb2,"CastResult");
  if (bVar6) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14cce0f02:
  fVar9 = (float)(**(code **)(*(longlong *)pUVar7 + 0x2c8))(pUVar7);
  iVar2 = *(int *)&this->field_0x64;
  pTVar5 = param_4;
  iVar3 = param_3->ArrayNum;
  local_68 = (double)(float)((double)fVar9 * param_2->Direction * __real_4024000000000000);
  local_90 = __real_3fb45f306446f9b4 / (double)*(float *)&this->field_0x58;
  local_98 = (double)*(float *)&this->field_0x60;
  local_88 = __real_3fd0000000000000 /
             (__real_3ff0000000000000 - (double)*(float *)&this->field_0x5c);
  local_78 = CONCAT44((uint)((ulonglong)local_68 >> 0x20) ^
                      __xmm_80000000000000008000000000000000._4_4_,
                      SUB84(local_68,0) ^ (uint)__xmm_80000000000000008000000000000000);
  local_58 = CONCAT44(__xmm_80000000000000008000000000000000._4_4_,
                      (uint)__xmm_80000000000000008000000000000000);
  uStack_50 = _UNK_15066df78;
  local_80 = 0;
  local_70 = 0;
  local_60 = 0;
  local_48 = 0;
  uStack_40 = 0;
  if (iVar2 == 0) {
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum(param_4,iVar3,No);
    local_f8 = &local_98;
    local_168 = UE::Core::Private::Function::
                TFunctionRefCaller<`FBaseKelvinletBrushOp::DisplaceKelvinlet<UE::Geometry::FTwistKelvinlet>'::__l2::<lambda_1>,void,int>
                ::Call;
    local_160 = &local_f8;
    local_178.DataPtr = (void **)0x0;
    local_178.ArrayNum = 0;
    local_f0 = param_3;
    local_e8 = pTVar5;
    local_e0 = &param_2->LocalFrame;
    local_d8 = this;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",iVar3,1,(TFunctionRef<void___cdecl(int)> *)&local_168,
               param_4._0_1_,None,&local_178);
  }
  else {
    uVar1 = *(undefined8 *)&this->field_0x68;
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum(param_4,iVar3,No);
    local_d0 = &local_98;
    local_148 = UE::Core::Private::Function::
                TFunctionRefCaller<`FBaseKelvinletBrushOp::IntegrateKelvinlet<UE::Geometry::FTwistKelvinlet>'::__l2::<lambda_1>,void,int>
                ::Call;
    local_140 = &local_d0;
    local_158.DataPtr = (void **)0x0;
    local_158.ArrayNum = 0;
    local_c8 = param_3;
    local_c0 = pTVar5;
    local_b8 = &param_2->LocalFrame;
    local_b0 = uVar1;
    local_a8 = iVar2;
    local_a0 = this;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",iVar3,1,(TFunctionRef<void___cdecl(int)> *)&local_148,
               param_4._0_1_,None,&local_158);
  }
  local_128 = UE::Core::Private::Function::
              TFunctionRefCaller<`FBaseKelvinletBrushOp::ApplyFalloff'::__l2::<lambda_1>,void,int>::
              Call;
  local_120 = &local_118;
  local_138.DataPtr = (void **)0x0;
  local_138.ArrayNum = 0;
  local_118 = param_2;
  local_110 = param_3;
  local_108 = pTVar5;
  local_100 = this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",param_3->ArrayNum,1,(TFunctionRef<void___cdecl(int)> *)&local_128,
             param_4._0_1_,ForceSingleThread,&local_138);
  return;
}

// GetBrushTargetType @ 14ccfe1c0

ESculptBrushOpTargetType __thiscall
FTwistKelvinletBrushOp::GetBrushTargetType(FTwistKelvinletBrushOp *this)

{
  return ActivePlane;
}

