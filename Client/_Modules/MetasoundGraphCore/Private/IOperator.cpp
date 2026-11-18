// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 6

// ~IOperator @ 14ad3e250

void __thiscall Metasound::IOperator::~IOperator(IOperator *this)

{
  *this = (IOperator)&___7IOperator_Metasound__6B_;
  return;
}

// Bind @ 14ad47b10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall Metasound::IOperator::Bind(IOperator *this,FVertexInterfaceData *param_1)

{
  int iVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  TMapBase<FName,Metasound::FAnyDataReference,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Metasound::FAnyDataReference,0>_>
  *pTVar5;
  FAnyDataReference *pFVar6;
  FName *pFVar7;
  FName *pFVar8;
  FDataVertex *pFVar9;
  FDataVertex *pFVar10;
  EVertexAccessType *pEVar11;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined1 local_e7 [7];
  IOperator *local_e0;
  TSparseArray<TSparseSetElement<TTuple<FName,Metasound::FAnyDataReference>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_d8;
  void *local_98;
  undefined4 local_90;
  TSparseArray<TSparseSetElement<TTuple<FName,Metasound::FAnyDataReference>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_88;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_e0 = this;
  pTVar5 = (TMapBase<FName,Metasound::FAnyDataReference,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Metasound::FAnyDataReference,0>_>
            *)(**(code **)((longlong)*this + 8))(this,&local_d8);
  pFVar10 = (FDataVertex *)(param_1->InputVertexInterfaceData).Bindings.AllocatorInstance.Data;
  iVar1 = (param_1->InputVertexInterfaceData).Bindings.ArrayNum;
  pFVar8 = &pFVar10[2].DataTypeName;
  pFVar9 = (FDataVertex *)((longlong)pFVar10 + (longlong)iVar1 * 0x58);
  while( true ) {
    if ((param_1->InputVertexInterfaceData).Bindings.ArrayNum != iVar1) {
      local_e8 = 0;
      `TCheckedPointerIterator<Metasound::VertexDataPrivate::FInputBinding,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(&local_e8);
    }
    if (pFVar10 == pFVar9) break;
    pFVar6 = TMapBase<FName,Metasound::FAnyDataReference,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Metasound::FAnyDataReference,0>_>
             ::Find(pTVar5,pFVar8[-9]);
    if (pFVar6 != (FAnyDataReference *)0x0) {
      pFVar7 = (FName *)(**(code **)(pFVar6->_padding_ + 8))(pFVar6);
      bVar4 = IsCastable(pFVar8[-8],*pFVar7);
      if (!bVar4) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Metasound::IsCastable(Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                           ,0xf3,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (((char)(pFVar8->ComparisonIndex).Value != '\0') &&
         (FVar2 = pFVar8[-1], FVar2 != (FName)0x0)) {
        (*(code *)**(undefined8 **)FVar2)(FVar2,1);
      }
      FAnyDataReference::FAnyDataReference
                ((FAnyDataReference *)(pFVar8 + -3),pFVar6->AccessType,(pFVar6->DataRefPtr).Ptr);
      pFVar8[-3] = (FName)&___7FAnyDataReference_Metasound__6B_;
      *(undefined1 *)&(pFVar8->ComparisonIndex).Value = 1;
      VertexDataPrivate::CheckAccessTypeCompatibility(pFVar10,(FAnyDataReference *)(pFVar8 + -3));
    }
    pFVar10 = (FDataVertex *)&pFVar10[2].AccessType;
    pFVar8 = pFVar8 + 0xb;
  }
  local_90 = 0;
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,Metasound::FAnyDataReference>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,Metasound::FAnyDataReference>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_d8);
  pTVar5 = (TMapBase<FName,Metasound::FAnyDataReference,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Metasound::FAnyDataReference,0>_>
            *)(**(code **)((longlong)*local_e0 + 0x10))(local_e0,&local_88);
  pFVar10 = (FDataVertex *)(param_1->OutputVertexInterfaceData).Bindings.AllocatorInstance.Data;
  iVar1 = (param_1->OutputVertexInterfaceData).Bindings.ArrayNum;
  pFVar9 = pFVar10 + (longlong)iVar1 * 2;
  pEVar11 = &pFVar10[1].AccessType;
  while( true ) {
    if ((param_1->OutputVertexInterfaceData).Bindings.ArrayNum != iVar1) {
      local_e7[0] = 0;
      `TCheckedPointerIterator<Metasound::VertexDataPrivate::FOutputBinding,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_e7);
    }
    if (pFVar10 == pFVar9) break;
    pFVar6 = TMapBase<FName,Metasound::FAnyDataReference,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Metasound::FAnyDataReference,0>_>
             ::Find(pTVar5,*(FName *)(pEVar11 + -0xc));
    if (pFVar6 != (FAnyDataReference *)0x0) {
      pFVar8 = (FName *)(**(code **)(pFVar6->_padding_ + 8))(pFVar6);
      bVar4 = IsCastable(*(FName *)(pEVar11 + -10),*pFVar8);
      if (!bVar4) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Metasound::IsCastable( Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                           ,0x181,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (((char)*pEVar11 != Reference) && (FVar2 = *(FName *)(pEVar11 + -2), FVar2 != (FName)0x0))
      {
        (*(code *)**(undefined8 **)FVar2)(FVar2,1);
      }
      FAnyDataReference::FAnyDataReference
                ((FAnyDataReference *)(pEVar11 + -6),pFVar6->AccessType,(pFVar6->DataRefPtr).Ptr);
      ((FDataVertex *)(pEVar11 + -6))->_padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
      *(undefined1 *)pEVar11 = Value;
      VertexDataPrivate::CheckAccessTypeCompatibility(pFVar10,(FAnyDataReference *)(pEVar11 + -6));
    }
    pFVar10 = pFVar10 + 2;
    pEVar11 = pEVar11 + 0x10;
  }
  local_40 = 0;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,Metasound::FAnyDataReference>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,Metasound::FAnyDataReference>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_88);
  return;
}

// BindInputs @ 14ad48040

void __thiscall Metasound::IOperator::BindInputs(IOperator *this,FInputVertexInterfaceData *param_1)

{
  FInputVertexInterfaceData local_58;
  undefined1 local_30;
  FOutputBinding *local_28;
  undefined8 local_20;
  FSubInterfaceLayout *local_18;
  undefined8 local_10;
  
  MetasoundOperatorInterfacePrivate::WarnMissingBindImplementation();
  local_58.bIsVertexInterfaceFrozen = false;
  local_58.Bindings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Bindings.ArrayNum = 0;
  local_58.Bindings.ArrayMax = 0;
  local_58.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.SubInterfaces.ArrayNum = 0;
  local_58.SubInterfaces.ArrayMax = 0;
  local_30 = 0;
  local_28 = (FOutputBinding *)0x0;
  local_20 = 0;
  local_18 = (FSubInterfaceLayout *)0x0;
  local_10 = 0;
  FInputVertexInterfaceData::operator=(&local_58,param_1);
  (**(code **)((longlong)*this + 0x18))(this,&local_58);
  FInputVertexInterfaceData::operator=(param_1,&local_58);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>(local_18,(int)local_10);
  if (local_18 != (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_18);
  }
  DestructItems<Metasound::VertexDataPrivate::FOutputBinding,int>(local_28,(int)local_20);
  if (local_28 != (FOutputBinding *)0x0) {
    FMemory::Free(local_28);
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_58.SubInterfaces.AllocatorInstance.Data,
             local_58.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_58.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_58.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::VertexDataPrivate::FInputBinding,int>
            ((FInputBinding *)local_58.Bindings.AllocatorInstance.Data,local_58.Bindings.ArrayNum);
  if ((FInputBinding *)local_58.Bindings.AllocatorInstance.Data != (FInputBinding *)0x0) {
    FMemory::Free(local_58.Bindings.AllocatorInstance.Data);
  }
  return;
}

// BindOutputs @ 14ad48480

void __thiscall
Metasound::IOperator::BindOutputs(IOperator *this,FOutputVertexInterfaceData *param_1)

{
  undefined1 local_58 [8];
  FInputBinding *local_50;
  undefined8 local_48;
  FSubInterfaceLayout *local_40;
  undefined8 local_38;
  FOutputVertexInterfaceData local_30;
  
  MetasoundOperatorInterfacePrivate::WarnMissingBindImplementation();
  local_58[0] = 0;
  local_50 = (FInputBinding *)0x0;
  local_48 = 0;
  local_40 = (FSubInterfaceLayout *)0x0;
  local_38 = 0;
  local_30.bIsVertexInterfaceFrozen = false;
  local_30.Bindings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.Bindings.ArrayNum = 0;
  local_30.Bindings.ArrayMax = 0;
  local_30.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.SubInterfaces.ArrayNum = 0;
  local_30.SubInterfaces.ArrayMax = 0;
  FOutputVertexInterfaceData::operator=(&local_30,param_1);
  (**(code **)((longlong)*this + 0x18))(this,local_58);
  FOutputVertexInterfaceData::operator=(param_1,&local_30);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_30.SubInterfaces.AllocatorInstance.Data,
             local_30.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_30.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_30.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::VertexDataPrivate::FOutputBinding,int>
            ((FOutputBinding *)local_30.Bindings.AllocatorInstance.Data,local_30.Bindings.ArrayNum);
  if ((FOutputBinding *)local_30.Bindings.AllocatorInstance.Data != (FOutputBinding *)0x0) {
    FMemory::Free(local_30.Bindings.AllocatorInstance.Data);
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>(local_40,(int)local_38);
  if (local_40 != (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_40);
  }
  DestructItems<Metasound::VertexDataPrivate::FInputBinding,int>(local_50,(int)local_48);
  if (local_50 != (FInputBinding *)0x0) {
    FMemory::Free(local_50);
  }
  return;
}

// GetInputs @ 14ad55f60

FDataReferenceCollection * __thiscall
Metasound::IOperator::GetInputs(IOperator *this,FDataReferenceCollection *__return_storage_ptr__)

{
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x10 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x18 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x38 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x48 = 0;
  *(undefined8 *)&__return_storage_ptr__->DataRefMap = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x34 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x40 = 0;
  return __return_storage_ptr__;
}

// GetOutputs @ 14ad56640

FDataReferenceCollection * __thiscall
Metasound::IOperator::GetOutputs(IOperator *this,FDataReferenceCollection *__return_storage_ptr__)

{
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x10 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x18 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x38 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x48 = 0;
  *(undefined8 *)&__return_storage_ptr__->DataRefMap = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x34 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x40 = 0;
  return __return_storage_ptr__;
}

