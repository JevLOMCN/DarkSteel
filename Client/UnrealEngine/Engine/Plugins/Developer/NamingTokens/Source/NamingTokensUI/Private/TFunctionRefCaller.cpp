// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NamingTokensUI
// Functions: 3

// Call @ 14d0f48a0

FSlateBrush * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_>::SListViewPinnedRowWidget::Construct'::__l2::<lambda_1>,FSlateBrush_const_*>
::Call(void *param_1)

{
  ISlateStyle *pIVar1;
  FName *pFVar2;
  FSlateBrush *pFVar3;
  char *pcVar4;
  code *pcVar5;
  FName FStackX_8;
  FName FStackX_10;
  
  if (*(char *)(*(longlong *)param_1 + 0x3b) == '\0') {
    pIVar1 = FAppStyle::Get();
    pcVar4 = "Brushes.Header";
    pcVar5 = *(code **)((longlong)*pIVar1 + 0x50);
    pFVar2 = &FStackX_10;
  }
  else {
    pIVar1 = FAppStyle::Get();
    pcVar4 = "Brushes.Hover";
    pcVar5 = *(code **)((longlong)*pIVar1 + 0x50);
    pFVar2 = &FStackX_8;
  }
  pFVar2 = ::FName::FName(pFVar2,pcVar4);
  pFVar3 = (FSlateBrush *)(*pcVar5)(pIVar1,*pFVar2,0,0);
  return pFVar3;
}

// Call @ 14d0f48b0

EVisibility __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`SNamingTokensEditableTextBox::Construct'::__l2::<lambda_1>,EVisibility>::Call
          (void *param_1)

{
  void *in_RDX;
  
  `SNamingTokensEditableTextBox::Construct'::__l2::<lambda_1>::operator()(in_RDX);
  return (EVisibility)SUB81(param_1,0);
}

// Call @ 14d0f48e0

EVisibility __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`SNamingTokensEditableTextBox::Construct'::__l2::<lambda_2>,EVisibility>::Call
          (void *param_1)

{
  void *in_RDX;
  
  `SNamingTokensEditableTextBox::Construct'::__l2::<lambda_2>::operator()(in_RDX);
  return (EVisibility)SUB81(param_1,0);
}

