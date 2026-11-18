// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// FStripDataFlags @ 147bba040

FStripDataFlags * __thiscall
FStripDataFlags::FStripDataFlags
          (FStripDataFlags *this,FArchive *param_1,uchar param_2,FPackageFileVersion *param_3)

{
  longlong lVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  FStripDataFlags *pFVar6;
  byte bVar7;
  longlong *plVar8;
  longlong *plVar9;
  
  this->GlobalStripFlags = '\0';
  this->ClassStripFlags = '\0';
  if ((param_3->FileVersionUE4 < 0xd6) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InVersion >= VER_UE4_OLDEST_LOADABLE_PACKAGE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\EngineUtils.cpp"
                         ,0x24b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FStripDataFlags *)(*pcVar3)();
    return pFVar6;
  }
  if ((param_3->FileVersionUE4 <= (int)*(undefined8 *)&param_1->field_0x40) &&
     (param_3->FileVersionUE5 <= (int)((ulonglong)*(undefined8 *)&param_1->field_0x40 >> 0x20))) {
    lVar1 = *(longlong *)&param_1->field_0x68;
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x10) != 0)) {
      cVar5 = (**(code **)(*(longlong *)(*(longlong *)(lVar1 + 8) + 8) + 0x80))
                        (*(longlong *)(lVar1 + 8) + 8);
      plVar9 = (longlong *)0x0;
      this->GlobalStripFlags = this->GlobalStripFlags | cVar5 == '\0';
      plVar8 = plVar9;
      if (*(longlong *)&param_1->field_0x68 != 0) {
        plVar8 = *(longlong **)(*(longlong *)&param_1->field_0x68 + 8);
      }
      cVar5 = (**(code **)(plVar8[1] + 0x170))(plVar8 + 1);
      bVar7 = 2;
      if (cVar5 != '\0') {
        bVar7 = 0;
      }
      this->GlobalStripFlags = this->GlobalStripFlags | bVar7;
      if (*(longlong *)&param_1->field_0x68 != 0) {
        plVar9 = *(longlong **)(*(longlong *)&param_1->field_0x68 + 8);
      }
      cVar5 = (**(code **)(*plVar9 + 200))(plVar9,0x1e);
      this->ClassStripFlags = param_2;
      bVar7 = 4;
      if (cVar5 != '\0') {
        bVar7 = 0;
      }
      this->GlobalStripFlags = this->GlobalStripFlags | bVar7;
    }
    puVar2 = (uchar *)**(undefined8 **)&param_1->field_0x8;
    if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this,1);
    }
    else {
      this->GlobalStripFlags = *puVar2;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    }
    puVar2 = (uchar *)**(undefined8 **)&param_1->field_0x8;
    if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->ClassStripFlags,1);
    }
    else {
      this->ClassStripFlags = *puVar2;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    }
  }
  return this;
}

// FStripDataFlags @ 147bba1d0

FStripDataFlags * __thiscall
FStripDataFlags::FStripDataFlags
          (FStripDataFlags *this,FArchive *param_1,uchar param_2,uchar param_3,
          FPackageFileVersion *param_4)

{
  uchar *puVar1;
  code *pcVar2;
  bool bVar3;
  FStripDataFlags *pFVar4;
  
  this->GlobalStripFlags = '\0';
  this->ClassStripFlags = '\0';
  if (param_4->FileVersionUE4 < 0xd6) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InVersion >= VER_UE4_OLDEST_LOADABLE_PACKAGE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\EngineUtils.cpp"
                       ,0x25e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FStripDataFlags *)(*pcVar2)();
      return pFVar4;
    }
  }
  if ((param_4->FileVersionUE4 <= (int)*(undefined8 *)&param_1->field_0x40) &&
     (param_4->FileVersionUE5 <= (int)((ulonglong)*(undefined8 *)&param_1->field_0x40 >> 0x20))) {
    if ((*(longlong *)&param_1->field_0x68 != 0) &&
       (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) != 0)) {
      this->GlobalStripFlags = param_2;
      this->ClassStripFlags = param_3;
    }
    puVar1 = (uchar *)**(undefined8 **)&param_1->field_0x8;
    if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this,1);
    }
    else {
      this->GlobalStripFlags = *puVar1;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    }
    puVar1 = (uchar *)**(undefined8 **)&param_1->field_0x8;
    if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->ClassStripFlags,1);
    }
    else {
      this->ClassStripFlags = *puVar1;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    }
  }
  return this;
}

// FStripDataFlags @ 147bba2f0

FStripDataFlags * __thiscall
FStripDataFlags::FStripDataFlags
          (FStripDataFlags *this,FStructuredArchiveSlot param_1,uchar param_2,
          FPackageFileVersion *param_3)

{
  uchar *puVar1;
  code *pcVar2;
  FSlotBase FVar3;
  bool bVar4;
  char cVar5;
  FArchive *pFVar6;
  FStripDataFlags *pFVar7;
  byte bVar8;
  longlong *plVar9;
  longlong *plVar10;
  FSlotBase local_res10;
  
  this->GlobalStripFlags = '\0';
  this->ClassStripFlags = '\0';
  local_res10.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar6 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
  FVar3.StructuredArchive = local_res10.StructuredArchive;
  if ((param_3->FileVersionUE4 < 0xd6) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InVersion >= VER_UE4_OLDEST_LOADABLE_PACKAGE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\EngineUtils.cpp"
                         ,0x274,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FStripDataFlags *)(*pcVar2)();
    return pFVar7;
  }
  if ((param_3->FileVersionUE4 <= (int)*(undefined8 *)&pFVar6->field_0x40) &&
     (param_3->FileVersionUE5 <= (int)((ulonglong)*(undefined8 *)&pFVar6->field_0x40 >> 0x20))) {
    if ((*(longlong *)&pFVar6->field_0x68 != 0) &&
       (*(longlong *)(*(longlong *)&pFVar6->field_0x68 + 0x10) != 0)) {
      plVar10 = (longlong *)0x0;
      this->GlobalStripFlags = this->GlobalStripFlags | (byte)pFVar6->field_0x2b >> 4 & 1;
      plVar9 = plVar10;
      if (*(longlong *)&pFVar6->field_0x68 != 0) {
        plVar9 = *(longlong **)(*(longlong *)&pFVar6->field_0x68 + 8);
      }
      cVar5 = (**(code **)(plVar9[1] + 0x170))(plVar9 + 1);
      bVar8 = 0;
      if (cVar5 == '\0') {
        bVar8 = 2;
      }
      this->GlobalStripFlags = this->GlobalStripFlags | bVar8;
      if (*(longlong *)&pFVar6->field_0x68 != 0) {
        plVar10 = *(longlong **)(*(longlong *)&pFVar6->field_0x68 + 8);
      }
      cVar5 = (**(code **)(*plVar10 + 200))(plVar10,0x1e);
      this->ClassStripFlags = param_2;
      bVar8 = 4;
      if (cVar5 != '\0') {
        bVar8 = 0;
      }
      this->GlobalStripFlags = this->GlobalStripFlags | bVar8;
    }
    pFVar6 = (FVar3.StructuredArchive)->Formatter->Inner;
    puVar1 = (uchar *)**(undefined8 **)&pFVar6->field_0x8;
    if ((uchar *)(*(undefined8 **)&pFVar6->field_0x8)[1] < puVar1 + 1) {
      (**(code **)(*(longlong *)pFVar6 + 0x188))(pFVar6,this,1);
    }
    else {
      this->GlobalStripFlags = *puVar1;
      **(longlong **)&pFVar6->field_0x8 = **(longlong **)&pFVar6->field_0x8 + 1;
    }
    pFVar6 = (FVar3.StructuredArchive)->Formatter->Inner;
    puVar1 = (uchar *)**(undefined8 **)&pFVar6->field_0x8;
    if ((uchar *)(*(undefined8 **)&pFVar6->field_0x8)[1] < puVar1 + 1) {
      (**(code **)(*(longlong *)pFVar6 + 0x188))(pFVar6,&this->ClassStripFlags,1);
    }
    else {
      this->ClassStripFlags = *puVar1;
      **(longlong **)&pFVar6->field_0x8 = **(longlong **)&pFVar6->field_0x8 + 1;
    }
  }
  return this;
}

// FStripDataFlags @ 147bba490

FStripDataFlags * __thiscall
FStripDataFlags::FStripDataFlags
          (FStripDataFlags *this,FStructuredArchiveSlot param_1,uchar param_2,uchar param_3,
          FPackageFileVersion *param_4)

{
  uchar *puVar1;
  code *pcVar2;
  FSlotBase FVar3;
  bool bVar4;
  FArchive *pFVar5;
  FStripDataFlags *pFVar6;
  FSlotBase local_res10;
  
  this->GlobalStripFlags = '\0';
  this->ClassStripFlags = '\0';
  local_res10.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar5 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
  FVar3.StructuredArchive = local_res10.StructuredArchive;
  if (param_4->FileVersionUE4 < 0xd6) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InVersion >= VER_UE4_OLDEST_LOADABLE_PACKAGE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\EngineUtils.cpp"
                       ,0x28a,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FStripDataFlags *)(*pcVar2)();
      return pFVar6;
    }
  }
  if ((param_4->FileVersionUE4 <= (int)*(undefined8 *)&pFVar5->field_0x40) &&
     (param_4->FileVersionUE5 <= (int)((ulonglong)*(undefined8 *)&pFVar5->field_0x40 >> 0x20))) {
    if ((*(longlong *)&pFVar5->field_0x68 != 0) &&
       (*(longlong *)(*(longlong *)&pFVar5->field_0x68 + 0x10) != 0)) {
      this->GlobalStripFlags = param_2;
      this->ClassStripFlags = param_3;
    }
    pFVar5 = (FVar3.StructuredArchive)->Formatter->Inner;
    puVar1 = (uchar *)**(undefined8 **)&pFVar5->field_0x8;
    if ((uchar *)(*(undefined8 **)&pFVar5->field_0x8)[1] < puVar1 + 1) {
      (**(code **)(*(longlong *)pFVar5 + 0x188))(pFVar5,this,1);
    }
    else {
      this->GlobalStripFlags = *puVar1;
      **(longlong **)&pFVar5->field_0x8 = **(longlong **)&pFVar5->field_0x8 + 1;
    }
    pFVar5 = (FVar3.StructuredArchive)->Formatter->Inner;
    puVar1 = (uchar *)**(undefined8 **)&pFVar5->field_0x8;
    if ((uchar *)(*(undefined8 **)&pFVar5->field_0x8)[1] < puVar1 + 1) {
      (**(code **)(*(longlong *)pFVar5 + 0x188))(pFVar5,&this->ClassStripFlags,1);
    }
    else {
      this->ClassStripFlags = *puVar1;
      **(longlong **)&pFVar5->field_0x8 = **(longlong **)&pFVar5->field_0x8 + 1;
    }
  }
  return this;
}

