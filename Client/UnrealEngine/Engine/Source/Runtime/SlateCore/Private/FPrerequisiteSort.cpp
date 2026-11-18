// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 1

// CalculateDepth @ 1425d1380

void __thiscall
`FSlateAttributeDescriptor::FInitializer::~FInitializer'::__l2::FPrerequisiteSort::CalculateDepth
          (void *this,
          TArrayView<_public:___cdecl_FSlateAttributeDescriptor::FInitializer::~FInitializer(void)_::_2_::FPrerequisiteSort,int>
          *param_1)

{
  code *pcVar1;
  bool bVar2;
  FPrerequisiteSort *pFVar3;
  TArrayView<_public:___cdecl_FSlateAttributeDescriptor::FInitializer::~FInitializer(void)_::_2_::FPrerequisiteSort,int>
  local_18;
  
  if (*(int *)((longlong)this + 8) < 0) {
    if (*(int *)((longlong)this + 4) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PrerequisitesIndex != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttributeDescriptor.cpp"
                         ,0xcd,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar3 = TArrayView<`FSlateAttributeDescriptor::FInitializer::~FInitializer'::__l2::FPrerequisiteSort,int>
             ::operator[](param_1,*(int *)((longlong)this + 4));
    if (pFVar3->Depth < 0) {
      pFVar3 = TArrayView<`FSlateAttributeDescriptor::FInitializer::~FInitializer'::__l2::FPrerequisiteSort,int>
               ::operator[](param_1,*(int *)((longlong)this + 4));
      local_18.DataPtr = param_1->DataPtr;
      local_18.ArrayNum = param_1->ArrayNum;
      local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
      CalculateDepth(pFVar3,&local_18);
    }
    pFVar3 = TArrayView<`FSlateAttributeDescriptor::FInitializer::~FInitializer'::__l2::FPrerequisiteSort,int>
             ::operator[](param_1,*(int *)((longlong)this + 4));
    *(int *)((longlong)this + 8) = pFVar3->Depth + 1;
  }
  return;
}

