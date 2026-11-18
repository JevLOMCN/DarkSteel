// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 16

// operator()<TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_> @ 142de2c10

void __thiscall
`FVisualEntry::Resolve'::__l2::<lambda_1>::
operator()<TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
          (void *this,
          TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
          *param_1,uchar param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 local_res8;
  float local_res20;
  float fStackX_24;
  
  if (param_2 == *(uchar *)(*(longlong *)this + 0x2c)) {
    uVar1 = *(uint *)(*(longlong *)this + 0x28);
    uVar6 = 0;
    if ((int)uVar1 < param_1->ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    lVar2 = (param_1->AllocatorInstance)._padding_;
    lVar7 = (longlong)(int)uVar1 * 0x98;
    uVar3 = *(undefined8 *)(lVar7 + 0x20 + lVar2);
    local_res8 = CONCAT44(*(undefined4 *)(lVar7 + 0x14 + lVar2),
                          *(undefined4 *)(lVar7 + 0x10 + lVar2));
    **(undefined8 **)this = local_res8;
    local_res20 = (float)uVar3;
    fStackX_24 = (float)((ulonglong)uVar3 >> 0x20);
    local_res8 = CONCAT44(local_res20 * *(float *)(lVar7 + 4 + lVar2) +
                          *(float *)(lVar7 + 0x14 + lVar2),
                          local_res20 * *(float *)(lVar7 + lVar2) + *(float *)(lVar7 + 0x10 + lVar2)
                         );
    *(undefined8 *)(*(longlong *)this + 8) = local_res8;
    local_res8 = CONCAT44(fStackX_24 * *(float *)(lVar7 + 0xc + lVar2) +
                          *(float *)(lVar7 + 0x14 + lVar2),
                          fStackX_24 * *(float *)(lVar7 + 8 + lVar2) +
                          *(float *)(lVar7 + 0x10 + lVar2));
    *(undefined8 *)(*(longlong *)this + 0x10) = local_res8;
    local_res8 = CONCAT44(local_res20 * *(float *)(lVar7 + 4 + lVar2) +
                          fStackX_24 * *(float *)(lVar7 + 0xc + lVar2) +
                          *(float *)(lVar7 + 0x14 + lVar2),
                          local_res20 * *(float *)(lVar7 + lVar2) +
                          fStackX_24 * *(float *)(lVar7 + 8 + lVar2) +
                          *(float *)(lVar7 + 0x10 + lVar2));
    *(undefined8 *)(*(longlong *)this + 0x18) = local_res8;
    *(undefined4 *)(*(longlong *)this + 0x20) = *(undefined4 *)(lVar7 + 0x28 + lVar2);
    *(undefined4 *)(*(longlong *)this + 0x24) = *(undefined4 *)(lVar7 + 0x38 + lVar2);
  }
  return;
}

// operator()<TArray<FSlateCustomDrawerElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_> @ 142de31e0

void __thiscall
`FVisualEntry::Resolve'::__l2::<lambda_1>::
operator()<TArray<FSlateCustomDrawerElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
          (void *this,
          TArray<FSlateCustomDrawerElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
          *param_1,uchar param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 local_res8;
  float local_res20;
  float fStackX_24;
  
  if (param_2 == *(uchar *)(*(longlong *)this + 0x2c)) {
    uVar1 = *(uint *)(*(longlong *)this + 0x28);
    uVar6 = 0;
    if ((int)uVar1 < param_1->ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    lVar2 = (param_1->AllocatorInstance)._padding_;
    lVar7 = (longlong)(int)uVar1 * 0x58;
    uVar3 = *(undefined8 *)(lVar7 + 0x20 + lVar2);
    local_res8 = CONCAT44(*(undefined4 *)(lVar7 + 0x14 + lVar2),
                          *(undefined4 *)(lVar7 + 0x10 + lVar2));
    **(undefined8 **)this = local_res8;
    local_res20 = (float)uVar3;
    fStackX_24 = (float)((ulonglong)uVar3 >> 0x20);
    local_res8 = CONCAT44(local_res20 * *(float *)(lVar7 + 4 + lVar2) +
                          *(float *)(lVar7 + 0x14 + lVar2),
                          local_res20 * *(float *)(lVar7 + lVar2) + *(float *)(lVar7 + 0x10 + lVar2)
                         );
    *(undefined8 *)(*(longlong *)this + 8) = local_res8;
    local_res8 = CONCAT44(fStackX_24 * *(float *)(lVar7 + 0xc + lVar2) +
                          *(float *)(lVar7 + 0x14 + lVar2),
                          fStackX_24 * *(float *)(lVar7 + 8 + lVar2) +
                          *(float *)(lVar7 + 0x10 + lVar2));
    *(undefined8 *)(*(longlong *)this + 0x10) = local_res8;
    local_res8 = CONCAT44(local_res20 * *(float *)(lVar7 + 4 + lVar2) +
                          fStackX_24 * *(float *)(lVar7 + 0xc + lVar2) +
                          *(float *)(lVar7 + 0x14 + lVar2),
                          local_res20 * *(float *)(lVar7 + lVar2) +
                          fStackX_24 * *(float *)(lVar7 + 8 + lVar2) +
                          *(float *)(lVar7 + 0x10 + lVar2));
    *(undefined8 *)(*(longlong *)this + 0x18) = local_res8;
    *(undefined4 *)(*(longlong *)this + 0x20) = *(undefined4 *)(lVar7 + 0x28 + lVar2);
    *(undefined4 *)(*(longlong *)this + 0x24) = *(undefined4 *)(lVar7 + 0x38 + lVar2);
  }
  return;
}

// operator()<TArray<FSlateCustomVertsElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_> @ 142de37b0

void __thiscall
`FVisualEntry::Resolve'::__l2::<lambda_1>::
operator()<TArray<FSlateCustomVertsElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
          (void *this,
          TArray<FSlateCustomVertsElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
          *param_1,uchar param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 local_res8;
  float local_res20;
  float fStackX_24;
  
  if (param_2 == *(uchar *)(*(longlong *)this + 0x2c)) {
    uVar1 = *(uint *)(*(longlong *)this + 0x28);
    uVar6 = 0;
    if ((int)uVar1 < param_1->ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    lVar2 = (param_1->AllocatorInstance)._padding_;
    lVar7 = (longlong)(int)uVar1 * 0x80;
    uVar3 = *(undefined8 *)(lVar7 + 0x20 + lVar2);
    local_res8 = CONCAT44(*(undefined4 *)(lVar7 + 0x14 + lVar2),
                          *(undefined4 *)(lVar7 + 0x10 + lVar2));
    **(undefined8 **)this = local_res8;
    local_res20 = (float)uVar3;
    fStackX_24 = (float)((ulonglong)uVar3 >> 0x20);
    local_res8 = CONCAT44(local_res20 * *(float *)(lVar7 + 4 + lVar2) +
                          *(float *)(lVar7 + 0x14 + lVar2),
                          local_res20 * *(float *)(lVar7 + lVar2) + *(float *)(lVar7 + 0x10 + lVar2)
                         );
    *(undefined8 *)(*(longlong *)this + 8) = local_res8;
    local_res8 = CONCAT44(fStackX_24 * *(float *)(lVar7 + 0xc + lVar2) +
                          *(float *)(lVar7 + 0x14 + lVar2),
                          fStackX_24 * *(float *)(lVar7 + 8 + lVar2) +
                          *(float *)(lVar7 + 0x10 + lVar2));
    *(undefined8 *)(*(longlong *)this + 0x10) = local_res8;
    local_res8 = CONCAT44(local_res20 * *(float *)(lVar7 + 4 + lVar2) +
                          fStackX_24 * *(float *)(lVar7 + 0xc + lVar2) +
                          *(float *)(lVar7 + 0x14 + lVar2),
                          local_res20 * *(float *)(lVar7 + lVar2) +
                          fStackX_24 * *(float *)(lVar7 + 8 + lVar2) +
                          *(float *)(lVar7 + 0x10 + lVar2));
    *(undefined8 *)(*(longlong *)this + 0x18) = local_res8;
    *(undefined4 *)(*(longlong *)this + 0x20) = *(undefined4 *)(lVar7 + 0x28 + lVar2);
    *(undefined4 *)(*(longlong *)this + 0x24) = *(undefined4 *)(lVar7 + 0x38 + lVar2);
  }
  return;
}

// operator()<TArray<FSlateGradientElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_> @ 142de3d80

void __thiscall
`FVisualEntry::Resolve'::__l2::<lambda_1>::
operator()<TArray<FSlateGradientElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
          (void *this,
          TArray<FSlateGradientElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
          *param_1,uchar param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 local_res8;
  float local_res20;
  float fStackX_24;
  
  if (param_2 == *(uchar *)(*(longlong *)this + 0x2c)) {
    uVar1 = *(uint *)(*(longlong *)this + 0x28);
    uVar6 = 0;
    if ((int)uVar1 < param_1->ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    lVar2 = (param_1->AllocatorInstance)._padding_;
    lVar7 = (longlong)(int)uVar1 * 0x70;
    uVar3 = *(undefined8 *)(lVar7 + 0x20 + lVar2);
    local_res8 = CONCAT44(*(undefined4 *)(lVar7 + 0x14 + lVar2),
                          *(undefined4 *)(lVar7 + 0x10 + lVar2));
    **(undefined8 **)this = local_res8;
    local_res20 = (float)uVar3;
    fStackX_24 = (float)((ulonglong)uVar3 >> 0x20);
    local_res8 = CONCAT44(local_res20 * *(float *)(lVar7 + 4 + lVar2) +
                          *(float *)(lVar7 + 0x14 + lVar2),
                          local_res20 * *(float *)(lVar7 + lVar2) + *(float *)(lVar7 + 0x10 + lVar2)
                         );
    *(undefined8 *)(*(longlong *)this + 8) = local_res8;
    local_res8 = CONCAT44(fStackX_24 * *(float *)(lVar7 + 0xc + lVar2) +
                          *(float *)(lVar7 + 0x14 + lVar2),
                          fStackX_24 * *(float *)(lVar7 + 8 + lVar2) +
                          *(float *)(lVar7 + 0x10 + lVar2));
    *(undefined8 *)(*(longlong *)this + 0x10) = local_res8;
    local_res8 = CONCAT44(local_res20 * *(float *)(lVar7 + 4 + lVar2) +
                          fStackX_24 * *(float *)(lVar7 + 0xc + lVar2) +
                          *(float *)(lVar7 + 0x14 + lVar2),
                          local_res20 * *(float *)(lVar7 + lVar2) +
                          fStackX_24 * *(float *)(lVar7 + 8 + lVar2) +
                          *(float *)(lVar7 + 0x10 + lVar2));
    *(undefined8 *)(*(longlong *)this + 0x18) = local_res8;
    *(undefined4 *)(*(longlong *)this + 0x20) = *(undefined4 *)(lVar7 + 0x28 + lVar2);
    *(undefined4 *)(*(longlong *)this + 0x24) = *(undefined4 *)(lVar7 + 0x38 + lVar2);
  }
  return;
}

// operator()<TArray<FSlateLineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_> @ 142de4350

void __thiscall
`FVisualEntry::Resolve'::__l2::<lambda_1>::
operator()<TArray<FSlateLineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
          (void *this,
          TArray<FSlateLineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
          *param_1,uchar param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 local_res8;
  float local_res20;
  float fStackX_24;
  
  if (param_2 == *(uchar *)(*(longlong *)this + 0x2c)) {
    uVar1 = *(uint *)(*(longlong *)this + 0x28);
    uVar6 = 0;
    if ((int)uVar1 < param_1->ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    lVar2 = (param_1->AllocatorInstance)._padding_;
    lVar7 = (longlong)(int)uVar1 * 0x88;
    uVar3 = *(undefined8 *)(lVar7 + 0x20 + lVar2);
    local_res8 = CONCAT44(*(undefined4 *)(lVar7 + 0x14 + lVar2),
                          *(undefined4 *)(lVar7 + 0x10 + lVar2));
    **(undefined8 **)this = local_res8;
    local_res20 = (float)uVar3;
    fStackX_24 = (float)((ulonglong)uVar3 >> 0x20);
    local_res8 = CONCAT44(local_res20 * *(float *)(lVar7 + 4 + lVar2) +
                          *(float *)(lVar7 + 0x14 + lVar2),
                          local_res20 * *(float *)(lVar7 + lVar2) + *(float *)(lVar7 + 0x10 + lVar2)
                         );
    *(undefined8 *)(*(longlong *)this + 8) = local_res8;
    local_res8 = CONCAT44(fStackX_24 * *(float *)(lVar7 + 0xc + lVar2) +
                          *(float *)(lVar7 + 0x14 + lVar2),
                          fStackX_24 * *(float *)(lVar7 + 8 + lVar2) +
                          *(float *)(lVar7 + 0x10 + lVar2));
    *(undefined8 *)(*(longlong *)this + 0x10) = local_res8;
    local_res8 = CONCAT44(local_res20 * *(float *)(lVar7 + 4 + lVar2) +
                          fStackX_24 * *(float *)(lVar7 + 0xc + lVar2) +
                          *(float *)(lVar7 + 0x14 + lVar2),
                          local_res20 * *(float *)(lVar7 + lVar2) +
                          fStackX_24 * *(float *)(lVar7 + 8 + lVar2) +
                          *(float *)(lVar7 + 0x10 + lVar2));
    *(undefined8 *)(*(longlong *)this + 0x18) = local_res8;
    *(undefined4 *)(*(longlong *)this + 0x20) = *(undefined4 *)(lVar7 + 0x28 + lVar2);
    *(undefined4 *)(*(longlong *)this + 0x24) = *(undefined4 *)(lVar7 + 0x38 + lVar2);
  }
  return;
}

// operator()<TArray<FSlatePostProcessElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_> @ 142de4920

void __thiscall
`FVisualEntry::Resolve'::__l2::<lambda_1>::
operator()<TArray<FSlatePostProcessElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
          (void *this,
          TArray<FSlatePostProcessElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
          *param_1,uchar param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 local_res8;
  float local_res20;
  float fStackX_24;
  
  if (param_2 == *(uchar *)(*(longlong *)this + 0x2c)) {
    uVar1 = *(uint *)(*(longlong *)this + 0x28);
    uVar6 = 0;
    if ((int)uVar1 < param_1->ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    lVar2 = (param_1->AllocatorInstance)._padding_;
    lVar7 = (longlong)(int)uVar1 * 0x80;
    uVar3 = *(undefined8 *)(lVar7 + 0x20 + lVar2);
    local_res8 = CONCAT44(*(undefined4 *)(lVar7 + 0x14 + lVar2),
                          *(undefined4 *)(lVar7 + 0x10 + lVar2));
    **(undefined8 **)this = local_res8;
    local_res20 = (float)uVar3;
    fStackX_24 = (float)((ulonglong)uVar3 >> 0x20);
    local_res8 = CONCAT44(local_res20 * *(float *)(lVar7 + 4 + lVar2) +
                          *(float *)(lVar7 + 0x14 + lVar2),
                          local_res20 * *(float *)(lVar7 + lVar2) + *(float *)(lVar7 + 0x10 + lVar2)
                         );
    *(undefined8 *)(*(longlong *)this + 8) = local_res8;
    local_res8 = CONCAT44(fStackX_24 * *(float *)(lVar7 + 0xc + lVar2) +
                          *(float *)(lVar7 + 0x14 + lVar2),
                          fStackX_24 * *(float *)(lVar7 + 8 + lVar2) +
                          *(float *)(lVar7 + 0x10 + lVar2));
    *(undefined8 *)(*(longlong *)this + 0x10) = local_res8;
    local_res8 = CONCAT44(local_res20 * *(float *)(lVar7 + 4 + lVar2) +
                          fStackX_24 * *(float *)(lVar7 + 0xc + lVar2) +
                          *(float *)(lVar7 + 0x14 + lVar2),
                          local_res20 * *(float *)(lVar7 + lVar2) +
                          fStackX_24 * *(float *)(lVar7 + 8 + lVar2) +
                          *(float *)(lVar7 + 0x10 + lVar2));
    *(undefined8 *)(*(longlong *)this + 0x18) = local_res8;
    *(undefined4 *)(*(longlong *)this + 0x20) = *(undefined4 *)(lVar7 + 0x28 + lVar2);
    *(undefined4 *)(*(longlong *)this + 0x24) = *(undefined4 *)(lVar7 + 0x38 + lVar2);
  }
  return;
}

// operator()<TArray<FSlateRoundedBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_> @ 142de4ef0

void __thiscall
`FVisualEntry::Resolve'::__l2::<lambda_1>::
operator()<TArray<FSlateRoundedBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
          (void *this,
          TArray<FSlateRoundedBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
          *param_1,uchar param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 local_res8;
  float local_res20;
  float fStackX_24;
  
  if (param_2 == *(uchar *)(*(longlong *)this + 0x2c)) {
    uVar1 = *(uint *)(*(longlong *)this + 0x28);
    uVar6 = 0;
    if ((int)uVar1 < param_1->ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    lVar2 = (param_1->AllocatorInstance)._padding_;
    lVar7 = (longlong)(int)uVar1 * 0xd0;
    uVar3 = *(undefined8 *)(lVar7 + 0x20 + lVar2);
    local_res8 = CONCAT44(*(undefined4 *)(lVar7 + 0x14 + lVar2),
                          *(undefined4 *)(lVar7 + 0x10 + lVar2));
    **(undefined8 **)this = local_res8;
    local_res20 = (float)uVar3;
    fStackX_24 = (float)((ulonglong)uVar3 >> 0x20);
    local_res8 = CONCAT44(local_res20 * *(float *)(lVar7 + 4 + lVar2) +
                          *(float *)(lVar7 + 0x14 + lVar2),
                          local_res20 * *(float *)(lVar7 + lVar2) + *(float *)(lVar7 + 0x10 + lVar2)
                         );
    *(undefined8 *)(*(longlong *)this + 8) = local_res8;
    local_res8 = CONCAT44(fStackX_24 * *(float *)(lVar7 + 0xc + lVar2) +
                          *(float *)(lVar7 + 0x14 + lVar2),
                          fStackX_24 * *(float *)(lVar7 + 8 + lVar2) +
                          *(float *)(lVar7 + 0x10 + lVar2));
    *(undefined8 *)(*(longlong *)this + 0x10) = local_res8;
    local_res8 = CONCAT44(local_res20 * *(float *)(lVar7 + 4 + lVar2) +
                          fStackX_24 * *(float *)(lVar7 + 0xc + lVar2) +
                          *(float *)(lVar7 + 0x14 + lVar2),
                          local_res20 * *(float *)(lVar7 + lVar2) +
                          fStackX_24 * *(float *)(lVar7 + 8 + lVar2) +
                          *(float *)(lVar7 + 0x10 + lVar2));
    *(undefined8 *)(*(longlong *)this + 0x18) = local_res8;
    *(undefined4 *)(*(longlong *)this + 0x20) = *(undefined4 *)(lVar7 + 0x28 + lVar2);
    *(undefined4 *)(*(longlong *)this + 0x24) = *(undefined4 *)(lVar7 + 0x38 + lVar2);
  }
  return;
}

// operator()<TArray<FSlateShapedTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_> @ 142de54c0

void __thiscall
`FVisualEntry::Resolve'::__l2::<lambda_1>::
operator()<TArray<FSlateShapedTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
          (void *this,
          TArray<FSlateShapedTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
          *param_1,uchar param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 local_res8;
  float local_res20;
  float fStackX_24;
  
  if (param_2 == *(uchar *)(*(longlong *)this + 0x2c)) {
    uVar1 = *(uint *)(*(longlong *)this + 0x28);
    lVar7 = (longlong)(int)uVar1;
    uVar6 = 0;
    if ((int)uVar1 < param_1->ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    lVar2 = (param_1->AllocatorInstance)._padding_;
    uVar3 = *(undefined8 *)(lVar2 + 0x20 + lVar7 * 0x90);
    local_res8 = CONCAT44(*(undefined4 *)(lVar2 + 0x14 + lVar7 * 0x90),
                          *(undefined4 *)(lVar2 + 0x10 + lVar7 * 0x90));
    **(undefined8 **)this = local_res8;
    local_res20 = (float)uVar3;
    fStackX_24 = (float)((ulonglong)uVar3 >> 0x20);
    local_res8 = CONCAT44(local_res20 * *(float *)(lVar2 + 4 + lVar7 * 0x90) +
                          *(float *)(lVar2 + 0x14 + lVar7 * 0x90),
                          local_res20 * *(float *)(lVar2 + lVar7 * 0x90) +
                          *(float *)(lVar2 + 0x10 + lVar7 * 0x90));
    *(undefined8 *)(*(longlong *)this + 8) = local_res8;
    local_res8 = CONCAT44(fStackX_24 * *(float *)(lVar2 + 0xc + lVar7 * 0x90) +
                          *(float *)(lVar2 + 0x14 + lVar7 * 0x90),
                          fStackX_24 * *(float *)(lVar2 + 8 + lVar7 * 0x90) +
                          *(float *)(lVar2 + 0x10 + lVar7 * 0x90));
    *(undefined8 *)(*(longlong *)this + 0x10) = local_res8;
    local_res8 = CONCAT44(local_res20 * *(float *)(lVar2 + 4 + lVar7 * 0x90) +
                          fStackX_24 * *(float *)(lVar2 + 0xc + lVar7 * 0x90) +
                          *(float *)(lVar2 + 0x14 + lVar7 * 0x90),
                          local_res20 * *(float *)(lVar2 + lVar7 * 0x90) +
                          fStackX_24 * *(float *)(lVar2 + 8 + lVar7 * 0x90) +
                          *(float *)(lVar2 + 0x10 + lVar7 * 0x90));
    *(undefined8 *)(*(longlong *)this + 0x18) = local_res8;
    *(undefined4 *)(*(longlong *)this + 0x20) = *(undefined4 *)(lVar2 + 0x28 + lVar7 * 0x90);
    *(undefined4 *)(*(longlong *)this + 0x24) = *(undefined4 *)(lVar2 + 0x38 + lVar7 * 0x90);
  }
  return;
}

// operator()<TArray<FSlateSplineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_> @ 142de5a90

void __thiscall
`FVisualEntry::Resolve'::__l2::<lambda_1>::
operator()<TArray<FSlateSplineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
          (void *this,
          TArray<FSlateSplineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
          *param_1,uchar param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 local_res8;
  float local_res20;
  float fStackX_24;
  
  if (param_2 == *(uchar *)(*(longlong *)this + 0x2c)) {
    uVar1 = *(uint *)(*(longlong *)this + 0x28);
    lVar7 = (longlong)(int)uVar1;
    uVar6 = 0;
    if ((int)uVar1 < param_1->ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    lVar2 = (param_1->AllocatorInstance)._padding_;
    uVar3 = *(undefined8 *)(lVar2 + 0x20 + lVar7 * 0x90);
    local_res8 = CONCAT44(*(undefined4 *)(lVar2 + 0x14 + lVar7 * 0x90),
                          *(undefined4 *)(lVar2 + 0x10 + lVar7 * 0x90));
    **(undefined8 **)this = local_res8;
    local_res20 = (float)uVar3;
    fStackX_24 = (float)((ulonglong)uVar3 >> 0x20);
    local_res8 = CONCAT44(local_res20 * *(float *)(lVar2 + 4 + lVar7 * 0x90) +
                          *(float *)(lVar2 + 0x14 + lVar7 * 0x90),
                          local_res20 * *(float *)(lVar2 + lVar7 * 0x90) +
                          *(float *)(lVar2 + 0x10 + lVar7 * 0x90));
    *(undefined8 *)(*(longlong *)this + 8) = local_res8;
    local_res8 = CONCAT44(fStackX_24 * *(float *)(lVar2 + 0xc + lVar7 * 0x90) +
                          *(float *)(lVar2 + 0x14 + lVar7 * 0x90),
                          fStackX_24 * *(float *)(lVar2 + 8 + lVar7 * 0x90) +
                          *(float *)(lVar2 + 0x10 + lVar7 * 0x90));
    *(undefined8 *)(*(longlong *)this + 0x10) = local_res8;
    local_res8 = CONCAT44(local_res20 * *(float *)(lVar2 + 4 + lVar7 * 0x90) +
                          fStackX_24 * *(float *)(lVar2 + 0xc + lVar7 * 0x90) +
                          *(float *)(lVar2 + 0x14 + lVar7 * 0x90),
                          local_res20 * *(float *)(lVar2 + lVar7 * 0x90) +
                          fStackX_24 * *(float *)(lVar2 + 8 + lVar7 * 0x90) +
                          *(float *)(lVar2 + 0x10 + lVar7 * 0x90));
    *(undefined8 *)(*(longlong *)this + 0x18) = local_res8;
    *(undefined4 *)(*(longlong *)this + 0x20) = *(undefined4 *)(lVar2 + 0x28 + lVar7 * 0x90);
    *(undefined4 *)(*(longlong *)this + 0x24) = *(undefined4 *)(lVar2 + 0x38 + lVar7 * 0x90);
  }
  return;
}

// operator()<TArray<FSlateTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_> @ 142de6060

void __thiscall
`FVisualEntry::Resolve'::__l2::<lambda_1>::
operator()<TArray<FSlateTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
          (void *this,
          TArray<FSlateTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
          *param_1,uchar param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 local_res8;
  float local_res20;
  float fStackX_24;
  
  if (param_2 == *(uchar *)(*(longlong *)this + 0x2c)) {
    uVar1 = *(uint *)(*(longlong *)this + 0x28);
    uVar6 = 0;
    if ((int)uVar1 < param_1->ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    lVar2 = (param_1->AllocatorInstance)._padding_;
    lVar7 = (longlong)(int)uVar1 * 200;
    uVar3 = *(undefined8 *)(lVar7 + 0x20 + lVar2);
    local_res8 = CONCAT44(*(undefined4 *)(lVar7 + 0x14 + lVar2),
                          *(undefined4 *)(lVar7 + 0x10 + lVar2));
    **(undefined8 **)this = local_res8;
    local_res20 = (float)uVar3;
    fStackX_24 = (float)((ulonglong)uVar3 >> 0x20);
    local_res8 = CONCAT44(local_res20 * *(float *)(lVar7 + 4 + lVar2) +
                          *(float *)(lVar7 + 0x14 + lVar2),
                          local_res20 * *(float *)(lVar7 + lVar2) + *(float *)(lVar7 + 0x10 + lVar2)
                         );
    *(undefined8 *)(*(longlong *)this + 8) = local_res8;
    local_res8 = CONCAT44(fStackX_24 * *(float *)(lVar7 + 0xc + lVar2) +
                          *(float *)(lVar7 + 0x14 + lVar2),
                          fStackX_24 * *(float *)(lVar7 + 8 + lVar2) +
                          *(float *)(lVar7 + 0x10 + lVar2));
    *(undefined8 *)(*(longlong *)this + 0x10) = local_res8;
    local_res8 = CONCAT44(local_res20 * *(float *)(lVar7 + 4 + lVar2) +
                          fStackX_24 * *(float *)(lVar7 + 0xc + lVar2) +
                          *(float *)(lVar7 + 0x14 + lVar2),
                          local_res20 * *(float *)(lVar7 + lVar2) +
                          fStackX_24 * *(float *)(lVar7 + 8 + lVar2) +
                          *(float *)(lVar7 + 0x10 + lVar2));
    *(undefined8 *)(*(longlong *)this + 0x18) = local_res8;
    *(undefined4 *)(*(longlong *)this + 0x20) = *(undefined4 *)(lVar7 + 0x28 + lVar2);
    *(undefined4 *)(*(longlong *)this + 0x24) = *(undefined4 *)(lVar7 + 0x38 + lVar2);
  }
  return;
}

// operator()<TArray<FSlateViewportElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_> @ 142de6630

void __thiscall
`FVisualEntry::Resolve'::__l2::<lambda_1>::
operator()<TArray<FSlateViewportElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
          (void *this,
          TArray<FSlateViewportElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
          *param_1,uchar param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 local_res8;
  float local_res20;
  float fStackX_24;
  
  if (param_2 == *(uchar *)(*(longlong *)this + 0x2c)) {
    uVar1 = *(uint *)(*(longlong *)this + 0x28);
    uVar6 = 0;
    if ((int)uVar1 < param_1->ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    lVar2 = (param_1->AllocatorInstance)._padding_;
    lVar7 = (longlong)(int)uVar1 * 0x68;
    uVar3 = *(undefined8 *)(lVar7 + 0x20 + lVar2);
    local_res8 = CONCAT44(*(undefined4 *)(lVar7 + 0x14 + lVar2),
                          *(undefined4 *)(lVar7 + 0x10 + lVar2));
    **(undefined8 **)this = local_res8;
    local_res20 = (float)uVar3;
    fStackX_24 = (float)((ulonglong)uVar3 >> 0x20);
    local_res8 = CONCAT44(local_res20 * *(float *)(lVar7 + 4 + lVar2) +
                          *(float *)(lVar7 + 0x14 + lVar2),
                          local_res20 * *(float *)(lVar7 + lVar2) + *(float *)(lVar7 + 0x10 + lVar2)
                         );
    *(undefined8 *)(*(longlong *)this + 8) = local_res8;
    local_res8 = CONCAT44(fStackX_24 * *(float *)(lVar7 + 0xc + lVar2) +
                          *(float *)(lVar7 + 0x14 + lVar2),
                          fStackX_24 * *(float *)(lVar7 + 8 + lVar2) +
                          *(float *)(lVar7 + 0x10 + lVar2));
    *(undefined8 *)(*(longlong *)this + 0x10) = local_res8;
    local_res8 = CONCAT44(local_res20 * *(float *)(lVar7 + 4 + lVar2) +
                          fStackX_24 * *(float *)(lVar7 + 0xc + lVar2) +
                          *(float *)(lVar7 + 0x14 + lVar2),
                          local_res20 * *(float *)(lVar7 + lVar2) +
                          fStackX_24 * *(float *)(lVar7 + 8 + lVar2) +
                          *(float *)(lVar7 + 0x10 + lVar2));
    *(undefined8 *)(*(longlong *)this + 0x18) = local_res8;
    *(undefined4 *)(*(longlong *)this + 0x20) = *(undefined4 *)(lVar7 + 0x28 + lVar2);
    *(undefined4 *)(*(longlong *)this + 0x24) = *(undefined4 *)(lVar7 + 0x38 + lVar2);
  }
  return;
}

// operator()<TArray<FSlateDrawElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_> @ 142de6c00

void __thiscall
`FVisualEntry::Resolve'::__l2::<lambda_1>::
operator()<TArray<FSlateDrawElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
          (void *this,
          TArray<FSlateDrawElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
          *param_1,uchar param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 local_res8;
  float local_res20;
  float fStackX_24;
  
  if (param_2 == *(uchar *)(*(longlong *)this + 0x2c)) {
    uVar1 = *(uint *)(*(longlong *)this + 0x28);
    lVar7 = (longlong)(int)uVar1;
    uVar6 = 0;
    if ((int)uVar1 < param_1->ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    lVar2 = (param_1->AllocatorInstance)._padding_;
    uVar3 = *(undefined8 *)(lVar2 + 0x20 + lVar7 * 0x48);
    local_res8 = CONCAT44(*(undefined4 *)(lVar2 + 0x14 + lVar7 * 0x48),
                          *(undefined4 *)(lVar2 + 0x10 + lVar7 * 0x48));
    **(undefined8 **)this = local_res8;
    local_res20 = (float)uVar3;
    fStackX_24 = (float)((ulonglong)uVar3 >> 0x20);
    local_res8 = CONCAT44(local_res20 * *(float *)(lVar2 + 4 + lVar7 * 0x48) +
                          *(float *)(lVar2 + 0x14 + lVar7 * 0x48),
                          local_res20 * *(float *)(lVar2 + lVar7 * 0x48) +
                          *(float *)(lVar2 + 0x10 + lVar7 * 0x48));
    *(undefined8 *)(*(longlong *)this + 8) = local_res8;
    local_res8 = CONCAT44(fStackX_24 * *(float *)(lVar2 + 0xc + lVar7 * 0x48) +
                          *(float *)(lVar2 + 0x14 + lVar7 * 0x48),
                          fStackX_24 * *(float *)(lVar2 + 8 + lVar7 * 0x48) +
                          *(float *)(lVar2 + 0x10 + lVar7 * 0x48));
    *(undefined8 *)(*(longlong *)this + 0x10) = local_res8;
    local_res8 = CONCAT44(local_res20 * *(float *)(lVar2 + 4 + lVar7 * 0x48) +
                          fStackX_24 * *(float *)(lVar2 + 0xc + lVar7 * 0x48) +
                          *(float *)(lVar2 + 0x14 + lVar7 * 0x48),
                          local_res20 * *(float *)(lVar2 + lVar7 * 0x48) +
                          fStackX_24 * *(float *)(lVar2 + 8 + lVar7 * 0x48) +
                          *(float *)(lVar2 + 0x10 + lVar7 * 0x48));
    *(undefined8 *)(*(longlong *)this + 0x18) = local_res8;
    *(undefined4 *)(*(longlong *)this + 0x20) = *(undefined4 *)(lVar2 + 0x28 + lVar7 * 0x48);
    *(undefined4 *)(*(longlong *)this + 0x24) = *(undefined4 *)(lVar2 + 0x38 + lVar7 * 0x48);
  }
  return;
}

// FVisualEntry @ 142e0b600

FVisualEntry * __thiscall
FVisualEntry::FVisualEntry
          (FVisualEntry *this,TSharedRef<SWidget_const_,1> *param_1,FSlateDrawElement *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  TVector2<float>_u_0_s_0 TVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TVector2<float>_u_0 TVar7;
  undefined8 local_res8;
  float local_res10;
  float fStackX_14;
  
  TVar7 = (param_2->RenderTransform).Trans.field0_0x0;
  (this->Widget).Object = (SWidget *)0x0;
  (this->Widget).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  TVar4 = (param_2->LocalSize).field0_0x0._s_0;
  (this->TopLeft).field0_0x0 = TVar7;
  local_res10 = TVar4.X;
  fStackX_14 = TVar4.Y;
  local_res8._4_4_ =
       local_res10 * (param_2->RenderTransform).M.M[0][1] +
       (param_2->RenderTransform).Trans.field0_0x0._s_0.Y;
  local_res8._0_4_ =
       local_res10 * (param_2->RenderTransform).M.M[0][0] +
       (param_2->RenderTransform).Trans.field0_0x0._s_0.X;
  (this->TopRight).field0_0x0 = local_res8;
  local_res8._4_4_ =
       fStackX_14 * (param_2->RenderTransform).M.M[1][1] +
       (param_2->RenderTransform).Trans.field0_0x0._s_0.Y;
  local_res8._0_4_ =
       fStackX_14 * (param_2->RenderTransform).M.M[1][0] +
       (param_2->RenderTransform).Trans.field0_0x0._s_0.X;
  (this->BottomLeft).field0_0x0 = local_res8;
  local_res8._4_4_ =
       local_res10 * (param_2->RenderTransform).M.M[0][1] +
       fStackX_14 * (param_2->RenderTransform).M.M[1][1] +
       (param_2->RenderTransform).Trans.field0_0x0._s_0.Y;
  local_res8._0_4_ =
       local_res10 * (param_2->RenderTransform).M.M[0][0] +
       fStackX_14 * (param_2->RenderTransform).M.M[1][0] +
       (param_2->RenderTransform).Trans.field0_0x0._s_0.X;
  (this->BottomRight).field0_0x0 = local_res8;
  iVar3 = param_2->LayerId;
  this->ClippingIndex = -1;
  this->LayerId = iVar3;
  this->bFromCache = true;
  (this->Widget).Object = param_1->Object;
  pTVar5 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar5 != (this->Widget).WeakReferenceCount.ReferenceController) {
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar6 = (this->Widget).WeakReferenceCount.ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar6->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
      }
    }
    (this->Widget).WeakReferenceCount.ReferenceController = pTVar5;
  }
  return this;
}

// FVisualEntry @ 142e0b770

FVisualEntry * __thiscall
FVisualEntry::FVisualEntry
          (FVisualEntry *this,TWeakPtr<SWidget_const_,1> *param_1,int param_2,EElementType param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->ElementIndex = param_2;
  this->ElementType = param_3;
  this->bFromCache = false;
  (this->Widget).Object = param_1->Object;
  pTVar1 = (param_1->WeakReferenceCount).ReferenceController;
  (this->Widget).WeakReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// IsPointInside @ 142ebd590

bool __thiscall FVisualEntry::IsPointInside(FVisualEntry *this,TVector2<float> *param_1)

{
  bool bVar1;
  TVector2<float> *pTVar2;
  
  pTVar2 = &this->TopRight;
  bVar1 = IsPointInTriangle(param_1,&this->TopLeft,pTVar2,&this->BottomLeft);
  if (!bVar1) {
    bVar1 = IsPointInTriangle(param_1,&this->BottomLeft,pTVar2,&this->BottomRight);
    return bVar1;
  }
  return true;
}

// Resolve @ 142efa350

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FVisualEntry::Resolve(FVisualEntry *this,FSlateWindowElementList *param_1)

{
  <lambda_1> local_res8 [4];
  TTuple<unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char>
  local_18;
  
  if (this->bFromCache == false) {
    local_18._0_4_ = 0x3020100;
    local_18._4_4_ = 0x7060504;
    local_18._8_4_ = 0xb0a0908;
    local_18._12_2_ = 0xd0c;
    local_res8[0].__this = this;
    UE::Core::Private::Tuple::
    TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>_>::
    Do<_FVisualEntry::Resolve_::__l2::<lambda_1>_&,TTuple<TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateShapedTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateSplineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateLineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateGradientElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateViewportElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomDrawerElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomVertsElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlatePostProcessElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateRoundedBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateDrawElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>_const_&,TTuple<unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char>_>
              (local_res8,&param_1->UncachedDrawElements,&local_18);
  }
  return;
}

