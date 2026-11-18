// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 14

// StaticStruct @ 142d52650

UScriptStruct * __cdecl FSidebarState::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSidebarState.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ToolWidgets();
    Z_Registration_Info_UScriptStruct_FSidebarState.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSidebarState,(UObject *)pUVar1,L"SidebarState");
  }
  return Z_Registration_Info_UScriptStruct_FSidebarState.OuterSingleton;
}

// FindDrawerState @ 142da6630

FSidebarDrawerState * __thiscall
FSidebarState::FindDrawerState(FSidebarState *this,FSidebarDrawerState *param_1)

{
  int iVar1;
  FSidebarDrawerState *pFVar2;
  FSidebarDrawerState *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->DrawerStates).ArrayNum;
  pFVar2 = (FSidebarDrawerState *)(this->DrawerStates).AllocatorInstance.Data;
  pFVar3 = pFVar2 + iVar1;
  while( true ) {
    if ((this->DrawerStates).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FSidebarDrawerState,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (pFVar2->DrawerId == param_1->DrawerId) {
      return pFVar2;
    }
    pFVar2 = pFVar2 + 1;
  }
  return (FSidebarDrawerState *)0x0;
}

// FindOrAddDrawerState @ 142da67f0

FSidebarDrawerState * __thiscall
FSidebarState::FindOrAddDrawerState(FSidebarState *this,FSidebarDrawerState *param_1)

{
  TArray<FSidebarDrawerState,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FSidebarDrawerState *pFVar6;
  FSidebarDrawerState *pFVar7;
  undefined1 local_res8 [8];
  
  iVar5 = (this->DrawerStates).ArrayNum;
  pTVar1 = &this->DrawerStates;
  pFVar6 = (FSidebarDrawerState *)(pTVar1->AllocatorInstance).Data;
  pFVar7 = pFVar6 + iVar5;
  while( true ) {
    if ((this->DrawerStates).ArrayNum != iVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FSidebarDrawerState,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar6 == pFVar7) break;
    if (pFVar6->DrawerId == param_1->DrawerId) {
      return pFVar6;
    }
    pFVar6 = pFVar6 + 1;
  }
  pFVar6 = (FSidebarDrawerState *)(pTVar1->AllocatorInstance).Data;
  if (((pFVar6 <= param_1) && (param_1 < pFVar6 + (this->DrawerStates).ArrayMax)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FSidebarDrawerState *)(*pcVar3)();
    return pFVar6;
  }
  iVar5 = (this->DrawerStates).ArrayNum;
  piVar2 = &(this->DrawerStates).ArrayMax;
  if (iVar5 == *piVar2) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x860,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->DrawerStates).ArrayNum = iVar5 + 1;
  pFVar6 = (FSidebarDrawerState *)((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 0x60);
  pFVar6->DrawerId = param_1->DrawerId;
  *(undefined8 *)&(pFVar6->SelectedSections).Elements = 0;
  *(undefined8 *)&(pFVar6->SelectedSections).Elements.field_0x8 = 0;
  *(undefined8 *)&(pFVar6->SelectedSections).Elements.field_0x20 = 0;
  *(undefined4 *)&(pFVar6->SelectedSections).Elements.field_0x28 = 0;
  *(undefined4 *)&(pFVar6->SelectedSections).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(pFVar6->SelectedSections).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(pFVar6->SelectedSections).Elements.field_0x34 = 0;
  (pFVar6->SelectedSections).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (pFVar6->SelectedSections).HashSize = 0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
            (&pFVar6->SelectedSections,&param_1->SelectedSections);
  pFVar6->bIsPinned = param_1->bIsPinned;
  pFVar6->bIsDocked = param_1->bIsDocked;
  return pFVar6;
}

// GetDrawerSize @ 142dac2e0

float __thiscall FSidebarState::GetDrawerSize(FSidebarState *this)

{
  float fVar1;
  
  fVar1 = this->DrawerSize;
  if (this->DrawerSize <= __real_3ba3d70a) {
    fVar1 = __real_3e800000;
  }
  return fVar1;
}

// GetDrawerSizes @ 142dac300

void __thiscall FSidebarState::GetDrawerSizes(FSidebarState *this,float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = __real_3ba3d70a;
  fVar3 = __real_3e800000;
  fVar2 = __real_3e800000;
  if (__real_3ba3d70a < *param_1) {
    fVar2 = this->DrawerSize;
  }
  *param_1 = fVar2;
  if (fVar1 < *param_2) {
    fVar3 = this->ContentSize;
  }
  *param_2 = fVar3;
  if (*param_1 + fVar3 < __real_3f800000) {
    *param_2 = __real_3f800000 - *param_1;
  }
  return;
}

// GetDrawerStates @ 142dac360

TArray<FSidebarDrawerState,TSizedDefaultAllocator<32>_> * __thiscall
FSidebarState::GetDrawerStates(FSidebarState *this)

{
  return &this->DrawerStates;
}

// IsHidden @ 142db57c0

bool __thiscall FSidebarState::IsHidden(FSidebarState *this)

{
  return this->bHidden;
}

// IsValid @ 142db7170

bool __thiscall FSidebarState::IsValid(FSidebarState *this)

{
  if (((this->bHidden == false) && (this->DrawerSize == 0.0)) &&
     ((this->DrawerStates).ArrayNum == 0)) {
    return false;
  }
  return true;
}

// IsVisible @ 142db71b0

bool __thiscall FSidebarState::IsVisible(FSidebarState *this)

{
  return this->bHidden == false;
}

// SaveDrawerState @ 142dd5790

void __thiscall FSidebarState::SaveDrawerState(FSidebarState *this,FSidebarDrawerState *param_1)

{
  TArray<FSidebarDrawerState,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FSidebarDrawerState *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *this_00;
  FName *pFVar7;
  FName *pFVar8;
  undefined1 local_res8 [8];
  
  iVar6 = (this->DrawerStates).ArrayNum;
  pTVar1 = &this->DrawerStates;
  pFVar7 = (FName *)(pTVar1->AllocatorInstance).Data;
  pFVar8 = pFVar7 + (longlong)iVar6 * 0xc;
  while( true ) {
    if ((this->DrawerStates).ArrayNum != iVar6) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FSidebarDrawerState,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar7 == pFVar8) break;
    if (((pFVar7->ComparisonIndex).Value == (param_1->DrawerId).ComparisonIndex.Value) &&
       (pFVar7->Number == (param_1->DrawerId).Number)) {
      this_00 = (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(pFVar7 + 1);
      *pFVar7 = param_1->DrawerId;
LAB_142dd58be:
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
                (this_00,&param_1->SelectedSections);
      *(bool *)&pFVar7[0xb].ComparisonIndex.Value = param_1->bIsPinned;
      *(bool *)((longlong)&pFVar7[0xb].ComparisonIndex.Value + 1) = param_1->bIsDocked;
      return;
    }
    pFVar7 = pFVar7 + 0xc;
  }
  pFVar3 = (FSidebarDrawerState *)(pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->DrawerStates).ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->DrawerStates).ArrayNum;
  piVar2 = &(this->DrawerStates).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x860,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->DrawerStates).ArrayNum = iVar6 + 1;
  pFVar7 = (FName *)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 0x60);
  *pFVar7 = param_1->DrawerId;
  this_00 = (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(pFVar7 + 1);
  *(undefined8 *)&this_00->Elements = 0;
  pFVar7[2].ComparisonIndex = 0;
  pFVar7[2].Number = 0;
  pFVar7[5].ComparisonIndex = 0;
  pFVar7[5].Number = 0;
  pFVar7[6].ComparisonIndex.Value = 0;
  pFVar7[6].Number = 0x80;
  pFVar7[7].ComparisonIndex.Value = 0xffffffff;
  pFVar7[7].Number = 0;
  pFVar7[9].ComparisonIndex = 0;
  pFVar7[9].Number = 0;
  pFVar7[10].ComparisonIndex.Value = 0;
  goto LAB_142dd58be;
}

// SetDrawerSize @ 142dd8cd0

void __thiscall FSidebarState::SetDrawerSize(FSidebarState *this,float param_1)

{
  this->DrawerSize = param_1;
  return;
}

// SetDrawerSizes @ 142dd8ce0

void __thiscall FSidebarState::SetDrawerSizes(FSidebarState *this,float param_1,float param_2)

{
  this->DrawerSize = param_1;
  this->ContentSize = param_2;
  return;
}

// SetHidden @ 142dd8fa0

void __thiscall FSidebarState::SetHidden(FSidebarState *this,bool param_1)

{
  this->bHidden = param_1;
  return;
}

// SetVisible @ 142dd9e90

void __thiscall FSidebarState::SetVisible(FSidebarState *this,bool param_1)

{
  this->bHidden = !param_1;
  return;
}

