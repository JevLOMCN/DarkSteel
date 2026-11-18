// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 7

// FInputVertexInterface @ 14ad3a790

FInputVertexInterface * __thiscall
Metasound::FInputVertexInterface::FInputVertexInterface
          (FInputVertexInterface *this,FInputVertexInterface *param_1)

{
  int *piVar1;
  TArray<Metasound::VertexPrivate::FSubInterfaceLayout,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FInputDataVertex *pFVar4;
  FSubInterfaceLayout *pFVar5;
  
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  this->_padding_ = 0;
  iVar3 = (int)param_1->_padding_;
  pFVar4 = (FInputDataVertex *)param_1->_padding_;
  *(int *)&this->_padding_ = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,iVar3,0,(ForAnyElementType *)this,iVar3,piVar1);
    ConstructItems<Metasound::FInputDataVertex,Metasound::FInputDataVertex,int>
              ((void *)this->_padding_,pFVar4,iVar3);
  }
  pTVar2 = &this->SubInterfaces;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->SubInterfaces).ArrayMax;
  iVar3 = (param_1->SubInterfaces).ArrayNum;
  pFVar5 = (FSubInterfaceLayout *)(param_1->SubInterfaces).AllocatorInstance.Data;
  (this->SubInterfaces).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    ConstructItems<Metasound::VertexPrivate::FSubInterfaceLayout,Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((pTVar2->AllocatorInstance).Data,pFVar5,iVar3);
  }
  return this;
}

// FInputVertexInterface @ 14ad3a870

FInputVertexInterface * __thiscall
Metasound::FInputVertexInterface::FInputVertexInterface
          (FInputVertexInterface *this,
          TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *param_1,
          TArray<Metasound::VertexPrivate::FSubInterfaceLayout,TSizedDefaultAllocator<32>_> *param_2
          )

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  pFVar3 = (param_1->AllocatorInstance).Data;
  (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = param_1->ArrayNum;
  iVar2 = param_1->ArrayMax;
  param_1->ArrayNum = 0;
  param_1->ArrayMax = 0;
  this->_padding_ = (longlong)pFVar3;
  *(int *)&this->_padding_ = iVar1;
  *(int *)((longlong)&this->_padding_ + 4) = iVar2;
  DestructItems<Metasound::FInputDataVertex,int>((FInputDataVertex *)0x0,0);
  (this->SubInterfaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubInterfaces).AllocatorInstance.Data = (param_2->AllocatorInstance).Data;
  (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->SubInterfaces).ArrayNum = param_2->ArrayNum;
  (this->SubInterfaces).ArrayMax = param_2->ArrayMax;
  param_2->ArrayNum = 0;
  param_2->ArrayMax = 0;
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  pFVar3 = (param_1->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
  pFVar3 = (param_2->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return this;
}

// FInputVertexInterface @ 14ad3a920

FInputVertexInterface * __thiscall
Metasound::FInputVertexInterface::FInputVertexInterface(FInputVertexInterface *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->SubInterfaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubInterfaces).ArrayNum = 0;
  (this->SubInterfaces).ArrayMax = 0;
  return this;
}

// FindSubInterfaceLayout @ 14ad51e80

FSubInterfaceLayout * __thiscall
Metasound::FInputVertexInterface::FindSubInterfaceLayout(FInputVertexInterface *this,FName *param_1)

{
  FSubInterfaceLayout *pFVar1;
  FSubInterfaceLayout *pFVar2;
  
  pFVar2 = (FSubInterfaceLayout *)(this->SubInterfaces).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (this->SubInterfaces).ArrayNum;
  if (pFVar2 != pFVar1) {
    do {
      if (*param_1 == pFVar2->SubInterfaceName) {
        return pFVar2;
      }
      pFVar2 = pFVar2 + 1;
    } while (pFVar2 != pFVar1);
  }
  return (FSubInterfaceLayout *)0x0;
}

// ForEachSubInterfaceInstance @ 14ad52cc0

void __thiscall
Metasound::FInputVertexInterface::ForEachSubInterfaceInstance
          (FInputVertexInterface *this,FName *param_1,
          TFunctionRef<void___cdecl(TArrayView<Metasound::FInputDataVertex,int>)> *param_2)

{
  FName *pFVar1;
  FName FVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FName *pFVar9;
  FName FVar10;
  undefined1 local_res8 [8];
  undefined8 local_38;
  int iStack_30;
  
  pFVar9 = (FName *)(this->SubInterfaces).AllocatorInstance.Data;
  pFVar1 = pFVar9 + (longlong)(this->SubInterfaces).ArrayNum * 3;
  if (pFVar9 != pFVar1) {
    while (*param_1 != *pFVar9) {
      pFVar9 = pFVar9 + 3;
      if (pFVar9 == pFVar1) {
        return;
      }
    }
    FVar10 = pFVar9[1];
    uVar3 = pFVar9[2].ComparisonIndex.Value;
    FVar2 = (FName)((longlong)FVar10 + (longlong)(int)uVar3 * 8);
    while( true ) {
      if (pFVar9[2].ComparisonIndex.Value != uVar3) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<Metasound::VertexPrivate::FSubInterfaceLayout::FInstance_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (FVar10 == FVar2) break;
      if ((((*(int *)FVar10 < 0) || (iVar4 = (int)this->_padding_, iVar4 <= *(int *)FVar10)) ||
          (iVar8 = *(int *)((longlong)FVar10 + 4) + -1, iVar8 < 0)) || (iVar4 <= iVar8)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Vertices.IsValidIndex(Instance.Begin) && Vertices.IsValidIndex(Instance.End - 1)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundVertex.cpp"
                           ,0x1c6,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar4 = *(int *)FVar10;
      lVar5 = this->_padding_;
      iVar8 = *(int *)((longlong)FVar10 + 4) - iVar4;
      if (iVar8 < 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iStack_30 = iVar8;
      local_38 = (longlong)iVar4 * 0x38 + lVar5;
      (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_38);
      FVar10 = (FName)((longlong)FVar10 + 8);
    }
  }
  return;
}

// ForEachSubInterfaceInstance @ 14ad52e40

void __thiscall
Metasound::FInputVertexInterface::ForEachSubInterfaceInstance
          (FInputVertexInterface *this,FName *param_1,
          TFunctionRef<void___cdecl(TArrayView<Metasound::FInputDataVertex_const_,int>)> *param_2)

{
  FName *pFVar1;
  FName FVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FName *pFVar9;
  FName FVar10;
  undefined1 local_res8 [8];
  undefined8 local_38;
  int iStack_30;
  
  pFVar9 = (FName *)(this->SubInterfaces).AllocatorInstance.Data;
  pFVar1 = pFVar9 + (longlong)(this->SubInterfaces).ArrayNum * 3;
  if (pFVar9 != pFVar1) {
    while (*param_1 != *pFVar9) {
      pFVar9 = pFVar9 + 3;
      if (pFVar9 == pFVar1) {
        return;
      }
    }
    FVar10 = pFVar9[1];
    uVar3 = pFVar9[2].ComparisonIndex.Value;
    FVar2 = (FName)((longlong)FVar10 + (longlong)(int)uVar3 * 8);
    while( true ) {
      if (pFVar9[2].ComparisonIndex.Value != uVar3) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<Metasound::VertexPrivate::FSubInterfaceLayout::FInstance_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (FVar10 == FVar2) break;
      if ((((*(int *)FVar10 < 0) || (iVar4 = (int)this->_padding_, iVar4 <= *(int *)FVar10)) ||
          (iVar8 = *(int *)((longlong)FVar10 + 4) + -1, iVar8 < 0)) || (iVar4 <= iVar8)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Vertices.IsValidIndex(Instance.Begin) && Vertices.IsValidIndex(Instance.End - 1)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundVertex.cpp"
                           ,0x1b8,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar4 = *(int *)FVar10;
      lVar5 = this->_padding_;
      iVar8 = *(int *)((longlong)FVar10 + 4) - iVar4;
      if (iVar8 < 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iStack_30 = iVar8;
      local_38 = (longlong)iVar4 * 0x38 + lVar5;
      (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_38);
      FVar10 = (FName)((longlong)FVar10 + 8);
    }
  }
  return;
}

// GetSubInterfaces @ 14ad567e0

TArrayView<Metasound::VertexPrivate::FSubInterfaceLayout_const_,int> * __thiscall
Metasound::FInputVertexInterface::GetSubInterfaces
          (FInputVertexInterface *this,
          TArrayView<Metasound::VertexPrivate::FSubInterfaceLayout_const_,int>
          *__return_storage_ptr__,FPrivateAccessTag *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<Metasound::VertexPrivate::FSubInterfaceLayout_const_,int> *pTVar4;
  
  iVar1 = (this->SubInterfaces).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (FSubInterfaceLayout *)(this->SubInterfaces).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<Metasound::VertexPrivate::FSubInterfaceLayout_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

