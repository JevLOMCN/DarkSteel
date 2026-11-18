// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 3

// FGroupStartBlock @ 1427b10b0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FGroupStartBlock * __thiscall FGroupStartBlock::FGroupStartBlock(FGroupStartBlock *this)

{
  TSharedPtr<FUICommandList_const_,1> local_28;
  TSharedPtr<FUICommandInfo_const_,1> local_18;
  
  local_28.Object = (FUICommandList *)0x0;
  local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_18.Object = (FUICommandInfo *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FMultiBlock::FMultiBlock((FMultiBlock *)this,&local_18,&local_28,(FName)0x0,None,false);
  *(undefined ***)this = &___7FGroupStartBlock__6B_;
  return this;
}

// ConstructWidget @ 1427f2880

TSharedRef<IMultiBlockBaseWidget,1> * __thiscall
FGroupStartBlock::ConstructWidget
          (FGroupStartBlock *this,TSharedRef<IMultiBlockBaseWidget,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  FArguments *pFVar2;
  TSlateDecl<SGroupMarkerBlock,RequiredArgs::T0RequiredArgs> *this_00;
  TSharedRef<SGroupMarkerBlock,1> *pTVar3;
  T0RequiredArgs local_res10 [24];
  TSharedRef<SGroupMarkerBlock,1> local_228;
  TSlateDecl<SGroupMarkerBlock,RequiredArgs::T0RequiredArgs> local_218;
  FSlateBaseNamedArgs local_200;
  
  pFVar2 = SGroupMarkerBlock::FArguments::FArguments((FArguments *)&local_200);
  this_00 = MakeTDecl<SGroupMarkerBlock,RequiredArgs::T0RequiredArgs>
                      (&local_218,"SGroupMarkerBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SGroupMarkerBlock.cpp"
                       ,0x14,local_res10);
  pTVar3 = TSlateDecl<SGroupMarkerBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_00,&local_228,pFVar2);
  __return_storage_ptr__->Object = (IMultiBlockBaseWidget *)pTVar3->Object;
  pTVar1 = (pTVar3->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_228.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_218._Widget.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs(&local_200);
  return __return_storage_ptr__;
}

// IsGroupStartBlock @ 14281e100

bool __thiscall FGroupStartBlock::IsGroupStartBlock(FGroupStartBlock *this)

{
  return true;
}

