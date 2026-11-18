// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 14

// GetPSOPrecacheVertexFetchElements @ 147fd4510

void __cdecl
FMeshParticleVertexFactory::GetPSOPrecacheVertexFetchElements
          (EVertexInputStreamType param_1,TArray<FVertexElement,TFixedAllocator<17>_> *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined1 local_88 [10];
  uchar auStack_7e [6];
  undefined1 local_78 [10];
  uchar auStack_6e [6];
  undefined1 local_68 [10];
  uchar auStack_5e [6];
  undefined1 local_58 [10];
  uchar auStack_4e [6];
  undefined1 local_48 [10];
  uchar auStack_3e [6];
  undefined1 local_38 [10];
  uchar auStack_2e [6];
  undefined1 local_28 [10];
  uchar auStack_1e [6];
  undefined1 local_18 [10];
  uchar auStack_e [6];
  
  if (param_1 != Default) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("VertexInputStreamType == EVertexInputStreamType::Default",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\MeshParticleVertexFactory.cpp"
                       ,0x12f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_88[0] = '\0';
  local_88[1] = '\0';
  local_88[2] = '\x03';
  local_88[3] = '\0';
  local_88[4] = '\0';
  local_88[5] = '\0';
  local_88[6] = '\0';
  local_88[7] = '\0';
  if ((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_88) &&
     (local_88 < (param_2->AllocatorInstance).InlineData + param_2->ArrayMax)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                      (0x208,&param_2->AllocatorInstance,piVar1);
  }
  local_88[8] = '\x01';
  local_88[9] = '\0';
  param_2->ArrayNum = iVar4 + 1;
  auStack_7e[0] = '\x05';
  auStack_7e[1] = '\x01';
  auStack_7e[2] = '\0';
  auStack_7e[3] = '\0';
  auStack_7e[4] = '\0';
  auStack_7e[5] = '\0';
  *(ulonglong *)(param_2->AllocatorInstance).InlineData[iVar4].Pad =
       CONCAT26(local_88._6_2_,CONCAT42(local_88._2_4_,local_88._0_2_));
  if ((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_88 + 8)) &&
     (local_88 + 8 < (param_2->AllocatorInstance).InlineData + *piVar1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                      (0x208,&param_2->AllocatorInstance,piVar1);
  }
  local_78[0] = '\x02';
  local_78[1] = '\0';
  param_2->ArrayNum = iVar4 + 1;
  local_78[2] = '\x05';
  local_78[3] = '\x02';
  local_78[4] = '\0';
  local_78[5] = '\0';
  local_78[6] = '\0';
  local_78[7] = '\0';
  *(ulonglong *)(param_2->AllocatorInstance).InlineData[iVar4].Pad =
       CONCAT26(auStack_7e._4_2_,CONCAT42(auStack_7e._0_4_,local_88._8_2_));
  if ((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_78) &&
     (local_78 < (param_2->AllocatorInstance).InlineData + *piVar1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                      (0x208,&param_2->AllocatorInstance,piVar1);
  }
  local_78[8] = '\x03';
  local_78[9] = '\0';
  param_2->ArrayNum = iVar4 + 1;
  auStack_6e[0] = '\b';
  auStack_6e[1] = '\x03';
  auStack_6e[2] = '\0';
  auStack_6e[3] = '\0';
  auStack_6e[4] = '\0';
  auStack_6e[5] = '\0';
  *(ulonglong *)(param_2->AllocatorInstance).InlineData[iVar4].Pad =
       CONCAT26(local_78._6_2_,CONCAT42(local_78._2_4_,local_78._0_2_));
  if ((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_78 + 8)) &&
     (local_78 + 8 < (param_2->AllocatorInstance).InlineData + *piVar1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                      (0x208,&param_2->AllocatorInstance,piVar1);
  }
  local_68[0] = '\x04';
  local_68[1] = '\0';
  param_2->ArrayNum = iVar4 + 1;
  local_68[2] = '\f';
  local_68[3] = '\x04';
  local_68[4] = '\0';
  local_68[5] = '\0';
  local_68[6] = '\0';
  local_68[7] = '\0';
  *(ulonglong *)(param_2->AllocatorInstance).InlineData[iVar4].Pad =
       CONCAT26(auStack_6e._4_2_,CONCAT42(auStack_6e._0_4_,local_78._8_2_));
  if ((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_68) &&
     (local_68 < (param_2->AllocatorInstance).InlineData + *piVar1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                      (0x208,&param_2->AllocatorInstance,piVar1);
  }
  local_68[8] = '\x05';
  local_68[9] = '\0';
  param_2->ArrayNum = iVar4 + 1;
  auStack_5e[0] = '\f';
  auStack_5e[1] = '\x05';
  auStack_5e[2] = '\0';
  auStack_5e[3] = '\0';
  auStack_5e[4] = '\0';
  auStack_5e[5] = '\0';
  *(ulonglong *)(param_2->AllocatorInstance).InlineData[iVar4].Pad =
       CONCAT26(local_68._6_2_,CONCAT42(local_68._2_4_,local_68._0_2_));
  if ((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_68 + 8)) &&
     (local_68 + 8 < (param_2->AllocatorInstance).InlineData + *piVar1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                      (0x208,&param_2->AllocatorInstance,piVar1);
  }
  local_58[0] = '\x06';
  local_58[1] = '\0';
  param_2->ArrayNum = iVar4 + 1;
  local_58[2] = '\f';
  local_58[3] = '\x06';
  local_58[4] = '\0';
  local_58[5] = '\0';
  local_58[6] = '\0';
  local_58[7] = '\0';
  *(ulonglong *)(param_2->AllocatorInstance).InlineData[iVar4].Pad =
       CONCAT26(auStack_5e._4_2_,CONCAT42(auStack_5e._0_4_,local_68._8_2_));
  if ((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_58) &&
     (local_58 < (param_2->AllocatorInstance).InlineData + *piVar1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                      (0x208,&param_2->AllocatorInstance,piVar1);
  }
  local_58[8] = '\a';
  local_58[9] = '\0';
  param_2->ArrayNum = iVar4 + 1;
  auStack_4e[0] = '\f';
  auStack_4e[1] = '\a';
  auStack_4e[2] = '\0';
  auStack_4e[3] = '\0';
  auStack_4e[4] = '\0';
  auStack_4e[5] = '\0';
  *(ulonglong *)(param_2->AllocatorInstance).InlineData[iVar4].Pad =
       CONCAT26(local_58._6_2_,CONCAT42(local_58._2_4_,local_58._0_2_));
  if ((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_58 + 8)) &&
     (local_58 + 8 < (param_2->AllocatorInstance).InlineData + *piVar1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                      (0x208,&param_2->AllocatorInstance,piVar1);
  }
  local_48[0] = '\b';
  local_48[1] = '\0';
  param_2->ArrayNum = iVar4 + 1;
  local_48[2] = '\x04';
  local_48[3] = '\b';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\x01';
  local_48[7] = '\0';
  *(ulonglong *)(param_2->AllocatorInstance).InlineData[iVar4].Pad =
       CONCAT26(auStack_4e._4_2_,CONCAT42(auStack_4e._0_4_,local_58._8_2_));
  if ((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_48) &&
     (local_48 < (param_2->AllocatorInstance).InlineData + *piVar1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                      (0x208,&param_2->AllocatorInstance,piVar1);
  }
  local_48[8] = '\t';
  local_48[9] = '\0';
  param_2->ArrayNum = iVar4 + 1;
  auStack_3e[0] = '\x04';
  auStack_3e[1] = '\t';
  auStack_3e[2] = '\0';
  auStack_3e[3] = '\0';
  auStack_3e[4] = '\x01';
  auStack_3e[5] = '\0';
  *(ulonglong *)(param_2->AllocatorInstance).InlineData[iVar4].Pad =
       CONCAT26(local_48._6_2_,CONCAT42(local_48._2_4_,local_48._0_2_));
  if ((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_48 + 8)) &&
     (local_48 + 8 < (param_2->AllocatorInstance).InlineData + *piVar1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                      (0x208,&param_2->AllocatorInstance,piVar1);
  }
  local_38[0] = '\n';
  local_38[1] = '\0';
  param_2->ArrayNum = iVar4 + 1;
  local_38[2] = '\x04';
  local_38[3] = '\n';
  local_38[4] = '\0';
  local_38[5] = '\0';
  local_38[6] = '\x01';
  local_38[7] = '\0';
  *(ulonglong *)(param_2->AllocatorInstance).InlineData[iVar4].Pad =
       CONCAT26(auStack_3e._4_2_,CONCAT42(auStack_3e._0_4_,local_48._8_2_));
  if ((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_38) &&
     (local_38 < (param_2->AllocatorInstance).InlineData + *piVar1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                      (0x208,&param_2->AllocatorInstance,piVar1);
  }
  local_38[8] = '\v';
  local_38[9] = '\0';
  param_2->ArrayNum = iVar4 + 1;
  auStack_2e[0] = '\n';
  auStack_2e[1] = '\v';
  auStack_2e[2] = '\0';
  auStack_2e[3] = '\0';
  auStack_2e[4] = '\x01';
  auStack_2e[5] = '\0';
  *(ulonglong *)(param_2->AllocatorInstance).InlineData[iVar4].Pad =
       CONCAT26(local_38._6_2_,CONCAT42(local_38._2_4_,local_38._0_2_));
  if ((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_38 + 8)) &&
     (local_38 + 8 < (param_2->AllocatorInstance).InlineData + *piVar1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                      (0x208,&param_2->AllocatorInstance,piVar1);
  }
  local_28[0] = '\f';
  local_28[1] = '\0';
  param_2->ArrayNum = iVar4 + 1;
  local_28[2] = '\x02';
  local_28[3] = '\f';
  local_28[4] = '\0';
  local_28[5] = '\0';
  local_28[6] = '\x01';
  local_28[7] = '\0';
  *(ulonglong *)(param_2->AllocatorInstance).InlineData[iVar4].Pad =
       CONCAT26(auStack_2e._4_2_,CONCAT42(auStack_2e._0_4_,local_38._8_2_));
  if ((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_28) &&
     (local_28 < (param_2->AllocatorInstance).InlineData + *piVar1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                      (0x208,&param_2->AllocatorInstance,piVar1);
  }
  local_28[8] = '\r';
  local_28[9] = '\0';
  param_2->ArrayNum = iVar4 + 1;
  auStack_1e[0] = '\x04';
  auStack_1e[1] = '\r';
  auStack_1e[2] = '\0';
  auStack_1e[3] = '\0';
  auStack_1e[4] = '\x01';
  auStack_1e[5] = '\0';
  *(ulonglong *)(param_2->AllocatorInstance).InlineData[iVar4].Pad =
       CONCAT26(local_28._6_2_,CONCAT42(local_28._2_4_,local_28._0_2_));
  if ((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_28 + 8)) &&
     (local_28 + 8 < (param_2->AllocatorInstance).InlineData + *piVar1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                      (0x208,&param_2->AllocatorInstance,piVar1);
  }
  local_18[0] = '\x0e';
  local_18[1] = '\0';
  param_2->ArrayNum = iVar4 + 1;
  local_18[2] = '\x04';
  local_18[3] = '\x0e';
  local_18[4] = '\0';
  local_18[5] = '\0';
  local_18[6] = '\x01';
  local_18[7] = '\0';
  *(ulonglong *)(param_2->AllocatorInstance).InlineData[iVar4].Pad =
       CONCAT26(auStack_1e._4_2_,CONCAT42(auStack_1e._0_4_,local_28._8_2_));
  if ((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_18) &&
     (local_18 < (param_2->AllocatorInstance).InlineData + *piVar1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                      (0x208,&param_2->AllocatorInstance,piVar1);
  }
  local_18[8] = '\x0f';
  local_18[9] = '\0';
  param_2->ArrayNum = iVar4 + 1;
  auStack_e[0] = '\x04';
  auStack_e[1] = '\x0f';
  auStack_e[2] = '\0';
  auStack_e[3] = '\0';
  auStack_e[4] = '\x01';
  auStack_e[5] = '\0';
  *(ulonglong *)(param_2->AllocatorInstance).InlineData[iVar4].Pad =
       CONCAT26(local_18._6_2_,CONCAT42(local_18._2_4_,local_18._0_2_));
  if ((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_18 + 8)) &&
     (local_18 + 8 < (param_2->AllocatorInstance).InlineData + *piVar1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                      (0x208,&param_2->AllocatorInstance,piVar1);
  }
  param_2->ArrayNum = iVar4 + 1;
  *(ulonglong *)(param_2->AllocatorInstance).InlineData[iVar4].Pad =
       CONCAT26(auStack_e._4_2_,CONCAT42(auStack_e._0_4_,local_18._8_2_));
  return;
}

// GetPreviousTransformBufferSRV @ 147fd5f00

FRHIShaderResourceView * __thiscall
FMeshParticleVertexFactory::GetPreviousTransformBufferSRV(FMeshParticleVertexFactory *this)

{
  return (FRHIShaderResourceView *)(this->PrevTransformBuffer)._padding_;
}

// GetType @ 147fda140

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FVertexFactoryType * __thiscall
FMeshParticleVertexFactory::GetType(FMeshParticleVertexFactory *this)

{
  return &StaticType;
}

// GetVertexElements @ 147fdad20

void __cdecl
FMeshParticleVertexFactory::GetVertexElements
          (Type param_1,int param_2,int param_3,FDataType *param_4,
          TArray<FVertexElement,TFixedAllocator<17>_> *param_5,
          TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          *param_6)

{
  uchar (*pauVar1) [8];
  EVertexStreamUsage EVar2;
  uchar uVar3;
  uchar uVar4;
  ForElementType<FVertexFactory::FVertexStream> FVar5;
  code *pcVar6;
  undefined4 uVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  ForElementType<FVertexFactory::FVertexStream> FVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined2 uVar15;
  uint uVar16;
  longlong *plVar17;
  int *piVar18;
  int *piVar19;
  undefined1 local_138 [17];
  uchar uStack_127;
  uchar uStack_126;
  uchar uStack_125;
  uchar auStack_124 [2];
  ushort uStack_122;
  undefined1 local_120 [9];
  uchar uStack_117;
  uchar uStack_116;
  uchar uStack_115;
  uchar auStack_114 [2];
  ushort uStack_112;
  undefined1 local_110 [9];
  uchar uStack_107;
  uchar uStack_106;
  uchar uStack_105;
  uchar auStack_104 [2];
  ushort uStack_102;
  undefined1 local_100 [9];
  uchar uStack_f7;
  uchar uStack_f6;
  uchar uStack_f5;
  uchar auStack_f4 [2];
  ushort uStack_f2;
  undefined1 local_f0 [9];
  uchar uStack_e7;
  uchar uStack_e6;
  uchar uStack_e5;
  ushort uStack_e4;
  ushort uStack_e2;
  undefined1 local_e0 [9];
  uchar auStack_d7 [3];
  ushort uStack_d4;
  uchar auStack_d2 [2];
  undefined1 local_d0 [9];
  uchar uStack_c7;
  uchar uStack_c6;
  uchar uStack_c5;
  ushort uStack_c4;
  ushort uStack_c2;
  FVertexStream local_c0;
  TTypeCompatibleBytes<FVertexElement> local_b0;
  TTypeCompatibleBytes<FVertexElement> TStack_a8;
  TTypeCompatibleBytes<FVertexElement> local_a0;
  TTypeCompatibleBytes<FVertexElement> TStack_98;
  FVertexStream local_90;
  FVertexStream local_80;
  FVertexStream local_70;
  FVertexStream local_60;
  FVertexStream local_50;
  longlong *local_40;
  longlong *local_38;
  
  if (param_4->bInitialized != false) {
    if ((param_2 == -1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InDynamicVertexStride != -1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\MeshParticleVertexFactory.cpp"
                           ,0x6a,
                           L"FMeshParticleVertexFactory does not have a valid DynamicVertexStride - likely an empty one was made, but SetStrides was not called"
                          ), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    TStack_a8.Pad[0] = '\0';
    TStack_a8.Pad[1] = '\0';
    TStack_a8.Pad[2] = '\0';
    TStack_a8.Pad[3] = '\0';
    TStack_a8.Pad[4] = '\0';
    TStack_a8.Pad[5] = '\0';
    TStack_a8.Pad[6] = '\0';
    TStack_a8.Pad[7] = '\0';
    local_b0.Pad[0] = '\0';
    local_b0.Pad[1] = '\0';
    local_b0.Pad[2] = '\0';
    local_b0.Pad[3] = '\0';
    local_b0.Pad[4] = '\0';
    local_b0.Pad[5] = '\0';
    local_b0.Pad[6] = '\0';
    local_b0.Pad[7] = '\0';
    FVar5 = (param_6->AllocatorInstance).SecondaryData;
    FVar12 = (ForElementType<FVertexFactory::FVertexStream>)param_6;
    if (FVar5 != (ForElementType<FVertexFactory::FVertexStream>)0x0) {
      FVar12 = FVar5;
    }
    if ((ulonglong)FVar12 <= &local_b0) {
      FVar12 = (ForElementType<FVertexFactory::FVertexStream>)param_6;
      if (FVar5 != (ForElementType<FVertexFactory::FVertexStream>)0x0) {
        FVar12 = FVar5;
      }
      if ((&local_b0 <
           (TTypeCompatibleBytes<FVertexElement> *)
           ((longlong)param_6->ArrayMax * 0x10 + (longlong)FVar12)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar9 = param_6->ArrayNum;
    if (iVar9 == param_6->ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FVertexFactory::FVertexStream>_>
                        (0x810,&param_6->AllocatorInstance,&param_6->ArrayMax);
    }
    local_138[0x10] = '\0';
    param_6->ArrayNum = iVar9 + 1;
    FVar5 = (param_6->AllocatorInstance).SecondaryData;
    uStack_125 = '\b';
    uVar15 = (undefined2)param_2;
    FVar12 = (ForElementType<FVertexFactory::FVertexStream>)param_6;
    if (FVar5 != (ForElementType<FVertexFactory::FVertexStream>)0x0) {
      FVar12 = FVar5;
    }
    pauVar1 = (uchar (*) [8])((longlong)FVar12 + (longlong)iVar9 * 0x10);
    *pauVar1 = local_b0.Pad;
    pauVar1[1] = TStack_a8.Pad;
    uStack_127 = param_4->TransformComponent[0].Offset;
    uStack_126 = param_4->TransformComponent[0].Type.Value;
    uStack_122 = (ushort)(param_4->TransformComponent[0].VertexStreamUsage & Instancing);
    auStack_124 = (uchar  [2])uVar15;
    if (((param_5 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_138 + 0x10)) &&
        (local_138 + 0x10 < (param_5->AllocatorInstance).InlineData + param_5->ArrayMax)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar9 = param_5->ArrayNum;
    piVar18 = &param_5->ArrayMax;
    if (iVar9 == *piVar18) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                        (0x208,&param_5->AllocatorInstance,piVar18);
    }
    local_120[0] = '\0';
    param_5->ArrayNum = iVar9 + 1;
    local_120[3] = '\t';
    *(ulonglong *)(param_5->AllocatorInstance).InlineData[iVar9].Pad =
         CONCAT26(uStack_122,
                  CONCAT24(auStack_124,
                           CONCAT13(uStack_125,
                                    CONCAT12(uStack_126,CONCAT11(uStack_127,local_138[0x10])))));
    local_120[1] = param_4->TransformComponent[1].Offset;
    local_120[2] = param_4->TransformComponent[1].Type.Value;
    local_120._6_2_ = ZEXT12(param_4->TransformComponent[1].VertexStreamUsage & Instancing);
    local_120._4_2_ = uVar15;
    if (((param_5 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_120) &&
        (local_120 < (param_5->AllocatorInstance).InlineData + *piVar18)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar9 = param_5->ArrayNum;
    if (iVar9 == *piVar18) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                        (0x208,&param_5->AllocatorInstance,piVar18);
    }
    local_120[8] = '\0';
    param_5->ArrayNum = iVar9 + 1;
    uStack_115 = '\n';
    *(ulonglong *)(param_5->AllocatorInstance).InlineData[iVar9].Pad =
         CONCAT26(local_120._6_2_,
                  CONCAT24(local_120._4_2_,
                           CONCAT13(local_120[3],
                                    CONCAT12(local_120[2],CONCAT11(local_120[1],local_120[0])))));
    uStack_117 = param_4->TransformComponent[2].Offset;
    uStack_116 = param_4->TransformComponent[2].Type.Value;
    uStack_112 = (ushort)(param_4->TransformComponent[2].VertexStreamUsage & Instancing);
    auStack_114 = (uchar  [2])uVar15;
    if (((param_5 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_120 + 8)) &&
        (local_120 + 8 < (param_5->AllocatorInstance).InlineData + *piVar18)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar9 = param_5->ArrayNum;
    if (iVar9 == *piVar18) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                        (0x208,&param_5->AllocatorInstance,piVar18);
    }
    local_110[0] = '\0';
    param_5->ArrayNum = iVar9 + 1;
    local_110[3] = '\v';
    *(ulonglong *)(param_5->AllocatorInstance).InlineData[iVar9].Pad =
         CONCAT26(uStack_112,
                  CONCAT24(auStack_114,
                           CONCAT13(uStack_115,
                                    CONCAT12(uStack_116,CONCAT11(uStack_117,local_120[8])))));
    local_110[1] = (param_4->SubUVs).Offset;
    local_110[2] = (param_4->SubUVs).Type.Value;
    local_110._6_2_ = ZEXT12((param_4->SubUVs).VertexStreamUsage & Instancing);
    local_110._4_2_ = uVar15;
    if (((param_5 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_110) &&
        (local_110 < (param_5->AllocatorInstance).InlineData + *piVar18)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar9 = param_5->ArrayNum;
    if (iVar9 == *piVar18) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                        (0x208,&param_5->AllocatorInstance,piVar18);
    }
    local_110[8] = '\0';
    param_5->ArrayNum = iVar9 + 1;
    uStack_105 = '\f';
    *(ulonglong *)(param_5->AllocatorInstance).InlineData[iVar9].Pad =
         CONCAT26(local_110._6_2_,
                  CONCAT24(local_110._4_2_,
                           CONCAT13(local_110[3],
                                    CONCAT12(local_110[2],CONCAT11(local_110[1],local_110[0])))));
    uStack_107 = (param_4->SubUVLerpAndRelTime).Offset;
    uStack_106 = (param_4->SubUVLerpAndRelTime).Type.Value;
    uStack_102 = (ushort)((param_4->SubUVLerpAndRelTime).VertexStreamUsage & Instancing);
    auStack_104 = (uchar  [2])uVar15;
    if (((param_5 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_110 + 8)) &&
        (local_110 + 8 < (param_5->AllocatorInstance).InlineData + *piVar18)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar9 = param_5->ArrayNum;
    if (iVar9 == *piVar18) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                        (0x208,&param_5->AllocatorInstance,piVar18);
    }
    local_100[0] = '\0';
    param_5->ArrayNum = iVar9 + 1;
    local_100[3] = '\x0e';
    *(ulonglong *)(param_5->AllocatorInstance).InlineData[iVar9].Pad =
         CONCAT26(uStack_102,
                  CONCAT24(auStack_104,
                           CONCAT13(uStack_105,
                                    CONCAT12(uStack_106,CONCAT11(uStack_107,local_110[8])))));
    local_100[1] = (param_4->ParticleColorComponent).Offset;
    local_100[2] = (param_4->ParticleColorComponent).Type.Value;
    local_100._6_2_ = ZEXT12((param_4->ParticleColorComponent).VertexStreamUsage & Instancing);
    local_100._4_2_ = uVar15;
    if (((param_5 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_100) &&
        (local_100 < (param_5->AllocatorInstance).InlineData + *piVar18)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar9 = param_5->ArrayNum;
    if (iVar9 == *piVar18) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                        (0x208,&param_5->AllocatorInstance,piVar18);
    }
    local_100[8] = '\0';
    param_5->ArrayNum = iVar9 + 1;
    uStack_f5 = '\x0f';
    *(ulonglong *)(param_5->AllocatorInstance).InlineData[iVar9].Pad =
         CONCAT26(local_100._6_2_,
                  CONCAT24(local_100._4_2_,
                           CONCAT13(local_100[3],
                                    CONCAT12(local_100[2],CONCAT11(local_100[1],local_100[0])))));
    uStack_f7 = (param_4->VelocityComponent).Offset;
    uStack_f6 = (param_4->VelocityComponent).Type.Value;
    uStack_f2 = (ushort)((param_4->VelocityComponent).VertexStreamUsage & Instancing);
    auStack_f4 = (uchar  [2])uVar15;
    if (((param_5 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_100 + 8)) &&
        (local_100 + 8 < (param_5->AllocatorInstance).InlineData + *piVar18)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar9 = param_5->ArrayNum;
    if (iVar9 == *piVar18) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                        (0x208,&param_5->AllocatorInstance,piVar18);
    }
    param_5->ArrayNum = iVar9 + 1;
    *(ulonglong *)(param_5->AllocatorInstance).InlineData[iVar9].Pad =
         CONCAT26(uStack_f2,
                  CONCAT24(auStack_f4,
                           CONCAT13(uStack_f5,CONCAT12(uStack_f6,CONCAT11(uStack_f7,local_100[8]))))
                 );
    if ((param_3 == -1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InDynamicParameterVertexStride != -1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\MeshParticleVertexFactory.cpp"
                           ,0x7f,
                           L"FMeshParticleVertexFactory does not have a valid DynamicParameterVertexStride - likely an empty one was made, but SetStrides was not called"
                          ), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FVar5 = (param_6->AllocatorInstance).SecondaryData;
    TStack_98.Pad[0] = '\0';
    TStack_98.Pad[1] = '\0';
    TStack_98.Pad[2] = '\0';
    TStack_98.Pad[3] = '\0';
    TStack_98.Pad[4] = '\0';
    TStack_98.Pad[5] = '\0';
    TStack_98.Pad[6] = '\0';
    TStack_98.Pad[7] = '\0';
    local_a0.Pad[0] = '\0';
    local_a0.Pad[1] = '\0';
    local_a0.Pad[2] = '\0';
    local_a0.Pad[3] = '\0';
    local_a0.Pad[4] = '\0';
    local_a0.Pad[5] = '\0';
    local_a0.Pad[6] = '\0';
    local_a0.Pad[7] = '\0';
    FVar12 = (ForElementType<FVertexFactory::FVertexStream>)param_6;
    if (FVar5 != (ForElementType<FVertexFactory::FVertexStream>)0x0) {
      FVar12 = FVar5;
    }
    if ((ulonglong)FVar12 <= &local_a0) {
      FVar12 = (ForElementType<FVertexFactory::FVertexStream>)param_6;
      if (FVar5 != (ForElementType<FVertexFactory::FVertexStream>)0x0) {
        FVar12 = FVar5;
      }
      if ((&local_a0 <
           (TTypeCompatibleBytes<FVertexElement> *)
           ((longlong)param_6->ArrayMax * 0x10 + (longlong)FVar12)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar9 = param_6->ArrayNum;
    if (iVar9 == param_6->ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FVertexFactory::FVertexStream>_>
                        (0x810,&param_6->AllocatorInstance,&param_6->ArrayMax);
    }
    local_f0[0] = '\x01';
    local_f0[1] = '\0';
    local_f0[2] = '\x04';
    local_f0[3] = '\r';
    param_6->ArrayNum = iVar9 + 1;
    FVar5 = (param_6->AllocatorInstance).SecondaryData;
    local_f0._4_2_ = (undefined2)param_3;
    FVar12 = (ForElementType<FVertexFactory::FVertexStream>)param_6;
    if (FVar5 != (ForElementType<FVertexFactory::FVertexStream>)0x0) {
      FVar12 = FVar5;
    }
    pauVar1 = (uchar (*) [8])((longlong)FVar12 + (longlong)iVar9 * 0x10);
    *pauVar1 = local_a0.Pad;
    pauVar1[1] = TStack_98.Pad;
    local_f0[6] = '\x01';
    local_f0[7] = '\0';
    if (((param_5 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_f0) &&
        (local_f0 < (param_5->AllocatorInstance).InlineData + *piVar18)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar9 = param_5->ArrayNum;
    if (iVar9 == *piVar18) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                        (0x208,&param_5->AllocatorInstance,piVar18);
    }
    param_5->ArrayNum = iVar9 + 1;
    *(ulonglong *)(param_5->AllocatorInstance).InlineData[iVar9].Pad =
         CONCAT26(local_f0._6_2_,CONCAT24(local_f0._4_2_,local_f0._0_4_));
  }
  piVar18 = &param_5->ArrayMax;
  if ((uchar  [8])param_4->_padding_ != (uchar  [8])0x0) {
    local_90.Padding = '\0';
    EVar2 = *(EVertexStreamUsage *)((longlong)&param_4->_padding_ + 7);
    uVar3 = *(uchar *)((longlong)&param_4->_padding_ + 4);
    local_90.Stride = (ushort)*(byte *)((longlong)&param_4->_padding_ + 5);
    local_90.Offset = (uint)param_4->_padding_;
    uVar4 = *(uchar *)((longlong)&param_4->_padding_ + 6);
    local_90.VertexBuffer = (FVertexBuffer *)param_4->_padding_;
    local_90.VertexStreamUsage = EVar2;
    iVar9 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
            ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>(param_6,&local_90);
    local_f0[8] = (uchar)iVar9;
    uStack_e4 = local_90.Stride;
    uStack_e2 = (ushort)(EVar2 & Instancing);
    uStack_e5 = '\0';
    uStack_e7 = uVar3;
    uStack_e6 = uVar4;
    if (((param_5 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_f0 + 8)) &&
        (local_f0 + 8 < (param_5->AllocatorInstance).InlineData + *piVar18)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar9 = param_5->ArrayNum;
    if (iVar9 == *piVar18) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                        (0x208,&param_5->AllocatorInstance,piVar18);
    }
    param_5->ArrayNum = iVar9 + 1;
    *(ulonglong *)(param_5->AllocatorInstance).InlineData[iVar9].Pad =
         CONCAT26(uStack_e2,
                  CONCAT24(uStack_e4,
                           CONCAT13(uStack_e5,CONCAT12(uStack_e6,CONCAT11(uStack_e7,local_f0[8])))))
    ;
  }
  piVar19 = &param_5->ArrayNum;
  piVar18 = &param_5->ArrayMax;
  if ((uchar  [8])param_4->_padding_ != (uchar  [8])0x0) {
    EVar2 = *(EVertexStreamUsage *)((longlong)&param_4->_padding_ + 7);
    local_c0.Stride = (ushort)*(byte *)((longlong)&param_4->_padding_ + 5);
    local_c0.Offset = (uint)param_4->_padding_;
    uVar3 = *(uchar *)((longlong)&param_4->_padding_ + 6);
    uVar4 = *(uchar *)((longlong)&param_4->_padding_ + 4);
    local_c0.Padding = '\0';
    local_c0.VertexBuffer = (FVertexBuffer *)param_4->_padding_;
    local_c0.VertexStreamUsage = EVar2;
    iVar9 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
            ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>(param_6,&local_c0);
    local_138[0] = (uchar)iVar9;
    local_138._4_2_ = local_c0.Stride;
    local_138._6_2_ = ZEXT12(EVar2 & Instancing);
    local_138[3] = '\x01';
    local_138[1] = uVar4;
    local_138[2] = uVar3;
    if (((param_5 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_138) &&
        (local_138 < (param_5->AllocatorInstance).InlineData + *piVar18)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar9 = *piVar19;
    if (iVar9 == *piVar18) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                        (0x208,&param_5->AllocatorInstance,piVar18);
    }
    *piVar19 = iVar9 + 1;
    *(ulonglong *)(param_5->AllocatorInstance).InlineData[iVar9].Pad =
         CONCAT26(local_138._6_2_,
                  CONCAT24(local_138._4_2_,
                           CONCAT13(local_138[3],
                                    CONCAT12(local_138[2],CONCAT11(local_138[1],local_138[0])))));
  }
  piVar18 = &param_5->ArrayMax;
  if ((uchar  [8])param_4->_padding_ != (uchar  [8])0x0) {
    EVar2 = *(EVertexStreamUsage *)((longlong)&param_4->_padding_ + 7);
    local_c0.Stride = (ushort)*(byte *)((longlong)&param_4->_padding_ + 5);
    local_c0.Offset = (uint)param_4->_padding_;
    uVar3 = *(uchar *)((longlong)&param_4->_padding_ + 6);
    uVar4 = *(uchar *)((longlong)&param_4->_padding_ + 4);
    local_c0.Padding = '\0';
    local_c0.VertexBuffer = (FVertexBuffer *)param_4->_padding_;
    local_c0.VertexStreamUsage = EVar2;
    iVar9 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
            ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>(param_6,&local_c0);
    local_138[0] = (uchar)iVar9;
    local_138._4_2_ = local_c0.Stride;
    local_138._6_2_ = ZEXT12(EVar2 & Instancing);
    local_138[3] = '\x02';
    local_138[1] = uVar4;
    local_138[2] = uVar3;
    if (((param_5 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_138) &&
        (local_138 < (param_5->AllocatorInstance).InlineData + *piVar18)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar9 = *piVar19;
    if (iVar9 == *piVar18) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                        (0x208,&param_5->AllocatorInstance,piVar18);
    }
    *piVar19 = iVar9 + 1;
    *(ulonglong *)(param_5->AllocatorInstance).InlineData[iVar9].Pad =
         CONCAT26(local_138._6_2_,
                  CONCAT24(local_138._4_2_,
                           CONCAT13(local_138[3],
                                    CONCAT12(local_138[2],CONCAT11(local_138[1],local_138[0])))));
  }
  piVar18 = &param_5->ArrayMax;
  if (param_4->_padding_ == 0) {
    param_4->_padding_ = GNullColorVertexBuffer._40_8_;
    *(undefined4 *)&param_4->_padding_ = 0;
  }
  if ((uchar  [8])param_4->_padding_ == (uchar  [8])0x0) {
    local_70.Stride = 0;
    local_70.VertexStreamUsage = ManualFetch;
    local_70.Padding = '\0';
    local_70.VertexBuffer = (FVertexBuffer *)&GNullColorVertexBuffer;
    local_70.Offset = 0;
    iVar9 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
            ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>(param_6,&local_70);
    local_e0[8] = (uchar)iVar9;
    uStack_d4 = local_70.Stride;
    auStack_d7[0] = '\0';
    auStack_d7[1] = '\b';
    auStack_d7[2] = '\x03';
    auStack_d2[0] = '\0';
    auStack_d2[1] = '\0';
    if (((param_5 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_e0 + 8)) &&
        (local_e0 + 8 < (param_5->AllocatorInstance).InlineData + *piVar18)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar9 = *piVar19;
    if (iVar9 == *piVar18) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                        (0x208,&param_5->AllocatorInstance,piVar18);
      *piVar19 = iVar9;
    }
    *piVar19 = iVar9 + 1;
    uVar13 = CONCAT26(auStack_d2,
                      CONCAT24(uStack_d4,
                               CONCAT13(auStack_d7[2],CONCAT21(auStack_d7._0_2_,local_e0[8]))));
  }
  else {
    EVar2 = *(EVertexStreamUsage *)((longlong)&param_4->_padding_ + 7);
    local_80.Stride = (ushort)*(byte *)((longlong)&param_4->_padding_ + 5);
    local_80.Offset = (uint)param_4->_padding_;
    uVar3 = *(uchar *)((longlong)&param_4->_padding_ + 6);
    uVar4 = *(uchar *)((longlong)&param_4->_padding_ + 4);
    local_80.Padding = '\0';
    local_80.VertexBuffer = (FVertexBuffer *)param_4->_padding_;
    local_80.VertexStreamUsage = EVar2;
    iVar9 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
            ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>(param_6,&local_80);
    local_e0[0] = (uchar)iVar9;
    local_e0._4_2_ = local_80.Stride;
    local_e0._6_2_ = ZEXT12(EVar2 & Instancing);
    local_e0[3] = '\x03';
    local_e0[1] = uVar4;
    local_e0[2] = uVar3;
    if (((param_5 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_e0) &&
        (local_e0 < (param_5->AllocatorInstance).InlineData + *piVar18)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar9 = *piVar19;
    if (iVar9 == *piVar18) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                        (0x208,&param_5->AllocatorInstance,piVar18);
      *piVar19 = iVar9;
    }
    *piVar19 = iVar9 + 1;
    uVar13 = CONCAT26(local_e0._6_2_,
                      CONCAT24(local_e0._4_2_,
                               CONCAT13(local_e0[3],
                                        CONCAT12(local_e0[2],CONCAT11(local_e0[1],local_e0[0])))));
  }
  *(undefined8 *)(param_5->AllocatorInstance).InlineData[iVar9].Pad = uVar13;
  local_40 = &param_4->_padding_;
  iVar9 = (int)*local_40;
  if (iVar9 != 0) {
    local_138._8_4_ = 0;
    if (0 < iVar9) {
      local_38 = &param_4->_padding_;
      do {
        plVar17 = local_38;
        uVar7 = local_138._8_4_;
        uVar10 = 0;
        if ((int)local_138._8_4_ < (int)local_38[8]) {
          uVar10 = (uint)~local_138._8_4_ >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        plVar17 = plVar17 + (longlong)(int)uVar7 * 2;
        local_60.Padding = '\0';
        local_60.VertexBuffer = (FVertexBuffer *)*plVar17;
        EVar2 = *(EVertexStreamUsage *)((longlong)plVar17 + 0xf);
        uVar3 = *(uchar *)((longlong)plVar17 + 0xe);
        local_60.Stride = (ushort)*(byte *)((longlong)plVar17 + 0xd);
        local_60.Offset = (uint)plVar17[1];
        uVar4 = *(uchar *)((longlong)plVar17 + 0xc);
        local_60.VertexStreamUsage = EVar2;
        iVar9 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>(param_6,&local_60);
        uVar7 = local_138._8_4_;
        local_d0[0] = (uchar)iVar9;
        local_d0[3] = (char)local_138._8_4_ + '\x04';
        local_d0._4_2_ = local_60.Stride;
        local_d0._6_2_ = ZEXT12(EVar2 & Instancing);
        local_d0[1] = uVar4;
        local_d0[2] = uVar3;
        if (((param_5 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_d0) &&
            (local_d0 < (param_5->AllocatorInstance).InlineData + *piVar18)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar9 = *piVar19;
        if (iVar9 == *piVar18) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                            (0x208,&param_5->AllocatorInstance,piVar18);
          *piVar19 = iVar9;
        }
        *piVar19 = iVar9 + 1;
        local_138._8_4_ = uVar7 + 1;
        *(ulonglong *)(param_5->AllocatorInstance).InlineData[iVar9].Pad =
             CONCAT26(local_d0._6_2_,
                      CONCAT24(local_d0._4_2_,
                               CONCAT13(local_d0[3],
                                        CONCAT12(local_d0[2],CONCAT11(local_d0[1],local_d0[0])))));
        iVar9 = (int)*local_40;
      } while ((int)local_138._8_4_ < iVar9);
    }
    piVar19 = &param_5->ArrayNum;
    piVar18 = &param_5->ArrayMax;
    for (; iVar9 < 4; iVar9 = iVar9 + 1) {
      iVar11 = (int)param_4->_padding_;
      uVar16 = iVar11 - 1;
      uVar10 = 0;
      if ((int)uVar16 < iVar11) {
        uVar10 = ~uVar16 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar14 = (longlong)(int)uVar16;
      local_50.Padding = '\0';
      EVar2 = *(EVertexStreamUsage *)((longlong)&param_4->_padding_ + lVar14 * 0x10 + 7);
      local_50.VertexBuffer = (FVertexBuffer *)(&param_4->_padding_)[lVar14 * 2];
      uVar3 = *(uchar *)((longlong)&param_4->_padding_ + lVar14 * 0x10 + 4);
      local_50.Stride = (ushort)*(byte *)((longlong)&param_4->_padding_ + lVar14 * 0x10 + 5);
      local_50.Offset = (uint)(&param_4->_padding_)[lVar14 * 2];
      uVar4 = *(uchar *)((longlong)&param_4->_padding_ + lVar14 * 0x10 + 6);
      local_50.VertexStreamUsage = EVar2;
      iVar11 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
               ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>(param_6,&local_50);
      local_d0[8] = (uchar)iVar11;
      uStack_c5 = (char)iVar9 + '\x04';
      uStack_c4 = local_50.Stride;
      uStack_c2 = (ushort)(EVar2 & Instancing);
      uStack_c7 = uVar3;
      uStack_c6 = uVar4;
      if (((param_5 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_d0 + 8)) &&
          (local_d0 + 8 < (param_5->AllocatorInstance).InlineData + *piVar18)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar11 = *piVar19;
      if (iVar11 == *piVar18) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                           (0x208,&param_5->AllocatorInstance,piVar18);
        *piVar19 = iVar11;
      }
      *piVar19 = iVar11 + 1;
      *(ulonglong *)(param_5->AllocatorInstance).InlineData[iVar11].Pad =
           CONCAT26(uStack_c2,
                    CONCAT24(uStack_c4,
                             CONCAT13(uStack_c5,CONCAT12(uStack_c6,CONCAT11(uStack_c7,local_d0[8])))
                            ));
    }
  }
  return;
}

// GetVertexElements @ 147fdbee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FMeshParticleVertexFactory::GetVertexElements
          (Type param_1,int param_2,int param_3,FDataType *param_4,
          TArray<FVertexElement,TFixedAllocator<17>_> *param_5)

{
  undefined1 auStackY_d8 [32];
  TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  local_a8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  local_a8.AllocatorInstance.SecondaryData = (ForElementType<FVertexFactory::FVertexStream>)0x0;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 8;
  GetVertexElements(param_1,param_2,param_3,param_4,param_5,&local_a8);
  if (local_a8.AllocatorInstance.SecondaryData != (ForElementType<FVertexFactory::FVertexStream>)0x0
     ) {
    FMemory::Free((void *)local_a8.AllocatorInstance.SecondaryData);
  }
  return;
}

// InitRHI @ 147fe00f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FMeshParticleVertexFactory::InitRHI(FMeshParticleVertexFactory *this,FRHICommandListBase *param_1)

{
  FRHIResource *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 auStackY_d8 [32];
  TArray<FVertexElement,TFixedAllocator<17>_> local_a8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0x11;
  GetVertexElements(GMaxRHIFeatureLevel,this->DynamicVertexStride,this->DynamicParameterVertexStride
                    ,&this->Data,&local_a8,
                    (TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                     *)&this->_padding_);
  if (2 < (int)GMaxRHIFeatureLevel) {
    *(undefined4 *)&(this->PrevTransformBuffer)._padding_ = 0;
    uVar3 = GDummyPrevTransformBuffer._32_8_;
    pFVar1 = (FRHIResource *)(this->PrevTransformBuffer)._padding_;
    if (pFVar1 != (FRHIResource *)GDummyPrevTransformBuffer._32_8_) {
      (this->PrevTransformBuffer)._padding_ = GDummyPrevTransformBuffer._32_8_;
      if (uVar3 != 0) {
        FRHIResource::AddRef((FRHIResource *)uVar3);
      }
      if (pFVar1 != (FRHIResource *)0x0) {
        FRHIResource::Release(pFVar1);
      }
    }
    uVar3 = GDummyPrevTransformBuffer._40_8_;
    pFVar1 = (FRHIResource *)(this->PrevTransformBuffer)._padding_;
    if (pFVar1 != (FRHIResource *)GDummyPrevTransformBuffer._40_8_) {
      (this->PrevTransformBuffer)._padding_ = GDummyPrevTransformBuffer._40_8_;
      if (uVar3 != 0) {
        FRHIResource::AddRef((FRHIResource *)uVar3);
      }
      if (pFVar1 != (FRHIResource *)0x0) {
        FRHIResource::Release(pFVar1);
      }
    }
  }
  if (0 < (int)this->_padding_) {
    FVertexFactory::InitDeclaration((FVertexFactory *)this,&local_a8,Default);
    if (this->_padding_ == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidRef(GetDeclaration())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\MeshParticleVertexFactory.cpp"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  return;
}

// LockPreviousTransformBuffer @ 147fe4070

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

uchar * __thiscall
FMeshParticleVertexFactory::LockPreviousTransformBuffer
          (FMeshParticleVertexFactory *this,FRHICommandListBase *param_1,uint param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  FRHIResource *pFVar3;
  code *pcVar4;
  bool bVar5;
  uchar *puVar6;
  TRefCountPtr<FRHIBuffer> TVar7;
  TRefCountPtr<FRHIShaderResourceView> TVar8;
  FRHIResource *local_res8;
  FRHIResource *local_res20;
  
  if ((this->PrevTransformBuffer).MappedBuffer != (uchar *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!PrevTransformBuffer.MappedBuffer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\MeshParticleVertexFactory.cpp"
                       ,0xfe,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      puVar6 = (uchar *)(*pcVar4)();
      return puVar6;
    }
  }
  if ((uint)(this->PrevTransformBuffer)._padding_ < param_2 * 0x30) {
    plVar2 = &(this->PrevTransformBuffer)._padding_;
    *(undefined4 *)&(this->PrevTransformBuffer)._padding_ = 0;
    pFVar3 = (FRHIResource *)*plVar2;
    if (pFVar3 != (FRHIResource *)0x0) {
      *plVar2 = 0;
      FRHIResource::Release(pFVar3);
    }
    pFVar3 = (FRHIResource *)(this->PrevTransformBuffer)._padding_;
    plVar1 = &(this->PrevTransformBuffer)._padding_;
    if (pFVar3 != (FRHIResource *)0x0) {
      *plVar1 = 0;
      FRHIResource::Release(pFVar3);
    }
    *(uint *)&(this->PrevTransformBuffer)._padding_ = param_2 * 0x30;
    TVar7 = FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)&local_res8);
    if ((FRHIBuffer *)plVar2 != TVar7.Reference) {
      pFVar3 = (FRHIResource *)*plVar2;
      *plVar2 = (TVar7.Reference)->_padding_;
      (TVar7.Reference)->_padding_ = 0;
      if (pFVar3 != (FRHIResource *)0x0) {
        FRHIResource::Release(pFVar3);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
    }
    TVar8 = FRHICommandListBase::CreateShaderResourceView
                      (param_1,(FRHIBuffer *)&local_res20,(FInitializer *)*plVar2);
    if ((FRHIShaderResourceView *)plVar1 != TVar8.Reference) {
      pFVar3 = (FRHIResource *)*plVar1;
      *plVar1 = *(longlong *)TVar8.Reference;
      *(undefined8 *)TVar8.Reference = 0;
      if (pFVar3 != (FRHIResource *)0x0) {
        FRHIResource::Release(pFVar3);
      }
    }
    if (local_res20 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res20);
    }
  }
  if ((this->PrevTransformBuffer).MappedBuffer != (uchar *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("MappedBuffer == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIUtilities.h"
                       ,0x24f,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      puVar6 = (uchar *)(*pcVar4)();
      return puVar6;
    }
  }
  if ((this->PrevTransformBuffer)._padding_ == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidRef(Buffer)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIUtilities.h"
                       ,0x250,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      puVar6 = (uchar *)(*pcVar4)();
      return puVar6;
    }
  }
  puVar6 = FRHICommandListBase::LockBuffer
                     (param_1,(FRHIBuffer *)(this->PrevTransformBuffer)._padding_,0,
                      (uint)(this->PrevTransformBuffer)._padding_,RLM_WriteOnly);
  (this->PrevTransformBuffer).MappedBuffer = puVar6;
  return puVar6;
}

// ModifyCompilationEnvironment @ 147fe4a50

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
FMeshParticleVertexFactory::ModifyCompilationEnvironment
          (FVertexFactoryShaderPermutationParameters *param_1,FShaderCompilerEnvironment *param_2)

{
  EShaderPlatform EVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8;
  
  FShaderCompilerEnvironment::SetDefine(param_2,L"PARTICLE_FACTORY",L"1");
  FShaderCompilerEnvironment::SetDefine(param_2,L"PARTICLE_MESH_FACTORY",L"1");
  FShaderCompilerEnvironment::SetDefine(param_2,L"PARTICLE_MESH_INSTANCED",L"1");
  EVar1 = param_1->Platform;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0x2ce,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bSupportsManualVertexFetch != 0) {
    ::FName::FName(&local_res8,L"MANUAL_VERTEX_FETCH");
    bVar3 = FShaderCompilerEnvironment::ContainsDefinition(param_2,local_res8);
    if (!bVar3) {
      FShaderCompilerEnvironment::SetDefine(param_2,local_res8,L"1");
    }
  }
  return;
}

// SetData @ 147ff4fa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FMeshParticleVertexFactory::SetData
          (FMeshParticleVertexFactory *this,FRHICommandListBase *param_1,FDataType *param_2)

{
  int *piVar1;
  longlong *_Dst;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  uchar uVar6;
  uchar uVar7;
  TEnumAsByte<EVertexElementType> TVar8;
  EVertexStreamUsage EVar9;
  
  lVar4 = param_2->_padding_;
  _Dst = &(this->Data)._padding_;
  (this->Data)._padding_ = param_2->_padding_;
  (this->Data)._padding_ = lVar4;
  lVar4 = param_2->_padding_;
  (this->Data)._padding_ = param_2->_padding_;
  (this->Data)._padding_ = lVar4;
  lVar4 = param_2->_padding_;
  (this->Data)._padding_ = param_2->_padding_;
  (this->Data)._padding_ = lVar4;
  if (_Dst != &param_2->_padding_) {
    iVar2 = *(int *)((longlong)&(this->Data)._padding_ + 4);
    piVar1 = (int *)((longlong)&(this->Data)._padding_ + 4);
    iVar3 = (int)param_2->_padding_;
    *(int *)&(this->Data)._padding_ = iVar3;
    if ((iVar3 == 0) && (iVar2 == 0)) {
      *piVar1 = 4;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<0,TFixedAllocator<4>::ForElementType<FVertexStreamComponent>_>
                (0x10,8,iVar3,iVar2,(ForElementType<FVertexStreamComponent> *)_Dst,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy(_Dst,&param_2->_padding_,(longlong)iVar3 << 4);
      }
    }
  }
  lVar4 = param_2->_padding_;
  (this->Data)._padding_ = param_2->_padding_;
  (this->Data)._padding_ = lVar4;
  lVar4 = param_2->_padding_;
  (this->Data)._padding_ = param_2->_padding_;
  (this->Data)._padding_ = lVar4;
  (this->Data)._padding_ = param_2->_padding_;
  (this->Data)._padding_ = param_2->_padding_;
  (this->Data)._padding_ = param_2->_padding_;
  (this->Data)._padding_ = param_2->_padding_;
  *(int *)&(this->Data)._padding_ = (int)param_2->_padding_;
  *(undefined1 *)((longlong)&(this->Data)._padding_ + 4) =
       *(undefined1 *)((longlong)&param_2->_padding_ + 4);
  *(undefined1 *)((longlong)&(this->Data)._padding_ + 5) =
       *(undefined1 *)((longlong)&param_2->_padding_ + 5);
  *(undefined1 *)((longlong)&(this->Data)._padding_ + 6) =
       *(undefined1 *)((longlong)&param_2->_padding_ + 6);
  uVar5 = (param_2->ParticleColorComponent).StreamOffset;
  uVar6 = (param_2->ParticleColorComponent).Offset;
  uVar7 = (param_2->ParticleColorComponent).Stride;
  TVar8.Value = (param_2->ParticleColorComponent).Type.Value;
  EVar9 = (param_2->ParticleColorComponent).VertexStreamUsage;
  (this->Data).ParticleColorComponent.VertexBuffer = (param_2->ParticleColorComponent).VertexBuffer;
  (this->Data).ParticleColorComponent.StreamOffset = uVar5;
  (this->Data).ParticleColorComponent.Offset = uVar6;
  (this->Data).ParticleColorComponent.Stride = uVar7;
  (this->Data).ParticleColorComponent.Type = (TEnumAsByte<EVertexElementType>)TVar8.Value;
  (this->Data).ParticleColorComponent.VertexStreamUsage = EVar9;
  uVar5 = param_2->TransformComponent[0].StreamOffset;
  uVar6 = param_2->TransformComponent[0].Offset;
  uVar7 = param_2->TransformComponent[0].Stride;
  TVar8.Value = param_2->TransformComponent[0].Type.Value;
  EVar9 = param_2->TransformComponent[0].VertexStreamUsage;
  (this->Data).TransformComponent[0].VertexBuffer = param_2->TransformComponent[0].VertexBuffer;
  (this->Data).TransformComponent[0].StreamOffset = uVar5;
  (this->Data).TransformComponent[0].Offset = uVar6;
  (this->Data).TransformComponent[0].Stride = uVar7;
  (this->Data).TransformComponent[0].Type = (TEnumAsByte<EVertexElementType>)TVar8.Value;
  (this->Data).TransformComponent[0].VertexStreamUsage = EVar9;
  uVar5 = param_2->TransformComponent[1].StreamOffset;
  uVar6 = param_2->TransformComponent[1].Offset;
  uVar7 = param_2->TransformComponent[1].Stride;
  TVar8.Value = param_2->TransformComponent[1].Type.Value;
  EVar9 = param_2->TransformComponent[1].VertexStreamUsage;
  (this->Data).TransformComponent[1].VertexBuffer = param_2->TransformComponent[1].VertexBuffer;
  (this->Data).TransformComponent[1].StreamOffset = uVar5;
  (this->Data).TransformComponent[1].Offset = uVar6;
  (this->Data).TransformComponent[1].Stride = uVar7;
  (this->Data).TransformComponent[1].Type = (TEnumAsByte<EVertexElementType>)TVar8.Value;
  (this->Data).TransformComponent[1].VertexStreamUsage = EVar9;
  uVar5 = param_2->TransformComponent[2].StreamOffset;
  uVar6 = param_2->TransformComponent[2].Offset;
  uVar7 = param_2->TransformComponent[2].Stride;
  TVar8.Value = param_2->TransformComponent[2].Type.Value;
  EVar9 = param_2->TransformComponent[2].VertexStreamUsage;
  (this->Data).TransformComponent[2].VertexBuffer = param_2->TransformComponent[2].VertexBuffer;
  (this->Data).TransformComponent[2].StreamOffset = uVar5;
  (this->Data).TransformComponent[2].Offset = uVar6;
  (this->Data).TransformComponent[2].Stride = uVar7;
  (this->Data).TransformComponent[2].Type = (TEnumAsByte<EVertexElementType>)TVar8.Value;
  (this->Data).TransformComponent[2].VertexStreamUsage = EVar9;
  uVar5 = (param_2->VelocityComponent).StreamOffset;
  uVar6 = (param_2->VelocityComponent).Offset;
  uVar7 = (param_2->VelocityComponent).Stride;
  TVar8.Value = (param_2->VelocityComponent).Type.Value;
  EVar9 = (param_2->VelocityComponent).VertexStreamUsage;
  (this->Data).VelocityComponent.VertexBuffer = (param_2->VelocityComponent).VertexBuffer;
  (this->Data).VelocityComponent.StreamOffset = uVar5;
  (this->Data).VelocityComponent.Offset = uVar6;
  (this->Data).VelocityComponent.Stride = uVar7;
  (this->Data).VelocityComponent.Type = (TEnumAsByte<EVertexElementType>)TVar8.Value;
  (this->Data).VelocityComponent.VertexStreamUsage = EVar9;
  uVar5 = (param_2->SubUVs).StreamOffset;
  uVar6 = (param_2->SubUVs).Offset;
  uVar7 = (param_2->SubUVs).Stride;
  TVar8.Value = (param_2->SubUVs).Type.Value;
  EVar9 = (param_2->SubUVs).VertexStreamUsage;
  (this->Data).SubUVs.VertexBuffer = (param_2->SubUVs).VertexBuffer;
  (this->Data).SubUVs.StreamOffset = uVar5;
  (this->Data).SubUVs.Offset = uVar6;
  (this->Data).SubUVs.Stride = uVar7;
  (this->Data).SubUVs.Type = (TEnumAsByte<EVertexElementType>)TVar8.Value;
  (this->Data).SubUVs.VertexStreamUsage = EVar9;
  uVar5 = (param_2->SubUVLerpAndRelTime).StreamOffset;
  uVar6 = (param_2->SubUVLerpAndRelTime).Offset;
  uVar7 = (param_2->SubUVLerpAndRelTime).Stride;
  TVar8.Value = (param_2->SubUVLerpAndRelTime).Type.Value;
  EVar9 = (param_2->SubUVLerpAndRelTime).VertexStreamUsage;
  (this->Data).SubUVLerpAndRelTime.VertexBuffer = (param_2->SubUVLerpAndRelTime).VertexBuffer;
  (this->Data).SubUVLerpAndRelTime.StreamOffset = uVar5;
  (this->Data).SubUVLerpAndRelTime.Offset = uVar6;
  (this->Data).SubUVLerpAndRelTime.Stride = uVar7;
  (this->Data).SubUVLerpAndRelTime.Type = (TEnumAsByte<EVertexElementType>)TVar8.Value;
  (this->Data).SubUVLerpAndRelTime.VertexStreamUsage = EVar9;
  (this->Data).bInitialized = param_2->bInitialized;
  FRenderResource::UpdateRHI((FRenderResource *)this,param_1);
  return;
}

// SetData @ 147ff5170

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FMeshParticleVertexFactory::SetData(FMeshParticleVertexFactory *this,FDataType *param_1)

{
  int *piVar1;
  longlong *_Dst;
  int iVar2;
  int iVar3;
  code *pcVar4;
  longlong lVar5;
  uint uVar6;
  uchar uVar7;
  uchar uVar8;
  TEnumAsByte<EVertexElementType> TVar9;
  EVertexStreamUsage EVar10;
  bool bVar11;
  
  bVar11 = IsInRenderingThread();
  if ((!bVar11) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInRenderingThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                          ,0x1594,L""), bVar11)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar5 = param_1->_padding_;
  _Dst = &(this->Data)._padding_;
  (this->Data)._padding_ = param_1->_padding_;
  (this->Data)._padding_ = lVar5;
  lVar5 = param_1->_padding_;
  (this->Data)._padding_ = param_1->_padding_;
  (this->Data)._padding_ = lVar5;
  lVar5 = param_1->_padding_;
  (this->Data)._padding_ = param_1->_padding_;
  (this->Data)._padding_ = lVar5;
  if (_Dst != &param_1->_padding_) {
    iVar2 = *(int *)((longlong)&(this->Data)._padding_ + 4);
    piVar1 = (int *)((longlong)&(this->Data)._padding_ + 4);
    iVar3 = (int)param_1->_padding_;
    *(int *)&(this->Data)._padding_ = iVar3;
    if ((iVar3 == 0) && (iVar2 == 0)) {
      *piVar1 = 4;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<0,TFixedAllocator<4>::ForElementType<FVertexStreamComponent>_>
                (0x10,8,iVar3,iVar2,(ForElementType<FVertexStreamComponent> *)_Dst,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy(_Dst,&param_1->_padding_,(longlong)iVar3 << 4);
      }
    }
  }
  lVar5 = param_1->_padding_;
  (this->Data)._padding_ = param_1->_padding_;
  (this->Data)._padding_ = lVar5;
  lVar5 = param_1->_padding_;
  (this->Data)._padding_ = param_1->_padding_;
  (this->Data)._padding_ = lVar5;
  (this->Data)._padding_ = param_1->_padding_;
  (this->Data)._padding_ = param_1->_padding_;
  (this->Data)._padding_ = param_1->_padding_;
  (this->Data)._padding_ = param_1->_padding_;
  *(int *)&(this->Data)._padding_ = (int)param_1->_padding_;
  *(undefined1 *)((longlong)&(this->Data)._padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 4);
  *(undefined1 *)((longlong)&(this->Data)._padding_ + 5) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 5);
  *(undefined1 *)((longlong)&(this->Data)._padding_ + 6) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 6);
  uVar6 = (param_1->ParticleColorComponent).StreamOffset;
  uVar7 = (param_1->ParticleColorComponent).Offset;
  uVar8 = (param_1->ParticleColorComponent).Stride;
  TVar9.Value = (param_1->ParticleColorComponent).Type.Value;
  EVar10 = (param_1->ParticleColorComponent).VertexStreamUsage;
  (this->Data).ParticleColorComponent.VertexBuffer = (param_1->ParticleColorComponent).VertexBuffer;
  (this->Data).ParticleColorComponent.StreamOffset = uVar6;
  (this->Data).ParticleColorComponent.Offset = uVar7;
  (this->Data).ParticleColorComponent.Stride = uVar8;
  (this->Data).ParticleColorComponent.Type = (TEnumAsByte<EVertexElementType>)TVar9.Value;
  (this->Data).ParticleColorComponent.VertexStreamUsage = EVar10;
  uVar6 = param_1->TransformComponent[0].StreamOffset;
  uVar7 = param_1->TransformComponent[0].Offset;
  uVar8 = param_1->TransformComponent[0].Stride;
  TVar9.Value = param_1->TransformComponent[0].Type.Value;
  EVar10 = param_1->TransformComponent[0].VertexStreamUsage;
  (this->Data).TransformComponent[0].VertexBuffer = param_1->TransformComponent[0].VertexBuffer;
  (this->Data).TransformComponent[0].StreamOffset = uVar6;
  (this->Data).TransformComponent[0].Offset = uVar7;
  (this->Data).TransformComponent[0].Stride = uVar8;
  (this->Data).TransformComponent[0].Type = (TEnumAsByte<EVertexElementType>)TVar9.Value;
  (this->Data).TransformComponent[0].VertexStreamUsage = EVar10;
  uVar6 = param_1->TransformComponent[1].StreamOffset;
  uVar7 = param_1->TransformComponent[1].Offset;
  uVar8 = param_1->TransformComponent[1].Stride;
  TVar9.Value = param_1->TransformComponent[1].Type.Value;
  EVar10 = param_1->TransformComponent[1].VertexStreamUsage;
  (this->Data).TransformComponent[1].VertexBuffer = param_1->TransformComponent[1].VertexBuffer;
  (this->Data).TransformComponent[1].StreamOffset = uVar6;
  (this->Data).TransformComponent[1].Offset = uVar7;
  (this->Data).TransformComponent[1].Stride = uVar8;
  (this->Data).TransformComponent[1].Type = (TEnumAsByte<EVertexElementType>)TVar9.Value;
  (this->Data).TransformComponent[1].VertexStreamUsage = EVar10;
  uVar6 = param_1->TransformComponent[2].StreamOffset;
  uVar7 = param_1->TransformComponent[2].Offset;
  uVar8 = param_1->TransformComponent[2].Stride;
  TVar9.Value = param_1->TransformComponent[2].Type.Value;
  EVar10 = param_1->TransformComponent[2].VertexStreamUsage;
  (this->Data).TransformComponent[2].VertexBuffer = param_1->TransformComponent[2].VertexBuffer;
  (this->Data).TransformComponent[2].StreamOffset = uVar6;
  (this->Data).TransformComponent[2].Offset = uVar7;
  (this->Data).TransformComponent[2].Stride = uVar8;
  (this->Data).TransformComponent[2].Type = (TEnumAsByte<EVertexElementType>)TVar9.Value;
  (this->Data).TransformComponent[2].VertexStreamUsage = EVar10;
  uVar6 = (param_1->VelocityComponent).StreamOffset;
  uVar7 = (param_1->VelocityComponent).Offset;
  uVar8 = (param_1->VelocityComponent).Stride;
  TVar9.Value = (param_1->VelocityComponent).Type.Value;
  EVar10 = (param_1->VelocityComponent).VertexStreamUsage;
  (this->Data).VelocityComponent.VertexBuffer = (param_1->VelocityComponent).VertexBuffer;
  (this->Data).VelocityComponent.StreamOffset = uVar6;
  (this->Data).VelocityComponent.Offset = uVar7;
  (this->Data).VelocityComponent.Stride = uVar8;
  (this->Data).VelocityComponent.Type = (TEnumAsByte<EVertexElementType>)TVar9.Value;
  (this->Data).VelocityComponent.VertexStreamUsage = EVar10;
  uVar6 = (param_1->SubUVs).StreamOffset;
  uVar7 = (param_1->SubUVs).Offset;
  uVar8 = (param_1->SubUVs).Stride;
  TVar9.Value = (param_1->SubUVs).Type.Value;
  EVar10 = (param_1->SubUVs).VertexStreamUsage;
  (this->Data).SubUVs.VertexBuffer = (param_1->SubUVs).VertexBuffer;
  (this->Data).SubUVs.StreamOffset = uVar6;
  (this->Data).SubUVs.Offset = uVar7;
  (this->Data).SubUVs.Stride = uVar8;
  (this->Data).SubUVs.Type = (TEnumAsByte<EVertexElementType>)TVar9.Value;
  (this->Data).SubUVs.VertexStreamUsage = EVar10;
  uVar6 = (param_1->SubUVLerpAndRelTime).StreamOffset;
  uVar7 = (param_1->SubUVLerpAndRelTime).Offset;
  uVar8 = (param_1->SubUVLerpAndRelTime).Stride;
  TVar9.Value = (param_1->SubUVLerpAndRelTime).Type.Value;
  EVar10 = (param_1->SubUVLerpAndRelTime).VertexStreamUsage;
  (this->Data).SubUVLerpAndRelTime.VertexBuffer = (param_1->SubUVLerpAndRelTime).VertexBuffer;
  (this->Data).SubUVLerpAndRelTime.StreamOffset = uVar6;
  (this->Data).SubUVLerpAndRelTime.Offset = uVar7;
  (this->Data).SubUVLerpAndRelTime.Stride = uVar8;
  (this->Data).SubUVLerpAndRelTime.Type = (TEnumAsByte<EVertexElementType>)TVar9.Value;
  (this->Data).SubUVLerpAndRelTime.VertexStreamUsage = EVar10;
  (this->Data).bInitialized = param_1->bInitialized;
  FRenderResource::UpdateRHI
            ((FRenderResource *)this,(FRHICommandListBase *)&GRHICommandList.CommandListImmediate);
  return;
}

// SetDynamicParameterBuffer @ 147ff5420

void __thiscall
FMeshParticleVertexFactory::SetDynamicParameterBuffer
          (FMeshParticleVertexFactory *this,FVertexBuffer *param_1,uint param_2,uint param_3)

{
  longlong *plVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  longlong *plVar5;
  
  plVar1 = &this->_padding_;
  iVar3 = (int)this->_padding_;
  if (param_1 == (FVertexBuffer *)0x0) {
    if (iVar3 < 2) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    plVar5 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar5 = plVar1;
    }
    plVar5[2] = (longlong)&GNullDynamicParameterVertexBuffer;
    if (this->DynamicParameterVertexStride != 0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4053749915338146034>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\MeshParticleVertexFactory.cpp"
                         ,0xf2,"DynamicParameterVertexStride == 0");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((int)this->_padding_ < 2) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    plVar5 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar5 = plVar1;
    }
    *(undefined2 *)((longlong)plVar5 + 0x1c) = 0;
    if ((int)this->_padding_ < 2) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    plVar5 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar5 = plVar1;
    }
    *(undefined4 *)(plVar5 + 3) = 0;
  }
  else {
    if (iVar3 < 2) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    plVar5 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar5 = plVar1;
    }
    plVar5[2] = (longlong)param_1;
    if (param_3 != this->DynamicParameterVertexStride) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4053749915338146027>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\MeshParticleVertexFactory.cpp"
                         ,0xeb,"Stride == DynamicParameterVertexStride");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar3 = this->DynamicParameterVertexStride;
    if ((int)this->_padding_ < 2) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    plVar5 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar5 = plVar1;
    }
    *(short *)((longlong)plVar5 + 0x1c) = (short)iVar3;
    if ((int)this->_padding_ < 2) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    plVar5 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar5 = plVar1;
    }
    *(uint *)(plVar5 + 3) = param_2;
  }
  return;
}

// SetInstanceBuffer @ 147ff5e30

void __thiscall
FMeshParticleVertexFactory::SetInstanceBuffer
          (FMeshParticleVertexFactory *this,FVertexBuffer *param_1,uint param_2,uint param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  
  if (param_3 != this->DynamicVertexStride) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4053749915338146016>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\MeshParticleVertexFactory.cpp"
                       ,0xe0,"Stride == DynamicVertexStride");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  plVar1 = &this->_padding_;
  if ((int)this->_padding_ < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  plVar4 = (longlong *)this->_padding_;
  if ((longlong *)this->_padding_ == (longlong *)0x0) {
    plVar4 = plVar1;
  }
  *plVar4 = (longlong)param_1;
  if ((int)this->_padding_ < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  plVar4 = (longlong *)this->_padding_;
  if ((longlong *)this->_padding_ == (longlong *)0x0) {
    plVar4 = plVar1;
  }
  *(uint *)(plVar4 + 1) = param_2;
  if ((int)this->_padding_ < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  plVar4 = (longlong *)this->_padding_;
  if ((longlong *)this->_padding_ == (longlong *)0x0) {
    plVar4 = plVar1;
  }
  *(short *)((longlong)plVar4 + 0xc) = (short)param_3;
  return;
}

// ShouldCompilePermutation @ 147ff7880

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FMeshParticleVertexFactory::ShouldCompilePermutation
          (FVertexFactoryShaderPermutationParameters *param_1)

{
  return ((param_1->MaterialParameters)._padding_ & 0x8000002) != 0;
}

// UnlockPreviousTransformBuffer @ 147ffcca0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FMeshParticleVertexFactory::UnlockPreviousTransformBuffer
          (FMeshParticleVertexFactory *this,FRHICommandListBase *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->PrevTransformBuffer).MappedBuffer == (uchar *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PrevTransformBuffer.MappedBuffer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\MeshParticleVertexFactory.cpp"
                       ,0x10d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->PrevTransformBuffer).MappedBuffer == (uchar *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("MappedBuffer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIUtilities.h"
                       ,0x259,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->PrevTransformBuffer)._padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidRef(Buffer)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIUtilities.h"
                       ,0x25a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRHICommandListBase::UnlockBuffer(param_1,(FRHIBuffer *)(this->PrevTransformBuffer)._padding_);
  (this->PrevTransformBuffer).MappedBuffer = (uchar *)0x0;
  return;
}

