// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 1471862c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FMassEntityTest::FSharedFragmentValues_TypeEquivalency::InstantTest
          (FSharedFragmentValues_TypeEquivalency *this)

{
  bool bVar1;
  TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
  *pTVar2;
  FSharedStruct *pFVar3;
  TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
  *pTVar4;
  FConstSharedStruct *pFVar5;
  undefined1 auStack_2c8 [32];
  bool local_2a8;
  char local_2a7;
  undefined1 local_2a6;
  bool local_2a5;
  char local_2a4;
  undefined1 local_2a3;
  bool local_2a2;
  char local_2a1;
  undefined1 local_2a0;
  bool local_29f;
  char local_29e;
  undefined1 local_29d;
  bool local_29c;
  char local_29b;
  undefined1 local_29a;
  bool local_299;
  char local_298;
  undefined1 local_297;
  bool local_296;
  char local_295;
  undefined1 local_294;
  bool local_293;
  char local_292;
  undefined1 local_291;
  bool local_290;
  char local_28f;
  undefined1 local_28e;
  bool local_28d;
  char local_28c;
  undefined1 local_28b;
  undefined1 local_28a;
  uint local_288;
  uint local_284;
  uint local_280;
  uint local_27c;
  uint local_278;
  int local_274;
  uint local_270;
  uint local_26c;
  uint local_268;
  uint local_264;
  uint local_260;
  FAutomationTestBase *local_258;
  FAutomationTestBase *local_250;
  FAutomationTestBase *local_248;
  FAutomationTestBase *local_240;
  FAutomationTestBase *local_238;
  FAutomationTestBase *local_230;
  FAutomationTestBase *local_228;
  FAutomationTestBase *local_220;
  FAutomationTestBase *local_218;
  FAutomationTestBase *local_210;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FSharedStruct local_168;
  FConstSharedStruct local_158;
  TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
  local_148;
  TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
  local_128;
  TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
  local_108;
  TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
  local_e8;
  TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
  local_c8;
  TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
  local_a8;
  FMassArchetypeSharedFragmentValues local_88;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_2c8;
  local_274 = 0x20;
  FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_88);
  TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
  ::
  TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
            (&local_128);
  TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
  ::
  TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
            (&local_148);
  local_258 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_2a8 = FMassArchetypeSharedFragmentValues::HasExactSharedFragmentTypesMatch
                        (&local_88,&local_128);
  ::FString::FString(&local_208,"Empty shared values match type with empty bitset");
  bVar1 = FAutomationTestBase::TestTrue(local_258,&local_208,local_2a8);
  local_2a7 = !bVar1;
  local_288 = (uint)(byte)local_2a7;
  ::FString::~FString(&local_208);
  if (local_2a7 == '\0') {
    local_250 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_2a5 = FMassArchetypeSharedFragmentValues::HasExactConstSharedFragmentTypesMatch
                          (&local_88,&local_148);
    ::FString::FString(&local_1f8,"Empty const shared values match type with empty const bitset");
    bVar1 = FAutomationTestBase::TestTrue(local_250,&local_1f8,local_2a5);
    local_2a4 = !bVar1;
    local_284 = (uint)(byte)local_2a4;
    ::FString::~FString(&local_1f8);
    if (local_2a4 == '\0') {
      pTVar2 = TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
               ::GetTypeBitSet<FTestSharedFragment_Int>();
      TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
      ::
      TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                (&local_108,pTVar2);
      TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
      ::
      TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                (&local_e8,&local_108);
      TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
      ::Add<FTestSharedFragment_Float>(&local_e8);
      pFVar3 = FSharedStruct::Make<FTestSharedFragment_Int,int_const_&>(&local_168,&local_274);
      FMassArchetypeSharedFragmentValues::Add(&local_88,pFVar3);
      FSharedStruct::~FSharedStruct(&local_168);
      local_248 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_2a2 = FMassArchetypeSharedFragmentValues::HasExactSharedFragmentTypesMatch
                            (&local_88,&local_108);
      ::FString::FString(&local_1e8,"Single shared value type matches expected bitset");
      bVar1 = FAutomationTestBase::TestTrue(local_248,&local_1e8,local_2a2);
      local_2a1 = !bVar1;
      local_280 = (uint)(byte)local_2a1;
      ::FString::~FString(&local_1e8);
      if (local_2a1 == '\0') {
        local_240 = FAITestBase::GetTestRunner((FAITestBase *)this);
        local_29f = FMassArchetypeSharedFragmentValues::HasExactSharedFragmentTypesMatch
                              (&local_88,&local_e8);
        ::FString::FString(&local_1d8,"Single shared value type doesn\'t match two-type bitset");
        bVar1 = FAutomationTestBase::TestFalse(local_240,&local_1d8,local_29f);
        local_29e = !bVar1;
        local_27c = (uint)(byte)local_29e;
        ::FString::~FString(&local_1d8);
        if (local_29e == '\0') {
          local_238 = FAITestBase::GetTestRunner((FAITestBase *)this);
          local_29c = FMassArchetypeSharedFragmentValues::HasExactSharedFragmentTypesMatch
                                (&local_88,&local_128);
          ::FString::FString(&local_1c8,"Single shared value type doesn\'t match empty");
          bVar1 = FAutomationTestBase::TestFalse(local_238,&local_1c8,local_29c);
          local_29b = !bVar1;
          local_278 = (uint)(byte)local_29b;
          ::FString::~FString(&local_1c8);
          if (local_29b == '\0') {
            pTVar4 = TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                     ::GetTypeBitSet<FTestConstSharedFragment_Int>();
            TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
            ::
            TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                      (&local_c8,pTVar4);
            TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
            ::
            TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                      (&local_a8,&local_c8);
            TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
            ::Add<FTestConstSharedFragment_Float>(&local_a8);
            pFVar5 = FConstSharedStruct::Make<FTestConstSharedFragment_Int,int_const_&>
                               (&local_158,&local_274);
            FMassArchetypeSharedFragmentValues::Add(&local_88,pFVar5);
            FConstSharedStruct::~FConstSharedStruct(&local_158);
            local_230 = FAITestBase::GetTestRunner((FAITestBase *)this);
            local_299 = FMassArchetypeSharedFragmentValues::HasExactConstSharedFragmentTypesMatch
                                  (&local_88,&local_c8);
            ::FString::FString(&local_1b8,"Single const shared value type matches expected bitset");
            bVar1 = FAutomationTestBase::TestTrue(local_230,&local_1b8,local_299);
            local_298 = !bVar1;
            local_270 = (uint)(byte)local_298;
            ::FString::~FString(&local_1b8);
            if (local_298 == '\0') {
              local_228 = FAITestBase::GetTestRunner((FAITestBase *)this);
              local_296 = FMassArchetypeSharedFragmentValues::HasExactConstSharedFragmentTypesMatch
                                    (&local_88,&local_a8);
              ::FString::FString(&local_1a8,
                                 "Single const shared value type doesn\'t match two-type bitset");
              bVar1 = FAutomationTestBase::TestFalse(local_228,&local_1a8,local_296);
              local_295 = !bVar1;
              local_26c = (uint)(byte)local_295;
              ::FString::~FString(&local_1a8);
              if (local_295 == '\0') {
                local_220 = FAITestBase::GetTestRunner((FAITestBase *)this);
                local_293 = FMassArchetypeSharedFragmentValues::
                            HasExactConstSharedFragmentTypesMatch(&local_88,&local_148);
                ::FString::FString(&local_198,"Single const shared value type doesn\'t match empty")
                ;
                bVar1 = FAutomationTestBase::TestFalse(local_220,&local_198,local_293);
                local_292 = !bVar1;
                local_268 = (uint)(byte)local_292;
                ::FString::~FString(&local_198);
                if (local_292 == '\0') {
                  FMassArchetypeSharedFragmentValues::Remove(&local_88,&local_108);
                  local_218 = FAITestBase::GetTestRunner((FAITestBase *)this);
                  local_290 = FMassArchetypeSharedFragmentValues::HasExactSharedFragmentTypesMatch
                                        (&local_88,&local_128);
                  ::FString::FString(&local_188,"Emptied shared values match type with empty bitset"
                                    );
                  bVar1 = FAutomationTestBase::TestTrue(local_218,&local_188,local_290);
                  local_28f = !bVar1;
                  local_264 = (uint)(byte)local_28f;
                  ::FString::~FString(&local_188);
                  if (local_28f == '\0') {
                    FMassArchetypeSharedFragmentValues::Remove(&local_88,&local_c8);
                    local_210 = FAITestBase::GetTestRunner((FAITestBase *)this);
                    local_28d = FMassArchetypeSharedFragmentValues::
                                HasExactConstSharedFragmentTypesMatch(&local_88,&local_148);
                    ::FString::FString(&local_178,
                                       "Emptied const shared values match type with empty const bitset"
                                      );
                    bVar1 = FAutomationTestBase::TestTrue(local_210,&local_178,local_28d);
                    local_28c = !bVar1;
                    local_260 = (uint)(byte)local_28c;
                    ::FString::~FString(&local_178);
                    if (local_28c == '\0') {
                      local_28a = 1;
                      TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                      ::
                      ~TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                                (&local_a8);
                      TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                      ::
                      ~TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                                (&local_c8);
                      TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                      ::
                      ~TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                                (&local_e8);
                      TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                      ::
                      ~TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                                (&local_108);
                      TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                      ::
                      ~TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                                (&local_148);
                      TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                      ::
                      ~TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                                (&local_128);
                      FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues
                                (&local_88);
                      local_2a6 = local_28a;
                    }
                    else {
                      UE::AITestSuite::ConditionallyBreakOnTestFail();
                      local_28b = 0;
                      TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                      ::
                      ~TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                                (&local_a8);
                      TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                      ::
                      ~TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                                (&local_c8);
                      TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                      ::
                      ~TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                                (&local_e8);
                      TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                      ::
                      ~TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                                (&local_108);
                      TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                      ::
                      ~TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                                (&local_148);
                      TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                      ::
                      ~TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                                (&local_128);
                      FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues
                                (&local_88);
                      local_2a6 = local_28b;
                    }
                  }
                  else {
                    UE::AITestSuite::ConditionallyBreakOnTestFail();
                    local_28e = 0;
                    TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                    ::
                    ~TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                              (&local_a8);
                    TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                    ::
                    ~TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                              (&local_c8);
                    TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                    ::
                    ~TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                              (&local_e8);
                    TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                    ::
                    ~TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                              (&local_108);
                    TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                    ::
                    ~TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                              (&local_148);
                    TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                    ::
                    ~TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                              (&local_128);
                    FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues
                              (&local_88);
                    local_2a6 = local_28e;
                  }
                }
                else {
                  UE::AITestSuite::ConditionallyBreakOnTestFail();
                  local_291 = 0;
                  TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                  ::
                  ~TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                            (&local_a8);
                  TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                  ::
                  ~TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                            (&local_c8);
                  TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                  ::
                  ~TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                            (&local_e8);
                  TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                  ::
                  ~TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                            (&local_108);
                  TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                  ::
                  ~TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                            (&local_148);
                  TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                  ::
                  ~TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                            (&local_128);
                  FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_88)
                  ;
                  local_2a6 = local_291;
                }
              }
              else {
                UE::AITestSuite::ConditionallyBreakOnTestFail();
                local_294 = 0;
                TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                ::
                ~TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                          (&local_a8);
                TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                ::
                ~TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                          (&local_c8);
                TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                ::
                ~TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                          (&local_e8);
                TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                ::
                ~TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                          (&local_108);
                TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                ::
                ~TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                          (&local_148);
                TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                ::
                ~TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                          (&local_128);
                FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_88);
                local_2a6 = local_294;
              }
            }
            else {
              UE::AITestSuite::ConditionallyBreakOnTestFail();
              local_297 = 0;
              TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
              ::
              ~TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                        (&local_a8);
              TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
              ::
              ~TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                        (&local_c8);
              TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
              ::
              ~TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                        (&local_e8);
              TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
              ::
              ~TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                        (&local_108);
              TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
              ::
              ~TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                        (&local_148);
              TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
              ::
              ~TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                        (&local_128);
              FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_88);
              local_2a6 = local_297;
            }
          }
          else {
            UE::AITestSuite::ConditionallyBreakOnTestFail();
            local_29a = 0;
            TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
            ::
            ~TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                      (&local_e8);
            TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
            ::
            ~TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                      (&local_108);
            TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
            ::
            ~TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                      (&local_148);
            TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
            ::
            ~TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                      (&local_128);
            FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_88);
            local_2a6 = local_29a;
          }
        }
        else {
          UE::AITestSuite::ConditionallyBreakOnTestFail();
          local_29d = 0;
          TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
          ::
          ~TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                    (&local_e8);
          TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
          ::
          ~TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                    (&local_108);
          TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
          ::
          ~TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                    (&local_148);
          TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
          ::
          ~TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                    (&local_128);
          FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_88);
          local_2a6 = local_29d;
        }
      }
      else {
        UE::AITestSuite::ConditionallyBreakOnTestFail();
        local_2a0 = 0;
        TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
        ::
        ~TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                  (&local_e8);
        TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
        ::
        ~TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                  (&local_108);
        TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
        ::
        ~TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                  (&local_148);
        TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
        ::
        ~TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                  (&local_128);
        FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_88);
        local_2a6 = local_2a0;
      }
    }
    else {
      UE::AITestSuite::ConditionallyBreakOnTestFail();
      local_2a3 = 0;
      TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
      ::
      ~TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                (&local_148);
      TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
      ::
      ~TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                (&local_128);
      FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_88);
      local_2a6 = local_2a3;
    }
  }
  else {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    local_2a6 = 0;
    TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
    ::
    ~TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
              (&local_148);
    TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
    ::
    ~TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
              (&local_128);
    FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_88);
  }
  return (bool)local_2a6;
}

