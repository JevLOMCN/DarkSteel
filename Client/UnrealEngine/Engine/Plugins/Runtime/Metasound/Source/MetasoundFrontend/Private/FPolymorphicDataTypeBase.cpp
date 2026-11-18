// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 4

// FPolymorphicDataTypeBase @ 14ad9bb90

/* WARNING: Enum "Type": Some values do not have unique names */

FPolymorphicDataTypeBase * __thiscall
Metasound::Frontend::FPolymorphicDataTypeBase::FPolymorphicDataTypeBase
          (FPolymorphicDataTypeBase *this,FName param_1,FName param_2,bool param_3)

{
  FPolyRegistry *this_00;
  FName local_res10;
  FString local_48;
  FPolyTypeInfo local_38;
  
  this->DataTypeName = param_1;
  this->_padding_ = (longlong)&___7FPolymorphicDataTypeBase_Frontend_Metasound__6B_;
  this->bIsAbstract = param_3;
  this->ParentTypeName = param_2;
  (this->ParentDataType).Object = (IPolymorphicDataTypeInterface *)0x0;
  (this->ParentDataType).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  local_res10 = param_1;
  if (5 < (byte)LogMetaSound._0_1_) {
    ::FName::ToString(&this->ParentTypeName,(FString *)&local_38);
    ::FName::ToString(&local_res10,&local_48);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.TypeName != (FName)0x0) {
      FMemory::Free((void *)local_38.TypeName);
    }
  }
  this_00 = FPolyRegistry::Get();
  local_38.TypeName = local_res10;
  local_38.bIsPolymorphic = true;
  local_38.BaseTypeName = param_2;
  FPolyRegistry::Register(this_00,&local_38);
  return this;
}

// ~FPolymorphicDataTypeBase @ 14ad9e820

void __thiscall
Metasound::Frontend::FPolymorphicDataTypeBase::~FPolymorphicDataTypeBase
          (FPolymorphicDataTypeBase *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->ParentDataType).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x00014ad9e840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      return;
    }
  }
  return;
}

// IsA @ 14adc6b30

bool __thiscall
Metasound::Frontend::FPolymorphicDataTypeBase::IsA
          (FPolymorphicDataTypeBase *this,FName param_1,IDataTypeRegistry *param_2)

{
  IPolymorphicDataTypeInterface *pIVar1;
  code *pcVar2;
  atomic<int> aVar3;
  undefined1 uVar4;
  atomic<int> aVar5;
  IDataTypeRegistry *pIVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  
  if (this->DataTypeName == param_1) {
    return true;
  }
  ResolveParent(this,param_2);
  pTVar7 = (this->ParentDataType).WeakReferenceCount.ReferenceController;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar7->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14adc6b85;
      }
      LOCK();
      aVar5 = pTVar7->SharedReferenceCount;
      bVar8 = aVar3 == aVar5;
      if (bVar8) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar5 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar5;
    } while (!bVar8);
    pIVar1 = (this->ParentDataType).Object;
    if (pIVar1 != (IPolymorphicDataTypeInterface *)0x0) {
      pcVar2 = *(code **)((longlong)*pIVar1 + 8);
      pIVar6 = IDataTypeRegistry::Get();
      uVar4 = (*pcVar2)(pIVar1,param_1,pIVar6);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      return (bool)uVar4;
    }
  }
LAB_14adc6b85:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return false;
}

// ResolveParent @ 14add0120

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::Frontend::FPolymorphicDataTypeBase::ResolveParent
          (FPolymorphicDataTypeBase *this,IDataTypeRegistry *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined1 local_28 [16];
  FString local_18;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&VoidString,L"void");
    _Init_thread_footer(&::_TSS0);
  }
  if ((((this->ParentDataType).Object == (IPolymorphicDataTypeInterface *)0x0) ||
      (pTVar3 = (this->ParentDataType).WeakReferenceCount.ReferenceController,
      pTVar3 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar3->SharedReferenceCount < 1)) {
    if ((this->ParentTypeName != (FName)0x0) && (this->ParentTypeName != VoidString)) {
      plVar5 = (longlong *)(**(code **)((longlong)*param_1 + 0x18))(param_1,&this->ParentTypeName);
      if (plVar5 != (longlong *)0x0) {
        puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x18))(plVar5,local_28);
        (this->ParentDataType).Object = (IPolymorphicDataTypeInterface *)*puVar6;
        pTVar3 = (TReferenceControllerBase<1> *)puVar6[1];
        if (pTVar3 != (this->ParentDataType).WeakReferenceCount.ReferenceController) {
          if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
            UNLOCK();
          }
          pTVar4 = (this->ParentDataType).WeakReferenceCount.ReferenceController;
          if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            paVar1 = &pTVar4->WeakReferenceCount;
            aVar2 = *paVar1;
            *paVar1 = (atomic<int>)((int)*paVar1 + -1);
            UNLOCK();
            if (aVar2 == (atomic<int>)0x1) {
              (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
            }
          }
          (this->ParentDataType).WeakReferenceCount.ReferenceController = pTVar3;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_28._8_8_);
      }
      if ((2 < (byte)LogMetaSound._0_1_) &&
         ((((this->ParentDataType).Object == (IPolymorphicDataTypeInterface *)0x0 ||
           (pTVar3 = (this->ParentDataType).WeakReferenceCount.ReferenceController,
           pTVar3 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar3->SharedReferenceCount < 1)
          ))) {
        ::FName::ToString(&this->ParentTypeName,&local_18);
        ::FName::ToString(&this->DataTypeName,(FString *)local_28);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_28._0_8_);
        }
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  return;
}

