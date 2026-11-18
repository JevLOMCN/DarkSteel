// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// Execute_GetEditorName @ 14725f6f0

FText * __cdecl
IAudioPanelWidgetInterface::Execute_GetEditorName(FText *__return_storage_ptr__,UObject *param_1)

{
  UClass *this;
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  UClass *pUVar4;
  UFunction *pUVar5;
  undefined1 local_res8 [8];
  FText local_18;
  
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("O != 0",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Engine\\UHT\\AudioPanelWidgetInterface.gen.cpp"
                       ,0x23,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FText *)(*pcVar1)();
      return pFVar3;
    }
  }
  this = *(UClass **)&param_1->field_0x10;
  pUVar4 = UAudioPanelWidgetInterface::StaticClass();
  bVar2 = UClass::ImplementsInterface(this,pUVar4);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("O->GetClass()->ImplementsInterface(UAudioPanelWidgetInterface::StaticClass())"
                       ,
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Engine\\UHT\\AudioPanelWidgetInterface.gen.cpp"
                       ,0x24,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FText *)(*pcVar1)();
      return pFVar3;
    }
  }
  FText::FText(&local_18);
  pUVar5 = UObject::FindFunction(param_1,NAME_UAudioPanelWidgetInterface_GetEditorName);
  if (pUVar5 != (UFunction *)0x0) {
    (**(code **)(*(longlong *)param_1 + 0x260))(param_1,pUVar5,&local_18);
  }
  (__return_storage_ptr__->TextData).Reference = local_18.TextData.Reference;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 8))
              (local_18.TextData.Reference,local_res8);
  }
  __return_storage_ptr__->Flags = local_18.Flags;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// Execute_GetIconBrushName @ 14725f7f0

FName __cdecl IAudioPanelWidgetInterface::Execute_GetIconBrushName(UObject *param_1)

{
  UClass *this;
  code *pcVar1;
  bool bVar2;
  FName FVar3;
  UClass *pUVar4;
  UFunction *pUVar5;
  UObject *in_RDX;
  
  if (in_RDX == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("O != 0",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Engine\\UHT\\AudioPanelWidgetInterface.gen.cpp"
                       ,0x61,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3 = (FName)(*pcVar1)();
      return FVar3;
    }
  }
  this = *(UClass **)&in_RDX->field_0x10;
  pUVar4 = UAudioPanelWidgetInterface::StaticClass();
  bVar2 = UClass::ImplementsInterface(this,pUVar4);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("O->GetClass()->ImplementsInterface(UAudioPanelWidgetInterface::StaticClass())"
                       ,
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Engine\\UHT\\AudioPanelWidgetInterface.gen.cpp"
                       ,0x62,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3 = (FName)(*pcVar1)();
      return FVar3;
    }
  }
  pUVar5 = UObject::FindFunction(in_RDX,NAME_UAudioPanelWidgetInterface_GetIconBrushName);
  if (pUVar5 != (UFunction *)0x0) {
    (**(code **)(*(longlong *)in_RDX + 0x260))();
  }
  *(undefined8 *)param_1 = 0;
  return (FName)param_1;
}

// GetEditorName @ 14725f960

FText * __thiscall
IAudioPanelWidgetInterface::GetEditorName
          (IAudioPanelWidgetInterface *this,FText *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  undefined1 local_res10 [24];
  FText local_18;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0 && \"Do not directly call Event functions in Interfaces. Call Execute_GetEditorName instead.\""
                     ,
                     "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Engine\\UHT\\AudioPanelWidgetInterface.gen.cpp"
                     ,0x1c,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FText *)(*pcVar1)();
    return pFVar3;
  }
  FText::FText(&local_18);
  (__return_storage_ptr__->TextData).Reference = local_18.TextData.Reference;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 8))
              (local_18.TextData.Reference,local_res10);
  }
  __return_storage_ptr__->Flags = local_18.Flags;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetIconBrushName @ 14725f9e0

FName __thiscall IAudioPanelWidgetInterface::GetIconBrushName(IAudioPanelWidgetInterface *this)

{
  code *pcVar1;
  bool bVar2;
  FName FVar3;
  FName in_RDX;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0 && \"Do not directly call Event functions in Interfaces. Call Execute_GetIconBrushName instead.\""
                     ,
                     "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Engine\\UHT\\AudioPanelWidgetInterface.gen.cpp"
                     ,0x5a,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    FVar3 = (FName)(*pcVar1)();
    return FVar3;
  }
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

