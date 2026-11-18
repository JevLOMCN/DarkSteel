// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 1

// ApplyAfter<void_(__cdecl_WidgetReflectorImpl::SWidgetReflector::*const_&)(TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_>),WidgetReflectorImpl::SWidgetReflector_*_&> @ 142dec520

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0>,TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_>_>
::
ApplyAfter<void_(__cdecl_WidgetReflectorImpl::SWidgetReflector::*const_&)(TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_>),WidgetReflectorImpl::SWidgetReflector_*_&>
          (TTupleBase<TIntegerSequence<unsigned_int,0>,TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_>_>
           *this,pmf_e0b1a362 *param_1,SWidgetReflector **param_2)

{
  int iVar1;
  TSharedRef<FWidgetReflectorNodeBase,1> *pTVar2;
  int iVar3;
  SWidgetReflector *pSVar4;
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  code *local_18;
  undefined8 uStack_10;
  
  local_18 = *(code **)param_1;
  uStack_10 = *(undefined8 *)&param_1->field_0x8;
  pSVar4 = DereferenceIfNecessary<WidgetReflectorImpl::SWidgetReflector,WidgetReflectorImpl::SWidgetReflector_*_&>
                     (param_2);
  iVar1 = *(int *)&this->field_0x8;
  pTVar2 = *(TSharedRef<FWidgetReflectorNodeBase,1> **)this;
  iVar3 = (int)uStack_10;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = iVar1;
  if (iVar1 == 0) {
    local_1c = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar1,0,&local_28,iVar1,&local_1c);
    ConstructItems<TSharedRef<FWidgetReflectorNodeBase,1>,TSharedRef<FWidgetReflectorNodeBase,1>,int>
              (local_28.Data,pTVar2,iVar1);
  }
  (*local_18)((longlong)&pSVar4->_padding_ + (longlong)iVar3,&local_28);
  return;
}

