// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 10

// BindOutputData<float> @ 14ad819e0

void __thiscall
Metasound::Frontend::FVertexAnalyzerBase::BindOutputData<float>
          (FVertexAnalyzerBase *this,FName param_1,FOperatorSettings *param_2,
          TDataReadReference<float> *param_3)

{
  FName *pFVar1;
  TBoundAnalyzerOutput<float> *pTVar2;
  TPairInitializer<FName_&,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>_&&> local_res8;
  TBoundAnalyzerOutput<float> *local_a8;
  TReferenceControllerBase<1> *local_a0;
  undefined1 local_98 [16];
  longlong local_88;
  FAnalyzerAddress local_78;
  
  local_78.NodeID.A = (this->AnalyzerAddress).NodeID.A;
  local_78.NodeID.B = (this->AnalyzerAddress).NodeID.B;
  local_78.NodeID.C = (this->AnalyzerAddress).NodeID.C;
  local_78.NodeID.D = (this->AnalyzerAddress).NodeID.D;
  local_78._padding_ = (longlong)&___7FAnalyzerAddress_Frontend_Metasound__6B_;
  local_78.InstanceID = (this->AnalyzerAddress).InstanceID;
  local_78.OutputName = (this->AnalyzerAddress).OutputName;
  local_78.AnalyzerName = (this->AnalyzerAddress).AnalyzerName;
  local_78.AnalyzerInstanceID.A = (this->AnalyzerAddress).AnalyzerInstanceID.A;
  local_78.AnalyzerInstanceID.B = (this->AnalyzerAddress).AnalyzerInstanceID.B;
  local_78.AnalyzerInstanceID.C = (this->AnalyzerAddress).AnalyzerInstanceID.C;
  local_78.AnalyzerInstanceID.D = (this->AnalyzerAddress).AnalyzerInstanceID.D;
  local_78.UseDataTransmissionCenter = (this->AnalyzerAddress).UseDataTransmissionCenter;
  local_res8.Value = (TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1> *)param_1;
  local_78.AnalyzerMemberName = param_1;
  pFVar1 = GetMetasoundDataTypeName<float>();
  local_78.DataType = *pFVar1;
  pTVar2 = ::operator_new(0x88);
  if (pTVar2 == (TBoundAnalyzerOutput<float> *)0x0) {
    pTVar2 = (TBoundAnalyzerOutput<float> *)0x0;
  }
  else {
    local_98._8_8_ = *(undefined8 *)&param_3->field_0x8;
    local_88 = *(longlong *)&param_3->field_0x10;
    if (local_88 != 0) {
      *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
    }
    local_98._0_8_ = &___7__TDataReadReference_M_Metasound__6B_;
    pTVar2 = TBoundAnalyzerOutput<float>::TBoundAnalyzerOutput<float>
                       (pTVar2,&local_78,param_2,(TDataReadReference<float> *)local_98);
  }
  local_a8 = pTVar2;
  local_a0 = ::operator_new(0x18);
  if (local_a0 != (TReferenceControllerBase<1> *)0x0) {
    local_a0->SharedReferenceCount = (atomic<int>)0x1;
    local_a0->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TBoundAnalyzerOutput_M_Frontend_Metasound__U__DefaultDeleter_V__TBoundAnalyzerOutput_M_Frontend_Metasound___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    local_a0->WeakReferenceCount = (atomic<int>)0x1;
    local_a0[1]._padding_ = (longlong)pTVar2;
  }
  local_98._0_8_ = &local_res8.Value;
  local_98._8_8_ = &local_a8;
  TSet<TTuple<FName,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>_&&>_>
            ((TSet<TTuple<FName,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>,0>,FDefaultSetAllocator>
              *)&this->BoundOutputData,&local_res8,(bool *)local_98);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a0);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_3->field_0x10);
  return;
}

// BindOutputData<Metasound::FTime> @ 14ad81b20

void __thiscall
Metasound::Frontend::FVertexAnalyzerBase::BindOutputData<Metasound::FTime>
          (FVertexAnalyzerBase *this,FName param_1,FOperatorSettings *param_2,
          TDataReadReference<Metasound::FTime> *param_3)

{
  FName *pFVar1;
  TBoundAnalyzerOutput<Metasound::FTime> *pTVar2;
  TPairInitializer<FName_&,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>_&&> local_res8;
  TBoundAnalyzerOutput<Metasound::FTime> *local_a8;
  TReferenceControllerBase<1> *local_a0;
  undefined1 local_98 [16];
  longlong local_88;
  FAnalyzerAddress local_78;
  
  local_78.NodeID.A = (this->AnalyzerAddress).NodeID.A;
  local_78.NodeID.B = (this->AnalyzerAddress).NodeID.B;
  local_78.NodeID.C = (this->AnalyzerAddress).NodeID.C;
  local_78.NodeID.D = (this->AnalyzerAddress).NodeID.D;
  local_78._padding_ = (longlong)&___7FAnalyzerAddress_Frontend_Metasound__6B_;
  local_78.InstanceID = (this->AnalyzerAddress).InstanceID;
  local_78.OutputName = (this->AnalyzerAddress).OutputName;
  local_78.AnalyzerName = (this->AnalyzerAddress).AnalyzerName;
  local_78.AnalyzerInstanceID.A = (this->AnalyzerAddress).AnalyzerInstanceID.A;
  local_78.AnalyzerInstanceID.B = (this->AnalyzerAddress).AnalyzerInstanceID.B;
  local_78.AnalyzerInstanceID.C = (this->AnalyzerAddress).AnalyzerInstanceID.C;
  local_78.AnalyzerInstanceID.D = (this->AnalyzerAddress).AnalyzerInstanceID.D;
  local_78.UseDataTransmissionCenter = (this->AnalyzerAddress).UseDataTransmissionCenter;
  local_res8.Value = (TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1> *)param_1;
  local_78.AnalyzerMemberName = param_1;
  pFVar1 = GetMetasoundDataTypeName<Metasound::FTime>();
  local_78.DataType = *pFVar1;
  pTVar2 = ::operator_new(0x88);
  if (pTVar2 == (TBoundAnalyzerOutput<Metasound::FTime> *)0x0) {
    pTVar2 = (TBoundAnalyzerOutput<Metasound::FTime> *)0x0;
  }
  else {
    local_98._8_8_ = *(undefined8 *)&param_3->field_0x8;
    local_88 = *(longlong *)&param_3->field_0x10;
    if (local_88 != 0) {
      *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
    }
    local_98._0_8_ = &___7__TDataReadReference_VFTime_Metasound___Metasound__6B_;
    pTVar2 = TBoundAnalyzerOutput<Metasound::FTime>::TBoundAnalyzerOutput<Metasound::FTime>
                       (pTVar2,&local_78,param_2,(TDataReadReference<Metasound::FTime> *)local_98);
  }
  local_a8 = pTVar2;
  local_a0 = ::operator_new(0x18);
  if (local_a0 != (TReferenceControllerBase<1> *)0x0) {
    local_a0->SharedReferenceCount = (atomic<int>)0x1;
    local_a0->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TBoundAnalyzerOutput_VFTime_Metasound___Frontend_Metasound__U__DefaultDeleter_V__TBoundAnalyzerOutput_VFTime_Metasound___Frontend_Metasound___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    local_a0->WeakReferenceCount = (atomic<int>)0x1;
    local_a0[1]._padding_ = (longlong)pTVar2;
  }
  local_98._0_8_ = &local_res8.Value;
  local_98._8_8_ = &local_a8;
  TSet<TTuple<FName,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>_&&>_>
            ((TSet<TTuple<FName,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>,0>,FDefaultSetAllocator>
              *)&this->BoundOutputData,&local_res8,(bool *)local_98);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a0);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_3->field_0x10);
  return;
}

// GetVertexData<Metasound::FAudioBuffer> @ 14ad8a250

FAudioBuffer * __thiscall
Metasound::Frontend::FVertexAnalyzerBase::GetVertexData<Metasound::FAudioBuffer>
          (FVertexAnalyzerBase *this)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  IDataReference IVar5;
  code *pcVar6;
  bool bVar7;
  FAudioBuffer *pFVar8;
  FName *pFVar9;
  
  if ((this->VertexDataReference).DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar8 = (FAudioBuffer *)(*pcVar6)();
      return pFVar8;
    }
  }
  pIVar2 = (this->VertexDataReference).DataRefPtr.Ptr;
  EVar1 = (this->VertexDataReference).AccessType;
  pFVar9 = GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  FVar3 = *pFVar9;
  pFVar9 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  bVar7 = IsCastable(*pFVar9,FVar3);
  if (!bVar7) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable(InRef.GetDataTypeName(), GetMetasoundDataTypeName<DataType>())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x2d5,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar8 = (FAudioBuffer *)(*pcVar6)();
      return pFVar8;
    }
  }
  if (((EVar1 != Read) && (EVar1 != Write)) && (EVar1 != Value)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x2e7,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar8 = (FAudioBuffer *)(*pcVar6)();
      return pFVar8;
    }
  }
  IVar4 = pIVar2[2];
  IVar5 = pIVar2[1];
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)IVar4);
  return (FAudioBuffer *)IVar5;
}

// GetVertexData<Metasound::FTrigger> @ 14ad8a350

FTrigger * __thiscall
Metasound::Frontend::FVertexAnalyzerBase::GetVertexData<Metasound::FTrigger>
          (FVertexAnalyzerBase *this)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  IDataReference IVar5;
  code *pcVar6;
  bool bVar7;
  FTrigger *pFVar8;
  FName *pFVar9;
  
  if ((this->VertexDataReference).DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar8 = (FTrigger *)(*pcVar6)();
      return pFVar8;
    }
  }
  pIVar2 = (this->VertexDataReference).DataRefPtr.Ptr;
  EVar1 = (this->VertexDataReference).AccessType;
  pFVar9 = GetMetasoundDataTypeName<Metasound::FTrigger>();
  FVar3 = *pFVar9;
  pFVar9 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  bVar7 = IsCastable(*pFVar9,FVar3);
  if (!bVar7) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable(InRef.GetDataTypeName(), GetMetasoundDataTypeName<DataType>())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x2d5,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar8 = (FTrigger *)(*pcVar6)();
      return pFVar8;
    }
  }
  if (((EVar1 != Read) && (EVar1 != Write)) && (EVar1 != Value)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x2e7,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar8 = (FTrigger *)(*pcVar6)();
      return pFVar8;
    }
  }
  IVar4 = pIVar2[2];
  IVar5 = pIVar2[1];
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)IVar4);
  return (FTrigger *)IVar5;
}

// FVertexAnalyzerBase @ 14ad9bf50

FVertexAnalyzerBase * __thiscall
Metasound::Frontend::FVertexAnalyzerBase::FVertexAnalyzerBase
          (FVertexAnalyzerBase *this,FAnalyzerAddress *param_1,FAnyDataReference *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  this->_padding_ = (longlong)&___7FVertexAnalyzerBase_Frontend_Metasound__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  (this->AnalyzerAddress)._padding_ = (longlong)&___7FAnalyzerAddress_Frontend_Metasound__6B_;
  (this->AnalyzerAddress).InstanceID = param_1->InstanceID;
  uVar1 = (param_1->NodeID).B;
  uVar2 = (param_1->NodeID).C;
  uVar3 = (param_1->NodeID).D;
  (this->AnalyzerAddress).NodeID.A = (param_1->NodeID).A;
  (this->AnalyzerAddress).NodeID.B = uVar1;
  (this->AnalyzerAddress).NodeID.C = uVar2;
  (this->AnalyzerAddress).NodeID.D = uVar3;
  (this->AnalyzerAddress).OutputName = param_1->OutputName;
  (this->AnalyzerAddress).DataType = param_1->DataType;
  (this->AnalyzerAddress).AnalyzerName = param_1->AnalyzerName;
  uVar1 = (param_1->AnalyzerInstanceID).B;
  uVar2 = (param_1->AnalyzerInstanceID).C;
  uVar3 = (param_1->AnalyzerInstanceID).D;
  (this->AnalyzerAddress).AnalyzerInstanceID.A = (param_1->AnalyzerInstanceID).A;
  (this->AnalyzerAddress).AnalyzerInstanceID.B = uVar1;
  (this->AnalyzerAddress).AnalyzerInstanceID.C = uVar2;
  (this->AnalyzerAddress).AnalyzerInstanceID.D = uVar3;
  (this->AnalyzerAddress).AnalyzerMemberName = param_1->AnalyzerMemberName;
  (this->AnalyzerAddress).UseDataTransmissionCenter = param_1->UseDataTransmissionCenter;
  *(undefined8 *)&this->BoundOutputData = 0;
  *(undefined8 *)&(this->BoundOutputData).field_0x8 = 0;
  *(undefined8 *)&(this->BoundOutputData).field_0x20 = 0;
  *(undefined4 *)&(this->BoundOutputData).field_0x28 = 0;
  *(undefined4 *)&(this->BoundOutputData).field_0x2c = 0x80;
  *(undefined4 *)&(this->BoundOutputData).field_0x34 = 0;
  *(undefined4 *)&(this->BoundOutputData).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->BoundOutputData).field_0x40 = 0;
  *(undefined4 *)&(this->BoundOutputData).field_0x48 = 0;
  FAnyDataReference::FAnyDataReference
            (&this->VertexDataReference,param_2->AccessType,(param_2->DataRefPtr).Ptr);
  (this->VertexDataReference)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  return this;
}

// ~FVertexAnalyzerBase @ 14ad9e920

void __thiscall
Metasound::Frontend::FVertexAnalyzerBase::~FVertexAnalyzerBase(FVertexAnalyzerBase *this)

{
  IDataReference *pIVar1;
  void *pvVar2;
  
  pIVar1 = (this->VertexDataReference).DataRefPtr.Ptr;
  if (pIVar1 != (IDataReference *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  *(undefined4 *)&(this->BoundOutputData).field_0x48 = 0;
  pvVar2 = *(void **)&(this->BoundOutputData).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BoundOutputData);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  return;
}

// GetAnalyzerAddress @ 14adbc200

FAnalyzerAddress * __thiscall
Metasound::Frontend::FVertexAnalyzerBase::GetAnalyzerAddress(FVertexAnalyzerBase *this)

{
  return &this->AnalyzerAddress;
}

// GetDataReferenceId @ 14adbd8f0

void * __thiscall
Metasound::Frontend::FVertexAnalyzerBase::GetDataReferenceId(FVertexAnalyzerBase *this)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014adbd8fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = (void *)(**(code **)((this->VertexDataReference)._padding_ + 0x20))();
  return pvVar1;
}

// MarkOutputDirty @ 14adc8c10

void __thiscall Metasound::Frontend::FVertexAnalyzerBase::MarkOutputDirty(FVertexAnalyzerBase *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  undefined1 *puVar17;
  int iVar18;
  uint *puVar19;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  undefined4 uStack_bc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  FReadAccessScope local_78;
  FReadAccessScope local_60;
  undefined1 local_48 [16];
  
  puVar1 = &(this->BoundOutputData).field_0x10;
  iVar16 = 0;
  iVar3 = *(int *)&(this->BoundOutputData).field_0x28;
  iVar18 = 0;
  uVar8 = 1;
  iVar9 = 0;
  if (iVar3 != 0) {
    puVar19 = *(uint **)&(this->BoundOutputData).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar1;
    }
    uVar15 = *puVar19;
    while (uVar15 == 0) {
      lVar11 = (longlong)iVar16;
      iVar18 = iVar18 + 0x20;
      iVar16 = iVar16 + 1;
      iVar9 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_14adc8cbd;
      uVar15 = puVar19[lVar11 + 1];
    }
    uVar8 = -uVar15 & uVar15;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res10 = (int)lVar11;
    iVar9 = local_res10 + -1 + iVar18;
    if (iVar3 < iVar9) {
      iVar9 = iVar3;
    }
  }
LAB_14adc8cbd:
  uVar15 = *(uint *)&(this->BoundOutputData).field_0x28;
  uVar14 = uVar15 & 0xffffffe0;
  TStack_b0._padding_ = CONCAT44(uVar8,iVar16);
  TStack_b0.CurrentBitIndex = iVar9;
  TStack_b0.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar15 >> 5;
  TStack_b0._28_4_ = iVar9;
  TStack_b0.BaseBitIndex = iVar18;
  uStack_90 = CONCAT44(uStack_bc,
                       *(int *)&(this->BoundOutputData).field_0x8 -
                       *(int *)&(this->BoundOutputData).field_0x34);
  TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar3 < (int)uVar15)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar8 = *(uint *)&(this->BoundOutputData).field_0x28;
  if (uVar15 != uVar8) {
    puVar17 = *(undefined1 **)&(this->BoundOutputData).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar16 * 4);
    while (uVar15 == 0) {
      lVar11 = (longlong)iVar16;
      uVar14 = uVar14 + 0x20;
      iVar16 = iVar16 + 1;
      uVar15 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_14adc8dc0;
      uVar15 = *(uint *)(puVar17 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res18 = (int)lVar11;
    uVar15 = local_res18 + -1 + uVar14;
    if ((int)uVar8 < (int)uVar15) {
      uVar15 = uVar8;
    }
  }
LAB_14adc8dc0:
  while( true ) {
    if (*(int *)&(this->BoundOutputData).field_0x8 - *(int *)&(this->BoundOutputData).field_0x34 !=
        (int)uStack_90) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_b0.CurrentBitIndex == uVar15) &&
       (TStack_b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    puVar13 = (undefined8 *)
              (*(longlong *)&this->BoundOutputData + (longlong)TStack_b0.CurrentBitIndex * 0x20);
    if ((puVar13[1] == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    (**(code **)(*(longlong *)puVar13[1] + 0x10))();
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,&local_78)
    ;
    if ((((int)this->_padding_ == 0) || ((longlong *)this->_padding_ == (longlong *)0x0)) ||
       (cVar7 = (**(code **)(*(longlong *)this->_padding_ + 0x38))(), cVar7 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_78);
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_78);
      if ((puVar13[1] == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      puVar10 = (undefined8 *)
                (**(code **)(*(longlong *)puVar13[1] + 0x18))((longlong *)puVar13[1],local_48);
      uVar4 = *puVar13;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
                 &local_60);
      if ((int)this->_padding_ == 0) {
        plVar12 = (longlong *)0x0;
      }
      else {
        plVar12 = (longlong *)this->_padding_;
      }
      pcVar5 = *(code **)(*plVar12 + 0x60);
      local_88 = *puVar10;
      local_80 = puVar10[1];
      puVar10[1] = 0;
      *puVar10 = 0;
      (*pcVar5)(plVar12,uVar4,&local_88);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_60);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)puVar10[1]);
    }
    TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
  }
  return;
}

// SetDataReference @ 14add0750

void __thiscall
Metasound::Frontend::FVertexAnalyzerBase::SetDataReference
          (FVertexAnalyzerBase *this,FAnyDataReference *param_1)

{
  TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> *pTVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *local_res8;
  
  (this->VertexDataReference).AccessType = param_1->AccessType;
  pIVar2 = (param_1->DataRefPtr).Ptr;
  puVar5 = (undefined8 *)(**(code **)((longlong)*pIVar2 + 0x18))(pIVar2,&local_res8);
  pTVar1 = &(this->VertexDataReference).DataRefPtr;
  if (pTVar1 != (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> *)
                puVar5) {
    pIVar2 = pTVar1->Ptr;
    pTVar1->Ptr = (IDataReference *)*puVar5;
    *puVar5 = 0;
    if (pIVar2 != (IDataReference *)0x0) {
      (**(code **)*pIVar2)(pIVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar1->Ptr == (IDataReference *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x334,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((this->VertexDataReference).AccessType == None) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("EDataReferenceAccessType::None != AccessType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x335,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

