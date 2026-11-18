// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 3

// FStandaloneCompositeFont @ 142477020

FStandaloneCompositeFont * __thiscall
FStandaloneCompositeFont::FStandaloneCompositeFont
          (FStandaloneCompositeFont *this,FName *param_1,FString *param_2,EFontHinting param_3,
          EFontLoadingPolicy param_4)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  int iVar5;
  FString local_38;
  
  pFVar3 = (param_2->Data).AllocatorInstance.Data;
  (param_2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar1 = (param_2->Data).ArrayNum;
  iVar2 = (param_2->Data).ArrayMax;
  (param_2->Data).ArrayNum = 0;
  (param_2->Data).ArrayMax = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined4 *)&this->field_0x18 = 0;
  *(undefined4 *)&this->field_0x1c = 0;
  iVar5 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x830,(ForAnyElementType *)&this->field_0x10,(int *)&this->field_0x1c);
  *(int *)&this->field_0x18 = iVar5 + 1;
  lVar4 = *(longlong *)&this->field_0x10;
  *(FName *)((longlong)iVar5 * 0x30 + lVar4) = *param_1;
  local_38.Data.AllocatorInstance.Data = pFVar3;
  local_38.Data.ArrayNum = iVar1;
  local_38.Data.ArrayMax = iVar2;
  FFontData::FFontData
            ((FFontData *)(lVar4 + 8 + (longlong)iVar5 * 0x30),&local_38,param_3,param_4,0);
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x30 = 0x3f800000;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  this->field_0x48 = 1;
  *(undefined ***)this = &___7FGCObject__6B_;
  *(undefined2 *)&this->field_0x8 = 0;
  FGCObject::RegisterGCObject((FGCObject *)this);
  *(undefined ***)this = &___7FStandaloneCompositeFont__6B_;
  pFVar3 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return this;
}

// AddReferencedObjects @ 14247fad0

void __thiscall
FStandaloneCompositeFont::AddReferencedObjects
          (FStandaloneCompositeFont *this,FReferenceCollector *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 local_res8 [8];
  
  iVar1 = *(int *)&this->field_0x18;
  lVar2 = *(longlong *)&this->field_0x10;
  lVar4 = (longlong)iVar1 * 0x30 + lVar2;
  while( true ) {
    if (*(int *)&this->field_0x18 != iVar1) {
      `TCheckedPointerIterator<FTypefaceEntry,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (lVar2 == lVar4) break;
    (**(code **)(param_1->_padding_ + 0x88))(param_1,lVar2 + 0x28);
    lVar2 = lVar2 + 0x30;
  }
  iVar1 = *(int *)&this->field_0x40;
  plVar5 = *(longlong **)&this->field_0x38;
  plVar6 = plVar5 + (longlong)iVar1 * 7;
  while( true ) {
    if (*(int *)&this->field_0x40 != iVar1) {
      `TCheckedPointerIterator<FCompositeSubFont,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (plVar5 == plVar6) break;
    lVar4 = plVar5[1];
    lVar2 = *plVar5;
    lVar3 = (longlong)(int)lVar4 * 0x30 + lVar2;
    while( true ) {
      if ((int)plVar5[1] != (int)lVar4) {
        `TCheckedPointerIterator<FTypefaceEntry,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (lVar2 == lVar3) break;
      (**(code **)(param_1->_padding_ + 0x88))(param_1,lVar2 + 0x28,0,0);
      lVar2 = lVar2 + 0x30;
    }
    plVar5 = plVar5 + 7;
  }
  return;
}

// GetReferencerName @ 142492d70

FString * __thiscall
FStandaloneCompositeFont::GetReferencerName
          (FStandaloneCompositeFont *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FStandaloneCompositeFont");
  return __return_storage_ptr__;
}

