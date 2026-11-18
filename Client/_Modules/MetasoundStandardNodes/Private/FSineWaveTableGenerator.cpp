// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 1

// operator() @ 14b157bb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __thiscall
Metasound::Generators::FSineWaveTableGenerator::operator()
          (FSineWaveTableGenerator *this,float param_1,float param_2,FGeneratorArgs *param_3)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_TArray<float,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::Generators::FSineWaveTableGenerator::GetWaveTable(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_TArray<float,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::Generators::FSineWaveTableGenerator::GetWaveTable(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_TArray<float,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::Generators::FSineWaveTableGenerator::GetWaveTable(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      _SineWaveTable = (undefined8 *)0x0;
      _DAT_1552f61a0 = 0;
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0x1000,
                 (ForAnyElementType *)
                 &`public:_static_class_TArray<float,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::Generators::FSineWaveTableGenerator::GetWaveTable(void)'
                  ::__l2::SineWaveTable,&DAT_1552f61a0,(int *)&DAT_1552f61a4);
      puVar6 = _SineWaveTable;
      uVar5 = 0;
      do {
        __vdecl_sinf4();
        uVar5 = uVar5 + 4;
        *puVar6 = extraout_XMM0_Qa;
        puVar6[1] = extraout_XMM0_Qb;
        puVar6 = puVar6 + 2;
      } while ((int)uVar5 < 0x1000);
      atexit(`Metasound::Generators::FSineWaveTableGenerator::GetWaveTable'::__l2::
             _dynamic_atexit_destructor_for__SineWaveTable__);
      _Init_thread_footer(&`public:_static_class_TArray<float,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::Generators::FSineWaveTableGenerator::GetWaveTable(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  fVar8 = __real_3f800000;
  iVar2 = DAT_1552f61a0;
  if (0.0 <= param_1) {
    if (__real_3f800000 < param_1) {
      param_1 = FGenericPlatformMath::Fmod(param_1 - __real_3f800000,__real_3f800000);
      if (param_1 == 0.0) {
        param_1 = fVar8;
      }
    }
  }
  else {
    fVar7 = FGenericPlatformMath::Fmod
                      ((float)((uint)param_1 ^ __xmm_80000000800000008000000080000000),
                       __real_3f800000);
    if (fVar7 == 0.0) {
      param_1 = 0.0;
    }
    else {
      param_1 = fVar8 - fVar7;
    }
  }
  uVar4 = (uint)((float)iVar2 * param_1 + __real_3f000000);
  uVar5 = 0;
  if ((int)uVar4 < iVar2) {
    uVar5 = uVar4;
  }
  uVar4 = 0;
  if ((int)uVar5 < DAT_1552f61a0) {
    uVar4 = ~uVar5 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      fVar8 = (float)(*pcVar1)();
      return fVar8;
    }
  }
  return *(float *)((longlong)_SineWaveTable + (longlong)(int)uVar5 * 4);
}

