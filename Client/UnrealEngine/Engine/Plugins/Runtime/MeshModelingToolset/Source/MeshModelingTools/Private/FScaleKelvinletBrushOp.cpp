// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 1

// ApplyStamp @ 14cce0060

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FScaleKelvinletBrushOp::ApplyStamp
          (FScaleKelvinletBrushOp *this,FDynamicMesh3 *param_1,FSculptBrushStamp *param_2,
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
  undefined1 auVar10 [16];
  TArrayView<std::nullptr_t,int> local_138;
  code *local_128;
  undefined8 **local_120;
  TArrayView<std::nullptr_t,int> local_118;
  code *local_108;
  undefined8 **local_100;
  TArrayView<std::nullptr_t,int> local_f8;
  code *local_e8;
  FSculptBrushStamp **local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  FSculptBrushStamp *local_b8;
  TArray<int,TSizedDefaultAllocator<32>_> *local_b0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_a8;
  FScaleKelvinletBrushOp *local_a0;
  double *local_98;
  TArray<int,TSizedDefaultAllocator<32>_> *local_90;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_88;
  TFrame3<double> *local_80;
  FScaleKelvinletBrushOp *local_78;
  double *local_70;
  TArray<int,TSizedDefaultAllocator<32>_> *local_68;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_60;
  TFrame3<double> *local_58;
  undefined8 local_50;
  int local_48;
  FScaleKelvinletBrushOp *local_40;
  
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
    pUVar8 = Z_Construct_UClass_UScaleKelvinletBrushOpProps_NoRegister();
    iVar2 = (int)pUVar8->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar8->_padding_)) goto LAB_14cce012f;
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
LAB_14cce012f:
  fVar9 = (float)(**(code **)(*(longlong *)pUVar7 + 0x2c8))(pUVar7);
  iVar2 = *(int *)&this->field_0x64;
  pTVar5 = param_4;
  iVar3 = param_3->ArrayNum;
  local_d0 = __real_3fb45f306446f9b4 / (double)*(float *)&this->field_0x58;
  local_c8 = __real_3fd0000000000000 /
             (__real_3ff0000000000000 - (double)*(float *)&this->field_0x5c);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = param_2->Radius;
  local_d8 = (double)*(float *)&this->field_0x60 * ___real_3fd6666666666666;
  auVar10 = sqrtpd(auVar10,auVar10);
  local_c0 = (double)(float)(auVar10._0_8_ * (double)(fVar9 * __real_3e800000) * param_2->Direction)
  ;
  if (iVar2 == 0) {
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum(param_4,iVar3,No);
    local_98 = &local_d8;
    local_128 = UE::Core::Private::Function::
                TFunctionRefCaller<`FBaseKelvinletBrushOp::DisplaceKelvinlet<UE::Geometry::FScaleKelvinlet>'::__l2::<lambda_1>,void,int>
                ::Call;
    local_120 = &local_98;
    local_138.DataPtr = (void **)0x0;
    local_138.ArrayNum = 0;
    local_90 = param_3;
    local_88 = pTVar5;
    local_80 = &param_2->LocalFrame;
    local_78 = this;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",iVar3,1,(TFunctionRef<void___cdecl(int)> *)&local_128,
               param_4._0_1_,None,&local_138);
  }
  else {
    uVar1 = *(undefined8 *)&this->field_0x68;
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum(param_4,iVar3,No);
    local_70 = &local_d8;
    local_108 = UE::Core::Private::Function::
                TFunctionRefCaller<`FBaseKelvinletBrushOp::IntegrateKelvinlet<UE::Geometry::FScaleKelvinlet>'::__l2::<lambda_1>,void,int>
                ::Call;
    local_100 = &local_70;
    local_118.DataPtr = (void **)0x0;
    local_118.ArrayNum = 0;
    local_68 = param_3;
    local_60 = pTVar5;
    local_58 = &param_2->LocalFrame;
    local_50 = uVar1;
    local_48 = iVar2;
    local_40 = this;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",iVar3,1,(TFunctionRef<void___cdecl(int)> *)&local_108,
               param_4._0_1_,None,&local_118);
  }
  local_e8 = UE::Core::Private::Function::
             TFunctionRefCaller<`FBaseKelvinletBrushOp::ApplyFalloff'::__l2::<lambda_1>,void,int>::
             Call;
  local_e0 = &local_b8;
  local_f8.DataPtr = (void **)0x0;
  local_f8.ArrayNum = 0;
  local_b8 = param_2;
  local_b0 = param_3;
  local_a8 = pTVar5;
  local_a0 = this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",param_3->ArrayNum,1,(TFunctionRef<void___cdecl(int)> *)&local_e8,
             param_4._0_1_,ForceSingleThread,&local_f8);
  return;
}

