// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 3

// Add @ 146ddd0d0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall
FCompositeNavModifier::Add(FCompositeNavModifier *this,FSimpleLinkNavModifier *param_1)

{
  int *piVar1;
  FSimpleLinkNavModifier *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  pFVar2 = (FSimpleLinkNavModifier *)(this->SimpleLinks).AllocatorInstance.Data;
  if ((pFVar2 <= param_1) && (param_1 < pFVar2 + (this->SimpleLinks).ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->SimpleLinks).ArrayNum;
  piVar1 = &(this->SimpleLinks).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10b0,&(this->SimpleLinks).AllocatorInstance,piVar1);
  }
  (this->SimpleLinks).ArrayNum = iVar5 + 1;
  FSimpleLinkNavModifier::FSimpleLinkNavModifier
            ((FSimpleLinkNavModifier *)
             ((this->SimpleLinks).AllocatorInstance.Data + (longlong)iVar5 * 0xb0),param_1);
  uVar6 = *(uint *)param_1 & 1 | (uint)this->_padding_;
  *(uint *)&this->_padding_ = (uVar6 ^ (uint)this->_padding_) & 0xfffffffe ^ uVar6;
  return;
}

// Add @ 146e3d370

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall
FCompositeNavModifier::Add(FCompositeNavModifier *this,FCompositeNavModifier *param_1)

{
  TArray<FAreaNavModifier,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FCustomLinkNavModifier,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  ENavigationDataResolution EVar6;
  int iVar7;
  uint uVar8;
  
  pTVar1 = &this->Areas;
  if (pTVar1 == &param_1->Areas) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar3 = (param_1->Areas).ArrayNum;
  if (iVar3 != 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x70,8,iVar3,&pTVar1->AllocatorInstance,&(this->Areas).ArrayNum,
                       &(this->Areas).ArrayMax);
    ConstructItems<FAreaNavModifier,FAreaNavModifier,int>
              ((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x70,
               (FAreaNavModifier *)(param_1->Areas).AllocatorInstance.Data,iVar3);
  }
  TArray<FSimpleLinkNavModifier,TSizedDefaultAllocator<32>_>::
  Append<FSimpleLinkNavModifier,TSizedDefaultAllocator<32>_>
            (&this->SimpleLinks,&param_1->SimpleLinks);
  pTVar2 = &this->CustomLinks;
  if (pTVar2 == &param_1->CustomLinks) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar3 = (param_1->CustomLinks).ArrayNum;
  if (iVar3 != 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x80,0x10,iVar3,&pTVar2->AllocatorInstance,&(this->CustomLinks).ArrayNum,
                       &(this->CustomLinks).ArrayMax);
    memcpy((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x80,
           (param_1->CustomLinks).AllocatorInstance.Data,(longlong)iVar3 << 7);
  }
  uVar8 = (uint)this->_padding_ | (uint)param_1->_padding_;
  *(uint *)&this->_padding_ = (uVar8 ^ (uint)this->_padding_) & 0xfffffffe ^ uVar8;
  uVar8 = ((*(uint *)&param_1->field_0x50 >> 1 & 0xff) * 2 | *(uint *)&this->field_0x50) & 2 ^
          *(uint *)&this->field_0x50 & 0xfffffffd;
  *(uint *)&this->field_0x50 = uVar8;
  uVar8 = ((*(uint *)&param_1->field_0x50 >> 2 & 0xff) << 2 | uVar8) & 4 ^ uVar8 & 0xfffffffb;
  *(uint *)&this->field_0x50 = uVar8;
  uVar8 = ((*(uint *)&param_1->field_0x50 >> 4 & 0xff) << 4 | uVar8) & 0x10 ^ uVar8 & 0xffffffef;
  *(uint *)&this->field_0x50 = uVar8;
  uVar8 = ((*(uint *)&param_1->field_0x50 >> 5 & 0xff) << 5 | uVar8) & 0x20 ^ uVar8 & 0xffffffdf;
  *(uint *)&this->field_0x50 = uVar8;
  *(uint *)&this->field_0x50 =
       ((*(uint *)&param_1->field_0x50 >> 6 & 0xff) << 6 | uVar8) & 0x40 ^ uVar8 & 0xffffffbf;
  if ((bEnableNavMeshResolutions != false) && (EVar6 = param_1->NavMeshResolution, EVar6 != Invalid)
     ) {
    if (EVar6 < this->NavMeshResolution) {
      EVar6 = this->NavMeshResolution;
    }
    this->NavMeshResolution = EVar6;
  }
  return;
}

// Add @ 146e3d570

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall FCompositeNavModifier::Add(FCompositeNavModifier *this,FAreaNavModifier *param_1)

{
  int *piVar1;
  FAreaNavModifier *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  pFVar2 = (FAreaNavModifier *)(this->Areas).AllocatorInstance.Data;
  if ((pFVar2 <= param_1) && (param_1 < pFVar2 + (this->Areas).ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->Areas).ArrayNum;
  piVar1 = &(this->Areas).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x870,&(this->Areas).AllocatorInstance,piVar1);
  }
  (this->Areas).ArrayNum = iVar5 + 1;
  FAreaNavModifier::FAreaNavModifier
            ((FAreaNavModifier *)((this->Areas).AllocatorInstance.Data + (longlong)iVar5 * 0x70),
             param_1);
  uVar6 = param_1->_padding_ & 1U | (uint)this->_padding_;
  *(uint *)&this->_padding_ = (uVar6 ^ (uint)this->_padding_) & 0xfffffffe ^ uVar6;
  uVar6 = ((uint)(byte)param_1->field_0x6a | *(uint *)&this->field_0x50) & 2 ^
          *(uint *)&this->field_0x50 & 0xfffffffd;
  *(uint *)&this->field_0x50 = uVar6;
  *(uint *)&this->field_0x50 = ((byte)param_1->field_0x6a | uVar6) & 4 ^ uVar6 & 0xfffffffb;
  return;
}

