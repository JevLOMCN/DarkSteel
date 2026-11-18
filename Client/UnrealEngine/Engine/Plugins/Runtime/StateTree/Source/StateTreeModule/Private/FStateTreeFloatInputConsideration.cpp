// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 5

// StaticStruct @ 14d4a1270

UScriptStruct * __cdecl FStateTreeFloatInputConsideration::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeFloatInputConsideration.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeFloatInputConsideration.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeFloatInputConsideration,
                         (UObject *)pUVar1,L"StateTreeFloatInputConsideration");
  }
  return Z_Registration_Info_UScriptStruct_FStateTreeFloatInputConsideration.OuterSingleton;
}

// GetInstanceDataType @ 14d4a12b0

UStruct * __thiscall
FStateTreeFloatInputConsideration::GetInstanceDataType(FStateTreeFloatInputConsideration *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeFloatInputConsiderationInstanceData.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeFloatInputConsiderationInstanceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeFloatInputConsiderationInstanceData,
                         (UObject *)pUVar1,L"StateTreeFloatInputConsiderationInstanceData");
  }
  return (UStruct *)
         Z_Registration_Info_UScriptStruct_FStateTreeFloatInputConsiderationInstanceData.
         OuterSingleton;
}

// GetScore @ 14d4a12f0

float __thiscall
FStateTreeFloatInputConsideration::GetScore
          (FStateTreeFloatInputConsideration *this,FStateTreeExecutionContext *param_1)

{
  int iVar1;
  longlong lVar2;
  float *pfVar3;
  code *pcVar4;
  bool bVar5;
  UPackage *pUVar6;
  FRichCurve *this_00;
  float fVar7;
  float fVar8;
  
  if (((((param_1->CurrentNodeDataHandle).Source != (EStateTreeDataSourceType)this->_padding_) ||
       ((param_1->CurrentNodeDataHandle).Index != *(ushort *)((longlong)&this->_padding_ + 2))) ||
      ((param_1->CurrentNodeDataHandle).StateHandle.Index !=
       *(ushort *)((longlong)&this->_padding_ + 4))) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentNodeDataHandle == Node.InstanceDataHandle",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Public\\StateTreeExecutionContext.h"
                         ,0x2b7,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    fVar7 = (float)(*pcVar4)();
    return fVar7;
  }
  if ((*(longlong *)&(param_1->CurrentNodeInstanceData).field_0x8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Memory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                         ,0x74,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    fVar7 = (float)(*pcVar4)();
    return fVar7;
  }
  if ((*(longlong *)&param_1->CurrentNodeInstanceData == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Struct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                         ,0x75,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    fVar7 = (float)(*pcVar4)();
    return fVar7;
  }
  lVar2 = *(longlong *)&param_1->CurrentNodeInstanceData;
  if (Z_Registration_Info_UScriptStruct_FStateTreeFloatInputConsiderationInstanceData.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeFloatInputConsiderationInstanceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeFloatInputConsiderationInstanceData,
                         (UObject *)pUVar6,L"StateTreeFloatInputConsiderationInstanceData");
    if (Z_Registration_Info_UScriptStruct_FStateTreeFloatInputConsiderationInstanceData.
        OuterSingleton != (UScriptStruct *)0x0) goto LAB_14d4a13f5;
LAB_14d4a1419:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Struct->IsChildOf(T::StaticStruct())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                       ,0x76,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      fVar7 = (float)(*pcVar4)();
      return fVar7;
    }
  }
  else {
LAB_14d4a13f5:
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FStateTreeFloatInputConsiderationInstanceData.
                 OuterSingleton)->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FStateTreeFloatInputConsiderationInstanceData.
         OuterSingleton)->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_14d4a1419;
  }
  pfVar3 = *(float **)&(param_1->CurrentNodeInstanceData).field_0x8;
  fVar7 = pfVar3[2];
  fVar8 = pfVar3[1];
  if (fVar8 <= fVar7) {
    if (__real_322bcc77 < (float)((uint)(fVar7 - fVar8) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      fVar8 = (*pfVar3 - fVar8) / (fVar7 - fVar8);
      goto LAB_14d4a1495;
    }
    fVar8 = __real_3f800000;
    if (fVar7 <= *pfVar3) goto LAB_14d4a1495;
  }
  fVar8 = 0.0;
LAB_14d4a1495:
  if (__real_3f800000 <= fVar8) {
    fVar8 = __real_3f800000;
  }
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  this_00 = FRuntimeFloatCurve::GetRichCurveConst(&(this->ResponseCurve).CurveInfo);
  if ((this_00 != (FRichCurve *)0x0) && ((this_00->Keys).ArrayNum != 0)) {
    fVar8 = FRichCurve::Eval(this_00,fVar8,0.0);
  }
  return fVar8;
}

// FStateTreeFloatInputConsideration @ 14d4b1d00

FStateTreeFloatInputConsideration * __thiscall
FStateTreeFloatInputConsideration::FStateTreeFloatInputConsideration
          (FStateTreeFloatInputConsideration *this)

{
  this->_padding_ = (longlong)&___7FStateTreeNodeBase__6B_;
  this->_padding_ = 0;
  *(ushort *)&this->_padding_ = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)&this->_padding_ + 2) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)&this->_padding_ + 4) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)&this->_padding_ + 6) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)&this->_padding_ = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)&this->_padding_ + 4) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  this->_padding_ = (longlong)&___7FStateTreeFloatInputConsideration__6B_;
  *(undefined2 *)&this->_padding_ = 1;
  FRuntimeFloatCurve::FRuntimeFloatCurve(&(this->ResponseCurve).CurveInfo);
  return this;
}

// ~FStateTreeFloatInputConsideration @ 14d4b3a10

void __thiscall
FStateTreeFloatInputConsideration::~FStateTreeFloatInputConsideration
          (FStateTreeFloatInputConsideration *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->ResponseCurve).CurveInfo.EditorCurveData.Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->ResponseCurve).CurveInfo.EditorCurveData._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->ResponseCurve).CurveInfo.EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->ResponseCurve).CurveInfo.EditorCurveData._padding_ = 0;
  pvVar2 = (void *)(this->ResponseCurve).CurveInfo.EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->ResponseCurve).CurveInfo.EditorCurveData._padding_);
  this->_padding_ = (longlong)&___7FStateTreeNodeBase__6B_;
  return;
}

